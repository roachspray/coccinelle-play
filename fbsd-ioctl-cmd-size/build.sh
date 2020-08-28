#!/usr/local/bin/bash

#
# you cannot do sys/compat and sys/cddl at same time bc
# of the sys/types.h having different minor_t type definitions (int vs  u_int).
# perhaps that should be fixed.
#

if [ "$#" -ne "2" ]
then
	printf "usage: build.sh [syscompat|syscddl|none] [i386|amd64]\n"
	exit 1
fi

INC="-I/usr/src/sys/contrib/ck/include"
INC+=" -I/usr/src/sys/dev/cxgb"
INC+=" -I/usr/src/sys/dev/cxgb/common"
if [ "$1" == "syscompat" ]
then
INC+=" -I/usr/src/sys/compat/linuxkpi/common/include"
fi
if [ "$1" == "syscddl" ]
then
INC+=" -I/usr/src/sys/cddl/compat/opensolaris"
INC+=" -I/usr/src/sys/cddl/contrib/opensolaris/uts/common"
fi
DEF="BUILD_AMD64"
if [ "$2" == "i386" ]
then
	printf "Setting build for i386\n"
	DEF="BUILD_I386"
fi
INC+=" -I/usr/src/sys/contrib/vchiq"
INC+=" -I/usr"
INC+=" -I/usr/src/sys"
INC+=" -I."
INC+=" -I/usr/obj/usr/src/i386.i386/sys/LINT"
clang -D_KERNEL -D${DEF} ${INC} -w -H  ding.c
