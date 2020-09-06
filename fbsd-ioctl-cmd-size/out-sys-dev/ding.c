
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

	// IOCHVVSSREAD 12.1src/sys/dev/hyperv/utilities/hv_snapshot.h:54
	 printf("IOCHVVSSREAD,struct hv_vss_opt_msg,%zu,12.1src/sys/dev/hyperv/utilities/hv_snapshot.h,54\n", sizeof(struct hv_vss_opt_msg));
	// IOCHVVSSWRITE 12.1src/sys/dev/hyperv/utilities/hv_snapshot.h:55
	 printf("IOCHVVSSWRITE,struct hv_vss_opt_msg,%zu,12.1src/sys/dev/hyperv/utilities/hv_snapshot.h,55\n", sizeof(struct hv_vss_opt_msg));
	// IDAIO_COMMAND 12.1src/sys/dev/ida/idaio.h:23
	 printf("IDAIO_COMMAND,struct ida_user_command,%zu,12.1src/sys/dev/ida/idaio.h,23\n", sizeof(struct ida_user_command));
	// MPSIO_MPS_COMMAND 12.1src/sys/dev/mps/mps_ioctl.h:365
	 printf("MPSIO_MPS_COMMAND,struct mps_usr_command,%zu,12.1src/sys/dev/mps/mps_ioctl.h,365\n", sizeof(struct mps_usr_command));
	// MPSIO_RAID_ACTION 12.1src/sys/dev/mps/mps_ioctl.h:364
	 printf("MPSIO_RAID_ACTION,struct mps_raid_action,%zu,12.1src/sys/dev/mps/mps_ioctl.h,364\n", sizeof(struct mps_raid_action));
	// MPSIO_READ_CFG_HEADER 12.1src/sys/dev/mps/mps_ioctl.h:359
	 printf("MPSIO_READ_CFG_HEADER,struct mps_cfg_page_req,%zu,12.1src/sys/dev/mps/mps_ioctl.h,359\n", sizeof(struct mps_cfg_page_req));
	// MPSIO_READ_CFG_PAGE 12.1src/sys/dev/mps/mps_ioctl.h:360
	 printf("MPSIO_READ_CFG_PAGE,struct mps_cfg_page_req,%zu,12.1src/sys/dev/mps/mps_ioctl.h,360\n", sizeof(struct mps_cfg_page_req));
	// MPSIO_READ_EXT_CFG_HEADER 12.1src/sys/dev/mps/mps_ioctl.h:361
	 printf("MPSIO_READ_EXT_CFG_HEADER,struct mps_ext_cfg_page_req,%zu,12.1src/sys/dev/mps/mps_ioctl.h,361\n", sizeof(struct mps_ext_cfg_page_req));
	// MPSIO_READ_EXT_CFG_PAGE 12.1src/sys/dev/mps/mps_ioctl.h:362
	 printf("MPSIO_READ_EXT_CFG_PAGE,struct mps_ext_cfg_page_req,%zu,12.1src/sys/dev/mps/mps_ioctl.h,362\n", sizeof(struct mps_ext_cfg_page_req));
	// MPSIO_WRITE_CFG_PAGE 12.1src/sys/dev/mps/mps_ioctl.h:363
	 printf("MPSIO_WRITE_CFG_PAGE,struct mps_cfg_page_req,%zu,12.1src/sys/dev/mps/mps_ioctl.h,363\n", sizeof(struct mps_cfg_page_req));
	// MPTIOCTL_BTDH_MAPPING 12.1src/sys/dev/mps/mps_ioctl.h:388
	 printf("MPTIOCTL_BTDH_MAPPING,struct mps_btdh_mapping,%zu,12.1src/sys/dev/mps/mps_ioctl.h,388\n", sizeof(struct mps_btdh_mapping));
	// MPTIOCTL_DIAG_ACTION 12.1src/sys/dev/mps/mps_ioctl.h:384
	 printf("MPTIOCTL_DIAG_ACTION,struct mps_diag_action,%zu,12.1src/sys/dev/mps/mps_ioctl.h,384\n", sizeof(struct mps_diag_action));
	// MPTIOCTL_EVENT_ENABLE 12.1src/sys/dev/mps/mps_ioctl.h:378
	 printf("MPTIOCTL_EVENT_ENABLE,struct mps_event_enable,%zu,12.1src/sys/dev/mps/mps_ioctl.h,378\n", sizeof(struct mps_event_enable));
	// MPTIOCTL_EVENT_QUERY 12.1src/sys/dev/mps/mps_ioctl.h:376
	 printf("MPTIOCTL_EVENT_QUERY,struct mps_event_query,%zu,12.1src/sys/dev/mps/mps_ioctl.h,376\n", sizeof(struct mps_event_query));
	// MPTIOCTL_EVENT_REPORT 12.1src/sys/dev/mps/mps_ioctl.h:380
	 printf("MPTIOCTL_EVENT_REPORT,struct mps_event_report,%zu,12.1src/sys/dev/mps/mps_ioctl.h,380\n", sizeof(struct mps_event_report));
	// MPTIOCTL_GET_ADAPTER_DATA 12.1src/sys/dev/mps/mps_ioctl.h:369
	 printf("MPTIOCTL_GET_ADAPTER_DATA,struct mps_adapter_data,%zu,12.1src/sys/dev/mps/mps_ioctl.h,369\n", sizeof(struct mps_adapter_data));
	// MPTIOCTL_GET_PCI_INFO 12.1src/sys/dev/mps/mps_ioctl.h:382
	 printf("MPTIOCTL_GET_PCI_INFO,struct mps_pci_info,%zu,12.1src/sys/dev/mps/mps_ioctl.h,382\n", sizeof(struct mps_pci_info));
	// MPTIOCTL_PASS_THRU 12.1src/sys/dev/mps/mps_ioctl.h:374
	 printf("MPTIOCTL_PASS_THRU,struct mps_pass_thru,%zu,12.1src/sys/dev/mps/mps_ioctl.h,374\n", sizeof(struct mps_pass_thru));
	// MPTIOCTL_REG_ACCESS 12.1src/sys/dev/mps/mps_ioctl.h:386
	 printf("MPTIOCTL_REG_ACCESS,struct mps_reg_access,%zu,12.1src/sys/dev/mps/mps_ioctl.h,386\n", sizeof(struct mps_reg_access));
	// MPTIOCTL_UPDATE_FLASH 12.1src/sys/dev/mps/mps_ioctl.h:371
	 printf("MPTIOCTL_UPDATE_FLASH,struct mps_update_flash,%zu,12.1src/sys/dev/mps/mps_ioctl.h,371\n", sizeof(struct mps_update_flash));
	// SIOCGMVSTATS 12.1src/sys/dev/malo/if_maloioctl.h:73
	 printf("SIOCGMVSTATS,struct ifreq,%zu,12.1src/sys/dev/malo/if_maloioctl.h,73\n", sizeof(struct ifreq));
	// MMC_IOC_CMD 12.1src/sys/dev/mmc/mmc_ioctl.h:56
	 printf("MMC_IOC_CMD,struct mmc_ioc_cmd,%zu,12.1src/sys/dev/mmc/mmc_ioctl.h,56\n", sizeof(struct mmc_ioc_cmd));
	// MMC_IOC_MULTI_CMD 12.1src/sys/dev/mmc/mmc_ioctl.h:57
	 printf("MMC_IOC_MULTI_CMD,struct mmc_ioc_multi_cmd,%zu,12.1src/sys/dev/mmc/mmc_ioctl.h,57\n", sizeof(struct mmc_ioc_multi_cmd));
	// VERIEXEC_DEBUG_ON 12.1src/sys/dev/veriexec/veriexec_ioctl.h:53
	 printf("VERIEXEC_DEBUG_ON,int,%zu,12.1src/sys/dev/veriexec/veriexec_ioctl.h,53\n", sizeof(int));
	// VERIEXEC_GETSTATE 12.1src/sys/dev/veriexec/veriexec_ioctl.h:55
	 printf("VERIEXEC_GETSTATE,int,%zu,12.1src/sys/dev/veriexec/veriexec_ioctl.h,55\n", sizeof(int));
	// VERIEXEC_LOAD 12.1src/sys/dev/veriexec/veriexec_ioctl.h:49
	 printf("VERIEXEC_LOAD,struct verified_exec_params,%zu,12.1src/sys/dev/veriexec/veriexec_ioctl.h,49\n", sizeof(struct verified_exec_params));
	// VERIEXEC_SIGNED_LOAD 12.1src/sys/dev/veriexec/veriexec_ioctl.h:56
	 printf("VERIEXEC_SIGNED_LOAD,struct verified_exec_params,%zu,12.1src/sys/dev/veriexec/veriexec_ioctl.h,56\n", sizeof(struct verified_exec_params));
	// CHELSIO_DEL_FILTER 12.1src/sys/dev/cxgb/cxgb_ioctl.h:270
	 printf("CHELSIO_DEL_FILTER,struct ch_filter,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,270\n", sizeof(struct ch_filter));
	// CHELSIO_GETMTUTAB 12.1src/sys/dev/cxgb/cxgb_ioctl.h:247
	 printf("CHELSIO_GETMTUTAB,struct ch_mtus,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,247\n", sizeof(struct ch_mtus));
	// CHELSIO_GETREG 12.1src/sys/dev/cxgb/cxgb_ioctl.h:246
	 printf("CHELSIO_GETREG,struct ch_reg,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,246\n", sizeof(struct ch_reg));
	// CHELSIO_GET_EEPROM 12.1src/sys/dev/cxgb/cxgb_ioctl.h:266
	 printf("CHELSIO_GET_EEPROM,struct ch_eeprom,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,266\n", sizeof(struct ch_eeprom));
	// CHELSIO_GET_FILTER 12.1src/sys/dev/cxgb/cxgb_ioctl.h:271
	 printf("CHELSIO_GET_FILTER,struct ch_filter,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,271\n", sizeof(struct ch_filter));
	// CHELSIO_GET_MEM 12.1src/sys/dev/cxgb/cxgb_ioctl.h:252
	 printf("CHELSIO_GET_MEM,struct ch_mem_range,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,252\n", sizeof(struct ch_mem_range));
	// CHELSIO_GET_MIIREG 12.1src/sys/dev/cxgb/cxgb_ioctl.h:264
	 printf("CHELSIO_GET_MIIREG,struct ch_mii_data,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,264\n", sizeof(struct ch_mii_data));
	// CHELSIO_GET_PM 12.1src/sys/dev/cxgb/cxgb_ioctl.h:250
	 printf("CHELSIO_GET_PM,struct ch_pm,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,250\n", sizeof(struct ch_pm));
	// CHELSIO_GET_QSET_NUM 12.1src/sys/dev/cxgb/cxgb_ioctl.h:258
	 printf("CHELSIO_GET_QSET_NUM,struct ch_reg,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,258\n", sizeof(struct ch_reg));
	// CHELSIO_GET_QSET_PARAMS 12.1src/sys/dev/cxgb/cxgb_ioctl.h:257
	 printf("CHELSIO_GET_QSET_PARAMS,struct ch_qset_params,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,257\n", sizeof(struct ch_qset_params));
	// CHELSIO_GET_SGE_CONTEXT 12.1src/sys/dev/cxgb/cxgb_ioctl.h:253
	 printf("CHELSIO_GET_SGE_CONTEXT,struct ch_cntxt,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,253\n", sizeof(struct ch_cntxt));
	// CHELSIO_GET_SGE_DESC 12.1src/sys/dev/cxgb/cxgb_ioctl.h:254
	 printf("CHELSIO_GET_SGE_DESC,struct ch_desc,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,254\n", sizeof(struct ch_desc));
	// CHELSIO_GET_UP_IOQS 12.1src/sys/dev/cxgb/cxgb_ioctl.h:268
	 printf("CHELSIO_GET_UP_IOQS,struct ch_up_ioqs,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,268\n", sizeof(struct ch_up_ioqs));
	// CHELSIO_GET_UP_LA 12.1src/sys/dev/cxgb/cxgb_ioctl.h:267
	 printf("CHELSIO_GET_UP_LA,struct ch_up_la,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,267\n", sizeof(struct ch_up_la));
	// CHELSIO_IFCONF_GETREGS 12.1src/sys/dev/cxgb/cxgb_ioctl.h:263
	 printf("CHELSIO_IFCONF_GETREGS,struct ch_ifconf_regs,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,263\n", sizeof(struct ch_ifconf_regs));
	// CHELSIO_LOAD_BOOT 12.1src/sys/dev/cxgb/cxgb_ioctl.h:261
	 printf("CHELSIO_LOAD_BOOT,struct ch_mem_range,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,261\n", sizeof(struct ch_mem_range));
	// CHELSIO_LOAD_FW 12.1src/sys/dev/cxgb/cxgb_ioctl.h:255
	 printf("CHELSIO_LOAD_FW,struct ch_mem_range,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,255\n", sizeof(struct ch_mem_range));
	// CHELSIO_READ_TCAM_WORD 12.1src/sys/dev/cxgb/cxgb_ioctl.h:251
	 printf("CHELSIO_READ_TCAM_WORD,struct ch_tcam_word,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,251\n", sizeof(struct ch_tcam_word));
	// CHELSIO_SETMTUTAB 12.1src/sys/dev/cxgb/cxgb_ioctl.h:248
	 printf("CHELSIO_SETMTUTAB,struct ch_mtus,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,248\n", sizeof(struct ch_mtus));
	// CHELSIO_SETREG 12.1src/sys/dev/cxgb/cxgb_ioctl.h:245
	 printf("CHELSIO_SETREG,struct ch_reg,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,245\n", sizeof(struct ch_reg));
	// CHELSIO_SET_FILTER 12.1src/sys/dev/cxgb/cxgb_ioctl.h:269
	 printf("CHELSIO_SET_FILTER,struct ch_filter,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,269\n", sizeof(struct ch_filter));
	// CHELSIO_SET_HW_SCHED 12.1src/sys/dev/cxgb/cxgb_ioctl.h:260
	 printf("CHELSIO_SET_HW_SCHED,struct ch_hw_sched,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,260\n", sizeof(struct ch_hw_sched));
	// CHELSIO_SET_MIIREG 12.1src/sys/dev/cxgb/cxgb_ioctl.h:265
	 printf("CHELSIO_SET_MIIREG,struct ch_mii_data,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,265\n", sizeof(struct ch_mii_data));
	// CHELSIO_SET_PKTSCHED 12.1src/sys/dev/cxgb/cxgb_ioctl.h:259
	 printf("CHELSIO_SET_PKTSCHED,struct ch_pktsched_params,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,259\n", sizeof(struct ch_pktsched_params));
	// CHELSIO_SET_PM 12.1src/sys/dev/cxgb/cxgb_ioctl.h:249
	 printf("CHELSIO_SET_PM,struct ch_pm,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,249\n", sizeof(struct ch_pm));
	// CHELSIO_SET_TRACE_FILTER 12.1src/sys/dev/cxgb/cxgb_ioctl.h:256
	 printf("CHELSIO_SET_TRACE_FILTER,struct ch_trace,%zu,12.1src/sys/dev/cxgb/cxgb_ioctl.h,256\n", sizeof(struct ch_trace));
	// SIOCGIWISTATS 12.1src/sys/dev/iwi/if_iwi_ioctl.h:22
	 printf("SIOCGIWISTATS,struct ifreq,%zu,12.1src/sys/dev/iwi/if_iwi_ioctl.h,22\n", sizeof(struct ifreq));
	// SIOCZIWISTATS 12.1src/sys/dev/iwi/if_iwi_ioctl.h:23
	 printf("SIOCZIWISTATS,struct ifreq,%zu,12.1src/sys/dev/iwi/if_iwi_ioctl.h,23\n", sizeof(struct ifreq));
	// OCS_IOCTL_CMD_CONNECTION_INFO 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:352
	 printf("OCS_IOCTL_CMD_CONNECTION_INFO,ocs_ioctl_connection_info_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,352\n", sizeof(ocs_ioctl_connection_info_t));
	// OCS_IOCTL_CMD_DRIVER_INFO 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:350
	 printf("OCS_IOCTL_CMD_DRIVER_INFO,ocs_ioctl_driver_info_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,350\n", sizeof(ocs_ioctl_driver_info_t));
	// OCS_IOCTL_CMD_ECD_HELPER 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:351
	 printf("OCS_IOCTL_CMD_ECD_HELPER,ocs_ioctl_ecd_helper_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,351\n", sizeof(ocs_ioctl_ecd_helper_t));
	// OCS_IOCTL_CMD_ELXU_MBOX 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:348
	 printf("OCS_IOCTL_CMD_ELXU_MBOX,ocs_ioctl_elxu_mbox_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,348\n", sizeof(ocs_ioctl_elxu_mbox_t));
	// OCS_IOCTL_CMD_GEN_DUMP 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:361
	 printf("OCS_IOCTL_CMD_GEN_DUMP,int,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,361\n", sizeof(int));
	// OCS_IOCTL_CMD_GET_DDUMP 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:354
	 printf("OCS_IOCTL_CMD_GET_DDUMP,ocs_ioctl_ddump_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,354\n", sizeof(ocs_ioctl_ddump_t));
	// OCS_IOCTL_CMD_LINK_ONLINE 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:360
	 printf("OCS_IOCTL_CMD_LINK_ONLINE,int,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,360\n", sizeof(int));
	// OCS_IOCTL_CMD_MGMT_EXEC 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:359
	 printf("OCS_IOCTL_CMD_MGMT_EXEC,ocs_ioctl_action_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,359\n", sizeof(ocs_ioctl_action_t));
	// OCS_IOCTL_CMD_MGMT_GET 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:355
	 printf("OCS_IOCTL_CMD_MGMT_GET,ocs_ioctl_cmd_get_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,355\n", sizeof(ocs_ioctl_cmd_get_t));
	// OCS_IOCTL_CMD_MGMT_GET_ALL 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:356
	 printf("OCS_IOCTL_CMD_MGMT_GET_ALL,ocs_ioctl_mgmt_buffer_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,356\n", sizeof(ocs_ioctl_mgmt_buffer_t));
	// OCS_IOCTL_CMD_MGMT_LIST 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:358
	 printf("OCS_IOCTL_CMD_MGMT_LIST,ocs_ioctl_mgmt_buffer_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,358\n", sizeof(ocs_ioctl_mgmt_buffer_t));
	// OCS_IOCTL_CMD_MGMT_SET 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:357
	 printf("OCS_IOCTL_CMD_MGMT_SET,ocs_ioctl_cmd_set_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,357\n", sizeof(ocs_ioctl_cmd_set_t));
	// OCS_IOCTL_CMD_SCSI_CMD 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:349
	 printf("OCS_IOCTL_CMD_SCSI_CMD,ocs_ioctl_scsi_cmd_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,349\n", sizeof(ocs_ioctl_scsi_cmd_t));
	// OCS_IOCTL_CMD_SEND_FRAME 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:363
	 printf("OCS_IOCTL_CMD_SEND_FRAME,ocs_ioctl_send_frame_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,363\n", sizeof(ocs_ioctl_send_frame_t));
	// OCS_IOCTL_CMD_TEST 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:347
	 printf("OCS_IOCTL_CMD_TEST,ocs_ioctl_test_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,347\n", sizeof(ocs_ioctl_test_t));
	// OCS_IOCTL_CMD_VPORT 12.1src/sys/dev/ocs_fc/ocs_ioctl.h:353
	 printf("OCS_IOCTL_CMD_VPORT,ocs_ioctl_vport_t,%zu,12.1src/sys/dev/ocs_fc/ocs_ioctl.h,353\n", sizeof(ocs_ioctl_vport_t));
	// ISP_FC_GETDINFO 12.1src/sys/dev/isp/isp_ioctl.h:123
	 printf("ISP_FC_GETDINFO,struct isp_fc_device,%zu,12.1src/sys/dev/isp/isp_ioctl.h,123\n", sizeof(struct isp_fc_device));
	// ISP_FC_GETHINFO 12.1src/sys/dev/isp/isp_ioctl.h:161
	 printf("ISP_FC_GETHINFO,struct isp_hba_device,%zu,12.1src/sys/dev/isp/isp_ioctl.h,161\n", sizeof(struct isp_hba_device));
	// ISP_GETROLE 12.1src/sys/dev/isp/isp_ioctl.h:73
	 printf("ISP_GETROLE,int,%zu,12.1src/sys/dev/isp/isp_ioctl.h,73\n", sizeof(int));
	// ISP_GET_STATS 12.1src/sys/dev/isp/isp_ioctl.h:100
	 printf("ISP_GET_STATS,isp_stats_t,%zu,12.1src/sys/dev/isp/isp_ioctl.h,100\n", sizeof(isp_stats_t));
	// ISP_SDBLEV 12.1src/sys/dev/isp/isp_ioctl.h:43
	 printf("ISP_SDBLEV,int,%zu,12.1src/sys/dev/isp/isp_ioctl.h,43\n", sizeof(int));
	// ISP_SETROLE 12.1src/sys/dev/isp/isp_ioctl.h:62
	 printf("ISP_SETROLE,int,%zu,12.1src/sys/dev/isp/isp_ioctl.h,62\n", sizeof(int));
	// ISP_TSK_MGMT 12.1src/sys/dev/isp/isp_ioctl.h:179
	 printf("ISP_TSK_MGMT,struct isp_fc_tsk_mgmt,%zu,12.1src/sys/dev/isp/isp_ioctl.h,179\n", sizeof(struct isp_fc_tsk_mgmt));
	// NAND_IO_BLOCK_STAT 12.1src/sys/dev/nand/nand_dev.h:80
	 printf("NAND_IO_BLOCK_STAT,struct block_stat_io,%zu,12.1src/sys/dev/nand/nand_dev.h,80\n", sizeof(struct block_stat_io));
	// NAND_IO_ERASE 12.1src/sys/dev/nand/nand_dev.h:50
	 printf("NAND_IO_ERASE,off_t [ 2 ],%zu,12.1src/sys/dev/nand/nand_dev.h,50\n", sizeof(off_t [ 2 ]));
	// NAND_IO_GET_CHIP_PARAM 12.1src/sys/dev/nand/nand_dev.h:90
	 printf("NAND_IO_GET_CHIP_PARAM,struct chip_param_io,%zu,12.1src/sys/dev/nand/nand_dev.h,90\n", sizeof(struct chip_param_io));
	// NAND_IO_GET_STATUS 12.1src/sys/dev/nand/nand_dev.h:60
	 printf("NAND_IO_GET_STATUS,uint8_t,%zu,12.1src/sys/dev/nand/nand_dev.h,60\n", sizeof(uint8_t));
	// NAND_IO_OOB_PROG 12.1src/sys/dev/nand/nand_dev.h:54
	 printf("NAND_IO_OOB_PROG,struct nand_oob_rw,%zu,12.1src/sys/dev/nand/nand_dev.h,54\n", sizeof(struct nand_oob_rw));
	// NAND_IO_OOB_READ 12.1src/sys/dev/nand/nand_dev.h:52
	 printf("NAND_IO_OOB_READ,struct nand_oob_rw,%zu,12.1src/sys/dev/nand/nand_dev.h,52\n", sizeof(struct nand_oob_rw));
	// NAND_IO_PAGE_STAT 12.1src/sys/dev/nand/nand_dev.h:73
	 printf("NAND_IO_PAGE_STAT,struct page_stat_io,%zu,12.1src/sys/dev/nand/nand_dev.h,73\n", sizeof(struct page_stat_io));
	// NAND_IO_RAW_PROG 12.1src/sys/dev/nand/nand_dev.h:58
	 printf("NAND_IO_RAW_PROG,struct nand_raw_rw,%zu,12.1src/sys/dev/nand/nand_dev.h,58\n", sizeof(struct nand_raw_rw));
	// NAND_IO_RAW_READ 12.1src/sys/dev/nand/nand_dev.h:56
	 printf("NAND_IO_RAW_READ,struct nand_raw_rw,%zu,12.1src/sys/dev/nand/nand_dev.h,56\n", sizeof(struct nand_raw_rw));
	// NANDSIM_CREATE_CHIP 12.1src/sys/dev/nand/nandsim.h:107
	 printf("NANDSIM_CREATE_CHIP,struct sim_chip,%zu,12.1src/sys/dev/nand/nandsim.h,107\n", sizeof(struct sim_chip));
	// NANDSIM_CREATE_CTRL 12.1src/sys/dev/nand/nandsim.h:75
	 printf("NANDSIM_CREATE_CTRL,struct sim_ctrl,%zu,12.1src/sys/dev/nand/nandsim.h,75\n", sizeof(struct sim_ctrl));
	// NANDSIM_DESTROY_CHIP 12.1src/sys/dev/nand/nandsim.h:113
	 printf("NANDSIM_DESTROY_CHIP,struct sim_chip_destroy,%zu,12.1src/sys/dev/nand/nandsim.h,113\n", sizeof(struct sim_chip_destroy));
	// NANDSIM_DESTROY_CTRL 12.1src/sys/dev/nand/nandsim.h:76
	 printf("NANDSIM_DESTROY_CTRL,int,%zu,12.1src/sys/dev/nand/nandsim.h,76\n", sizeof(int));
	// NANDSIM_DUMP 12.1src/sys/dev/nand/nandsim.h:174
	 printf("NANDSIM_DUMP,struct sim_dump,%zu,12.1src/sys/dev/nand/nandsim.h,174\n", sizeof(struct sim_dump));
	// NANDSIM_FREEZE 12.1src/sys/dev/nand/nandsim.h:136
	 printf("NANDSIM_FREEZE,struct sim_ctrl_chip,%zu,12.1src/sys/dev/nand/nandsim.h,136\n", sizeof(struct sim_ctrl_chip));
	// NANDSIM_GET_BLOCK_STATE 12.1src/sys/dev/nand/nandsim.h:158
	 printf("NANDSIM_GET_BLOCK_STATE,struct sim_block_state,%zu,12.1src/sys/dev/nand/nandsim.h,158\n", sizeof(struct sim_block_state));
	// NANDSIM_INJECT_ERROR 12.1src/sys/dev/nand/nandsim.h:146
	 printf("NANDSIM_INJECT_ERROR,struct sim_error,%zu,12.1src/sys/dev/nand/nandsim.h,146\n", sizeof(struct sim_error));
	// NANDSIM_MODIFY 12.1src/sys/dev/nand/nandsim.h:135
	 printf("NANDSIM_MODIFY,struct sim_mod,%zu,12.1src/sys/dev/nand/nandsim.h,135\n", sizeof(struct sim_mod));
	// NANDSIM_PRINT_LOG 12.1src/sys/dev/nand/nandsim.h:165
	 printf("NANDSIM_PRINT_LOG,struct sim_log,%zu,12.1src/sys/dev/nand/nandsim.h,165\n", sizeof(struct sim_log));
	// NANDSIM_RESTART_CTRL 12.1src/sys/dev/nand/nandsim.h:117
	 printf("NANDSIM_RESTART_CTRL,int,%zu,12.1src/sys/dev/nand/nandsim.h,117\n", sizeof(int));
	// NANDSIM_RESTORE 12.1src/sys/dev/nand/nandsim.h:175
	 printf("NANDSIM_RESTORE,struct sim_dump,%zu,12.1src/sys/dev/nand/nandsim.h,175\n", sizeof(struct sim_dump));
	// NANDSIM_SET_BLOCK_STATE 12.1src/sys/dev/nand/nandsim.h:157
	 printf("NANDSIM_SET_BLOCK_STATE,struct sim_block_state,%zu,12.1src/sys/dev/nand/nandsim.h,157\n", sizeof(struct sim_block_state));
	// NANDSIM_SIM_PARAM 12.1src/sys/dev/nand/nandsim.h:64
	 printf("NANDSIM_SIM_PARAM,struct sim_param,%zu,12.1src/sys/dev/nand/nandsim.h,64\n", sizeof(struct sim_param));
	// NANDSIM_START_CTRL 12.1src/sys/dev/nand/nandsim.h:115
	 printf("NANDSIM_START_CTRL,int,%zu,12.1src/sys/dev/nand/nandsim.h,115\n", sizeof(int));
	// NANDSIM_STATUS_CHIP 12.1src/sys/dev/nand/nandsim.h:120
	 printf("NANDSIM_STATUS_CHIP,struct sim_chip,%zu,12.1src/sys/dev/nand/nandsim.h,120\n", sizeof(struct sim_chip));
	// NANDSIM_STATUS_CTRL 12.1src/sys/dev/nand/nandsim.h:119
	 printf("NANDSIM_STATUS_CTRL,struct sim_ctrl,%zu,12.1src/sys/dev/nand/nandsim.h,119\n", sizeof(struct sim_ctrl));
	// NANDSIM_STOP_CTRL 12.1src/sys/dev/nand/nandsim.h:116
	 printf("NANDSIM_STOP_CTRL,int,%zu,12.1src/sys/dev/nand/nandsim.h,116\n", sizeof(int));
	// QLA_MPI_DUMP 12.1src/sys/dev/qlxge/qls_ioctl.h:50
	 printf("QLA_MPI_DUMP,qls_mpi_dump_t,%zu,12.1src/sys/dev/qlxge/qls_ioctl.h,50\n", sizeof(qls_mpi_dump_t));
	// CHELSIO_T4_CLEAR_STATS 12.1src/sys/dev/cxgbe/t4_ioctl.h:420
	 printf("CHELSIO_T4_CLEAR_STATS,uint32_t,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,420\n", sizeof(uint32_t));
	// CHELSIO_T4_CUDBG_DUMP 12.1src/sys/dev/cxgbe/t4_ioctl.h:430
	 printf("CHELSIO_T4_CUDBG_DUMP,struct t4_cudbg_dump,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,430\n", sizeof(struct t4_cudbg_dump));
	// CHELSIO_T4_DEL_FILTER 12.1src/sys/dev/cxgbe/t4_ioctl.h:414
	 printf("CHELSIO_T4_DEL_FILTER,struct t4_filter,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,414\n", sizeof(struct t4_filter));
	// CHELSIO_T4_GETREG 12.1src/sys/dev/cxgbe/t4_ioctl.h:407
	 printf("CHELSIO_T4_GETREG,struct t4_reg,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,407\n", sizeof(struct t4_reg));
	// CHELSIO_T4_GET_FILTER 12.1src/sys/dev/cxgbe/t4_ioctl.h:412
	 printf("CHELSIO_T4_GET_FILTER,struct t4_filter,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,412\n", sizeof(struct t4_filter));
	// CHELSIO_T4_GET_FILTER_MODE 12.1src/sys/dev/cxgbe/t4_ioctl.h:410
	 printf("CHELSIO_T4_GET_FILTER_MODE,uint32_t,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,410\n", sizeof(uint32_t));
	// CHELSIO_T4_GET_I2C 12.1src/sys/dev/cxgbe/t4_ioctl.h:419
	 printf("CHELSIO_T4_GET_I2C,struct t4_i2c_data,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,419\n", sizeof(struct t4_i2c_data));
	// CHELSIO_T4_GET_MEM 12.1src/sys/dev/cxgbe/t4_ioctl.h:418
	 printf("CHELSIO_T4_GET_MEM,struct t4_mem_range,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,418\n", sizeof(struct t4_mem_range));
	// CHELSIO_T4_GET_SGE_CONTEXT 12.1src/sys/dev/cxgbe/t4_ioctl.h:416
	 printf("CHELSIO_T4_GET_SGE_CONTEXT,struct t4_sge_context,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,416\n", sizeof(struct t4_sge_context));
	// CHELSIO_T4_GET_TRACER 12.1src/sys/dev/cxgbe/t4_ioctl.h:425
	 printf("CHELSIO_T4_GET_TRACER,struct t4_tracer,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,425\n", sizeof(struct t4_tracer));
	// CHELSIO_T4_LOAD_BOOT 12.1src/sys/dev/cxgbe/t4_ioctl.h:428
	 printf("CHELSIO_T4_LOAD_BOOT,struct t4_bootrom,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,428\n", sizeof(struct t4_bootrom));
	// CHELSIO_T4_LOAD_BOOTCFG 12.1src/sys/dev/cxgbe/t4_ioctl.h:429
	 printf("CHELSIO_T4_LOAD_BOOTCFG,struct t4_data,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,429\n", sizeof(struct t4_data));
	// CHELSIO_T4_LOAD_CFG 12.1src/sys/dev/cxgbe/t4_ioctl.h:427
	 printf("CHELSIO_T4_LOAD_CFG,struct t4_data,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,427\n", sizeof(struct t4_data));
	// CHELSIO_T4_LOAD_FW 12.1src/sys/dev/cxgbe/t4_ioctl.h:417
	 printf("CHELSIO_T4_LOAD_FW,struct t4_data,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,417\n", sizeof(struct t4_data));
	// CHELSIO_T4_REGDUMP 12.1src/sys/dev/cxgbe/t4_ioctl.h:409
	 printf("CHELSIO_T4_REGDUMP,struct t4_regdump,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,409\n", sizeof(struct t4_regdump));
	// CHELSIO_T4_SCHED_CLASS 12.1src/sys/dev/cxgbe/t4_ioctl.h:422
	 printf("CHELSIO_T4_SCHED_CLASS,struct t4_sched_params,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,422\n", sizeof(struct t4_sched_params));
	// CHELSIO_T4_SCHED_QUEUE 12.1src/sys/dev/cxgbe/t4_ioctl.h:424
	 printf("CHELSIO_T4_SCHED_QUEUE,struct t4_sched_queue,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,424\n", sizeof(struct t4_sched_queue));
	// CHELSIO_T4_SETREG 12.1src/sys/dev/cxgbe/t4_ioctl.h:408
	 printf("CHELSIO_T4_SETREG,struct t4_reg,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,408\n", sizeof(struct t4_reg));
	// CHELSIO_T4_SET_FILTER 12.1src/sys/dev/cxgbe/t4_ioctl.h:413
	 printf("CHELSIO_T4_SET_FILTER,struct t4_filter,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,413\n", sizeof(struct t4_filter));
	// CHELSIO_T4_SET_FILTER_MODE 12.1src/sys/dev/cxgbe/t4_ioctl.h:411
	 printf("CHELSIO_T4_SET_FILTER_MODE,uint32_t,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,411\n", sizeof(uint32_t));
	// CHELSIO_T4_SET_OFLD_POLICY 12.1src/sys/dev/cxgbe/t4_ioctl.h:431
	 printf("CHELSIO_T4_SET_OFLD_POLICY,struct t4_offload_policy,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,431\n", sizeof(struct t4_offload_policy));
	// CHELSIO_T4_SET_TRACER 12.1src/sys/dev/cxgbe/t4_ioctl.h:426
	 printf("CHELSIO_T4_SET_TRACER,struct t4_tracer,%zu,12.1src/sys/dev/cxgbe/t4_ioctl.h,426\n", sizeof(struct t4_tracer));
	// VISIOCTLLINK 12.1src/sys/dev/wtap/plugins/visibility_ioctl.h:50
	 printf("VISIOCTLLINK,struct link,%zu,12.1src/sys/dev/wtap/plugins/visibility_ioctl.h,50\n", sizeof(struct link));
	// VISIOCTLOPEN 12.1src/sys/dev/wtap/plugins/visibility_ioctl.h:49
	 printf("VISIOCTLOPEN,int,%zu,12.1src/sys/dev/wtap/plugins/visibility_ioctl.h,49\n", sizeof(int));
	// SIOCGATHSTATS 12.1src/sys/dev/wtap/if_wtapioctl.h:48
	 printf("SIOCGATHSTATS,struct ifreq,%zu,12.1src/sys/dev/wtap/if_wtapioctl.h,48\n", sizeof(struct ifreq));
	// SIOCZATHSTATS 12.1src/sys/dev/wtap/if_wtapioctl.h:49
	 printf("SIOCZATHSTATS,struct ifreq,%zu,12.1src/sys/dev/wtap/if_wtapioctl.h,49\n", sizeof(struct ifreq));
	// WTAPIOCTLCRT 12.1src/sys/dev/wtap/if_wtapioctl.h:51
	 printf("WTAPIOCTLCRT,int,%zu,12.1src/sys/dev/wtap/if_wtapioctl.h,51\n", sizeof(int));
	// WTAPIOCTLDEL 12.1src/sys/dev/wtap/if_wtapioctl.h:52
	 printf("WTAPIOCTLDEL,int,%zu,12.1src/sys/dev/wtap/if_wtapioctl.h,52\n", sizeof(int));
	// OFIOCFINDDEVICE 12.1src/sys/dev/ofw/openfirmio.h:70
	 printf("OFIOCFINDDEVICE,struct ofiocdesc,%zu,12.1src/sys/dev/ofw/openfirmio.h,70\n", sizeof(struct ofiocdesc));
	// OFIOCGET 12.1src/sys/dev/ofw/openfirmio.h:58
	 printf("OFIOCGET,struct ofiocdesc,%zu,12.1src/sys/dev/ofw/openfirmio.h,58\n", sizeof(struct ofiocdesc));
	// OFIOCGETCHILD 12.1src/sys/dev/ofw/openfirmio.h:68
	 printf("OFIOCGETCHILD,phandle_t,%zu,12.1src/sys/dev/ofw/openfirmio.h,68\n", sizeof(phandle_t));
	// OFIOCGETNEXT 12.1src/sys/dev/ofw/openfirmio.h:66
	 printf("OFIOCGETNEXT,phandle_t,%zu,12.1src/sys/dev/ofw/openfirmio.h,66\n", sizeof(phandle_t));
	// OFIOCGETOPTNODE 12.1src/sys/dev/ofw/openfirmio.h:64
	 printf("OFIOCGETOPTNODE,phandle_t,%zu,12.1src/sys/dev/ofw/openfirmio.h,64\n", sizeof(phandle_t));
	// OFIOCGETPROPLEN 12.1src/sys/dev/ofw/openfirmio.h:72
	 printf("OFIOCGETPROPLEN,struct ofiocdesc,%zu,12.1src/sys/dev/ofw/openfirmio.h,72\n", sizeof(struct ofiocdesc));
	// OFIOCNEXTPROP 12.1src/sys/dev/ofw/openfirmio.h:62
	 printf("OFIOCNEXTPROP,struct ofiocdesc,%zu,12.1src/sys/dev/ofw/openfirmio.h,62\n", sizeof(struct ofiocdesc));
	// OFIOCSET 12.1src/sys/dev/ofw/openfirmio.h:60
	 printf("OFIOCSET,struct ofiocdesc,%zu,12.1src/sys/dev/ofw/openfirmio.h,60\n", sizeof(struct ofiocdesc));
	// SMB_BREAD 12.1src/sys/dev/smbus/smb.h:72
	 printf("SMB_BREAD,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,72\n", sizeof(struct smbcmd));
	// SMB_BWRITE 12.1src/sys/dev/smbus/smb.h:71
	 printf("SMB_BWRITE,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,71\n", sizeof(struct smbcmd));
	// SMB_OLD_TRANS 12.1src/sys/dev/smbus/smb.h:73
	 printf("SMB_OLD_TRANS,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,73\n", sizeof(struct smbcmd));
	// SMB_PCALL 12.1src/sys/dev/smbus/smb.h:70
	 printf("SMB_PCALL,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,70\n", sizeof(struct smbcmd));
	// SMB_QUICK_READ 12.1src/sys/dev/smbus/smb.h:63
	 printf("SMB_QUICK_READ,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,63\n", sizeof(struct smbcmd));
	// SMB_QUICK_WRITE 12.1src/sys/dev/smbus/smb.h:62
	 printf("SMB_QUICK_WRITE,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,62\n", sizeof(struct smbcmd));
	// SMB_READB 12.1src/sys/dev/smbus/smb.h:68
	 printf("SMB_READB,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,68\n", sizeof(struct smbcmd));
	// SMB_READW 12.1src/sys/dev/smbus/smb.h:69
	 printf("SMB_READW,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,69\n", sizeof(struct smbcmd));
	// SMB_RECVB 12.1src/sys/dev/smbus/smb.h:65
	 printf("SMB_RECVB,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,65\n", sizeof(struct smbcmd));
	// SMB_SENDB 12.1src/sys/dev/smbus/smb.h:64
	 printf("SMB_SENDB,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,64\n", sizeof(struct smbcmd));
	// SMB_WRITEB 12.1src/sys/dev/smbus/smb.h:66
	 printf("SMB_WRITEB,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,66\n", sizeof(struct smbcmd));
	// SMB_WRITEW 12.1src/sys/dev/smbus/smb.h:67
	 printf("SMB_WRITEW,struct smbcmd,%zu,12.1src/sys/dev/smbus/smb.h,67\n", sizeof(struct smbcmd));
	// DUMPDMA 12.1src/sys/dev/firewire/firewire.h:453
	 printf("DUMPDMA,uint32_t,%zu,12.1src/sys/dev/firewire/firewire.h,453\n", sizeof(uint32_t));
	// FWOHCI_RDPHYREG 12.1src/sys/dev/firewire/firewire.h:450
	 printf("FWOHCI_RDPHYREG,struct fw_reg_req_t,%zu,12.1src/sys/dev/firewire/firewire.h,450\n", sizeof(struct fw_reg_req_t));
	// FWOHCI_RDREG 12.1src/sys/dev/firewire/firewire.h:448
	 printf("FWOHCI_RDREG,struct fw_reg_req_t,%zu,12.1src/sys/dev/firewire/firewire.h,448\n", sizeof(struct fw_reg_req_t));
	// FWOHCI_WRPHYREG 12.1src/sys/dev/firewire/firewire.h:451
	 printf("FWOHCI_WRPHYREG,struct fw_reg_req_t,%zu,12.1src/sys/dev/firewire/firewire.h,451\n", sizeof(struct fw_reg_req_t));
	// FWOHCI_WRREG 12.1src/sys/dev/firewire/firewire.h:449
	 printf("FWOHCI_WRREG,struct fw_reg_req_t,%zu,12.1src/sys/dev/firewire/firewire.h,449\n", sizeof(struct fw_reg_req_t));
	// FW_ASYREQ 12.1src/sys/dev/firewire/firewire.h:437
	 printf("FW_ASYREQ,struct fw_asyreq,%zu,12.1src/sys/dev/firewire/firewire.h,437\n", sizeof(struct fw_asyreq));
	// FW_CBINDADDR 12.1src/sys/dev/firewire/firewire.h:441
	 printf("FW_CBINDADDR,struct fw_asybindreq,%zu,12.1src/sys/dev/firewire/firewire.h,441\n", sizeof(struct fw_asybindreq));
	// FW_GCROM 12.1src/sys/dev/firewire/firewire.h:443
	 printf("FW_GCROM,struct fw_crom_buf,%zu,12.1src/sys/dev/firewire/firewire.h,443\n", sizeof(struct fw_crom_buf));
	// FW_GDEUI64 12.1src/sys/dev/firewire/firewire.h:446
	 printf("FW_GDEUI64,struct fw_eui64,%zu,12.1src/sys/dev/firewire/firewire.h,446\n", sizeof(struct fw_eui64));
	// FW_GDEVLST 12.1src/sys/dev/firewire/firewire.h:439
	 printf("FW_GDEVLST,struct fw_devlstreq,%zu,12.1src/sys/dev/firewire/firewire.h,439\n", sizeof(struct fw_devlstreq));
	// FW_GRSTREAM 12.1src/sys/dev/firewire/firewire.h:433
	 printf("FW_GRSTREAM,struct fw_isochreq,%zu,12.1src/sys/dev/firewire/firewire.h,433\n", sizeof(struct fw_isochreq));
	// FW_GSTBUF 12.1src/sys/dev/firewire/firewire.h:431
	 printf("FW_GSTBUF,struct fw_isobufreq,%zu,12.1src/sys/dev/firewire/firewire.h,431\n", sizeof(struct fw_isobufreq));
	// FW_GTPMAP 12.1src/sys/dev/firewire/firewire.h:442
	 printf("FW_GTPMAP,struct fw_topology_map,%zu,12.1src/sys/dev/firewire/firewire.h,442\n", sizeof(struct fw_topology_map));
	// FW_GTSTREAM 12.1src/sys/dev/firewire/firewire.h:435
	 printf("FW_GTSTREAM,struct fw_isochreq,%zu,12.1src/sys/dev/firewire/firewire.h,435\n", sizeof(struct fw_isochreq));
	// FW_IBUSRST 12.1src/sys/dev/firewire/firewire.h:438
	 printf("FW_IBUSRST,unsigned int,%zu,12.1src/sys/dev/firewire/firewire.h,438\n", sizeof(unsigned int));
	// FW_SBINDADDR 12.1src/sys/dev/firewire/firewire.h:440
	 printf("FW_SBINDADDR,struct fw_asybindreq,%zu,12.1src/sys/dev/firewire/firewire.h,440\n", sizeof(struct fw_asybindreq));
	// FW_SDEUI64 12.1src/sys/dev/firewire/firewire.h:445
	 printf("FW_SDEUI64,struct fw_eui64,%zu,12.1src/sys/dev/firewire/firewire.h,445\n", sizeof(struct fw_eui64));
	// FW_SRSTREAM 12.1src/sys/dev/firewire/firewire.h:432
	 printf("FW_SRSTREAM,struct fw_isochreq,%zu,12.1src/sys/dev/firewire/firewire.h,432\n", sizeof(struct fw_isochreq));
	// FW_SSTBUF 12.1src/sys/dev/firewire/firewire.h:430
	 printf("FW_SSTBUF,struct fw_isobufreq,%zu,12.1src/sys/dev/firewire/firewire.h,430\n", sizeof(struct fw_isobufreq));
	// FW_STSTREAM 12.1src/sys/dev/firewire/firewire.h:434
	 printf("FW_STSTREAM,struct fw_isochreq,%zu,12.1src/sys/dev/firewire/firewire.h,434\n", sizeof(struct fw_isochreq));
	// SIOCGHWFLAGS 12.1src/sys/dev/sbni/if_sbnivar.h:146
	 printf("SIOCGHWFLAGS,struct ifreq,%zu,12.1src/sys/dev/sbni/if_sbnivar.h,146\n", sizeof(struct ifreq));
	// SIOCGINSTATS 12.1src/sys/dev/sbni/if_sbnivar.h:148
	 printf("SIOCGINSTATS,struct ifreq,%zu,12.1src/sys/dev/sbni/if_sbnivar.h,148\n", sizeof(struct ifreq));
	// SIOCRINSTATS 12.1src/sys/dev/sbni/if_sbnivar.h:149
	 printf("SIOCRINSTATS,struct ifreq,%zu,12.1src/sys/dev/sbni/if_sbnivar.h,149\n", sizeof(struct ifreq));
	// SIOCSHWFLAGS 12.1src/sys/dev/sbni/if_sbnivar.h:147
	 printf("SIOCSHWFLAGS,struct ifreq,%zu,12.1src/sys/dev/sbni/if_sbnivar.h,147\n", sizeof(struct ifreq));
	// LPT_IRQ 12.1src/sys/dev/ppbus/lptio.h:22
	 printf("LPT_IRQ,long,%zu,12.1src/sys/dev/ppbus/lptio.h,22\n", sizeof(long));
	// ACPIIO_ACAD_GET_STATUS 12.1src/sys/dev/acpica/acpiio.h:117
	 printf("ACPIIO_ACAD_GET_STATUS,int,%zu,12.1src/sys/dev/acpica/acpiio.h,117\n", sizeof(int));
	// ACPIIO_ACKSLPSTATE 12.1src/sys/dev/acpica/acpiio.h:42
	 printf("ACPIIO_ACKSLPSTATE,int,%zu,12.1src/sys/dev/acpica/acpiio.h,42\n", sizeof(int));
	// ACPIIO_BATT_GET_BATTINFO 12.1src/sys/dev/acpica/acpiio.h:108
	 printf("ACPIIO_BATT_GET_BATTINFO,union acpi_battery_ioctl_arg,%zu,12.1src/sys/dev/acpica/acpiio.h,108\n", sizeof(union acpi_battery_ioctl_arg));
	// ACPIIO_BATT_GET_BIF 12.1src/sys/dev/acpica/acpiio.h:109
	 printf("ACPIIO_BATT_GET_BIF,union acpi_battery_ioctl_arg,%zu,12.1src/sys/dev/acpica/acpiio.h,109\n", sizeof(union acpi_battery_ioctl_arg));
	// ACPIIO_BATT_GET_BST 12.1src/sys/dev/acpica/acpiio.h:110
	 printf("ACPIIO_BATT_GET_BST,union acpi_battery_ioctl_arg,%zu,12.1src/sys/dev/acpica/acpiio.h,110\n", sizeof(union acpi_battery_ioctl_arg));
	// ACPIIO_BATT_GET_UNITS 12.1src/sys/dev/acpica/acpiio.h:107
	 printf("ACPIIO_BATT_GET_UNITS,int,%zu,12.1src/sys/dev/acpica/acpiio.h,107\n", sizeof(int));
	// ACPIIO_REQSLPSTATE 12.1src/sys/dev/acpica/acpiio.h:39
	 printf("ACPIIO_REQSLPSTATE,int,%zu,12.1src/sys/dev/acpica/acpiio.h,39\n", sizeof(int));
	// ACPIIO_SETSLPSTATE 12.1src/sys/dev/acpica/acpiio.h:36
	 printf("ACPIIO_SETSLPSTATE,int,%zu,12.1src/sys/dev/acpica/acpiio.h,36\n", sizeof(int));
	// NVME_BIO_TEST 12.1src/sys/dev/nvme/nvme.h:46
	 printf("NVME_BIO_TEST,struct nvme_io_test,%zu,12.1src/sys/dev/nvme/nvme.h,46\n", sizeof(struct nvme_io_test));
	// NVME_GET_NSID 12.1src/sys/dev/nvme/nvme.h:43
	 printf("NVME_GET_NSID,struct nvme_get_nsid,%zu,12.1src/sys/dev/nvme/nvme.h,43\n", sizeof(struct nvme_get_nsid));
	// NVME_IO_TEST 12.1src/sys/dev/nvme/nvme.h:45
	 printf("NVME_IO_TEST,struct nvme_io_test,%zu,12.1src/sys/dev/nvme/nvme.h,45\n", sizeof(struct nvme_io_test));
	// NVME_PASSTHROUGH_CMD 12.1src/sys/dev/nvme/nvme.h:41
	 printf("NVME_PASSTHROUGH_CMD,struct nvme_pt_command,%zu,12.1src/sys/dev/nvme/nvme.h,41\n", sizeof(struct nvme_pt_command));
	// FILEMON_SET_FD 12.1src/sys/dev/filemon/filemon.h:32
	 printf("FILEMON_SET_FD,int,%zu,12.1src/sys/dev/filemon/filemon.h,32\n", sizeof(int));
	// QLA_ERASE_FLASH 12.1src/sys/dev/qlxgbe/ql_ioctl.h:209
	 printf("QLA_ERASE_FLASH,qla_erase_flash_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,209\n", sizeof(qla_erase_flash_t));
	// QLA_RDWR_MS_MEM 12.1src/sys/dev/qlxgbe/ql_ioctl.h:204
	 printf("QLA_RDWR_MS_MEM,qla_offchip_mem_val_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,204\n", sizeof(qla_offchip_mem_val_t));
	// QLA_RDWR_REG 12.1src/sys/dev/qlxgbe/ql_ioctl.h:189
	 printf("QLA_RDWR_REG,qla_reg_val_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,189\n", sizeof(qla_reg_val_t));
	// QLA_RD_DRVR_STATE 12.1src/sys/dev/qlxgbe/ql_ioctl.h:229
	 printf("QLA_RD_DRVR_STATE,qla_driver_state_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,229\n", sizeof(qla_driver_state_t));
	// QLA_RD_FLASH 12.1src/sys/dev/qlxgbe/ql_ioctl.h:194
	 printf("QLA_RD_FLASH,qla_rd_flash_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,194\n", sizeof(qla_rd_flash_t));
	// QLA_RD_FW_DUMP 12.1src/sys/dev/qlxgbe/ql_ioctl.h:224
	 printf("QLA_RD_FW_DUMP,qla_rd_fw_dump_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,224\n", sizeof(qla_rd_fw_dump_t));
	// QLA_RD_FW_DUMP_SIZE 12.1src/sys/dev/qlxgbe/ql_ioctl.h:219
	 printf("QLA_RD_FW_DUMP_SIZE,qla_rd_fw_dump_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,219\n", sizeof(qla_rd_fw_dump_t));
	// QLA_RD_PCI_IDS 12.1src/sys/dev/qlxgbe/ql_ioctl.h:214
	 printf("QLA_RD_PCI_IDS,qla_rd_pci_ids_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,214\n", sizeof(qla_rd_pci_ids_t));
	// QLA_RD_SLOWPATH_LOG 12.1src/sys/dev/qlxgbe/ql_ioctl.h:234
	 printf("QLA_RD_SLOWPATH_LOG,qla_sp_log_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,234\n", sizeof(qla_sp_log_t));
	// QLA_WR_FLASH 12.1src/sys/dev/qlxgbe/ql_ioctl.h:199
	 printf("QLA_WR_FLASH,qla_wr_flash_t,%zu,12.1src/sys/dev/qlxgbe/ql_ioctl.h,199\n", sizeof(qla_wr_flash_t));
	// SIOCGATHAGSTATS 12.1src/sys/dev/ath/if_athioctl.h:178
	 printf("SIOCGATHAGSTATS,struct ifreq,%zu,12.1src/sys/dev/ath/if_athioctl.h,178\n", sizeof(struct ifreq));
	// SIOCGATHBTCOEX 12.1src/sys/dev/ath/if_athioctl.h:456
	 printf("SIOCGATHBTCOEX,struct ath_diag,%zu,12.1src/sys/dev/ath/if_athioctl.h,456\n", sizeof(struct ath_diag));
	// SIOCGATHDIAG 12.1src/sys/dev/ath/if_athioctl.h:193
	 printf("SIOCGATHDIAG,struct ath_diag,%zu,12.1src/sys/dev/ath/if_athioctl.h,193\n", sizeof(struct ath_diag));
	// SIOCGATHNODERATESTATS 12.1src/sys/dev/ath/if_athioctl.h:240
	 printf("SIOCGATHNODERATESTATS,struct ath_rateioctl,%zu,12.1src/sys/dev/ath/if_athioctl.h,240\n", sizeof(struct ath_rateioctl));
	// SIOCGATHPHYERR 12.1src/sys/dev/ath/if_athioctl.h:194
	 printf("SIOCGATHPHYERR,struct ath_diag,%zu,12.1src/sys/dev/ath/if_athioctl.h,194\n", sizeof(struct ath_diag));
	// SIOCGATHRATESTATS 12.1src/sys/dev/ath/if_athioctl.h:241
	 printf("SIOCGATHRATESTATS,struct ath_rateioctl,%zu,12.1src/sys/dev/ath/if_athioctl.h,241\n", sizeof(struct ath_rateioctl));
	// SIOCGATHSPECTRAL 12.1src/sys/dev/ath/if_athioctl.h:442
	 printf("SIOCGATHSPECTRAL,struct ath_diag,%zu,12.1src/sys/dev/ath/if_athioctl.h,442\n", sizeof(struct ath_diag));
	// SIOCGATHSTATS 12.1src/sys/dev/ath/if_athioctl.h:176
	 printf("SIOCGATHSTATS,struct ifreq,%zu,12.1src/sys/dev/ath/if_athioctl.h,176\n", sizeof(struct ifreq));
	// SIOCZATHSTATS 12.1src/sys/dev/ath/if_athioctl.h:177
	 printf("SIOCZATHSTATS,struct ifreq,%zu,12.1src/sys/dev/ath/if_athioctl.h,177\n", sizeof(struct ifreq));
	// TWEIO_ADD_UNIT 12.1src/sys/dev/twe/tweio.h:106
	 printf("TWEIO_ADD_UNIT,int,%zu,12.1src/sys/dev/twe/tweio.h,106\n", sizeof(int));
	// TWEIO_COMMAND 12.1src/sys/dev/twe/tweio.h:47
	 printf("TWEIO_COMMAND,struct twe_usercommand,%zu,12.1src/sys/dev/twe/tweio.h,47\n", sizeof(struct twe_usercommand));
	// TWEIO_DEL_UNIT 12.1src/sys/dev/twe/tweio.h:107
	 printf("TWEIO_DEL_UNIT,int,%zu,12.1src/sys/dev/twe/tweio.h,107\n", sizeof(int));
	// TWEIO_GET_PARAM 12.1src/sys/dev/twe/tweio.h:92
	 printf("TWEIO_GET_PARAM,struct twe_paramcommand,%zu,12.1src/sys/dev/twe/tweio.h,92\n", sizeof(struct twe_paramcommand));
	// TWEIO_SET_PARAM 12.1src/sys/dev/twe/tweio.h:91
	 printf("TWEIO_SET_PARAM,struct twe_paramcommand,%zu,12.1src/sys/dev/twe/tweio.h,91\n", sizeof(struct twe_paramcommand));
	// TWEIO_STATS 12.1src/sys/dev/twe/tweio.h:73
	 printf("TWEIO_STATS,union twe_statrequest,%zu,12.1src/sys/dev/twe/tweio.h,73\n", sizeof(union twe_statrequest));
	// MLYIO_COMMAND 12.1src/sys/dev/mly/mlyio.h:49
	 printf("MLYIO_COMMAND,struct mly_user_command,%zu,12.1src/sys/dev/mly/mlyio.h,49\n", sizeof(struct mly_user_command));
	// MLYIO_HEALTH 12.1src/sys/dev/mly/mlyio.h:57
	 printf("MLYIO_HEALTH,struct mly_user_health,%zu,12.1src/sys/dev/mly/mlyio.h,57\n", sizeof(struct mly_user_health));
	// TWS_IOCTL_FIRMWARE_PASS_THROUGH 12.1src/sys/dev/tws/tws_user.h:143
	 printf("TWS_IOCTL_FIRMWARE_PASS_THROUGH,struct tws_ioctl_no_data_buf,%zu,12.1src/sys/dev/tws/tws_user.h,143\n", sizeof(struct tws_ioctl_no_data_buf));
	// TWS_IOCTL_GET_COMPATIBILITY_INFO 12.1src/sys/dev/tws/tws_user.h:157
	 printf("TWS_IOCTL_GET_COMPATIBILITY_INFO,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,157\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_GET_FIRST_EVENT 12.1src/sys/dev/tws/tws_user.h:145
	 printf("TWS_IOCTL_GET_FIRST_EVENT,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,145\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_GET_LAST_EVENT 12.1src/sys/dev/tws/tws_user.h:147
	 printf("TWS_IOCTL_GET_LAST_EVENT,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,147\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_GET_LOCK 12.1src/sys/dev/tws/tws_user.h:153
	 printf("TWS_IOCTL_GET_LOCK,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,153\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_GET_NEXT_EVENT 12.1src/sys/dev/tws/tws_user.h:149
	 printf("TWS_IOCTL_GET_NEXT_EVENT,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,149\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_GET_PREVIOUS_EVENT 12.1src/sys/dev/tws/tws_user.h:151
	 printf("TWS_IOCTL_GET_PREVIOUS_EVENT,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,151\n", sizeof(struct tws_ioctl_with_payload));
	// TWS_IOCTL_RELEASE_LOCK 12.1src/sys/dev/tws/tws_user.h:155
	 printf("TWS_IOCTL_RELEASE_LOCK,struct tws_ioctl_with_payload,%zu,12.1src/sys/dev/tws/tws_user.h,155\n", sizeof(struct tws_ioctl_with_payload));
	// IOETHERSWITCHFLUSHALL 12.1src/sys/dev/etherswitch/etherswitch.h:140
	 printf("IOETHERSWITCHFLUSHALL,etherswitch_portid_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,140\n", sizeof(etherswitch_portid_t));
	// IOETHERSWITCHFLUSHMAC 12.1src/sys/dev/etherswitch/etherswitch.h:142
	 printf("IOETHERSWITCHFLUSHMAC,etherswitch_atu_flush_macentry_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,142\n", sizeof(etherswitch_atu_flush_macentry_t));
	// IOETHERSWITCHFLUSHPORT 12.1src/sys/dev/etherswitch/etherswitch.h:141
	 printf("IOETHERSWITCHFLUSHPORT,etherswitch_portid_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,141\n", sizeof(etherswitch_portid_t));
	// IOETHERSWITCHGETCONF 12.1src/sys/dev/etherswitch/etherswitch.h:138
	 printf("IOETHERSWITCHGETCONF,etherswitch_conf_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,138\n", sizeof(etherswitch_conf_t));
	// IOETHERSWITCHGETINFO 12.1src/sys/dev/etherswitch/etherswitch.h:129
	 printf("IOETHERSWITCHGETINFO,etherswitch_info_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,129\n", sizeof(etherswitch_info_t));
	// IOETHERSWITCHGETPHYREG 12.1src/sys/dev/etherswitch/etherswitch.h:136
	 printf("IOETHERSWITCHGETPHYREG,etherswitch_phyreg_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,136\n", sizeof(etherswitch_phyreg_t));
	// IOETHERSWITCHGETPORT 12.1src/sys/dev/etherswitch/etherswitch.h:132
	 printf("IOETHERSWITCHGETPORT,etherswitch_port_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,132\n", sizeof(etherswitch_port_t));
	// IOETHERSWITCHGETREG 12.1src/sys/dev/etherswitch/etherswitch.h:130
	 printf("IOETHERSWITCHGETREG,etherswitch_reg_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,130\n", sizeof(etherswitch_reg_t));
	// IOETHERSWITCHGETTABLE 12.1src/sys/dev/etherswitch/etherswitch.h:143
	 printf("IOETHERSWITCHGETTABLE,etherswitch_atu_table_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,143\n", sizeof(etherswitch_atu_table_t));
	// IOETHERSWITCHGETTABLEENTRY 12.1src/sys/dev/etherswitch/etherswitch.h:144
	 printf("IOETHERSWITCHGETTABLEENTRY,etherswitch_atu_entry_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,144\n", sizeof(etherswitch_atu_entry_t));
	// IOETHERSWITCHGETVLANGROUP 12.1src/sys/dev/etherswitch/etherswitch.h:134
	 printf("IOETHERSWITCHGETVLANGROUP,etherswitch_vlangroup_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,134\n", sizeof(etherswitch_vlangroup_t));
	// IOETHERSWITCHSETCONF 12.1src/sys/dev/etherswitch/etherswitch.h:139
	 printf("IOETHERSWITCHSETCONF,etherswitch_conf_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,139\n", sizeof(etherswitch_conf_t));
	// IOETHERSWITCHSETPHYREG 12.1src/sys/dev/etherswitch/etherswitch.h:137
	 printf("IOETHERSWITCHSETPHYREG,etherswitch_phyreg_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,137\n", sizeof(etherswitch_phyreg_t));
	// IOETHERSWITCHSETPORT 12.1src/sys/dev/etherswitch/etherswitch.h:133
	 printf("IOETHERSWITCHSETPORT,etherswitch_port_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,133\n", sizeof(etherswitch_port_t));
	// IOETHERSWITCHSETREG 12.1src/sys/dev/etherswitch/etherswitch.h:131
	 printf("IOETHERSWITCHSETREG,etherswitch_reg_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,131\n", sizeof(etherswitch_reg_t));
	// IOETHERSWITCHSETVLANGROUP 12.1src/sys/dev/etherswitch/etherswitch.h:135
	 printf("IOETHERSWITCHSETVLANGROUP,etherswitch_vlangroup_t,%zu,12.1src/sys/dev/etherswitch/etherswitch.h,135\n", sizeof(etherswitch_vlangroup_t));
	// PROTO_IOC_BUSDMA 12.1src/sys/dev/proto/proto_dev.h:86
	 printf("PROTO_IOC_BUSDMA,struct proto_ioc_busdma,%zu,12.1src/sys/dev/proto/proto_dev.h,86\n", sizeof(struct proto_ioc_busdma));
	// PROTO_IOC_REGION 12.1src/sys/dev/proto/proto_dev.h:41
	 printf("PROTO_IOC_REGION,struct proto_ioc_region,%zu,12.1src/sys/dev/proto/proto_dev.h,41\n", sizeof(struct proto_ioc_region));
	// HPT_DO_IOCONTROL 12.1src/sys/dev/hptiop/hptiop.h:473
	 printf("HPT_DO_IOCONTROL,struct hpt_iop_ioctl_param,%zu,12.1src/sys/dev/hptiop/hptiop.h,473\n", sizeof(struct hpt_iop_ioctl_param));
	// AGTIAPI_IOCTL 12.1src/sys/dev/pms/freebsd/driver/common/lxcommon.h:504
	 printf("AGTIAPI_IOCTL,datatosend,%zu,12.1src/sys/dev/pms/freebsd/driver/common/lxcommon.h,504\n", sizeof(datatosend));
	// MFIIO_PASSTHRU 12.1src/sys/dev/mfi/mfi_ioctl.h:148
	 printf("MFIIO_PASSTHRU,struct mfi_ioc_passthru,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,148\n", sizeof(struct mfi_ioc_passthru));
	// MFIIO_PASSTHRU32 12.1src/sys/dev/mfi/mfi_ioctl.h:150
	 printf("MFIIO_PASSTHRU32,struct mfi_ioc_passthru32,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,150\n", sizeof(struct mfi_ioc_passthru32));
	// MFIIO_QUERY_DISK 12.1src/sys/dev/mfi/mfi_ioctl.h:168
	 printf("MFIIO_QUERY_DISK,struct mfi_query_disk,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,168\n", sizeof(struct mfi_query_disk));
	// MFIIO_STATS 12.1src/sys/dev/mfi/mfi_ioctl.h:147
	 printf("MFIIO_STATS,union mfi_statrequest,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,147\n", sizeof(union mfi_statrequest));
	// MFI_CMD 12.1src/sys/dev/mfi/mfi_ioctl.h:106
	 printf("MFI_CMD,struct mfi_ioc_packet,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,106\n", sizeof(struct mfi_ioc_packet));
	// MFI_CMD32 12.1src/sys/dev/mfi/mfi_ioctl.h:108
	 printf("MFI_CMD32,struct mfi_ioc_packet32,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,108\n", sizeof(struct mfi_ioc_packet32));
	// MFI_SET_AEN 12.1src/sys/dev/mfi/mfi_ioctl.h:110
	 printf("MFI_SET_AEN,struct mfi_ioc_aen,%zu,12.1src/sys/dev/mfi/mfi_ioctl.h,110\n", sizeof(struct mfi_ioc_aen));
	// FM_GET_FREQ 12.1src/sys/dev/usb/ufm_ioctl.h:40
	 printf("FM_GET_FREQ,int,%zu,12.1src/sys/dev/usb/ufm_ioctl.h,40\n", sizeof(int));
	// FM_GET_STAT 12.1src/sys/dev/usb/ufm_ioctl.h:43
	 printf("FM_GET_STAT,int,%zu,12.1src/sys/dev/usb/ufm_ioctl.h,43\n", sizeof(int));
	// FM_SET_FREQ 12.1src/sys/dev/usb/ufm_ioctl.h:39
	 printf("FM_SET_FREQ,int,%zu,12.1src/sys/dev/usb/ufm_ioctl.h,39\n", sizeof(int));
	// FM_START 12.1src/sys/dev/usb/ufm_ioctl.h:41
	 printf("FM_START,int,%zu,12.1src/sys/dev/usb/ufm_ioctl.h,41\n", sizeof(int));
	// FM_STOP 12.1src/sys/dev/usb/ufm_ioctl.h:42
	 printf("FM_STOP,int,%zu,12.1src/sys/dev/usb/ufm_ioctl.h,42\n", sizeof(int));
	// ULED_GET_COLOR 12.1src/sys/dev/usb/uled_ioctl.h:40
	 printf("ULED_GET_COLOR,struct uled_color,%zu,12.1src/sys/dev/usb/uled_ioctl.h,40\n", sizeof(struct uled_color));
	// ULED_SET_COLOR 12.1src/sys/dev/usb/uled_ioctl.h:41
	 printf("ULED_SET_COLOR,struct uled_color,%zu,12.1src/sys/dev/usb/uled_ioctl.h,41\n", sizeof(struct uled_color));
	// USB_CLAIM_INTERFACE 12.1src/sys/dev/usb/usb_ioctl.h:301
	 printf("USB_CLAIM_INTERFACE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,301\n", sizeof(int));
	// USB_DEVICEENUMERATE 12.1src/sys/dev/usb/usb_ioctl.h:271
	 printf("USB_DEVICEENUMERATE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,271\n", sizeof(int));
	// USB_DEVICEINFO 12.1src/sys/dev/usb/usb_ioctl.h:269
	 printf("USB_DEVICEINFO,struct usb_device_info,%zu,12.1src/sys/dev/usb/usb_ioctl.h,269\n", sizeof(struct usb_device_info));
	// USB_DEVICESTATS 12.1src/sys/dev/usb/usb_ioctl.h:270
	 printf("USB_DEVICESTATS,struct usb_device_stats,%zu,12.1src/sys/dev/usb/usb_ioctl.h,270\n", sizeof(struct usb_device_stats));
	// USB_DEV_QUIRK_ADD 12.1src/sys/dev/usb/usb_ioctl.h:346
	 printf("USB_DEV_QUIRK_ADD,struct usb_gen_quirk,%zu,12.1src/sys/dev/usb/usb_ioctl.h,346\n", sizeof(struct usb_gen_quirk));
	// USB_DEV_QUIRK_GET 12.1src/sys/dev/usb/usb_ioctl.h:344
	 printf("USB_DEV_QUIRK_GET,struct usb_gen_quirk,%zu,12.1src/sys/dev/usb/usb_ioctl.h,344\n", sizeof(struct usb_gen_quirk));
	// USB_DEV_QUIRK_REMOVE 12.1src/sys/dev/usb/usb_ioctl.h:347
	 printf("USB_DEV_QUIRK_REMOVE,struct usb_gen_quirk,%zu,12.1src/sys/dev/usb/usb_ioctl.h,347\n", sizeof(struct usb_gen_quirk));
	// USB_DO_REQUEST 12.1src/sys/dev/usb/usb_ioctl.h:291
	 printf("USB_DO_REQUEST,struct usb_ctl_request,%zu,12.1src/sys/dev/usb/usb_ioctl.h,291\n", sizeof(struct usb_ctl_request));
	// USB_FS_CLEAR_STALL_SYNC 12.1src/sys/dev/usb/usb_ioctl.h:340
	 printf("USB_FS_CLEAR_STALL_SYNC,struct usb_fs_clear_stall_sync,%zu,12.1src/sys/dev/usb/usb_ioctl.h,340\n", sizeof(struct usb_fs_clear_stall_sync));
	// USB_FS_CLOSE 12.1src/sys/dev/usb/usb_ioctl.h:339
	 printf("USB_FS_CLOSE,struct usb_fs_close,%zu,12.1src/sys/dev/usb/usb_ioctl.h,339\n", sizeof(struct usb_fs_close));
	// USB_FS_COMPLETE 12.1src/sys/dev/usb/usb_ioctl.h:335
	 printf("USB_FS_COMPLETE,struct usb_fs_complete,%zu,12.1src/sys/dev/usb/usb_ioctl.h,335\n", sizeof(struct usb_fs_complete));
	// USB_FS_INIT 12.1src/sys/dev/usb/usb_ioctl.h:336
	 printf("USB_FS_INIT,struct usb_fs_init,%zu,12.1src/sys/dev/usb/usb_ioctl.h,336\n", sizeof(struct usb_fs_init));
	// USB_FS_OPEN 12.1src/sys/dev/usb/usb_ioctl.h:338
	 printf("USB_FS_OPEN,struct usb_fs_open,%zu,12.1src/sys/dev/usb/usb_ioctl.h,338\n", sizeof(struct usb_fs_open));
	// USB_FS_OPEN_STREAM 12.1src/sys/dev/usb/usb_ioctl.h:341
	 printf("USB_FS_OPEN_STREAM,struct usb_fs_open_stream,%zu,12.1src/sys/dev/usb/usb_ioctl.h,341\n", sizeof(struct usb_fs_open_stream));
	// USB_FS_START 12.1src/sys/dev/usb/usb_ioctl.h:333
	 printf("USB_FS_START,struct usb_fs_start,%zu,12.1src/sys/dev/usb/usb_ioctl.h,333\n", sizeof(struct usb_fs_start));
	// USB_FS_STOP 12.1src/sys/dev/usb/usb_ioctl.h:334
	 printf("USB_FS_STOP,struct usb_fs_stop,%zu,12.1src/sys/dev/usb/usb_ioctl.h,334\n", sizeof(struct usb_fs_stop));
	// USB_FS_UNINIT 12.1src/sys/dev/usb/usb_ioctl.h:337
	 printf("USB_FS_UNINIT,struct usb_fs_uninit,%zu,12.1src/sys/dev/usb/usb_ioctl.h,337\n", sizeof(struct usb_fs_uninit));
	// USB_GET_ALTINTERFACE 12.1src/sys/dev/usb/usb_ioctl.h:283
	 printf("USB_GET_ALTINTERFACE,struct usb_alt_interface,%zu,12.1src/sys/dev/usb/usb_ioctl.h,283\n", sizeof(struct usb_alt_interface));
	// USB_GET_CM_OVER_DATA 12.1src/sys/dev/usb/usb_ioctl.h:325
	 printf("USB_GET_CM_OVER_DATA,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,325\n", sizeof(int));
	// USB_GET_CONFIG 12.1src/sys/dev/usb/usb_ioctl.h:281
	 printf("USB_GET_CONFIG,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,281\n", sizeof(int));
	// USB_GET_CONFIG_DESC 12.1src/sys/dev/usb/usb_ioctl.h:286
	 printf("USB_GET_CONFIG_DESC,struct usb_config_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,286\n", sizeof(struct usb_config_descriptor));
	// USB_GET_DEVICEINFO 12.1src/sys/dev/usb/usb_ioctl.h:292
	 printf("USB_GET_DEVICEINFO,struct usb_device_info,%zu,12.1src/sys/dev/usb/usb_ioctl.h,292\n", sizeof(struct usb_device_info));
	// USB_GET_DEVICE_DESC 12.1src/sys/dev/usb/usb_ioctl.h:285
	 printf("USB_GET_DEVICE_DESC,struct usb_device_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,285\n", sizeof(struct usb_device_descriptor));
	// USB_GET_DEV_PORT_PATH 12.1src/sys/dev/usb/usb_ioctl.h:308
	 printf("USB_GET_DEV_PORT_PATH,struct usb_device_port_path,%zu,12.1src/sys/dev/usb/usb_ioctl.h,308\n", sizeof(struct usb_device_port_path));
	// USB_GET_FULL_DESC 12.1src/sys/dev/usb/usb_ioctl.h:289
	 printf("USB_GET_FULL_DESC,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,289\n", sizeof(struct usb_gen_descriptor));
	// USB_GET_GPIO 12.1src/sys/dev/usb/usb_ioctl.h:329
	 printf("USB_GET_GPIO,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,329\n", sizeof(int));
	// USB_GET_IFACE_DRIVER 12.1src/sys/dev/usb/usb_ioctl.h:300
	 printf("USB_GET_IFACE_DRIVER,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,300\n", sizeof(struct usb_gen_descriptor));
	// USB_GET_POWER_MODE 12.1src/sys/dev/usb/usb_ioctl.h:320
	 printf("USB_GET_POWER_MODE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,320\n", sizeof(int));
	// USB_GET_POWER_USAGE 12.1src/sys/dev/usb/usb_ioctl.h:309
	 printf("USB_GET_POWER_USAGE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,309\n", sizeof(int));
	// USB_GET_REPORT 12.1src/sys/dev/usb/usb_ioctl.h:276
	 printf("USB_GET_REPORT,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,276\n", sizeof(struct usb_gen_descriptor));
	// USB_GET_REPORT_DESC 12.1src/sys/dev/usb/usb_ioctl.h:274
	 printf("USB_GET_REPORT_DESC,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,274\n", sizeof(struct usb_gen_descriptor));
	// USB_GET_REPORT_ID 12.1src/sys/dev/usb/usb_ioctl.h:278
	 printf("USB_GET_REPORT_ID,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,278\n", sizeof(int));
	// USB_GET_RX_BUFFER_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:296
	 printf("USB_GET_RX_BUFFER_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,296\n", sizeof(int));
	// USB_GET_RX_ENDPOINT_DESC 12.1src/sys/dev/usb/usb_ioctl.h:288
	 printf("USB_GET_RX_ENDPOINT_DESC,struct usb_endpoint_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,288\n", sizeof(struct usb_endpoint_descriptor));
	// USB_GET_RX_FRAME_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:295
	 printf("USB_GET_RX_FRAME_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,295\n", sizeof(int));
	// USB_GET_RX_INTERFACE_DESC 12.1src/sys/dev/usb/usb_ioctl.h:287
	 printf("USB_GET_RX_INTERFACE_DESC,struct usb_interface_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,287\n", sizeof(struct usb_interface_descriptor));
	// USB_GET_STRING_DESC 12.1src/sys/dev/usb/usb_ioctl.h:290
	 printf("USB_GET_STRING_DESC,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,290\n", sizeof(struct usb_gen_descriptor));
	// USB_GET_TEMPLATE 12.1src/sys/dev/usb/usb_ioctl.h:322
	 printf("USB_GET_TEMPLATE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,322\n", sizeof(int));
	// USB_GET_TX_BUFFER_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:313
	 printf("USB_GET_TX_BUFFER_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,313\n", sizeof(int));
	// USB_GET_TX_ENDPOINT_DESC 12.1src/sys/dev/usb/usb_ioctl.h:316
	 printf("USB_GET_TX_ENDPOINT_DESC,struct usb_endpoint_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,316\n", sizeof(struct usb_endpoint_descriptor));
	// USB_GET_TX_FRAME_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:312
	 printf("USB_GET_TX_FRAME_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,312\n", sizeof(int));
	// USB_GET_TX_INTERFACE_DESC 12.1src/sys/dev/usb/usb_ioctl.h:315
	 printf("USB_GET_TX_INTERFACE_DESC,struct usb_interface_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,315\n", sizeof(struct usb_interface_descriptor));
	// USB_IFACE_DRIVER_ACTIVE 12.1src/sys/dev/usb/usb_ioctl.h:303
	 printf("USB_IFACE_DRIVER_ACTIVE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,303\n", sizeof(int));
	// USB_IFACE_DRIVER_DETACH 12.1src/sys/dev/usb/usb_ioctl.h:304
	 printf("USB_IFACE_DRIVER_DETACH,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,304\n", sizeof(int));
	// USB_QUIRK_NAME_GET 12.1src/sys/dev/usb/usb_ioctl.h:345
	 printf("USB_QUIRK_NAME_GET,struct usb_gen_quirk,%zu,12.1src/sys/dev/usb/usb_ioctl.h,345\n", sizeof(struct usb_gen_quirk));
	// USB_READ_DIR 12.1src/sys/dev/usb/usb_ioctl.h:306
	 printf("USB_READ_DIR,struct usb_read_dir,%zu,12.1src/sys/dev/usb/usb_ioctl.h,306\n", sizeof(struct usb_read_dir));
	// USB_RELEASE_INTERFACE 12.1src/sys/dev/usb/usb_ioctl.h:302
	 printf("USB_RELEASE_INTERFACE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,302\n", sizeof(int));
	// USB_REQUEST 12.1src/sys/dev/usb/usb_ioctl.h:266
	 printf("USB_REQUEST,struct usb_ctl_request,%zu,12.1src/sys/dev/usb/usb_ioctl.h,266\n", sizeof(struct usb_ctl_request));
	// USB_SETDEBUG 12.1src/sys/dev/usb/usb_ioctl.h:267
	 printf("USB_SETDEBUG,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,267\n", sizeof(int));
	// USB_SET_ALTINTERFACE 12.1src/sys/dev/usb/usb_ioctl.h:284
	 printf("USB_SET_ALTINTERFACE,struct usb_alt_interface,%zu,12.1src/sys/dev/usb/usb_ioctl.h,284\n", sizeof(struct usb_alt_interface));
	// USB_SET_CM_OVER_DATA 12.1src/sys/dev/usb/usb_ioctl.h:326
	 printf("USB_SET_CM_OVER_DATA,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,326\n", sizeof(int));
	// USB_SET_CONFIG 12.1src/sys/dev/usb/usb_ioctl.h:282
	 printf("USB_SET_CONFIG,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,282\n", sizeof(int));
	// USB_SET_GPIO 12.1src/sys/dev/usb/usb_ioctl.h:330
	 printf("USB_SET_GPIO,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,330\n", sizeof(int));
	// USB_SET_IMMED 12.1src/sys/dev/usb/usb_ioctl.h:275
	 printf("USB_SET_IMMED,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,275\n", sizeof(int));
	// USB_SET_PORT_DISABLE 12.1src/sys/dev/usb/usb_ioctl.h:318
	 printf("USB_SET_PORT_DISABLE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,318\n", sizeof(int));
	// USB_SET_PORT_ENABLE 12.1src/sys/dev/usb/usb_ioctl.h:317
	 printf("USB_SET_PORT_ENABLE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,317\n", sizeof(int));
	// USB_SET_POWER_MODE 12.1src/sys/dev/usb/usb_ioctl.h:319
	 printf("USB_SET_POWER_MODE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,319\n", sizeof(int));
	// USB_SET_REPORT 12.1src/sys/dev/usb/usb_ioctl.h:277
	 printf("USB_SET_REPORT,struct usb_gen_descriptor,%zu,12.1src/sys/dev/usb/usb_ioctl.h,277\n", sizeof(struct usb_gen_descriptor));
	// USB_SET_RX_BUFFER_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:297
	 printf("USB_SET_RX_BUFFER_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,297\n", sizeof(int));
	// USB_SET_RX_SHORT_XFER 12.1src/sys/dev/usb/usb_ioctl.h:293
	 printf("USB_SET_RX_SHORT_XFER,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,293\n", sizeof(int));
	// USB_SET_RX_STALL_FLAG 12.1src/sys/dev/usb/usb_ioctl.h:298
	 printf("USB_SET_RX_STALL_FLAG,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,298\n", sizeof(int));
	// USB_SET_RX_TIMEOUT 12.1src/sys/dev/usb/usb_ioctl.h:294
	 printf("USB_SET_RX_TIMEOUT,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,294\n", sizeof(int));
	// USB_SET_TEMPLATE 12.1src/sys/dev/usb/usb_ioctl.h:321
	 printf("USB_SET_TEMPLATE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,321\n", sizeof(int));
	// USB_SET_TX_BUFFER_SIZE 12.1src/sys/dev/usb/usb_ioctl.h:314
	 printf("USB_SET_TX_BUFFER_SIZE,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,314\n", sizeof(int));
	// USB_SET_TX_FORCE_SHORT 12.1src/sys/dev/usb/usb_ioctl.h:310
	 printf("USB_SET_TX_FORCE_SHORT,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,310\n", sizeof(int));
	// USB_SET_TX_STALL_FLAG 12.1src/sys/dev/usb/usb_ioctl.h:299
	 printf("USB_SET_TX_STALL_FLAG,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,299\n", sizeof(int));
	// USB_SET_TX_TIMEOUT 12.1src/sys/dev/usb/usb_ioctl.h:311
	 printf("USB_SET_TX_TIMEOUT,int,%zu,12.1src/sys/dev/usb/usb_ioctl.h,311\n", sizeof(int));
	// RIO_RECV_COMMAND 12.1src/sys/dev/usb/storage/rio500_usb.h:45
	 printf("RIO_RECV_COMMAND,struct RioCommand,%zu,12.1src/sys/dev/usb/storage/rio500_usb.h,45\n", sizeof(struct RioCommand));
	// RIO_SEND_COMMAND 12.1src/sys/dev/usb/storage/rio500_usb.h:44
	 printf("RIO_SEND_COMMAND,struct RioCommand,%zu,12.1src/sys/dev/usb/storage/rio500_usb.h,44\n", sizeof(struct RioCommand));
	// UFTDIIOC_ERASE_EEPROM 12.1src/sys/dev/usb/uftdiio.h:97
	 printf("UFTDIIOC_ERASE_EEPROM,int,%zu,12.1src/sys/dev/usb/uftdiio.h,97\n", sizeof(int));
	// UFTDIIOC_GET_BITMODE 12.1src/sys/dev/usb/uftdiio.h:89
	 printf("UFTDIIOC_GET_BITMODE,struct uftdi_bitmode,%zu,12.1src/sys/dev/usb/uftdiio.h,89\n", sizeof(struct uftdi_bitmode));
	// UFTDIIOC_GET_HWREV 12.1src/sys/dev/usb/uftdiio.h:94
	 printf("UFTDIIOC_GET_HWREV,int,%zu,12.1src/sys/dev/usb/uftdiio.h,94\n", sizeof(int));
	// UFTDIIOC_GET_LATENCY 12.1src/sys/dev/usb/uftdiio.h:93
	 printf("UFTDIIOC_GET_LATENCY,int,%zu,12.1src/sys/dev/usb/uftdiio.h,93\n", sizeof(int));
	// UFTDIIOC_READ_EEPROM 12.1src/sys/dev/usb/uftdiio.h:95
	 printf("UFTDIIOC_READ_EEPROM,struct uftdi_eeio,%zu,12.1src/sys/dev/usb/uftdiio.h,95\n", sizeof(struct uftdi_eeio));
	// UFTDIIOC_SET_BITMODE 12.1src/sys/dev/usb/uftdiio.h:88
	 printf("UFTDIIOC_SET_BITMODE,struct uftdi_bitmode,%zu,12.1src/sys/dev/usb/uftdiio.h,88\n", sizeof(struct uftdi_bitmode));
	// UFTDIIOC_SET_ERROR_CHAR 12.1src/sys/dev/usb/uftdiio.h:90
	 printf("UFTDIIOC_SET_ERROR_CHAR,int,%zu,12.1src/sys/dev/usb/uftdiio.h,90\n", sizeof(int));
	// UFTDIIOC_SET_EVENT_CHAR 12.1src/sys/dev/usb/uftdiio.h:91
	 printf("UFTDIIOC_SET_EVENT_CHAR,int,%zu,12.1src/sys/dev/usb/uftdiio.h,91\n", sizeof(int));
	// UFTDIIOC_SET_LATENCY 12.1src/sys/dev/usb/uftdiio.h:92
	 printf("UFTDIIOC_SET_LATENCY,int,%zu,12.1src/sys/dev/usb/uftdiio.h,92\n", sizeof(int));
	// UFTDIIOC_WRITE_EEPROM 12.1src/sys/dev/usb/uftdiio.h:96
	 printf("UFTDIIOC_WRITE_EEPROM,struct uftdi_eeio,%zu,12.1src/sys/dev/usb/uftdiio.h,96\n", sizeof(struct uftdi_eeio));
	// QLNX_DEV_SETTING 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:300
	 printf("QLNX_DEV_SETTING,qlnx_dev_setting_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,300\n", sizeof(qlnx_dev_setting_t));
	// QLNX_DRV_INFO 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:295
	 printf("QLNX_DRV_INFO,qlnx_drvinfo_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,295\n", sizeof(qlnx_drvinfo_t));
	// QLNX_GET_REGS 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:305
	 printf("QLNX_GET_REGS,qlnx_get_regs_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,305\n", sizeof(qlnx_get_regs_t));
	// QLNX_GRC_DUMP 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:280
	 printf("QLNX_GRC_DUMP,qlnx_grcdump_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,280\n", sizeof(qlnx_grcdump_t));
	// QLNX_GRC_DUMP_SIZE 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:275
	 printf("QLNX_GRC_DUMP_SIZE,qlnx_grcdump_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,275\n", sizeof(qlnx_grcdump_t));
	// QLNX_IDLE_CHK 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:290
	 printf("QLNX_IDLE_CHK,qlnx_idle_chk_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,290\n", sizeof(qlnx_idle_chk_t));
	// QLNX_IDLE_CHK_SIZE 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:285
	 printf("QLNX_IDLE_CHK_SIZE,qlnx_idle_chk_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,285\n", sizeof(qlnx_idle_chk_t));
	// QLNX_MAC_ADDR 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:325
	 printf("QLNX_MAC_ADDR,qlnx_perm_mac_addr_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,325\n", sizeof(qlnx_perm_mac_addr_t));
	// QLNX_NVRAM 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:310
	 printf("QLNX_NVRAM,qlnx_nvram_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,310\n", sizeof(qlnx_nvram_t));
	// QLNX_RD_WR_PCICFG 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:320
	 printf("QLNX_RD_WR_PCICFG,qlnx_pcicfg_rd_wr_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,320\n", sizeof(qlnx_pcicfg_rd_wr_t));
	// QLNX_RD_WR_REG 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:315
	 printf("QLNX_RD_WR_REG,qlnx_reg_rd_wr_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,315\n", sizeof(qlnx_reg_rd_wr_t));
	// QLNX_SET_LLDP_TLVS 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:345
	 printf("QLNX_SET_LLDP_TLVS,qlnx_lldp_sys_tlvs_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,345\n", sizeof(qlnx_lldp_sys_tlvs_t));
	// QLNX_STORM_STATS 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:330
	 printf("QLNX_STORM_STATS,qlnx_storm_stats_dump_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,330\n", sizeof(qlnx_storm_stats_dump_t));
	// QLNX_TRACE 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:340
	 printf("QLNX_TRACE,qlnx_trace_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,340\n", sizeof(qlnx_trace_t));
	// QLNX_TRACE_SIZE 12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h:335
	 printf("QLNX_TRACE_SIZE,qlnx_trace_t,%zu,12.1src/sys/dev/qlnx/qlnxe/qlnx_ioctl.h,335\n", sizeof(qlnx_trace_t));
	// PBIO_GETDIFF 12.1src/sys/dev/pbio/pbioio.h:51
	 printf("PBIO_GETDIFF,int,%zu,12.1src/sys/dev/pbio/pbioio.h,51\n", sizeof(int));
	// PBIO_GETIPACE 12.1src/sys/dev/pbio/pbioio.h:52
	 printf("PBIO_GETIPACE,int,%zu,12.1src/sys/dev/pbio/pbioio.h,52\n", sizeof(int));
	// PBIO_GETOPACE 12.1src/sys/dev/pbio/pbioio.h:53
	 printf("PBIO_GETOPACE,int,%zu,12.1src/sys/dev/pbio/pbioio.h,53\n", sizeof(int));
	// PBIO_SETDIFF 12.1src/sys/dev/pbio/pbioio.h:48
	 printf("PBIO_SETDIFF,int,%zu,12.1src/sys/dev/pbio/pbioio.h,48\n", sizeof(int));
	// PBIO_SETIPACE 12.1src/sys/dev/pbio/pbioio.h:49
	 printf("PBIO_SETIPACE,int,%zu,12.1src/sys/dev/pbio/pbioio.h,49\n", sizeof(int));
	// PBIO_SETOPACE 12.1src/sys/dev/pbio/pbioio.h:50
	 printf("PBIO_SETOPACE,int,%zu,12.1src/sys/dev/pbio/pbioio.h,50\n", sizeof(int));
	// PWMGETSTATE 12.1src/sys/dev/pwm/pwmc.h:47
	 printf("PWMGETSTATE,struct pwm_state,%zu,12.1src/sys/dev/pwm/pwmc.h,47\n", sizeof(struct pwm_state));
	// PWMSETSTATE 12.1src/sys/dev/pwm/pwmc.h:48
	 printf("PWMSETSTATE,struct pwm_state,%zu,12.1src/sys/dev/pwm/pwmc.h,48\n", sizeof(struct pwm_state));
	// TW_CL_IOCTL_GET_COMPATIBILITY_INFO 12.1src/sys/dev/twa/tw_osl_ioctl.h:114
	 printf("TW_CL_IOCTL_GET_COMPATIBILITY_INFO,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,114\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_GET_FIRST_EVENT 12.1src/sys/dev/twa/tw_osl_ioctl.h:102
	 printf("TW_CL_IOCTL_GET_FIRST_EVENT,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,102\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_GET_LAST_EVENT 12.1src/sys/dev/twa/tw_osl_ioctl.h:104
	 printf("TW_CL_IOCTL_GET_LAST_EVENT,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,104\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_GET_LOCK 12.1src/sys/dev/twa/tw_osl_ioctl.h:110
	 printf("TW_CL_IOCTL_GET_LOCK,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,110\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_GET_NEXT_EVENT 12.1src/sys/dev/twa/tw_osl_ioctl.h:106
	 printf("TW_CL_IOCTL_GET_NEXT_EVENT,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,106\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_GET_PREVIOUS_EVENT 12.1src/sys/dev/twa/tw_osl_ioctl.h:108
	 printf("TW_CL_IOCTL_GET_PREVIOUS_EVENT,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,108\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_CL_IOCTL_RELEASE_LOCK 12.1src/sys/dev/twa/tw_osl_ioctl.h:112
	 printf("TW_CL_IOCTL_RELEASE_LOCK,TW_OSLI_IOCTL_WITH_PAYLOAD,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,112\n", sizeof(TW_OSLI_IOCTL_WITH_PAYLOAD));
	// TW_OSL_IOCTL_FIRMWARE_PASS_THROUGH 12.1src/sys/dev/twa/tw_osl_ioctl.h:79
	 printf("TW_OSL_IOCTL_FIRMWARE_PASS_THROUGH,TW_OSLI_IOCTL_NO_DATA_BUF,%zu,12.1src/sys/dev/twa/tw_osl_ioctl.h,79\n", sizeof(TW_OSLI_IOCTL_NO_DATA_BUF));
	// GDT_IOCTL_CTRCNT 12.1src/sys/dev/iir/iir.h:166
	 printf("GDT_IOCTL_CTRCNT,int,%zu,12.1src/sys/dev/iir/iir.h,166\n", sizeof(int));
	// GDT_IOCTL_DRVERS 12.1src/sys/dev/iir/iir.h:161
	 printf("GDT_IOCTL_DRVERS,int,%zu,12.1src/sys/dev/iir/iir.h,161\n", sizeof(int));
	// GDT_IOCTL_DRVERS_OLD 12.1src/sys/dev/iir/iir.h:163
	 printf("GDT_IOCTL_DRVERS_OLD,int,%zu,12.1src/sys/dev/iir/iir.h,163\n", sizeof(int));
	// I2CRDWR 12.1src/sys/dev/iicbus/iic.h:68
	 printf("I2CRDWR,struct iic_rdwr_data,%zu,12.1src/sys/dev/iicbus/iic.h,68\n", sizeof(struct iic_rdwr_data));
	// I2CREAD 12.1src/sys/dev/iicbus/iic.h:67
	 printf("I2CREAD,struct iiccmd,%zu,12.1src/sys/dev/iicbus/iic.h,67\n", sizeof(struct iiccmd));
	// I2CRPTSTART 12.1src/sys/dev/iicbus/iic.h:69
	 printf("I2CRPTSTART,struct iiccmd,%zu,12.1src/sys/dev/iicbus/iic.h,69\n", sizeof(struct iiccmd));
	// I2CRSTCARD 12.1src/sys/dev/iicbus/iic.h:65
	 printf("I2CRSTCARD,struct iiccmd,%zu,12.1src/sys/dev/iicbus/iic.h,65\n", sizeof(struct iiccmd));
	// I2CSADDR 12.1src/sys/dev/iicbus/iic.h:70
	 printf("I2CSADDR,uint8_t,%zu,12.1src/sys/dev/iicbus/iic.h,70\n", sizeof(uint8_t));
	// I2CSTART 12.1src/sys/dev/iicbus/iic.h:63
	 printf("I2CSTART,struct iiccmd,%zu,12.1src/sys/dev/iicbus/iic.h,63\n", sizeof(struct iiccmd));
	// I2CWRITE 12.1src/sys/dev/iicbus/iic.h:66
	 printf("I2CWRITE,struct iiccmd,%zu,12.1src/sys/dev/iicbus/iic.h,66\n", sizeof(struct iiccmd));
	// SIOCGMVSTATS 12.1src/sys/dev/mwl/if_mwlioctl.h:95
	 printf("SIOCGMVSTATS,struct ifreq,%zu,12.1src/sys/dev/mwl/if_mwlioctl.h,95\n", sizeof(struct ifreq));
	// SIOCGMVDIAG 12.1src/sys/dev/mwl/mwldiag.h:108
	 printf("SIOCGMVDIAG,struct mwl_diag,%zu,12.1src/sys/dev/mwl/mwldiag.h,108\n", sizeof(struct mwl_diag));
	// SIOCGMVRESET 12.1src/sys/dev/mwl/mwldiag.h:109
	 printf("SIOCGMVRESET,struct mwl_diag,%zu,12.1src/sys/dev/mwl/mwldiag.h,109\n", sizeof(struct mwl_diag));
	// IODEV_PIO 12.1src/sys/dev/io/iodev.h:44
	 printf("IODEV_PIO,struct iodev_pio_req,%zu,12.1src/sys/dev/io/iodev.h,44\n", sizeof(struct iodev_pio_req));
	// IOAT_DMATEST 12.1src/sys/dev/ioat/ioat_test.h:88
	 printf("IOAT_DMATEST,struct ioat_test,%zu,12.1src/sys/dev/ioat/ioat_test.h,88\n", sizeof(struct ioat_test));
	// METEORCAPFRM 12.1src/sys/dev/bktr/ioctl_meteor.h:79
	 printf("METEORCAPFRM,struct meteor_capframe,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,79\n", sizeof(struct meteor_capframe));
	// METEORCAPTUR 12.1src/sys/dev/bktr/ioctl_meteor.h:78
	 printf("METEORCAPTUR,int,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,78\n", sizeof(int));
	// METEORGBRIG 12.1src/sys/dev/bktr/ioctl_meteor.h:100
	 printf("METEORGBRIG,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,100\n", sizeof(unsigned char));
	// METEORGBT254 12.1src/sys/dev/bktr/ioctl_meteor.h:106
	 printf("METEORGBT254,unsigned short,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,106\n", sizeof(unsigned short));
	// METEORGCHCV 12.1src/sys/dev/bktr/ioctl_meteor.h:90
	 printf("METEORGCHCV,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,90\n", sizeof(unsigned char));
	// METEORGCONT 12.1src/sys/dev/bktr/ioctl_meteor.h:104
	 printf("METEORGCONT,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,104\n", sizeof(unsigned char));
	// METEORGCOUNT 12.1src/sys/dev/bktr/ioctl_meteor.h:92
	 printf("METEORGCOUNT,struct meteor_counts,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,92\n", sizeof(struct meteor_counts));
	// METEORGCSAT 12.1src/sys/dev/bktr/ioctl_meteor.h:102
	 printf("METEORGCSAT,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,102\n", sizeof(unsigned char));
	// METEORGETGEO 12.1src/sys/dev/bktr/ioctl_meteor.h:81
	 printf("METEORGETGEO,struct meteor_geomet,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,81\n", sizeof(struct meteor_geomet));
	// METEORGFMT 12.1src/sys/dev/bktr/ioctl_meteor.h:86
	 printf("METEORGFMT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,86\n", sizeof(unsigned long));
	// METEORGFPS 12.1src/sys/dev/bktr/ioctl_meteor.h:94
	 printf("METEORGFPS,unsigned short,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,94\n", sizeof(unsigned short));
	// METEORGHUE 12.1src/sys/dev/bktr/ioctl_meteor.h:84
	 printf("METEORGHUE,signed char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,84\n", sizeof(signed char));
	// METEORGHWS 12.1src/sys/dev/bktr/ioctl_meteor.h:108
	 printf("METEORGHWS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,108\n", sizeof(unsigned char));
	// METEORGINPUT 12.1src/sys/dev/bktr/ioctl_meteor.h:88
	 printf("METEORGINPUT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,88\n", sizeof(unsigned long));
	// METEORGSIGNAL 12.1src/sys/dev/bktr/ioctl_meteor.h:96
	 printf("METEORGSIGNAL,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,96\n", sizeof(unsigned int));
	// METEORGTS 12.1src/sys/dev/bktr/ioctl_meteor.h:112
	 printf("METEORGTS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,112\n", sizeof(unsigned char));
	// METEORGVIDEO 12.1src/sys/dev/bktr/ioctl_meteor.h:98
	 printf("METEORGVIDEO,struct meteor_video,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,98\n", sizeof(struct meteor_video));
	// METEORGVWS 12.1src/sys/dev/bktr/ioctl_meteor.h:110
	 printf("METEORGVWS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,110\n", sizeof(unsigned char));
	// METEORSBRIG 12.1src/sys/dev/bktr/ioctl_meteor.h:99
	 printf("METEORSBRIG,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,99\n", sizeof(unsigned char));
	// METEORSBT254 12.1src/sys/dev/bktr/ioctl_meteor.h:105
	 printf("METEORSBT254,unsigned short,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,105\n", sizeof(unsigned short));
	// METEORSCHCV 12.1src/sys/dev/bktr/ioctl_meteor.h:89
	 printf("METEORSCHCV,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,89\n", sizeof(unsigned char));
	// METEORSCONT 12.1src/sys/dev/bktr/ioctl_meteor.h:103
	 printf("METEORSCONT,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,103\n", sizeof(unsigned char));
	// METEORSCOUNT 12.1src/sys/dev/bktr/ioctl_meteor.h:91
	 printf("METEORSCOUNT,struct meteor_counts,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,91\n", sizeof(struct meteor_counts));
	// METEORSCSAT 12.1src/sys/dev/bktr/ioctl_meteor.h:101
	 printf("METEORSCSAT,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,101\n", sizeof(unsigned char));
	// METEORSETGEO 12.1src/sys/dev/bktr/ioctl_meteor.h:80
	 printf("METEORSETGEO,struct meteor_geomet,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,80\n", sizeof(struct meteor_geomet));
	// METEORSFMT 12.1src/sys/dev/bktr/ioctl_meteor.h:85
	 printf("METEORSFMT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,85\n", sizeof(unsigned long));
	// METEORSFPS 12.1src/sys/dev/bktr/ioctl_meteor.h:93
	 printf("METEORSFPS,unsigned short,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,93\n", sizeof(unsigned short));
	// METEORSHUE 12.1src/sys/dev/bktr/ioctl_meteor.h:83
	 printf("METEORSHUE,signed char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,83\n", sizeof(signed char));
	// METEORSHWS 12.1src/sys/dev/bktr/ioctl_meteor.h:107
	 printf("METEORSHWS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,107\n", sizeof(unsigned char));
	// METEORSINPUT 12.1src/sys/dev/bktr/ioctl_meteor.h:87
	 printf("METEORSINPUT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,87\n", sizeof(unsigned long));
	// METEORSSIGNAL 12.1src/sys/dev/bktr/ioctl_meteor.h:95
	 printf("METEORSSIGNAL,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,95\n", sizeof(unsigned int));
	// METEORSTATUS 12.1src/sys/dev/bktr/ioctl_meteor.h:82
	 printf("METEORSTATUS,unsigned short,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,82\n", sizeof(unsigned short));
	// METEORSTS 12.1src/sys/dev/bktr/ioctl_meteor.h:111
	 printf("METEORSTS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,111\n", sizeof(unsigned char));
	// METEORSVIDEO 12.1src/sys/dev/bktr/ioctl_meteor.h:97
	 printf("METEORSVIDEO,struct meteor_video,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,97\n", sizeof(struct meteor_video));
	// METEORSVWS 12.1src/sys/dev/bktr/ioctl_meteor.h:109
	 printf("METEORSVWS,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_meteor.h,109\n", sizeof(unsigned char));
	// BT848GCBUF 12.1src/sys/dev/bktr/ioctl_bt848.h:235
	 printf("BT848GCBUF,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,235\n", sizeof(int));
	// BT848GCLIP 12.1src/sys/dev/bktr/ioctl_bt848.h:226
	 printf("BT848GCLIP,struct _bktr_clip,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,226\n", sizeof(struct _bktr_clip));
	// BT848GFMT 12.1src/sys/dev/bktr/ioctl_bt848.h:231
	 printf("BT848GFMT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,231\n", sizeof(unsigned long));
	// BT848SCBUF 12.1src/sys/dev/bktr/ioctl_bt848.h:234
	 printf("BT848SCBUF,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,234\n", sizeof(int));
	// BT848SCLIP 12.1src/sys/dev/bktr/ioctl_bt848.h:225
	 printf("BT848SCLIP,struct _bktr_clip,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,225\n", sizeof(struct _bktr_clip));
	// BT848SFMT 12.1src/sys/dev/bktr/ioctl_bt848.h:230
	 printf("BT848SFMT,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,230\n", sizeof(unsigned long));
	// BT848_CCBARS 12.1src/sys/dev/bktr/ioctl_bt848.h:125
	 printf("BT848_CCBARS,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,125\n", sizeof(int));
	// BT848_GAUDIO 12.1src/sys/dev/bktr/ioctl_bt848.h:129
	 printf("BT848_GAUDIO,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,129\n", sizeof(int));
	// BT848_GBRIG 12.1src/sys/dev/bktr/ioctl_bt848.h:114
	 printf("BT848_GBRIG,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,114\n", sizeof(int));
	// BT848_GCAPAREA 12.1src/sys/dev/bktr/ioctl_bt848.h:251
	 printf("BT848_GCAPAREA,struct bktr_capture_area,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,251\n", sizeof(struct bktr_capture_area));
	// BT848_GCONT 12.1src/sys/dev/bktr/ioctl_bt848.h:118
	 printf("BT848_GCONT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,118\n", sizeof(int));
	// BT848_GCSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:116
	 printf("BT848_GCSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,116\n", sizeof(int));
	// BT848_GHUE 12.1src/sys/dev/bktr/ioctl_bt848.h:112
	 printf("BT848_GHUE,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,112\n", sizeof(int));
	// BT848_GLNOTCH 12.1src/sys/dev/bktr/ioctl_bt848.h:142
	 printf("BT848_GLNOTCH,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,142\n", sizeof(int));
	// BT848_GPIO_GET_DATA 12.1src/sys/dev/bktr/ioctl_bt848.h:281
	 printf("BT848_GPIO_GET_DATA,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,281\n", sizeof(int));
	// BT848_GPIO_GET_EN 12.1src/sys/dev/bktr/ioctl_bt848.h:279
	 printf("BT848_GPIO_GET_EN,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,279\n", sizeof(int));
	// BT848_GPIO_SET_DATA 12.1src/sys/dev/bktr/ioctl_bt848.h:280
	 printf("BT848_GPIO_SET_DATA,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,280\n", sizeof(int));
	// BT848_GPIO_SET_EN 12.1src/sys/dev/bktr/ioctl_bt848.h:278
	 printf("BT848_GPIO_SET_EN,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,278\n", sizeof(int));
	// BT848_GSTATUS 12.1src/sys/dev/bktr/ioctl_bt848.h:132
	 printf("BT848_GSTATUS,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,132\n", sizeof(unsigned int));
	// BT848_GUSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:122
	 printf("BT848_GUSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,122\n", sizeof(int));
	// BT848_GVSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:120
	 printf("BT848_GVSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,120\n", sizeof(int));
	// BT848_I2CWR 12.1src/sys/dev/bktr/ioctl_bt848.h:150
	 printf("BT848_I2CWR,unsigned long,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,150\n", sizeof(unsigned long));
	// BT848_MSP_READ 12.1src/sys/dev/bktr/ioctl_bt848.h:159
	 printf("BT848_MSP_READ,struct bktr_msp_control,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,159\n", sizeof(struct bktr_msp_control));
	// BT848_MSP_WRITE 12.1src/sys/dev/bktr/ioctl_bt848.h:160
	 printf("BT848_MSP_WRITE,struct bktr_msp_control,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,160\n", sizeof(struct bktr_msp_control));
	// BT848_REEPROM 12.1src/sys/dev/bktr/ioctl_bt848.h:135
	 printf("BT848_REEPROM,struct eeProm,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,135\n", sizeof(struct eeProm));
	// BT848_SAUDIO 12.1src/sys/dev/bktr/ioctl_bt848.h:128
	 printf("BT848_SAUDIO,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,128\n", sizeof(int));
	// BT848_SBRIG 12.1src/sys/dev/bktr/ioctl_bt848.h:113
	 printf("BT848_SBRIG,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,113\n", sizeof(int));
	// BT848_SBTSC 12.1src/sys/dev/bktr/ioctl_bt848.h:130
	 printf("BT848_SBTSC,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,130\n", sizeof(int));
	// BT848_SCAPAREA 12.1src/sys/dev/bktr/ioctl_bt848.h:250
	 printf("BT848_SCAPAREA,struct bktr_capture_area,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,250\n", sizeof(struct bktr_capture_area));
	// BT848_SCBARS 12.1src/sys/dev/bktr/ioctl_bt848.h:124
	 printf("BT848_SCBARS,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,124\n", sizeof(int));
	// BT848_SCONT 12.1src/sys/dev/bktr/ioctl_bt848.h:117
	 printf("BT848_SCONT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,117\n", sizeof(int));
	// BT848_SCSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:115
	 printf("BT848_SCSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,115\n", sizeof(int));
	// BT848_SHUE 12.1src/sys/dev/bktr/ioctl_bt848.h:111
	 printf("BT848_SHUE,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,111\n", sizeof(int));
	// BT848_SIGNATURE 12.1src/sys/dev/bktr/ioctl_bt848.h:137
	 printf("BT848_SIGNATURE,struct eeProm,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,137\n", sizeof(struct eeProm));
	// BT848_SLNOTCH 12.1src/sys/dev/bktr/ioctl_bt848.h:141
	 printf("BT848_SLNOTCH,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,141\n", sizeof(int));
	// BT848_SUSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:121
	 printf("BT848_SUSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,121\n", sizeof(int));
	// BT848_SVSAT 12.1src/sys/dev/bktr/ioctl_bt848.h:119
	 printf("BT848_SVSAT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,119\n", sizeof(int));
	// BT848_WEEPROM 12.1src/sys/dev/bktr/ioctl_bt848.h:134
	 printf("BT848_WEEPROM,struct eeProm,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,134\n", sizeof(struct eeProm));
	// METEORGACTPIXFMT 12.1src/sys/dev/bktr/ioctl_bt848.h:221
	 printf("METEORGACTPIXFMT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,221\n", sizeof(int));
	// METEORGSUPPIXFMT 12.1src/sys/dev/bktr/ioctl_bt848.h:222
	 printf("METEORGSUPPIXFMT,struct meteor_pixfmt,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,222\n", sizeof(struct meteor_pixfmt));
	// METEORSACTPIXFMT 12.1src/sys/dev/bktr/ioctl_bt848.h:220
	 printf("METEORSACTPIXFMT,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,220\n", sizeof(int));
	// RADIO_GETFREQ 12.1src/sys/dev/bktr/ioctl_bt848.h:169
	 printf("RADIO_GETFREQ,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,169\n", sizeof(unsigned int));
	// RADIO_GETMODE 12.1src/sys/dev/bktr/ioctl_bt848.h:164
	 printf("RADIO_GETMODE,unsigned char,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,164\n", sizeof(unsigned char));
	// RADIO_SETFREQ 12.1src/sys/dev/bktr/ioctl_bt848.h:168
	 printf("RADIO_SETFREQ,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,168\n", sizeof(unsigned int));
	// RADIO_SETMODE 12.1src/sys/dev/bktr/ioctl_bt848.h:163
	 printf("RADIO_SETMODE,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,163\n", sizeof(unsigned int));
	// REMOTE_GETKEY 12.1src/sys/dev/bktr/ioctl_bt848.h:269
	 printf("REMOTE_GETKEY,struct bktr_remote,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,269\n", sizeof(struct bktr_remote));
	// TVTUNER_GETAFC 12.1src/sys/dev/bktr/ioctl_bt848.h:140
	 printf("TVTUNER_GETAFC,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,140\n", sizeof(int));
	// TVTUNER_GETCHNL 12.1src/sys/dev/bktr/ioctl_bt848.h:103
	 printf("TVTUNER_GETCHNL,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,103\n", sizeof(unsigned int));
	// TVTUNER_GETCHNLSET 12.1src/sys/dev/bktr/ioctl_bt848.h:261
	 printf("TVTUNER_GETCHNLSET,struct bktr_chnlset,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,261\n", sizeof(struct bktr_chnlset));
	// TVTUNER_GETFREQ 12.1src/sys/dev/bktr/ioctl_bt848.h:108
	 printf("TVTUNER_GETFREQ,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,108\n", sizeof(unsigned int));
	// TVTUNER_GETSTATUS 12.1src/sys/dev/bktr/ioctl_bt848.h:106
	 printf("TVTUNER_GETSTATUS,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,106\n", sizeof(unsigned int));
	// TVTUNER_GETTYPE 12.1src/sys/dev/bktr/ioctl_bt848.h:105
	 printf("TVTUNER_GETTYPE,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,105\n", sizeof(unsigned int));
	// TVTUNER_SETAFC 12.1src/sys/dev/bktr/ioctl_bt848.h:139
	 printf("TVTUNER_SETAFC,int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,139\n", sizeof(int));
	// TVTUNER_SETCHNL 12.1src/sys/dev/bktr/ioctl_bt848.h:102
	 printf("TVTUNER_SETCHNL,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,102\n", sizeof(unsigned int));
	// TVTUNER_SETFREQ 12.1src/sys/dev/bktr/ioctl_bt848.h:107
	 printf("TVTUNER_SETFREQ,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,107\n", sizeof(unsigned int));
	// TVTUNER_SETTYPE 12.1src/sys/dev/bktr/ioctl_bt848.h:104
	 printf("TVTUNER_SETTYPE,unsigned int,%zu,12.1src/sys/dev/bktr/ioctl_bt848.h,104\n", sizeof(unsigned int));
	// CCISS_GETBUSTYPES 12.1src/sys/dev/ciss/cissio.h:227
	 printf("CCISS_GETBUSTYPES,BusTypes_type,%zu,12.1src/sys/dev/ciss/cissio.h,227\n", sizeof(BusTypes_type));
	// CCISS_GETDRIVERVER 12.1src/sys/dev/ciss/cissio.h:229
	 printf("CCISS_GETDRIVERVER,DriverVer_type,%zu,12.1src/sys/dev/ciss/cissio.h,229\n", sizeof(DriverVer_type));
	// CCISS_GETFIRMVER 12.1src/sys/dev/ciss/cissio.h:228
	 printf("CCISS_GETFIRMVER,FirmwareVer_type,%zu,12.1src/sys/dev/ciss/cissio.h,228\n", sizeof(FirmwareVer_type));
	// CCISS_GETHEARTBEAT 12.1src/sys/dev/ciss/cissio.h:226
	 printf("CCISS_GETHEARTBEAT,Heartbeat_type,%zu,12.1src/sys/dev/ciss/cissio.h,226\n", sizeof(Heartbeat_type));
	// CCISS_GETINTINFO 12.1src/sys/dev/ciss/cissio.h:222
	 printf("CCISS_GETINTINFO,cciss_coalint_struct,%zu,12.1src/sys/dev/ciss/cissio.h,222\n", sizeof(cciss_coalint_struct));
	// CCISS_GETNODENAME 12.1src/sys/dev/ciss/cissio.h:224
	 printf("CCISS_GETNODENAME,NodeName_type,%zu,12.1src/sys/dev/ciss/cissio.h,224\n", sizeof(NodeName_type));
	// CCISS_GETPCIINFO 12.1src/sys/dev/ciss/cissio.h:221
	 printf("CCISS_GETPCIINFO,cciss_pci_info_struct,%zu,12.1src/sys/dev/ciss/cissio.h,221\n", sizeof(cciss_pci_info_struct));
	// CCISS_GETQSTATS 12.1src/sys/dev/ciss/cissio.h:235
	 printf("CCISS_GETQSTATS,union ciss_statrequest,%zu,12.1src/sys/dev/ciss/cissio.h,235\n", sizeof(union ciss_statrequest));
	// CCISS_PASSTHRU 12.1src/sys/dev/ciss/cissio.h:231
	 printf("CCISS_PASSTHRU,IOCTL_Command_struct,%zu,12.1src/sys/dev/ciss/cissio.h,231\n", sizeof(IOCTL_Command_struct));
	// CCISS_PASSTHRU32 12.1src/sys/dev/ciss/cissio.h:233
	 printf("CCISS_PASSTHRU32,IOCTL_Command_struct32,%zu,12.1src/sys/dev/ciss/cissio.h,233\n", sizeof(IOCTL_Command_struct32));
	// CCISS_SETINTINFO 12.1src/sys/dev/ciss/cissio.h:223
	 printf("CCISS_SETINTINFO,cciss_coalint_struct,%zu,12.1src/sys/dev/ciss/cissio.h,223\n", sizeof(cciss_coalint_struct));
	// CCISS_SETNODENAME 12.1src/sys/dev/ciss/cissio.h:225
	 printf("CCISS_SETNODENAME,NodeName_type,%zu,12.1src/sys/dev/ciss/cissio.h,225\n", sizeof(NodeName_type));
	// AMR_IO_COMMAND 12.1src/sys/dev/amr/amrio.h:111
	 printf("AMR_IO_COMMAND,struct amr_user_ioctl,%zu,12.1src/sys/dev/amr/amrio.h,111\n", sizeof(struct amr_user_ioctl));
	// AMR_IO_COMMAND32 12.1src/sys/dev/amr/amrio.h:123
	 printf("AMR_IO_COMMAND32,struct amr_user_ioctl32,%zu,12.1src/sys/dev/amr/amrio.h,123\n", sizeof(struct amr_user_ioctl32));
	// AMR_IO_VERSION 12.1src/sys/dev/amr/amrio.h:71
	 printf("AMR_IO_VERSION,int,%zu,12.1src/sys/dev/amr/amrio.h,71\n", sizeof(int));
	// ARCMSR_MESSAGE_CLEAR_ALLQBUFFER 12.1src/sys/dev/arcmsr/arcmsr.h:260
	 printf("ARCMSR_MESSAGE_CLEAR_ALLQBUFFER,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,260\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_CLEAR_RQBUFFER 12.1src/sys/dev/arcmsr/arcmsr.h:258
	 printf("ARCMSR_MESSAGE_CLEAR_RQBUFFER,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,258\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_CLEAR_WQBUFFER 12.1src/sys/dev/arcmsr/arcmsr.h:259
	 printf("ARCMSR_MESSAGE_CLEAR_WQBUFFER,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,259\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_FLUSH_ADAPTER_CACHE 12.1src/sys/dev/arcmsr/arcmsr.h:264
	 printf("ARCMSR_MESSAGE_FLUSH_ADAPTER_CACHE,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,264\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_READ_RQBUFFER 12.1src/sys/dev/arcmsr/arcmsr.h:256
	 printf("ARCMSR_MESSAGE_READ_RQBUFFER,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,256\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_REQUEST_RETURNCODE_3F 12.1src/sys/dev/arcmsr/arcmsr.h:261
	 printf("ARCMSR_MESSAGE_REQUEST_RETURNCODE_3F,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,261\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_SAY_GOODBYE 12.1src/sys/dev/arcmsr/arcmsr.h:263
	 printf("ARCMSR_MESSAGE_SAY_GOODBYE,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,263\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_SAY_HELLO 12.1src/sys/dev/arcmsr/arcmsr.h:262
	 printf("ARCMSR_MESSAGE_SAY_HELLO,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,262\n", sizeof(struct CMD_MESSAGE_FIELD));
	// ARCMSR_MESSAGE_WRITE_WQBUFFER 12.1src/sys/dev/arcmsr/arcmsr.h:257
	 printf("ARCMSR_MESSAGE_WRITE_WQBUFFER,struct CMD_MESSAGE_FIELD,%zu,12.1src/sys/dev/arcmsr/arcmsr.h,257\n", sizeof(struct CMD_MESSAGE_FIELD));
	// SIOCGIWNSTATS 12.1src/sys/dev/iwn/if_iwn_ioctl.h:27
	 printf("SIOCGIWNSTATS,struct iwn_ioctl_data,%zu,12.1src/sys/dev/iwn/if_iwn_ioctl.h,27\n", sizeof(struct iwn_ioctl_data));
	// SIOCZIWNSTATS 12.1src/sys/dev/iwn/if_iwn_ioctl.h:28
	 printf("SIOCZIWNSTATS,struct iwn_ioctl_data,%zu,12.1src/sys/dev/iwn/if_iwn_ioctl.h,28\n", sizeof(struct iwn_ioctl_data));
	// ISCSIGETCAM 12.1src/sys/dev/iscsi_initiator/iscsi.h:502
	 printf("ISCSIGETCAM,iscsi_cam_t,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,502\n", sizeof(iscsi_cam_t));
	// ISCSIGETOPT 12.1src/sys/dev/iscsi_initiator/iscsi.h:484
	 printf("ISCSIGETOPT,isc_opt_t,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,484\n", sizeof(isc_opt_t));
	// ISCSIRECV 12.1src/sys/dev/iscsi_initiator/iscsi.h:487
	 printf("ISCSIRECV,pdu_t,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,487\n", sizeof(pdu_t));
	// ISCSISEND 12.1src/sys/dev/iscsi_initiator/iscsi.h:486
	 printf("ISCSISEND,pdu_t,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,486\n", sizeof(pdu_t));
	// ISCSISETOPT 12.1src/sys/dev/iscsi_initiator/iscsi.h:483
	 printf("ISCSISETOPT,isc_opt_t,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,483\n", sizeof(isc_opt_t));
	// ISCSISETSES 12.1src/sys/dev/iscsi_initiator/iscsi.h:481
	 printf("ISCSISETSES,int,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,481\n", sizeof(int));
	// ISCSISETSOC 12.1src/sys/dev/iscsi_initiator/iscsi.h:482
	 printf("ISCSISETSOC,int,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,482\n", sizeof(int));
	// ISCSISIGNAL 12.1src/sys/dev/iscsi_initiator/iscsi.h:490
	 printf("ISCSISIGNAL,int *,%zu,12.1src/sys/dev/iscsi_initiator/iscsi.h,490\n", sizeof(int *));
	// QLA_ERASE_FLASH 12.1src/sys/dev/qlxgb/qla_ioctl.h:96
	 printf("QLA_ERASE_FLASH,qla_erase_flash_t,%zu,12.1src/sys/dev/qlxgb/qla_ioctl.h,96\n", sizeof(qla_erase_flash_t));
	// QLA_RDWR_REG 12.1src/sys/dev/qlxgb/qla_ioctl.h:81
	 printf("QLA_RDWR_REG,qla_reg_val_t,%zu,12.1src/sys/dev/qlxgb/qla_ioctl.h,81\n", sizeof(qla_reg_val_t));
	// QLA_RD_FLASH 12.1src/sys/dev/qlxgb/qla_ioctl.h:86
	 printf("QLA_RD_FLASH,qla_rd_flash_t,%zu,12.1src/sys/dev/qlxgb/qla_ioctl.h,86\n", sizeof(qla_rd_flash_t));
	// QLA_RD_PCI_IDS 12.1src/sys/dev/qlxgb/qla_ioctl.h:101
	 printf("QLA_RD_PCI_IDS,qla_rd_pci_ids_t,%zu,12.1src/sys/dev/qlxgb/qla_ioctl.h,101\n", sizeof(qla_rd_pci_ids_t));
	// QLA_WR_FLASH 12.1src/sys/dev/qlxgb/qla_ioctl.h:91
	 printf("QLA_WR_FLASH,qla_wr_flash_t,%zu,12.1src/sys/dev/qlxgb/qla_ioctl.h,91\n", sizeof(qla_wr_flash_t));
	// MRSAS_IOC_FIRMWARE_PASS_THROUGH32 12.1src/sys/dev/mrsas/mrsas_ioctl.h:71
	 printf("MRSAS_IOC_FIRMWARE_PASS_THROUGH32,struct mrsas_iocpacket32,%zu,12.1src/sys/dev/mrsas/mrsas_ioctl.h,71\n", sizeof(struct mrsas_iocpacket32));
	// MRSAS_IOC_FIRMWARE_PASS_THROUGH64 12.1src/sys/dev/mrsas/mrsas_ioctl.h:69
	 printf("MRSAS_IOC_FIRMWARE_PASS_THROUGH64,struct mrsas_iocpacket,%zu,12.1src/sys/dev/mrsas/mrsas_ioctl.h,69\n", sizeof(struct mrsas_iocpacket));
	// BXE_DEV_SETTING 12.1src/sys/dev/bxe/bxe_ioctl.h:144
	 printf("BXE_DEV_SETTING,bxe_dev_setting_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,144\n", sizeof(bxe_dev_setting_t));
	// BXE_DRV_INFO 12.1src/sys/dev/bxe/bxe_ioctl.h:139
	 printf("BXE_DRV_INFO,bxe_drvinfo_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,139\n", sizeof(bxe_drvinfo_t));
	// BXE_EEPROM 12.1src/sys/dev/bxe/bxe_ioctl.h:154
	 printf("BXE_EEPROM,bxe_eeprom_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,154\n", sizeof(bxe_eeprom_t));
	// BXE_GET_REGS 12.1src/sys/dev/bxe/bxe_ioctl.h:149
	 printf("BXE_GET_REGS,bxe_get_regs_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,149\n", sizeof(bxe_get_regs_t));
	// BXE_GRC_DUMP 12.1src/sys/dev/bxe/bxe_ioctl.h:134
	 printf("BXE_GRC_DUMP,bxe_grcdump_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,134\n", sizeof(bxe_grcdump_t));
	// BXE_GRC_DUMP_SIZE 12.1src/sys/dev/bxe/bxe_ioctl.h:129
	 printf("BXE_GRC_DUMP_SIZE,bxe_grcdump_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,129\n", sizeof(bxe_grcdump_t));
	// BXE_MAC_ADDR 12.1src/sys/dev/bxe/bxe_ioctl.h:170
	 printf("BXE_MAC_ADDR,bxe_perm_mac_addr_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,170\n", sizeof(bxe_perm_mac_addr_t));
	// BXE_RDW_PCICFG 12.1src/sys/dev/bxe/bxe_ioctl.h:164
	 printf("BXE_RDW_PCICFG,bxe_reg_rdw_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,164\n", sizeof(bxe_reg_rdw_t));
	// BXE_RDW_REG 12.1src/sys/dev/bxe/bxe_ioctl.h:159
	 printf("BXE_RDW_REG,bxe_reg_rdw_t,%zu,12.1src/sys/dev/bxe/bxe_ioctl.h,159\n", sizeof(bxe_reg_rdw_t));
	// MLXD_CHECKASYNC 12.1src/sys/dev/mlx/mlxio.h:43
	 printf("MLXD_CHECKASYNC,int,%zu,12.1src/sys/dev/mlx/mlxio.h,43\n", sizeof(int));
	// MLXD_STATUS 12.1src/sys/dev/mlx/mlxio.h:42
	 printf("MLXD_STATUS,int,%zu,12.1src/sys/dev/mlx/mlxio.h,42\n", sizeof(int));
	// MLX_COMMAND 12.1src/sys/dev/mlx/mlxio.h:96
	 printf("MLX_COMMAND,struct mlx_usercommand,%zu,12.1src/sys/dev/mlx/mlxio.h,96\n", sizeof(struct mlx_usercommand));
	// MLX_DETACH_DRIVE 12.1src/sys/dev/mlx/mlxio.h:94
	 printf("MLX_DETACH_DRIVE,int,%zu,12.1src/sys/dev/mlx/mlxio.h,94\n", sizeof(int));
	// MLX_GET_SYSDRIVE 12.1src/sys/dev/mlx/mlxio.h:99
	 printf("MLX_GET_SYSDRIVE,int,%zu,12.1src/sys/dev/mlx/mlxio.h,99\n", sizeof(int));
	// MLX_NEXT_CHILD 12.1src/sys/dev/mlx/mlxio.h:92
	 printf("MLX_NEXT_CHILD,int,%zu,12.1src/sys/dev/mlx/mlxio.h,92\n", sizeof(int));
	// MLX_PAUSE_CHANNEL 12.1src/sys/dev/mlx/mlxio.h:95
	 printf("MLX_PAUSE_CHANNEL,struct mlx_pause,%zu,12.1src/sys/dev/mlx/mlxio.h,95\n", sizeof(struct mlx_pause));
	// MLX_REBUILDASYNC 12.1src/sys/dev/mlx/mlxio.h:97
	 printf("MLX_REBUILDASYNC,struct mlx_rebuild_request,%zu,12.1src/sys/dev/mlx/mlxio.h,97\n", sizeof(struct mlx_rebuild_request));
	// MLX_REBUILDSTAT 12.1src/sys/dev/mlx/mlxio.h:98
	 printf("MLX_REBUILDSTAT,struct mlx_rebuild_status,%zu,12.1src/sys/dev/mlx/mlxio.h,98\n", sizeof(struct mlx_rebuild_status));
	// MLX5_EEPROM_GET 12.1src/sys/dev/mlx5/mlx5io.h:70
	 printf("MLX5_EEPROM_GET,struct mlx5_eeprom_get,%zu,12.1src/sys/dev/mlx5/mlx5io.h,70\n", sizeof(struct mlx5_eeprom_get));
	// MLX5_FPGA_CAP 12.1src/sys/dev/mlx5/mlx5io.h:152
	 printf("MLX5_FPGA_CAP,uint32_t [ MLX5_FPGA_CAP_ARR_SZ ],%zu,12.1src/sys/dev/mlx5/mlx5io.h,152\n", sizeof(uint32_t [ MLX5_FPGA_CAP_ARR_SZ ]));
	// MLX5_FPGA_CONNECT 12.1src/sys/dev/mlx5/mlx5io.h:154
	 printf("MLX5_FPGA_CONNECT,enum mlx5_fpga_connect,%zu,12.1src/sys/dev/mlx5/mlx5io.h,154\n", sizeof(enum mlx5_fpga_connect));
	// MLX5_FPGA_QUERY 12.1src/sys/dev/mlx5/mlx5io.h:151
	 printf("MLX5_FPGA_QUERY,struct mlx5_fpga_query,%zu,12.1src/sys/dev/mlx5/mlx5io.h,151\n", sizeof(struct mlx5_fpga_query));
	// MLX5_FPGA_TEMPERATURE 12.1src/sys/dev/mlx5/mlx5io.h:153
	 printf("MLX5_FPGA_TEMPERATURE,struct mlx5_fpga_temperature,%zu,12.1src/sys/dev/mlx5/mlx5io.h,153\n", sizeof(struct mlx5_fpga_temperature));
	// MLX5_FWDUMP_FORCE 12.1src/sys/dev/mlx5/mlx5io.h:67
	 printf("MLX5_FWDUMP_FORCE,struct mlx5_tool_addr,%zu,12.1src/sys/dev/mlx5/mlx5io.h,67\n", sizeof(struct mlx5_tool_addr));
	// MLX5_FWDUMP_GET 12.1src/sys/dev/mlx5/mlx5io.h:65
	 printf("MLX5_FWDUMP_GET,struct mlx5_fwdump_get,%zu,12.1src/sys/dev/mlx5/mlx5io.h,65\n", sizeof(struct mlx5_fwdump_get));
	// MLX5_FWDUMP_RESET 12.1src/sys/dev/mlx5/mlx5io.h:66
	 printf("MLX5_FWDUMP_RESET,struct mlx5_tool_addr,%zu,12.1src/sys/dev/mlx5/mlx5io.h,66\n", sizeof(struct mlx5_tool_addr));
	// MLX5_FW_RESET 12.1src/sys/dev/mlx5/mlx5io.h:69
	 printf("MLX5_FW_RESET,struct mlx5_tool_addr,%zu,12.1src/sys/dev/mlx5/mlx5io.h,69\n", sizeof(struct mlx5_tool_addr));
	// MLX5_FW_UPDATE 12.1src/sys/dev/mlx5/mlx5io.h:68
	 printf("MLX5_FW_UPDATE,struct mlx5_fw_update,%zu,12.1src/sys/dev/mlx5/mlx5io.h,68\n", sizeof(struct mlx5_fw_update));
	// ISCSIDCONNECT 12.1src/sys/dev/iscsi/iscsi_ioctl.h:201
	 printf("ISCSIDCONNECT,struct iscsi_daemon_connect,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,201\n", sizeof(struct iscsi_daemon_connect));
	// ISCSIDFAIL 12.1src/sys/dev/iscsi/iscsi_ioctl.h:149
	 printf("ISCSIDFAIL,struct iscsi_daemon_fail,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,149\n", sizeof(struct iscsi_daemon_fail));
	// ISCSIDHANDOFF 12.1src/sys/dev/iscsi/iscsi_ioctl.h:148
	 printf("ISCSIDHANDOFF,struct iscsi_daemon_handoff,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,148\n", sizeof(struct iscsi_daemon_handoff));
	// ISCSIDRECEIVE 12.1src/sys/dev/iscsi/iscsi_ioctl.h:203
	 printf("ISCSIDRECEIVE,struct iscsi_daemon_receive,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,203\n", sizeof(struct iscsi_daemon_receive));
	// ISCSIDSEND 12.1src/sys/dev/iscsi/iscsi_ioctl.h:202
	 printf("ISCSIDSEND,struct iscsi_daemon_send,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,202\n", sizeof(struct iscsi_daemon_send));
	// ISCSIDWAIT 12.1src/sys/dev/iscsi/iscsi_ioctl.h:147
	 printf("ISCSIDWAIT,struct iscsi_daemon_request,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,147\n", sizeof(struct iscsi_daemon_request));
	// ISCSISADD 12.1src/sys/dev/iscsi/iscsi_ioctl.h:233
	 printf("ISCSISADD,struct iscsi_session_add,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,233\n", sizeof(struct iscsi_session_add));
	// ISCSISLIST 12.1src/sys/dev/iscsi/iscsi_ioctl.h:235
	 printf("ISCSISLIST,struct iscsi_session_list,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,235\n", sizeof(struct iscsi_session_list));
	// ISCSISMODIFY 12.1src/sys/dev/iscsi/iscsi_ioctl.h:236
	 printf("ISCSISMODIFY,struct iscsi_session_modify,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,236\n", sizeof(struct iscsi_session_modify));
	// ISCSISREMOVE 12.1src/sys/dev/iscsi/iscsi_ioctl.h:234
	 printf("ISCSISREMOVE,struct iscsi_session_remove,%zu,12.1src/sys/dev/iscsi/iscsi_ioctl.h,234\n", sizeof(struct iscsi_session_remove));
	// UI_ABS_SETUP 12.1src/sys/dev/evdev/uinput.h:71
	 printf("UI_ABS_SETUP,struct uinput_abs_setup,%zu,12.1src/sys/dev/evdev/uinput.h,71\n", sizeof(struct uinput_abs_setup));
	// UI_BEGIN_FF_ERASE 12.1src/sys/dev/evdev/uinput.h:90
	 printf("UI_BEGIN_FF_ERASE,struct uinput_ff_erase,%zu,12.1src/sys/dev/evdev/uinput.h,90\n", sizeof(struct uinput_ff_erase));
	// UI_BEGIN_FF_UPLOAD 12.1src/sys/dev/evdev/uinput.h:88
	 printf("UI_BEGIN_FF_UPLOAD,struct uinput_ff_upload,%zu,12.1src/sys/dev/evdev/uinput.h,88\n", sizeof(struct uinput_ff_upload));
	// UI_DEV_SETUP 12.1src/sys/dev/evdev/uinput.h:64
	 printf("UI_DEV_SETUP,struct uinput_setup,%zu,12.1src/sys/dev/evdev/uinput.h,64\n", sizeof(struct uinput_setup));
	// UI_END_FF_ERASE 12.1src/sys/dev/evdev/uinput.h:91
	 printf("UI_END_FF_ERASE,struct uinput_ff_erase,%zu,12.1src/sys/dev/evdev/uinput.h,91\n", sizeof(struct uinput_ff_erase));
	// UI_END_FF_UPLOAD 12.1src/sys/dev/evdev/uinput.h:89
	 printf("UI_END_FF_UPLOAD,struct uinput_ff_upload,%zu,12.1src/sys/dev/evdev/uinput.h,89\n", sizeof(struct uinput_ff_upload));
	// UI_GET_VERSION 12.1src/sys/dev/evdev/uinput.h:74
	 printf("UI_GET_VERSION,unsigned int,%zu,12.1src/sys/dev/evdev/uinput.h,74\n", sizeof(unsigned int));
	// EVIOCGEFFECTS 12.1src/sys/dev/evdev/input.h:108
	 printf("EVIOCGEFFECTS,int,%zu,12.1src/sys/dev/evdev/input.h,108\n", sizeof(int));
	// EVIOCGID 12.1src/sys/dev/evdev/input.h:81
	 printf("EVIOCGID,struct input_id,%zu,12.1src/sys/dev/evdev/input.h,81\n", sizeof(struct input_id));
	// EVIOCGKEYCODE 12.1src/sys/dev/evdev/input.h:85
	 printf("EVIOCGKEYCODE,unsigned int [ 2 ],%zu,12.1src/sys/dev/evdev/input.h,85\n", sizeof(unsigned int [ 2 ]));
	// EVIOCGKEYCODE_V2 12.1src/sys/dev/evdev/input.h:86
	 printf("EVIOCGKEYCODE_V2,struct input_keymap_entry,%zu,12.1src/sys/dev/evdev/input.h,86\n", sizeof(struct input_keymap_entry));
	// EVIOCGREP 12.1src/sys/dev/evdev/input.h:82
	 printf("EVIOCGREP,unsigned int [ 2 ],%zu,12.1src/sys/dev/evdev/input.h,82\n", sizeof(unsigned int [ 2 ]));
	// EVIOCGVERSION 12.1src/sys/dev/evdev/input.h:80
	 printf("EVIOCGVERSION,int,%zu,12.1src/sys/dev/evdev/input.h,80\n", sizeof(int));
	// EVIOCSCLOCKID 12.1src/sys/dev/evdev/input.h:113
	 printf("EVIOCSCLOCKID,int,%zu,12.1src/sys/dev/evdev/input.h,113\n", sizeof(int));
	// EVIOCSFF 12.1src/sys/dev/evdev/input.h:106
	 printf("EVIOCSFF,struct ff_effect,%zu,12.1src/sys/dev/evdev/input.h,106\n", sizeof(struct ff_effect));
	// EVIOCSKEYCODE 12.1src/sys/dev/evdev/input.h:87
	 printf("EVIOCSKEYCODE,unsigned int [ 2 ],%zu,12.1src/sys/dev/evdev/input.h,87\n", sizeof(unsigned int [ 2 ]));
	// EVIOCSKEYCODE_V2 12.1src/sys/dev/evdev/input.h:88
	 printf("EVIOCSKEYCODE_V2,struct input_keymap_entry,%zu,12.1src/sys/dev/evdev/input.h,88\n", sizeof(struct input_keymap_entry));
	// EVIOCSREP 12.1src/sys/dev/evdev/input.h:83
	 printf("EVIOCSREP,unsigned int [ 2 ],%zu,12.1src/sys/dev/evdev/input.h,83\n", sizeof(unsigned int [ 2 ]));
	// MPRIO_MPR_COMMAND 12.1src/sys/dev/mpr/mpr_ioctl.h:364
	 printf("MPRIO_MPR_COMMAND,struct mpr_usr_command,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,364\n", sizeof(struct mpr_usr_command));
	// MPRIO_RAID_ACTION 12.1src/sys/dev/mpr/mpr_ioctl.h:363
	 printf("MPRIO_RAID_ACTION,struct mpr_raid_action,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,363\n", sizeof(struct mpr_raid_action));
	// MPRIO_READ_CFG_HEADER 12.1src/sys/dev/mpr/mpr_ioctl.h:358
	 printf("MPRIO_READ_CFG_HEADER,struct mpr_cfg_page_req,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,358\n", sizeof(struct mpr_cfg_page_req));
	// MPRIO_READ_CFG_PAGE 12.1src/sys/dev/mpr/mpr_ioctl.h:359
	 printf("MPRIO_READ_CFG_PAGE,struct mpr_cfg_page_req,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,359\n", sizeof(struct mpr_cfg_page_req));
	// MPRIO_READ_EXT_CFG_HEADER 12.1src/sys/dev/mpr/mpr_ioctl.h:360
	 printf("MPRIO_READ_EXT_CFG_HEADER,struct mpr_ext_cfg_page_req,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,360\n", sizeof(struct mpr_ext_cfg_page_req));
	// MPRIO_READ_EXT_CFG_PAGE 12.1src/sys/dev/mpr/mpr_ioctl.h:361
	 printf("MPRIO_READ_EXT_CFG_PAGE,struct mpr_ext_cfg_page_req,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,361\n", sizeof(struct mpr_ext_cfg_page_req));
	// MPRIO_WRITE_CFG_PAGE 12.1src/sys/dev/mpr/mpr_ioctl.h:362
	 printf("MPRIO_WRITE_CFG_PAGE,struct mpr_cfg_page_req,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,362\n", sizeof(struct mpr_cfg_page_req));
	// MPTIOCTL_BTDH_MAPPING 12.1src/sys/dev/mpr/mpr_ioctl.h:387
	 printf("MPTIOCTL_BTDH_MAPPING,struct mpr_btdh_mapping,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,387\n", sizeof(struct mpr_btdh_mapping));
	// MPTIOCTL_DIAG_ACTION 12.1src/sys/dev/mpr/mpr_ioctl.h:383
	 printf("MPTIOCTL_DIAG_ACTION,struct mpr_diag_action,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,383\n", sizeof(struct mpr_diag_action));
	// MPTIOCTL_EVENT_ENABLE 12.1src/sys/dev/mpr/mpr_ioctl.h:377
	 printf("MPTIOCTL_EVENT_ENABLE,struct mpr_event_enable,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,377\n", sizeof(struct mpr_event_enable));
	// MPTIOCTL_EVENT_QUERY 12.1src/sys/dev/mpr/mpr_ioctl.h:375
	 printf("MPTIOCTL_EVENT_QUERY,struct mpr_event_query,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,375\n", sizeof(struct mpr_event_query));
	// MPTIOCTL_EVENT_REPORT 12.1src/sys/dev/mpr/mpr_ioctl.h:379
	 printf("MPTIOCTL_EVENT_REPORT,struct mpr_event_report,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,379\n", sizeof(struct mpr_event_report));
	// MPTIOCTL_GET_ADAPTER_DATA 12.1src/sys/dev/mpr/mpr_ioctl.h:368
	 printf("MPTIOCTL_GET_ADAPTER_DATA,struct mpr_adapter_data,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,368\n", sizeof(struct mpr_adapter_data));
	// MPTIOCTL_GET_PCI_INFO 12.1src/sys/dev/mpr/mpr_ioctl.h:381
	 printf("MPTIOCTL_GET_PCI_INFO,struct mpr_pci_info,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,381\n", sizeof(struct mpr_pci_info));
	// MPTIOCTL_PASS_THRU 12.1src/sys/dev/mpr/mpr_ioctl.h:373
	 printf("MPTIOCTL_PASS_THRU,struct mpr_pass_thru,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,373\n", sizeof(struct mpr_pass_thru));
	// MPTIOCTL_REG_ACCESS 12.1src/sys/dev/mpr/mpr_ioctl.h:385
	 printf("MPTIOCTL_REG_ACCESS,struct mpr_reg_access,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,385\n", sizeof(struct mpr_reg_access));
	// MPTIOCTL_UPDATE_FLASH 12.1src/sys/dev/mpr/mpr_ioctl.h:370
	 printf("MPTIOCTL_UPDATE_FLASH,struct mpr_update_flash,%zu,12.1src/sys/dev/mpr/mpr_ioctl.h,370\n", sizeof(struct mpr_update_flash));
	// SIOCGPRISM2DEBUG 12.1src/sys/dev/wi/if_wavelan_ieee.h:737
	 printf("SIOCGPRISM2DEBUG,struct ifreq,%zu,12.1src/sys/dev/wi/if_wavelan_ieee.h,737\n", sizeof(struct ifreq));
	// SIOCSPRISM2DEBUG 12.1src/sys/dev/wi/if_wavelan_ieee.h:736
	 printf("SIOCSPRISM2DEBUG,struct ifreq,%zu,12.1src/sys/dev/wi/if_wavelan_ieee.h,736\n", sizeof(struct ifreq));

	return (0);
}
