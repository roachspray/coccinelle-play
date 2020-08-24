@r@                                                                      
type t;
expression a,b;
identifier m;
position p1;
@@                                                                              
(
#define m _IOWR(a, b, t@p1)
|
#define m _IOR(a, b, t@p1)
|
#define m _IOW(a, b, t@p1)
)
@script:python@
pos1 << r.p1;
macro_name << r.m;
arg_type << r.t;
@@
with open("include.notes", "a") as h:
	h.write("%s:%s:%s\n" % (pos1[0].file, macro_name, arg_type))
	h.close()
print('#include "%s"\n' % pos1[0].file)                                      
