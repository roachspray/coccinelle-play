#!/usr/local/bin/bash

#
# you cannot do sys/compat and sys/cddl at same time bc
# of the sys/types.h having different minor_t type definitions (int vs  u_int).
# perhaps that should be fixed.
#
# XXX: lots of these should have path prefixes specified on the command line
#      to make life easier
#
#

if [ "$#" -ne "2" ]
then
	printf "usage: build.sh [syscompat|syscddl|none] [i386|amd64]\n"
	exit 1
fi

SPATH="/usr/src"
LOPATH="/usr/obj/usr/src"
INC="-I${SPATH}/sys/contrib/ck/include"
INC+=" -I${SPATH}/sys/dev/cxgb"
INC+=" -I${SPATH}/sys/dev/cxgb/common"
if [ "$1" == "syscompat" ]
then
INC+=" -I${SPATH}/sys/compat/linuxkpi/common/include"
fi
if [ "$1" == "syscddl" ]
then
INC+=" -I${SPATH}/sys/cddl/compat/opensolaris"
INC+=" -I${SPATH}/sys/cddl/contrib/opensolaris/uts/common"
fi
if [ "$2" == "i386" ]
then
	printf "Setting build for i386\n"
	DEF="BUILD_I386"
	LPATH="${LOPATH}/i386.i386/sys/LINT"
	INC+=" -I${LPATH}"
	INC+=" -I${LPATH}/modules/usr/src/sys/modules/linuxkpi"
else
	printf "Setting build for amd64\n"
	DEF="BUILD_AMD64"
	LPATH="${LOPATH}/amd64.amd64/sys/LINT"
	INC+=" -I${LPATH}"
	INC+=" -I${LPATH}/modules/usr/src/sys/modules/linuxkpi"
fi
INC+=" -I${SPATH}/sys/contrib/vchiq"
#INC+=" -I/usr"
INC+=" -I${SPATH}/sys"
INC+=" -I."
clang -D_KERNEL -D${DEF} ${INC} -w -H  ding.c
