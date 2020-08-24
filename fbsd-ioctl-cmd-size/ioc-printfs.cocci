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
ioctl_type << r.t;
macro_name << r.m;
@@
import sys
with open("ding.c", "a") as h:
	e1 = "\t// %s %s:%s\n" % (macro_name, pos1[0].file, pos1[0].line)
	e2 = '\tprintf("%s: %%s = %%zu\\n", "%s", sizeof(%s));\n' % (macro_name,  
	  ioctl_type, ioctl_type)
	h.write(e1)
	h.write(e2)
