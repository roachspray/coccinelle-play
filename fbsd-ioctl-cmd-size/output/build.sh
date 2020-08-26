#!/usr/local/bin/bash

INC="-I/usr/src/sys/contrib/ck/include"
INC+=" -I/usr/src/sys/dev/cxgb"
INC+=" -I/usr/src/sys/dev/cxgb/common"
INC+=" -I/usr"
INC+=" -I/usr/src/sys"
INC+=" -I."
INC+=" -I/usr/obj/usr/src/i386.i386/sys/LINT"
clang -D_KERNEL ${INC} -w -H  ding.c
