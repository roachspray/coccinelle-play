
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

	// AUTOFSDONE 12.1src/sys/fs/autofs/autofs_ioctl.h:116
	 printf("AUTOFSDONE,struct autofs_daemon_done,%zu,12.1src/sys/fs/autofs/autofs_ioctl.h,116\n", sizeof(struct autofs_daemon_done));
	// AUTOFSDONE101 12.1src/sys/fs/autofs/autofs_ioctl.h:115
	 printf("AUTOFSDONE101,struct autofs_daemon_done_101,%zu,12.1src/sys/fs/autofs/autofs_ioctl.h,115\n", sizeof(struct autofs_daemon_done_101));
	// AUTOFSREQUEST 12.1src/sys/fs/autofs/autofs_ioctl.h:114
	 printf("AUTOFSREQUEST,struct autofs_daemon_request,%zu,12.1src/sys/fs/autofs/autofs_ioctl.h,114\n", sizeof(struct autofs_daemon_request));
	// NANDFS_IOCTL_CHANGE_CPMODE 12.1src/sys/fs/nandfs/nandfs_fs.h:555
	 printf("NANDFS_IOCTL_CHANGE_CPMODE,struct nandfs_cpmode,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,555\n", sizeof(struct nandfs_cpmode));
	// NANDFS_IOCTL_DELETE_CP 12.1src/sys/fs/nandfs/nandfs_fs.h:557
	 printf("NANDFS_IOCTL_DELETE_CP,uint64_t [ 2 ],%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,557\n", sizeof(uint64_t [ 2 ]));
	// NANDFS_IOCTL_DELETE_SNAP 12.1src/sys/fs/nandfs/nandfs_fs.h:564
	 printf("NANDFS_IOCTL_DELETE_SNAP,uint64_t,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,564\n", sizeof(uint64_t));
	// NANDFS_IOCTL_GET_BDESCS 12.1src/sys/fs/nandfs/nandfs_fs.h:561
	 printf("NANDFS_IOCTL_GET_BDESCS,struct nandfs_argv,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,561\n", sizeof(struct nandfs_argv));
	// NANDFS_IOCTL_GET_CPINFO 12.1src/sys/fs/nandfs/nandfs_fs.h:556
	 printf("NANDFS_IOCTL_GET_CPINFO,struct nandfs_argv,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,556\n", sizeof(struct nandfs_argv));
	// NANDFS_IOCTL_GET_CPSTAT 12.1src/sys/fs/nandfs/nandfs_fs.h:558
	 printf("NANDFS_IOCTL_GET_CPSTAT,struct nandfs_cpstat,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,558\n", sizeof(struct nandfs_cpstat));
	// NANDFS_IOCTL_GET_FSINFO 12.1src/sys/fs/nandfs/nandfs_fs.h:562
	 printf("NANDFS_IOCTL_GET_FSINFO,struct nandfs_fsinfo,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,562\n", sizeof(struct nandfs_fsinfo));
	// NANDFS_IOCTL_GET_SUINFO 12.1src/sys/fs/nandfs/nandfs_fs.h:559
	 printf("NANDFS_IOCTL_GET_SUINFO,struct nandfs_argv,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,559\n", sizeof(struct nandfs_argv));
	// NANDFS_IOCTL_GET_SUSTAT 12.1src/sys/fs/nandfs/nandfs_fs.h:554
	 printf("NANDFS_IOCTL_GET_SUSTAT,struct nandfs_seg_stat,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,554\n", sizeof(struct nandfs_seg_stat));
	// NANDFS_IOCTL_GET_VINFO 12.1src/sys/fs/nandfs/nandfs_fs.h:560
	 printf("NANDFS_IOCTL_GET_VINFO,struct nandfs_argv,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,560\n", sizeof(struct nandfs_argv));
	// NANDFS_IOCTL_MAKE_SNAP 12.1src/sys/fs/nandfs/nandfs_fs.h:563
	 printf("NANDFS_IOCTL_MAKE_SNAP,uint64_t,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,563\n", sizeof(uint64_t));
	// NANDFS_IOCTL_SYNC 12.1src/sys/fs/nandfs/nandfs_fs.h:565
	 printf("NANDFS_IOCTL_SYNC,uint64_t,%zu,12.1src/sys/fs/nandfs/nandfs_fs.h,565\n", sizeof(uint64_t));
	// CUSE_IOCTL_ALLOC_MEMORY 12.1src/sys/fs/cuse/cuse_ioctl.h:78
	 printf("CUSE_IOCTL_ALLOC_MEMORY,struct cuse_alloc_info,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,78\n", sizeof(struct cuse_alloc_info));
	// CUSE_IOCTL_ALLOC_UNIT 12.1src/sys/fs/cuse/cuse_ioctl.h:83
	 printf("CUSE_IOCTL_ALLOC_UNIT,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,83\n", sizeof(int));
	// CUSE_IOCTL_ALLOC_UNIT_BY_ID 12.1src/sys/fs/cuse/cuse_ioctl.h:86
	 printf("CUSE_IOCTL_ALLOC_UNIT_BY_ID,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,86\n", sizeof(int));
	// CUSE_IOCTL_CREATE_DEV 12.1src/sys/fs/cuse/cuse_ioctl.h:81
	 printf("CUSE_IOCTL_CREATE_DEV,struct cuse_create_dev,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,81\n", sizeof(struct cuse_create_dev));
	// CUSE_IOCTL_DESTROY_DEV 12.1src/sys/fs/cuse/cuse_ioctl.h:82
	 printf("CUSE_IOCTL_DESTROY_DEV,struct cuse_dev *,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,82\n", sizeof(struct cuse_dev *));
	// CUSE_IOCTL_FREE_MEMORY 12.1src/sys/fs/cuse/cuse_ioctl.h:79
	 printf("CUSE_IOCTL_FREE_MEMORY,struct cuse_alloc_info,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,79\n", sizeof(struct cuse_alloc_info));
	// CUSE_IOCTL_FREE_UNIT 12.1src/sys/fs/cuse/cuse_ioctl.h:84
	 printf("CUSE_IOCTL_FREE_UNIT,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,84\n", sizeof(int));
	// CUSE_IOCTL_FREE_UNIT_BY_ID 12.1src/sys/fs/cuse/cuse_ioctl.h:87
	 printf("CUSE_IOCTL_FREE_UNIT_BY_ID,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,87\n", sizeof(int));
	// CUSE_IOCTL_GET_COMMAND 12.1src/sys/fs/cuse/cuse_ioctl.h:73
	 printf("CUSE_IOCTL_GET_COMMAND,struct cuse_command,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,73\n", sizeof(struct cuse_command));
	// CUSE_IOCTL_GET_SIG 12.1src/sys/fs/cuse/cuse_ioctl.h:77
	 printf("CUSE_IOCTL_GET_SIG,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,77\n", sizeof(int));
	// CUSE_IOCTL_READ_DATA 12.1src/sys/fs/cuse/cuse_ioctl.h:75
	 printf("CUSE_IOCTL_READ_DATA,struct cuse_data_chunk,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,75\n", sizeof(struct cuse_data_chunk));
	// CUSE_IOCTL_SELWAKEUP 12.1src/sys/fs/cuse/cuse_ioctl.h:85
	 printf("CUSE_IOCTL_SELWAKEUP,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,85\n", sizeof(int));
	// CUSE_IOCTL_SET_PFH 12.1src/sys/fs/cuse/cuse_ioctl.h:80
	 printf("CUSE_IOCTL_SET_PFH,uintptr_t,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,80\n", sizeof(uintptr_t));
	// CUSE_IOCTL_SYNC_COMMAND 12.1src/sys/fs/cuse/cuse_ioctl.h:76
	 printf("CUSE_IOCTL_SYNC_COMMAND,int,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,76\n", sizeof(int));
	// CUSE_IOCTL_WRITE_DATA 12.1src/sys/fs/cuse/cuse_ioctl.h:74
	 printf("CUSE_IOCTL_WRITE_DATA,struct cuse_data_chunk,%zu,12.1src/sys/fs/cuse/cuse_ioctl.h,74\n", sizeof(struct cuse_data_chunk));
	// DEVFSIO_RADD 12.1src/sys/fs/devfs/devfs.h:109
	 printf("DEVFSIO_RADD,struct devfs_rule,%zu,12.1src/sys/fs/devfs/devfs.h,109\n", sizeof(struct devfs_rule));
	// DEVFSIO_RAPPLY 12.1src/sys/fs/devfs/devfs.h:111
	 printf("DEVFSIO_RAPPLY,struct devfs_rule,%zu,12.1src/sys/fs/devfs/devfs.h,111\n", sizeof(struct devfs_rule));
	// DEVFSIO_RAPPLYID 12.1src/sys/fs/devfs/devfs.h:112
	 printf("DEVFSIO_RAPPLYID,devfs_rid,%zu,12.1src/sys/fs/devfs/devfs.h,112\n", sizeof(devfs_rid));
	// DEVFSIO_RDEL 12.1src/sys/fs/devfs/devfs.h:110
	 printf("DEVFSIO_RDEL,devfs_rid,%zu,12.1src/sys/fs/devfs/devfs.h,110\n", sizeof(devfs_rid));
	// DEVFSIO_RGETNEXT 12.1src/sys/fs/devfs/devfs.h:113
	 printf("DEVFSIO_RGETNEXT,struct devfs_rule,%zu,12.1src/sys/fs/devfs/devfs.h,113\n", sizeof(struct devfs_rule));
	// DEVFSIO_SAPPLY 12.1src/sys/fs/devfs/devfs.h:116
	 printf("DEVFSIO_SAPPLY,devfs_rsnum,%zu,12.1src/sys/fs/devfs/devfs.h,116\n", sizeof(devfs_rsnum));
	// DEVFSIO_SGETNEXT 12.1src/sys/fs/devfs/devfs.h:117
	 printf("DEVFSIO_SGETNEXT,devfs_rsnum,%zu,12.1src/sys/fs/devfs/devfs.h,117\n", sizeof(devfs_rsnum));
	// DEVFSIO_SUSE 12.1src/sys/fs/devfs/devfs.h:115
	 printf("DEVFSIO_SUSE,devfs_rsnum,%zu,12.1src/sys/fs/devfs/devfs.h,115\n", sizeof(devfs_rsnum));

	return (0);
}
