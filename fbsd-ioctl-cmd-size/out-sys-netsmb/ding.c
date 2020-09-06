
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

	// SMBIOC_LOOKUP 12.1src/sys/netsmb/smb_dev.h:149
	 printf("SMBIOC_LOOKUP,struct smbioc_lookup,%zu,12.1src/sys/netsmb/smb_dev.h,149\n", sizeof(struct smbioc_lookup));
	// SMBIOC_OPENSESSION 12.1src/sys/netsmb/smb_dev.h:144
	 printf("SMBIOC_OPENSESSION,struct smbioc_ossn,%zu,12.1src/sys/netsmb/smb_dev.h,144\n", sizeof(struct smbioc_ossn));
	// SMBIOC_OPENSHARE 12.1src/sys/netsmb/smb_dev.h:145
	 printf("SMBIOC_OPENSHARE,struct smbioc_oshare,%zu,12.1src/sys/netsmb/smb_dev.h,145\n", sizeof(struct smbioc_oshare));
	// SMBIOC_READ 12.1src/sys/netsmb/smb_dev.h:150
	 printf("SMBIOC_READ,struct smbioc_rw,%zu,12.1src/sys/netsmb/smb_dev.h,150\n", sizeof(struct smbioc_rw));
	// SMBIOC_REQUEST 12.1src/sys/netsmb/smb_dev.h:146
	 printf("SMBIOC_REQUEST,struct smbioc_rq,%zu,12.1src/sys/netsmb/smb_dev.h,146\n", sizeof(struct smbioc_rq));
	// SMBIOC_SETFLAGS 12.1src/sys/netsmb/smb_dev.h:148
	 printf("SMBIOC_SETFLAGS,struct smbioc_flags,%zu,12.1src/sys/netsmb/smb_dev.h,148\n", sizeof(struct smbioc_flags));
	// SMBIOC_T2RQ 12.1src/sys/netsmb/smb_dev.h:147
	 printf("SMBIOC_T2RQ,struct smbioc_t2rq,%zu,12.1src/sys/netsmb/smb_dev.h,147\n", sizeof(struct smbioc_t2rq));
	// SMBIOC_WRITE 12.1src/sys/netsmb/smb_dev.h:151
	 printf("SMBIOC_WRITE,struct smbioc_rw,%zu,12.1src/sys/netsmb/smb_dev.h,151\n", sizeof(struct smbioc_rw));

	return (0);
}
