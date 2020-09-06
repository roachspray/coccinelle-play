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
arch=`uname -p`
iodir=`find . -type d -maxdepth 1 -name 'out-*'`
for X in ${iodir}
do
	printf "F&B: %s\n" ${X}
	pushd ${X}
	a2="none"
	if [ "${X}" == "./out-sys-compat" ]
	then
		a2="syscompat"
	fi
	if [ "${X}" == "./out-sys-cddl" ]
	then
		a2="syscddl"
	fi
	../build.sh ${a2} ${arch}
	if [ ! -f "a.out" ]
	then
		printf "F&B: Unable to build %s ERROR\n" ${X}
		popd
		continue
	fi
	N=`echo ${X} | sed -e 's/\.\/out-//g'`
	./a.out > ioctl-size-${N}-${arch}.csv
	popd
done
exit 0
