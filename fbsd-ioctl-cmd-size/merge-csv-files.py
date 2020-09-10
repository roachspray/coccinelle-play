
import csv
import glob
import os
import sys

# csv entries:
#    macro,type,size,file,line

#
# convert macro,type,size,file,line to
#   { macro : { type, file, line, { arch, size }}}
#
def csv2dict(csvpath, arch):
	rv = {}
	with open(csvpath, "rt") as h:
		r = csv.reader(h, delimiter=",")
		for m,t,s,f,l in list(r)[1:]:
			rv[m] = [ f, l, t, s ]
	return rv

# we expect:
#   ${path_prefix}/out-sys-name/ioctl-..-${arch}.csv
def getcsvpaths(path_prefix, arch):
	rv = {}
	g_od = os.path.join(path_prefix, "out-sys-*")
	for od in glob.glob(g_od):
		pname = os.path.basename(od)
		sysname = pname[len("out-"):]
		if os.path.isdir(od) == False:
			print("Skipping non-directory: {}".format(od))
			continue
		cf = "ioctl-size-{}-{}.csv".format(sysname, arch)
		cf = os.path.join(od, cf)
		if os.path.exists(cf) == False:
			print("Missing CSV: {}".format(cf))
			continue
		if os.path.isfile(cf) == False:
			print("Skipping non-file CSV: {}".format(cf))
			continue
		rv[sysname] = cf
	return rv

def main():
	if len(sys.argv) != 3 and len(sys.argv) != 4:
		print("usage: merge-csv-files.py [--ignore-same-size] <path> <outfile>")
		print("   path should be to the parent dir of out-sys-* dirs")
		sys.exit(1)

	ignore_same_size = False
	if len(sys.argv) == 3:
		path_prefix = sys.argv[1]
		out_file = sys.argv[2]
	if len(sys.argv) == 4:
		ignore_same_size = True
		path_prefix = sys.argv[2]
		out_file = sys.argv[3]

	p_i386 = getcsvpaths(path_prefix, "i386")
	r_combined = {}
	for p in p_i386.values():
		r = csv2dict(p, "i386")
		p_amd64 = p.replace("i386", "amd64")
		r_amd64 = csv2dict(p_amd64, "amd64")
		for k in list(r.keys()):
			if ignore_same_size == True and r[k][-1] == r_amd64[k][-1]:
				del r[k]
				continue
			r[k].append(r_amd64[k][-1])
		r_combined.update(r)
	with open(out_file, "wt") as h:
		h.write("macro,file,line,type,size_i386,size_amd64\n")
		for r in r_combined.keys():
			h.write("{},{},{},{},{},{}\n".format(r, r_combined[r][0],
			  r_combined[r][1], r_combined[r][2], r_combined[r][3],
			  r_combined[r][4]))
	sys.exit(0)

if __name__ == '__main__':
	main()
