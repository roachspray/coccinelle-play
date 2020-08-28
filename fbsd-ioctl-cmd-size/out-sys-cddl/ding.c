
#include <sys/types.h>
#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include "ding.h"

int
main(int argc, char **argv)
{
	printf("macro,type,size,file,line\n");

	// DTRACEHIOC_REMOVE 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1416
	 printf("DTRACEHIOC_REMOVE,int,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1416\n", sizeof(int));
	// DTRACEIOC_AGGDESC 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1326
	 printf("DTRACEIOC_AGGDESC,dtrace_aggdesc_t *,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1326\n", sizeof(dtrace_aggdesc_t *));
	// DTRACEIOC_AGGSNAP 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1312
	 printf("DTRACEIOC_AGGSNAP,dtrace_bufdesc_t *,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1312\n", sizeof(dtrace_bufdesc_t *));
	// DTRACEIOC_BUFSNAP 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1302
	 printf("DTRACEIOC_BUFSNAP,dtrace_bufdesc_t *,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1302\n", sizeof(dtrace_bufdesc_t *));
	// DTRACEIOC_CONF 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1318
	 printf("DTRACEIOC_CONF,dtrace_conf_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1318\n", sizeof(dtrace_conf_t));
	// DTRACEIOC_DOFGET 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1330
	 printf("DTRACEIOC_DOFGET,dof_hdr_t *,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1330\n", sizeof(dof_hdr_t *));
	// DTRACEIOC_ENABLE 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1310
	 printf("DTRACEIOC_ENABLE,dtrace_enable_io_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1310\n", sizeof(dtrace_enable_io_t));
	// DTRACEIOC_EPROBE 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1314
	 printf("DTRACEIOC_EPROBE,dtrace_eprobedesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1314\n", sizeof(dtrace_eprobedesc_t));
	// DTRACEIOC_FORMAT 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1328
	 printf("DTRACEIOC_FORMAT,dtrace_fmtdesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1328\n", sizeof(dtrace_fmtdesc_t));
	// DTRACEIOC_PROBEARG 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1316
	 printf("DTRACEIOC_PROBEARG,dtrace_argdesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1316\n", sizeof(dtrace_argdesc_t));
	// DTRACEIOC_PROBEMATCH 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1304
	 printf("DTRACEIOC_PROBEMATCH,dtrace_probedesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1304\n", sizeof(dtrace_probedesc_t));
	// DTRACEIOC_PROBES 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1300
	 printf("DTRACEIOC_PROBES,dtrace_probedesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1300\n", sizeof(dtrace_probedesc_t));
	// DTRACEIOC_PROVIDER 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1298
	 printf("DTRACEIOC_PROVIDER,dtrace_providerdesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1298\n", sizeof(dtrace_providerdesc_t));
	// DTRACEIOC_REPLICATE 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1332
	 printf("DTRACEIOC_REPLICATE,dtrace_repldesc_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1332\n", sizeof(dtrace_repldesc_t));
	// DTRACEIOC_STATUS 12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h:1320
	 printf("DTRACEIOC_STATUS,dtrace_status_t,%zu,12.1src/sys/cddl/contrib/opensolaris/uts/common/sys/dtrace.h,1320\n", sizeof(dtrace_status_t));

	return (0);
}
