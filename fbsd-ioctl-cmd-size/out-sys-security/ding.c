
#include <sys/types.h>
#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/rwlock.h>
#include "ding.h"

int
main(int argc, char **argv)
{
	printf("macro,type,size,file,line\n");

	// AUDITPIPE_DELETE_PRESELECT_AUID 12.1src/sys/security/audit/audit_ioctl.h:70
	 printf("AUDITPIPE_DELETE_PRESELECT_AUID,au_id_t,%zu,12.1src/sys/security/audit/audit_ioctl.h,70\n", sizeof(au_id_t));
	// AUDITPIPE_GET_PRESELECT_AUID 12.1src/sys/security/audit/audit_ioctl.h:67
	 printf("AUDITPIPE_GET_PRESELECT_AUID,struct auditpipe_ioctl_preselect,%zu,12.1src/sys/security/audit/audit_ioctl.h,67\n", sizeof(struct auditpipe_ioctl_preselect));
	// AUDITPIPE_GET_PRESELECT_FLAGS 12.1src/sys/security/audit/audit_ioctl.h:62
	 printf("AUDITPIPE_GET_PRESELECT_FLAGS,au_mask_t,%zu,12.1src/sys/security/audit/audit_ioctl.h,62\n", sizeof(au_mask_t));
	// AUDITPIPE_GET_PRESELECT_MODE 12.1src/sys/security/audit/audit_ioctl.h:72
	 printf("AUDITPIPE_GET_PRESELECT_MODE,int,%zu,12.1src/sys/security/audit/audit_ioctl.h,72\n", sizeof(int));
	// AUDITPIPE_GET_PRESELECT_NAFLAGS 12.1src/sys/security/audit/audit_ioctl.h:64
	 printf("AUDITPIPE_GET_PRESELECT_NAFLAGS,au_mask_t,%zu,12.1src/sys/security/audit/audit_ioctl.h,64\n", sizeof(au_mask_t));
	// AUDITPIPE_SET_PRESELECT_AUID 12.1src/sys/security/audit/audit_ioctl.h:69
	 printf("AUDITPIPE_SET_PRESELECT_AUID,struct auditpipe_ioctl_preselect,%zu,12.1src/sys/security/audit/audit_ioctl.h,69\n", sizeof(struct auditpipe_ioctl_preselect));
	// AUDITPIPE_SET_PRESELECT_FLAGS 12.1src/sys/security/audit/audit_ioctl.h:63
	 printf("AUDITPIPE_SET_PRESELECT_FLAGS,au_mask_t,%zu,12.1src/sys/security/audit/audit_ioctl.h,63\n", sizeof(au_mask_t));
	// AUDITPIPE_SET_PRESELECT_MODE 12.1src/sys/security/audit/audit_ioctl.h:73
	 printf("AUDITPIPE_SET_PRESELECT_MODE,int,%zu,12.1src/sys/security/audit/audit_ioctl.h,73\n", sizeof(int));
	// AUDITPIPE_SET_PRESELECT_NAFLAGS 12.1src/sys/security/audit/audit_ioctl.h:65
	 printf("AUDITPIPE_SET_PRESELECT_NAFLAGS,au_mask_t,%zu,12.1src/sys/security/audit/audit_ioctl.h,65\n", sizeof(au_mask_t));

	return (0);
}
