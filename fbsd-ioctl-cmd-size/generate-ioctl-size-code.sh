#!/bin/bash

#
# Goal of script:
#
#  . Find all cases of defined ioctl commands
#  . Transform these findings into:
# 
#	
#      printf("macro=%s,type=%s,size=%zu\n", mname, ttype, sizeof(ttype));
# 
#

if [ "$#" -ne "1" ]
then
	printf "usage: findscript.sh <fbsdsrcroot>\n"
#	printf "  fbsdsrcroot - path to headers to look at for ioctl commands\n"
	exit 1
fi
source_path=${1}

# right now, the ioc-printfs.cocci does not allow for args to the python part
# of the patch file :-/ i don't see it in the --help output, but it's probably
# somewhere. len(sys.argv) gives just 1 -> `spatch` as program name.
#out_file=${2}
out_file=ding
out_c=${out_file}.c
out_h=${out_file}.h

printf "Searching: %s ... will generate %s and %s\n" ${source_path} ${out_h}  \
  ${out_c}



generate_header() {
	ioc_inc=ioc-includes.cocci
	rm -f ${out_h}
	rm -f include.notes
	for X in `find ${source_path} -type f -name '*.h'`
	do
#		echo ${X}
		spatch --very-quiet --sp-file ${ioc_inc} ${X} 
	done
	printf "\n#endif //!_DING_H" >> ${out_h}
}

generate_csource() {
	ioc_printfs=ioc-printfs.cocci
	rm -f ${out_c}
	
	for X in `find ${source_path} -type f -name '*.h'`
	do
		echo ${X}
		spatch --very-quiet --sp-file ${ioc_printfs} ${X}
	done
	printf "\n\treturn (0);\n}\n" >> ${out_c}
}

printf "XXX Generating '%s'\n" ${out_h}
generate_header
printf "XXX Generating '%s'\n" ${out_c}
generate_csource
