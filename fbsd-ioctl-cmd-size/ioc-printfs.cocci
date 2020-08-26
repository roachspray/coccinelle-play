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
import os
import sys
print(pos1)
out_c = os.path.join(os.getcwd(), "ding.c")

h = None
if os.path.exists(out_c) == False:
	h = open(out_c, "wt")
	start = """
#include <sys/types.h>
#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include "ding.h"

int
main(int argc, char **argv)
{
	printf("macro,type,size,file,line\\n");

"""
	h.write(start)

if h is None:
	h = open(out_c, "at")

# disallow list for things that i couldn't dealw ith at the time
disallow = [
	"struct pfilioc_link",
	"struct pfilioc_list"
]

comment_out = ""
if ioctl_type in disallow:
	print("Commenting out disallowed type: %s for %s %s:%s" % (ioctl_type, macro_name, pos1[0].file, pos1[0].line))
	comment_out = "//"

e1 = "\t// %s %s:%s\n" % (macro_name, pos1[0].file, pos1[0].line)

e2 = '\t%s printf("%s,%s,%%zu,%s,%s\\n", sizeof(%s));\n' %  \
  (comment_out, macro_name, ioctl_type, pos1[0].file, pos1[0].line, ioctl_type )
 
h.write(e1)
h.write(e2)
