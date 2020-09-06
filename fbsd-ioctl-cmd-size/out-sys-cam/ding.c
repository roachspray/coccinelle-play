
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

	// CTL_DELAY_IO 12.1src/sys/cam/ctl/ctl_ioctl.h:761
	 printf("CTL_DELAY_IO,struct ctl_io_delay_info,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,761\n", sizeof(struct ctl_io_delay_info));
	// CTL_DISABLE_PORT 12.1src/sys/cam/ctl/ctl_ioctl.h:760
	 printf("CTL_DISABLE_PORT,struct ctl_port_entry,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,760\n", sizeof(struct ctl_port_entry));
	// CTL_ENABLE_PORT 12.1src/sys/cam/ctl/ctl_ioctl.h:759
	 printf("CTL_ENABLE_PORT,struct ctl_port_entry,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,759\n", sizeof(struct ctl_port_entry));
	// CTL_ERROR_INJECT 12.1src/sys/cam/ctl/ctl_ioctl.h:762
	 printf("CTL_ERROR_INJECT,struct ctl_error_desc,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,762\n", sizeof(struct ctl_error_desc));
	// CTL_ERROR_INJECT_DELETE 12.1src/sys/cam/ctl/ctl_ioctl.h:767
	 printf("CTL_ERROR_INJECT_DELETE,struct ctl_error_desc,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,767\n", sizeof(struct ctl_error_desc));
	// CTL_GET_LUN_STATS 12.1src/sys/cam/ctl/ctl_ioctl.h:773
	 printf("CTL_GET_LUN_STATS,struct ctl_get_io_stats,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,773\n", sizeof(struct ctl_get_io_stats));
	// CTL_GET_OOA 12.1src/sys/cam/ctl/ctl_ioctl.h:763
	 printf("CTL_GET_OOA,struct ctl_ooa,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,763\n", sizeof(struct ctl_ooa));
	// CTL_GET_PORT_STATS 12.1src/sys/cam/ctl/ctl_ioctl.h:774
	 printf("CTL_GET_PORT_STATS,struct ctl_get_io_stats,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,774\n", sizeof(struct ctl_get_io_stats));
	// CTL_IO 12.1src/sys/cam/ctl/ctl_ioctl.h:758
	 printf("CTL_IO,union ctl_io,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,758\n", sizeof(union ctl_io));
	// CTL_ISCSI 12.1src/sys/cam/ctl/ctl_ioctl.h:769
	 printf("CTL_ISCSI,struct ctl_iscsi,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,769\n", sizeof(struct ctl_iscsi));
	// CTL_LUN_LIST 12.1src/sys/cam/ctl/ctl_ioctl.h:766
	 printf("CTL_LUN_LIST,struct ctl_lun_list,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,766\n", sizeof(struct ctl_lun_list));
	// CTL_LUN_MAP 12.1src/sys/cam/ctl/ctl_ioctl.h:772
	 printf("CTL_LUN_MAP,struct ctl_lun_map,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,772\n", sizeof(struct ctl_lun_map));
	// CTL_LUN_REQ 12.1src/sys/cam/ctl/ctl_ioctl.h:765
	 printf("CTL_LUN_REQ,struct ctl_lun_req,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,765\n", sizeof(struct ctl_lun_req));
	// CTL_PORT_LIST 12.1src/sys/cam/ctl/ctl_ioctl.h:771
	 printf("CTL_PORT_LIST,struct ctl_lun_list,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,771\n", sizeof(struct ctl_lun_list));
	// CTL_PORT_REQ 12.1src/sys/cam/ctl/ctl_ioctl.h:770
	 printf("CTL_PORT_REQ,struct ctl_req,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,770\n", sizeof(struct ctl_req));
	// CTL_SET_PORT_WWNS 12.1src/sys/cam/ctl/ctl_ioctl.h:768
	 printf("CTL_SET_PORT_WWNS,struct ctl_port_entry,%zu,12.1src/sys/cam/ctl/ctl_ioctl.h,768\n", sizeof(struct ctl_port_entry));
	// TARGIOCDEBUG 12.1src/sys/cam/scsi/scsi_targetio.h:75
	 printf("TARGIOCDEBUG,int,%zu,12.1src/sys/cam/scsi/scsi_targetio.h,75\n", sizeof(int));
	// TARGIOCENABLE 12.1src/sys/cam/scsi/scsi_targetio.h:69
	 printf("TARGIOCENABLE,struct ioc_enable_lun,%zu,12.1src/sys/cam/scsi/scsi_targetio.h,69\n", sizeof(struct ioc_enable_lun));
	// CAMGETPASSTHRU 12.1src/sys/cam/scsi/scsi_pass.h:42
	 printf("CAMGETPASSTHRU,union ccb,%zu,12.1src/sys/cam/scsi/scsi_pass.h,42\n", sizeof(union ccb));
	// CAMIOCOMMAND 12.1src/sys/cam/scsi/scsi_pass.h:41
	 printf("CAMIOCOMMAND,union ccb,%zu,12.1src/sys/cam/scsi/scsi_pass.h,41\n", sizeof(union ccb));
	// SG_EMULATED_HOST 12.1src/sys/cam/scsi/scsi_sg.h:13
	 printf("SG_EMULATED_HOST,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,13\n", sizeof(int));
	// SG_GET_ACCESS_COUNT 12.1src/sys/cam/scsi/scsi_sg.h:35
	 printf("SG_GET_ACCESS_COUNT,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,35\n", sizeof(int));
	// SG_GET_COMMAND_Q 12.1src/sys/cam/scsi/scsi_sg.h:16
	 printf("SG_GET_COMMAND_Q,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,16\n", sizeof(int));
	// SG_GET_KEEP_ORPHAN 12.1src/sys/cam/scsi/scsi_sg.h:34
	 printf("SG_GET_KEEP_ORPHAN,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,34\n", sizeof(int));
	// SG_GET_LOW_DMA 12.1src/sys/cam/scsi/scsi_sg.h:22
	 printf("SG_GET_LOW_DMA,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,22\n", sizeof(int));
	// SG_GET_NUM_WAITING 12.1src/sys/cam/scsi/scsi_sg.h:25
	 printf("SG_GET_NUM_WAITING,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,25\n", sizeof(int));
	// SG_GET_PACK_ID 12.1src/sys/cam/scsi/scsi_sg.h:24
	 printf("SG_GET_PACK_ID,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,24\n", sizeof(int));
	// SG_GET_RESERVED_SIZE 12.1src/sys/cam/scsi/scsi_sg.h:18
	 printf("SG_GET_RESERVED_SIZE,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,18\n", sizeof(int));
	// SG_GET_SCSI_ID 12.1src/sys/cam/scsi/scsi_sg.h:20
	 printf("SG_GET_SCSI_ID,struct sg_scsi_id,%zu,12.1src/sys/cam/scsi/scsi_sg.h,20\n", sizeof(struct sg_scsi_id));
	// SG_GET_SG_TABLESIZE 12.1src/sys/cam/scsi/scsi_sg.h:27
	 printf("SG_GET_SG_TABLESIZE,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,27\n", sizeof(int));
	// SG_GET_VERSION_NUM 12.1src/sys/cam/scsi/scsi_sg.h:28
	 printf("SG_GET_VERSION_NUM,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,28\n", sizeof(int));
	// SG_IO 12.1src/sys/cam/scsi/scsi_sg.h:31
	 printf("SG_IO,struct sg_io_hdr,%zu,12.1src/sys/cam/scsi/scsi_sg.h,31\n", sizeof(struct sg_io_hdr));
	// SG_NEXT_CMD_LEN 12.1src/sys/cam/scsi/scsi_sg.h:29
	 printf("SG_NEXT_CMD_LEN,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,29\n", sizeof(int));
	// SG_SCSI_RESET 12.1src/sys/cam/scsi/scsi_sg.h:30
	 printf("SG_SCSI_RESET,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,30\n", sizeof(int));
	// SG_SET_COMMAND_Q 12.1src/sys/cam/scsi/scsi_sg.h:17
	 printf("SG_SET_COMMAND_Q,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,17\n", sizeof(int));
	// SG_SET_DEBUG 12.1src/sys/cam/scsi/scsi_sg.h:26
	 printf("SG_SET_DEBUG,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,26\n", sizeof(int));
	// SG_SET_FORCE_LOW_DMA 12.1src/sys/cam/scsi/scsi_sg.h:21
	 printf("SG_SET_FORCE_LOW_DMA,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,21\n", sizeof(int));
	// SG_SET_FORCE_PACK_ID 12.1src/sys/cam/scsi/scsi_sg.h:23
	 printf("SG_SET_FORCE_PACK_ID,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,23\n", sizeof(int));
	// SG_SET_KEEP_ORPHAN 12.1src/sys/cam/scsi/scsi_sg.h:33
	 printf("SG_SET_KEEP_ORPHAN,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,33\n", sizeof(int));
	// SG_SET_RESERVED_SIZE 12.1src/sys/cam/scsi/scsi_sg.h:19
	 printf("SG_SET_RESERVED_SIZE,int,%zu,12.1src/sys/cam/scsi/scsi_sg.h,19\n", sizeof(int));

	return (0);
}
