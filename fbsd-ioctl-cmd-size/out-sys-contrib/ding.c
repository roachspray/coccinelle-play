
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

	// VCHIQ_IOC_AWAIT_COMPLETION 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:113
	 printf("VCHIQ_IOC_AWAIT_COMPLETION,VCHIQ_AWAIT_COMPLETION_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,113\n", sizeof(VCHIQ_AWAIT_COMPLETION_T));
	// VCHIQ_IOC_CREATE_SERVICE 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:104
	 printf("VCHIQ_IOC_CREATE_SERVICE,VCHIQ_CREATE_SERVICE_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,104\n", sizeof(VCHIQ_CREATE_SERVICE_T));
	// VCHIQ_IOC_DEQUEUE_MESSAGE 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:115
	 printf("VCHIQ_IOC_DEQUEUE_MESSAGE,VCHIQ_DEQUEUE_MESSAGE_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,115\n", sizeof(VCHIQ_DEQUEUE_MESSAGE_T));
	// VCHIQ_IOC_DUMP_PHYS_MEM 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:125
	 printf("VCHIQ_IOC_DUMP_PHYS_MEM,VCHIQ_DUMP_MEM_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,125\n", sizeof(VCHIQ_DUMP_MEM_T));
	// VCHIQ_IOC_GET_CONFIG 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:118
	 printf("VCHIQ_IOC_GET_CONFIG,VCHIQ_GET_CONFIG_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,118\n", sizeof(VCHIQ_GET_CONFIG_T));
	// VCHIQ_IOC_QUEUE_BULK_RECEIVE 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:111
	 printf("VCHIQ_IOC_QUEUE_BULK_RECEIVE,VCHIQ_QUEUE_BULK_TRANSFER_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,111\n", sizeof(VCHIQ_QUEUE_BULK_TRANSFER_T));
	// VCHIQ_IOC_QUEUE_BULK_TRANSMIT 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:109
	 printf("VCHIQ_IOC_QUEUE_BULK_TRANSMIT,VCHIQ_QUEUE_BULK_TRANSFER_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,109\n", sizeof(VCHIQ_QUEUE_BULK_TRANSFER_T));
	// VCHIQ_IOC_QUEUE_MESSAGE 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:107
	 printf("VCHIQ_IOC_QUEUE_MESSAGE,VCHIQ_QUEUE_MESSAGE_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,107\n", sizeof(VCHIQ_QUEUE_MESSAGE_T));
	// VCHIQ_IOC_SET_SERVICE_OPTION 12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h:123
	 printf("VCHIQ_IOC_SET_SERVICE_OPTION,VCHIQ_SET_SERVICE_OPTION_T,%zu,12.1src/sys/contrib/vchiq/interface/vchiq_arm/vchiq_ioctl.h,123\n", sizeof(VCHIQ_SET_SERVICE_OPTION_T));
	// SIOCADNAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:25
	 printf("SIOCADNAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,25\n", sizeof(struct ipfobj));
	// SIOCADNAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:31
	 printf("SIOCADNAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,31\n", sizeof(struct ipfobj));
	// SIOCGNATL 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:28
	 printf("SIOCGNATL,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,28\n", sizeof(struct ipfobj));
	// SIOCGNATL 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:34
	 printf("SIOCGNATL,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,34\n", sizeof(struct ipfobj));
	// SIOCGNATS 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:27
	 printf("SIOCGNATS,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,27\n", sizeof(struct ipfobj));
	// SIOCGNATS 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:33
	 printf("SIOCGNATS,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,33\n", sizeof(struct ipfobj));
	// SIOCPURGENAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:29
	 printf("SIOCPURGENAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,29\n", sizeof(struct ipfobj));
	// SIOCPURGENAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:35
	 printf("SIOCPURGENAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,35\n", sizeof(struct ipfobj));
	// SIOCRMNAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:26
	 printf("SIOCRMNAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,26\n", sizeof(struct ipfobj));
	// SIOCRMNAT 12.1src/sys/contrib/ipfilter/netinet/ip_nat.h:32
	 printf("SIOCRMNAT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_nat.h,32\n", sizeof(struct ipfobj));
	// SIOCADAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:42
	 printf("SIOCADAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,42\n", sizeof(struct ipfobj));
	// SIOCADAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:82
	 printf("SIOCADAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,82\n", sizeof(struct ipfobj));
	// SIOCADIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:49
	 printf("SIOCADIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,49\n", sizeof(struct ipfobj));
	// SIOCADIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:89
	 printf("SIOCADIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,89\n", sizeof(struct ipfobj));
	// SIOCAUTHR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:59
	 printf("SIOCAUTHR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,59\n", sizeof(struct ipfobj));
	// SIOCAUTHR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:99
	 printf("SIOCAUTHR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,99\n", sizeof(struct ipfobj));
	// SIOCAUTHW 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:58
	 printf("SIOCAUTHW,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,58\n", sizeof(struct ipfobj));
	// SIOCAUTHW 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:98
	 printf("SIOCAUTHW,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,98\n", sizeof(struct ipfobj));
	// SIOCFRZST 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:56
	 printf("SIOCFRZST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,56\n", sizeof(struct ipfobj));
	// SIOCFRZST 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:96
	 printf("SIOCFRZST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,96\n", sizeof(struct ipfobj));
	// SIOCFUNCL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:68
	 printf("SIOCFUNCL,struct ipfunc_resolve,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,68\n", sizeof(struct ipfunc_resolve));
	// SIOCFUNCL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:108
	 printf("SIOCFUNCL,struct ipfunc_resolve,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,108\n", sizeof(struct ipfunc_resolve));
	// SIOCGENITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:74
	 printf("SIOCGENITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,74\n", sizeof(struct ipfobj));
	// SIOCGENITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:114
	 printf("SIOCGENITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,114\n", sizeof(struct ipfobj));
	// SIOCGETFS 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:46
	 printf("SIOCGETFS,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,46\n", sizeof(struct ipfobj));
	// SIOCGETFS 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:86
	 printf("SIOCGETFS,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,86\n", sizeof(struct ipfobj));
	// SIOCGETLG 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:67
	 printf("SIOCGETLG,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,67\n", sizeof(int));
	// SIOCGETLG 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:107
	 printf("SIOCGETLG,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,107\n", sizeof(int));
	// SIOCGTABL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:75
	 printf("SIOCGTABL,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,75\n", sizeof(struct ipfobj));
	// SIOCGTABL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:115
	 printf("SIOCGTABL,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,115\n", sizeof(struct ipfobj));
	// SIOCGTQTAB 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:78
	 printf("SIOCGTQTAB,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,78\n", sizeof(struct ipfobj));
	// SIOCGTQTAB 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:118
	 printf("SIOCGTQTAB,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,118\n", sizeof(struct ipfobj));
	// SIOCINAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:52
	 printf("SIOCINAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,52\n", sizeof(struct ipfobj));
	// SIOCINAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:92
	 printf("SIOCINAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,92\n", sizeof(struct ipfobj));
	// SIOCINIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:53
	 printf("SIOCINIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,53\n", sizeof(struct ipfobj));
	// SIOCINIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:93
	 printf("SIOCINIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,93\n", sizeof(struct ipfobj));
	// SIOCIPFDELTOK 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:76
	 printf("SIOCIPFDELTOK,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,76\n", sizeof(int));
	// SIOCIPFDELTOK 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:116
	 printf("SIOCIPFDELTOK,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,116\n", sizeof(int));
	// SIOCIPFFB 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:48
	 printf("SIOCIPFFB,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,48\n", sizeof(int));
	// SIOCIPFFB 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:88
	 printf("SIOCIPFFB,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,88\n", sizeof(int));
	// SIOCIPFFL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:47
	 printf("SIOCIPFFL,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,47\n", sizeof(int));
	// SIOCIPFFL 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:87
	 printf("SIOCIPFFL,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,87\n", sizeof(int));
	// SIOCIPFGET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:70
	 printf("SIOCIPFGET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,70\n", sizeof(struct ipfobj));
	// SIOCIPFGET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:110
	 printf("SIOCIPFGET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,110\n", sizeof(struct ipfobj));
	// SIOCIPFGETNEXT 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:69
	 printf("SIOCIPFGETNEXT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,69\n", sizeof(struct ipfobj));
	// SIOCIPFGETNEXT 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:109
	 printf("SIOCIPFGETNEXT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,109\n", sizeof(struct ipfobj));
	// SIOCIPFINTERROR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:80
	 printf("SIOCIPFINTERROR,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,80\n", sizeof(int));
	// SIOCIPFINTERROR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:120
	 printf("SIOCIPFINTERROR,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,120\n", sizeof(int));
	// SIOCIPFITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:73
	 printf("SIOCIPFITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,73\n", sizeof(struct ipfobj));
	// SIOCIPFITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:113
	 printf("SIOCIPFITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,113\n", sizeof(struct ipfobj));
	// SIOCIPFL6 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:72
	 printf("SIOCIPFL6,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,72\n", sizeof(int));
	// SIOCIPFL6 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:112
	 printf("SIOCIPFL6,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,112\n", sizeof(int));
	// SIOCIPFSET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:71
	 printf("SIOCIPFSET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,71\n", sizeof(struct ipfobj));
	// SIOCIPFSET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:111
	 printf("SIOCIPFSET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,111\n", sizeof(struct ipfobj));
	// SIOCLOOKUPITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:77
	 printf("SIOCLOOKUPITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,77\n", sizeof(struct ipfobj));
	// SIOCLOOKUPITER 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:117
	 printf("SIOCLOOKUPITER,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,117\n", sizeof(struct ipfobj));
	// SIOCMATCHFLUSH 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:79
	 printf("SIOCMATCHFLUSH,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,79\n", sizeof(struct ipfobj));
	// SIOCMATCHFLUSH 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:119
	 printf("SIOCMATCHFLUSH,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,119\n", sizeof(struct ipfobj));
	// SIOCRMAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:43
	 printf("SIOCRMAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,43\n", sizeof(struct ipfobj));
	// SIOCRMAFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:83
	 printf("SIOCRMAFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,83\n", sizeof(struct ipfobj));
	// SIOCRMIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:50
	 printf("SIOCRMIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,50\n", sizeof(struct ipfobj));
	// SIOCRMIFR 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:90
	 printf("SIOCRMIFR,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,90\n", sizeof(struct ipfobj));
	// SIOCSETLG 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:66
	 printf("SIOCSETLG,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,66\n", sizeof(int));
	// SIOCSETLG 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:106
	 printf("SIOCSETLG,int,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,106\n", sizeof(int));
	// SIOCSTAT1 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:60
	 printf("SIOCSTAT1,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,60\n", sizeof(struct ipfobj));
	// SIOCSTAT1 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:100
	 printf("SIOCSTAT1,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,100\n", sizeof(struct ipfobj));
	// SIOCSTAT2 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:65
	 printf("SIOCSTAT2,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,65\n", sizeof(struct ipfobj));
	// SIOCSTAT2 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:105
	 printf("SIOCSTAT2,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,105\n", sizeof(struct ipfobj));
	// SIOCSTGET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:63
	 printf("SIOCSTGET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,63\n", sizeof(struct ipfobj));
	// SIOCSTGET 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:103
	 printf("SIOCSTGET,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,103\n", sizeof(struct ipfobj));
	// SIOCSTGSZ 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:64
	 printf("SIOCSTGSZ,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,64\n", sizeof(struct ipfobj));
	// SIOCSTGSZ 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:104
	 printf("SIOCSTGSZ,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,104\n", sizeof(struct ipfobj));
	// SIOCSTPUT 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:62
	 printf("SIOCSTPUT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,62\n", sizeof(struct ipfobj));
	// SIOCSTPUT 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:102
	 printf("SIOCSTPUT,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,102\n", sizeof(struct ipfobj));
	// SIOCZRLST 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:57
	 printf("SIOCZRLST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,57\n", sizeof(struct ipfobj));
	// SIOCZRLST 12.1src/sys/contrib/ipfilter/netinet/ip_fil.h:97
	 printf("SIOCZRLST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_fil.h,97\n", sizeof(struct ipfobj));
	// SIOCDELST 12.1src/sys/contrib/ipfilter/netinet/ip_state.h:16
	 printf("SIOCDELST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_state.h,16\n", sizeof(struct ipfobj));
	// SIOCDELST 12.1src/sys/contrib/ipfilter/netinet/ip_state.h:18
	 printf("SIOCDELST,struct ipfobj,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_state.h,18\n", sizeof(struct ipfobj));
	// SIOCADSCA 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:29
	 printf("SIOCADSCA,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,29\n", sizeof(struct ipscan *));
	// SIOCADSCA 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:33
	 printf("SIOCADSCA,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,33\n", sizeof(struct ipscan *));
	// SIOCGSCST 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:31
	 printf("SIOCGSCST,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,31\n", sizeof(struct ipscan *));
	// SIOCGSCST 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:35
	 printf("SIOCGSCST,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,35\n", sizeof(struct ipscan *));
	// SIOCRMSCA 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:30
	 printf("SIOCRMSCA,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,30\n", sizeof(struct ipscan *));
	// SIOCRMSCA 12.1src/sys/contrib/ipfilter/netinet/ip_scan.h:34
	 printf("SIOCRMSCA,struct ipscan *,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_scan.h,34\n", sizeof(struct ipscan *));
	// SIOCLOOKUPADDNODE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:17
	 printf("SIOCLOOKUPADDNODE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,17\n", sizeof(struct iplookupop));
	// SIOCLOOKUPADDNODE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:27
	 printf("SIOCLOOKUPADDNODE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,27\n", sizeof(struct iplookupop));
	// SIOCLOOKUPADDNODEW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:18
	 printf("SIOCLOOKUPADDNODEW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,18\n", sizeof(struct iplookupop));
	// SIOCLOOKUPADDNODEW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:28
	 printf("SIOCLOOKUPADDNODEW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,28\n", sizeof(struct iplookupop));
	// SIOCLOOKUPADDTABLE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:12
	 printf("SIOCLOOKUPADDTABLE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,12\n", sizeof(struct iplookupop));
	// SIOCLOOKUPADDTABLE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:22
	 printf("SIOCLOOKUPADDTABLE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,22\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELNODE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:19
	 printf("SIOCLOOKUPDELNODE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,19\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELNODE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:29
	 printf("SIOCLOOKUPDELNODE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,29\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELNODEW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:20
	 printf("SIOCLOOKUPDELNODEW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,20\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELNODEW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:30
	 printf("SIOCLOOKUPDELNODEW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,30\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELTABLE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:13
	 printf("SIOCLOOKUPDELTABLE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,13\n", sizeof(struct iplookupop));
	// SIOCLOOKUPDELTABLE 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:23
	 printf("SIOCLOOKUPDELTABLE,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,23\n", sizeof(struct iplookupop));
	// SIOCLOOKUPFLUSH 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:16
	 printf("SIOCLOOKUPFLUSH,struct iplookupflush,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,16\n", sizeof(struct iplookupflush));
	// SIOCLOOKUPFLUSH 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:26
	 printf("SIOCLOOKUPFLUSH,struct iplookupflush,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,26\n", sizeof(struct iplookupflush));
	// SIOCLOOKUPSTAT 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:14
	 printf("SIOCLOOKUPSTAT,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,14\n", sizeof(struct iplookupop));
	// SIOCLOOKUPSTAT 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:24
	 printf("SIOCLOOKUPSTAT,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,24\n", sizeof(struct iplookupop));
	// SIOCLOOKUPSTATW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:15
	 printf("SIOCLOOKUPSTATW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,15\n", sizeof(struct iplookupop));
	// SIOCLOOKUPSTATW 12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h:25
	 printf("SIOCLOOKUPSTATW,struct iplookupop,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_lookup.h,25\n", sizeof(struct iplookupop));
	// SIOCPROXY 12.1src/sys/contrib/ipfilter/netinet/ip_proxy.h:24
	 printf("SIOCPROXY,struct ap_control,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_proxy.h,24\n", sizeof(struct ap_control));
	// SIOCPROXY 12.1src/sys/contrib/ipfilter/netinet/ip_proxy.h:26
	 printf("SIOCPROXY,struct ap_control,%zu,12.1src/sys/contrib/ipfilter/netinet/ip_proxy.h,26\n", sizeof(struct ap_control));
	// VIDIOCCAPTURE 12.1src/sys/contrib/v4l/videodev.h:261
	 printf("VIDIOCCAPTURE,int,%zu,12.1src/sys/contrib/v4l/videodev.h,261\n", sizeof(int));
	// VIDIOCGAUDIO 12.1src/sys/contrib/v4l/videodev.h:269
	 printf("VIDIOCGAUDIO,struct video_audio,%zu,12.1src/sys/contrib/v4l/videodev.h,269\n", sizeof(struct video_audio));
	// VIDIOCGCAP 12.1src/sys/contrib/v4l/videodev.h:254
	 printf("VIDIOCGCAP,struct video_capability,%zu,12.1src/sys/contrib/v4l/videodev.h,254\n", sizeof(struct video_capability));
	// VIDIOCGCAPTURE 12.1src/sys/contrib/v4l/videodev.h:275
	 printf("VIDIOCGCAPTURE,struct video_capture,%zu,12.1src/sys/contrib/v4l/videodev.h,275\n", sizeof(struct video_capture));
	// VIDIOCGCHAN 12.1src/sys/contrib/v4l/videodev.h:255
	 printf("VIDIOCGCHAN,struct video_channel,%zu,12.1src/sys/contrib/v4l/videodev.h,255\n", sizeof(struct video_channel));
	// VIDIOCGFBUF 12.1src/sys/contrib/v4l/videodev.h:264
	 printf("VIDIOCGFBUF,struct video_buffer,%zu,12.1src/sys/contrib/v4l/videodev.h,264\n", sizeof(struct video_buffer));
	// VIDIOCGFREQ 12.1src/sys/contrib/v4l/videodev.h:267
	 printf("VIDIOCGFREQ,unsigned long,%zu,12.1src/sys/contrib/v4l/videodev.h,267\n", sizeof(unsigned long));
	// VIDIOCGMBUF 12.1src/sys/contrib/v4l/videodev.h:273
	 printf("VIDIOCGMBUF,struct video_mbuf,%zu,12.1src/sys/contrib/v4l/videodev.h,273\n", sizeof(struct video_mbuf));
	// VIDIOCGPICT 12.1src/sys/contrib/v4l/videodev.h:259
	 printf("VIDIOCGPICT,struct video_picture,%zu,12.1src/sys/contrib/v4l/videodev.h,259\n", sizeof(struct video_picture));
	// VIDIOCGPLAYINFO 12.1src/sys/contrib/v4l/videodev.h:279
	 printf("VIDIOCGPLAYINFO,struct video_info,%zu,12.1src/sys/contrib/v4l/videodev.h,279\n", sizeof(struct video_info));
	// VIDIOCGTUNER 12.1src/sys/contrib/v4l/videodev.h:257
	 printf("VIDIOCGTUNER,struct video_tuner,%zu,12.1src/sys/contrib/v4l/videodev.h,257\n", sizeof(struct video_tuner));
	// VIDIOCGUNIT 12.1src/sys/contrib/v4l/videodev.h:274
	 printf("VIDIOCGUNIT,struct video_unit,%zu,12.1src/sys/contrib/v4l/videodev.h,274\n", sizeof(struct video_unit));
	// VIDIOCGVBIFMT 12.1src/sys/contrib/v4l/videodev.h:281
	 printf("VIDIOCGVBIFMT,struct vbi_format,%zu,12.1src/sys/contrib/v4l/videodev.h,281\n", sizeof(struct vbi_format));
	// VIDIOCGWIN 12.1src/sys/contrib/v4l/videodev.h:262
	 printf("VIDIOCGWIN,struct video_window,%zu,12.1src/sys/contrib/v4l/videodev.h,262\n", sizeof(struct video_window));
	// VIDIOCKEY 12.1src/sys/contrib/v4l/videodev.h:266
	 printf("VIDIOCKEY,struct video_key,%zu,12.1src/sys/contrib/v4l/videodev.h,266\n", sizeof(struct video_key));
	// VIDIOCMCAPTURE 12.1src/sys/contrib/v4l/videodev.h:272
	 printf("VIDIOCMCAPTURE,struct video_mmap,%zu,12.1src/sys/contrib/v4l/videodev.h,272\n", sizeof(struct video_mmap));
	// VIDIOCSAUDIO 12.1src/sys/contrib/v4l/videodev.h:270
	 printf("VIDIOCSAUDIO,struct video_audio,%zu,12.1src/sys/contrib/v4l/videodev.h,270\n", sizeof(struct video_audio));
	// VIDIOCSCAPTURE 12.1src/sys/contrib/v4l/videodev.h:276
	 printf("VIDIOCSCAPTURE,struct video_capture,%zu,12.1src/sys/contrib/v4l/videodev.h,276\n", sizeof(struct video_capture));
	// VIDIOCSCHAN 12.1src/sys/contrib/v4l/videodev.h:256
	 printf("VIDIOCSCHAN,struct video_channel,%zu,12.1src/sys/contrib/v4l/videodev.h,256\n", sizeof(struct video_channel));
	// VIDIOCSFBUF 12.1src/sys/contrib/v4l/videodev.h:265
	 printf("VIDIOCSFBUF,struct video_buffer,%zu,12.1src/sys/contrib/v4l/videodev.h,265\n", sizeof(struct video_buffer));
	// VIDIOCSFREQ 12.1src/sys/contrib/v4l/videodev.h:268
	 printf("VIDIOCSFREQ,unsigned long,%zu,12.1src/sys/contrib/v4l/videodev.h,268\n", sizeof(unsigned long));
	// VIDIOCSMICROCODE 12.1src/sys/contrib/v4l/videodev.h:280
	 printf("VIDIOCSMICROCODE,struct video_code,%zu,12.1src/sys/contrib/v4l/videodev.h,280\n", sizeof(struct video_code));
	// VIDIOCSPICT 12.1src/sys/contrib/v4l/videodev.h:260
	 printf("VIDIOCSPICT,struct video_picture,%zu,12.1src/sys/contrib/v4l/videodev.h,260\n", sizeof(struct video_picture));
	// VIDIOCSPLAYMODE 12.1src/sys/contrib/v4l/videodev.h:277
	 printf("VIDIOCSPLAYMODE,struct video_play_mode,%zu,12.1src/sys/contrib/v4l/videodev.h,277\n", sizeof(struct video_play_mode));
	// VIDIOCSTUNER 12.1src/sys/contrib/v4l/videodev.h:258
	 printf("VIDIOCSTUNER,struct video_tuner,%zu,12.1src/sys/contrib/v4l/videodev.h,258\n", sizeof(struct video_tuner));
	// VIDIOCSVBIFMT 12.1src/sys/contrib/v4l/videodev.h:282
	 printf("VIDIOCSVBIFMT,struct vbi_format,%zu,12.1src/sys/contrib/v4l/videodev.h,282\n", sizeof(struct vbi_format));
	// VIDIOCSWIN 12.1src/sys/contrib/v4l/videodev.h:263
	 printf("VIDIOCSWIN,struct video_window,%zu,12.1src/sys/contrib/v4l/videodev.h,263\n", sizeof(struct video_window));
	// VIDIOCSWRITEMODE 12.1src/sys/contrib/v4l/videodev.h:278
	 printf("VIDIOCSWRITEMODE,int,%zu,12.1src/sys/contrib/v4l/videodev.h,278\n", sizeof(int));
	// VIDIOCSYNC 12.1src/sys/contrib/v4l/videodev.h:271
	 printf("VIDIOCSYNC,int,%zu,12.1src/sys/contrib/v4l/videodev.h,271\n", sizeof(int));
	// VIDIOC_CROPCAP 12.1src/sys/contrib/v4l/videodev2.h:1711
	 printf("VIDIOC_CROPCAP,struct v4l2_cropcap,%zu,12.1src/sys/contrib/v4l/videodev2.h,1711\n", sizeof(struct v4l2_cropcap));
	// VIDIOC_CROPCAP_OLD 12.1src/sys/contrib/v4l/videodev2.h:1765
	 printf("VIDIOC_CROPCAP_OLD,struct v4l2_cropcap,%zu,12.1src/sys/contrib/v4l/videodev2.h,1765\n", sizeof(struct v4l2_cropcap));
	// VIDIOC_DBG_G_CHIP_IDENT 12.1src/sys/contrib/v4l/videodev2.h:1744
	 printf("VIDIOC_DBG_G_CHIP_IDENT,struct v4l2_dbg_chip_ident,%zu,12.1src/sys/contrib/v4l/videodev2.h,1744\n", sizeof(struct v4l2_dbg_chip_ident));
	// VIDIOC_DBG_G_REGISTER 12.1src/sys/contrib/v4l/videodev2.h:1740
	 printf("VIDIOC_DBG_G_REGISTER,struct v4l2_dbg_register,%zu,12.1src/sys/contrib/v4l/videodev2.h,1740\n", sizeof(struct v4l2_dbg_register));
	// VIDIOC_DBG_S_REGISTER 12.1src/sys/contrib/v4l/videodev2.h:1739
	 printf("VIDIOC_DBG_S_REGISTER,struct v4l2_dbg_register,%zu,12.1src/sys/contrib/v4l/videodev2.h,1739\n", sizeof(struct v4l2_dbg_register));
	// VIDIOC_DQBUF 12.1src/sys/contrib/v4l/videodev2.h:1683
	 printf("VIDIOC_DQBUF,struct v4l2_buffer,%zu,12.1src/sys/contrib/v4l/videodev2.h,1683\n", sizeof(struct v4l2_buffer));
	// VIDIOC_ENCODER_CMD 12.1src/sys/contrib/v4l/videodev2.h:1731
	 printf("VIDIOC_ENCODER_CMD,struct v4l2_encoder_cmd,%zu,12.1src/sys/contrib/v4l/videodev2.h,1731\n", sizeof(struct v4l2_encoder_cmd));
	// VIDIOC_ENUMAUDIO 12.1src/sys/contrib/v4l/videodev2.h:1718
	 printf("VIDIOC_ENUMAUDIO,struct v4l2_audio,%zu,12.1src/sys/contrib/v4l/videodev2.h,1718\n", sizeof(struct v4l2_audio));
	// VIDIOC_ENUMAUDOUT 12.1src/sys/contrib/v4l/videodev2.h:1719
	 printf("VIDIOC_ENUMAUDOUT,struct v4l2_audioout,%zu,12.1src/sys/contrib/v4l/videodev2.h,1719\n", sizeof(struct v4l2_audioout));
	// VIDIOC_ENUMINPUT 12.1src/sys/contrib/v4l/videodev2.h:1691
	 printf("VIDIOC_ENUMINPUT,struct v4l2_input,%zu,12.1src/sys/contrib/v4l/videodev2.h,1691\n", sizeof(struct v4l2_input));
	// VIDIOC_ENUMOUTPUT 12.1src/sys/contrib/v4l/videodev2.h:1704
	 printf("VIDIOC_ENUMOUTPUT,struct v4l2_output,%zu,12.1src/sys/contrib/v4l/videodev2.h,1704\n", sizeof(struct v4l2_output));
	// VIDIOC_ENUMSTD 12.1src/sys/contrib/v4l/videodev2.h:1690
	 printf("VIDIOC_ENUMSTD,struct v4l2_standard,%zu,12.1src/sys/contrib/v4l/videodev2.h,1690\n", sizeof(struct v4l2_standard));
	// VIDIOC_ENUM_DV_PRESETS 12.1src/sys/contrib/v4l/videodev2.h:1748
	 printf("VIDIOC_ENUM_DV_PRESETS,struct v4l2_dv_enum_preset,%zu,12.1src/sys/contrib/v4l/videodev2.h,1748\n", sizeof(struct v4l2_dv_enum_preset));
	// VIDIOC_ENUM_FMT 12.1src/sys/contrib/v4l/videodev2.h:1674
	 printf("VIDIOC_ENUM_FMT,struct v4l2_fmtdesc,%zu,12.1src/sys/contrib/v4l/videodev2.h,1674\n", sizeof(struct v4l2_fmtdesc));
	// VIDIOC_ENUM_FRAMEINTERVALS 12.1src/sys/contrib/v4l/videodev2.h:1729
	 printf("VIDIOC_ENUM_FRAMEINTERVALS,struct v4l2_frmivalenum,%zu,12.1src/sys/contrib/v4l/videodev2.h,1729\n", sizeof(struct v4l2_frmivalenum));
	// VIDIOC_ENUM_FRAMESIZES 12.1src/sys/contrib/v4l/videodev2.h:1728
	 printf("VIDIOC_ENUM_FRAMESIZES,struct v4l2_frmsizeenum,%zu,12.1src/sys/contrib/v4l/videodev2.h,1728\n", sizeof(struct v4l2_frmsizeenum));
	// VIDIOC_G_AUDIO 12.1src/sys/contrib/v4l/videodev2.h:1696
	 printf("VIDIOC_G_AUDIO,struct v4l2_audio,%zu,12.1src/sys/contrib/v4l/videodev2.h,1696\n", sizeof(struct v4l2_audio));
	// VIDIOC_G_AUDIO_OLD 12.1src/sys/contrib/v4l/videodev2.h:1763
	 printf("VIDIOC_G_AUDIO_OLD,struct v4l2_audio,%zu,12.1src/sys/contrib/v4l/videodev2.h,1763\n", sizeof(struct v4l2_audio));
	// VIDIOC_G_AUDOUT 12.1src/sys/contrib/v4l/videodev2.h:1705
	 printf("VIDIOC_G_AUDOUT,struct v4l2_audioout,%zu,12.1src/sys/contrib/v4l/videodev2.h,1705\n", sizeof(struct v4l2_audioout));
	// VIDIOC_G_AUDOUT_OLD 12.1src/sys/contrib/v4l/videodev2.h:1764
	 printf("VIDIOC_G_AUDOUT_OLD,struct v4l2_audioout,%zu,12.1src/sys/contrib/v4l/videodev2.h,1764\n", sizeof(struct v4l2_audioout));
	// VIDIOC_G_CROP 12.1src/sys/contrib/v4l/videodev2.h:1712
	 printf("VIDIOC_G_CROP,struct v4l2_crop,%zu,12.1src/sys/contrib/v4l/videodev2.h,1712\n", sizeof(struct v4l2_crop));
	// VIDIOC_G_CTRL 12.1src/sys/contrib/v4l/videodev2.h:1692
	 printf("VIDIOC_G_CTRL,struct v4l2_control,%zu,12.1src/sys/contrib/v4l/videodev2.h,1692\n", sizeof(struct v4l2_control));
	// VIDIOC_G_DV_PRESET 12.1src/sys/contrib/v4l/videodev2.h:1750
	 printf("VIDIOC_G_DV_PRESET,struct v4l2_dv_preset,%zu,12.1src/sys/contrib/v4l/videodev2.h,1750\n", sizeof(struct v4l2_dv_preset));
	// VIDIOC_G_DV_TIMINGS 12.1src/sys/contrib/v4l/videodev2.h:1753
	 printf("VIDIOC_G_DV_TIMINGS,struct v4l2_dv_timings,%zu,12.1src/sys/contrib/v4l/videodev2.h,1753\n", sizeof(struct v4l2_dv_timings));
	// VIDIOC_G_ENC_INDEX 12.1src/sys/contrib/v4l/videodev2.h:1730
	 printf("VIDIOC_G_ENC_INDEX,struct v4l2_enc_idx,%zu,12.1src/sys/contrib/v4l/videodev2.h,1730\n", sizeof(struct v4l2_enc_idx));
	// VIDIOC_G_EXT_CTRLS 12.1src/sys/contrib/v4l/videodev2.h:1724
	 printf("VIDIOC_G_EXT_CTRLS,struct v4l2_ext_controls,%zu,12.1src/sys/contrib/v4l/videodev2.h,1724\n", sizeof(struct v4l2_ext_controls));
	// VIDIOC_G_FBUF 12.1src/sys/contrib/v4l/videodev2.h:1679
	 printf("VIDIOC_G_FBUF,struct v4l2_framebuffer,%zu,12.1src/sys/contrib/v4l/videodev2.h,1679\n", sizeof(struct v4l2_framebuffer));
	// VIDIOC_G_FMT 12.1src/sys/contrib/v4l/videodev2.h:1675
	 printf("VIDIOC_G_FMT,struct v4l2_format,%zu,12.1src/sys/contrib/v4l/videodev2.h,1675\n", sizeof(struct v4l2_format));
	// VIDIOC_G_FREQUENCY 12.1src/sys/contrib/v4l/videodev2.h:1709
	 printf("VIDIOC_G_FREQUENCY,struct v4l2_frequency,%zu,12.1src/sys/contrib/v4l/videodev2.h,1709\n", sizeof(struct v4l2_frequency));
	// VIDIOC_G_INPUT 12.1src/sys/contrib/v4l/videodev2.h:1700
	 printf("VIDIOC_G_INPUT,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1700\n", sizeof(int));
	// VIDIOC_G_JPEGCOMP 12.1src/sys/contrib/v4l/videodev2.h:1714
	 printf("VIDIOC_G_JPEGCOMP,struct v4l2_jpegcompression,%zu,12.1src/sys/contrib/v4l/videodev2.h,1714\n", sizeof(struct v4l2_jpegcompression));
	// VIDIOC_G_MODULATOR 12.1src/sys/contrib/v4l/videodev2.h:1707
	 printf("VIDIOC_G_MODULATOR,struct v4l2_modulator,%zu,12.1src/sys/contrib/v4l/videodev2.h,1707\n", sizeof(struct v4l2_modulator));
	// VIDIOC_G_OUTPUT 12.1src/sys/contrib/v4l/videodev2.h:1702
	 printf("VIDIOC_G_OUTPUT,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1702\n", sizeof(int));
	// VIDIOC_G_PARM 12.1src/sys/contrib/v4l/videodev2.h:1686
	 printf("VIDIOC_G_PARM,struct v4l2_streamparm,%zu,12.1src/sys/contrib/v4l/videodev2.h,1686\n", sizeof(struct v4l2_streamparm));
	// VIDIOC_G_PRIORITY 12.1src/sys/contrib/v4l/videodev2.h:1720
	 printf("VIDIOC_G_PRIORITY,enum v4l2_priority,%zu,12.1src/sys/contrib/v4l/videodev2.h,1720\n", sizeof(enum v4l2_priority));
	// VIDIOC_G_SLICED_VBI_CAP 12.1src/sys/contrib/v4l/videodev2.h:1722
	 printf("VIDIOC_G_SLICED_VBI_CAP,struct v4l2_sliced_vbi_cap,%zu,12.1src/sys/contrib/v4l/videodev2.h,1722\n", sizeof(struct v4l2_sliced_vbi_cap));
	// VIDIOC_G_STD 12.1src/sys/contrib/v4l/videodev2.h:1688
	 printf("VIDIOC_G_STD,v4l2_std_id,%zu,12.1src/sys/contrib/v4l/videodev2.h,1688\n", sizeof(v4l2_std_id));
	// VIDIOC_G_TUNER 12.1src/sys/contrib/v4l/videodev2.h:1694
	 printf("VIDIOC_G_TUNER,struct v4l2_tuner,%zu,12.1src/sys/contrib/v4l/videodev2.h,1694\n", sizeof(struct v4l2_tuner));
	// VIDIOC_OVERLAY 12.1src/sys/contrib/v4l/videodev2.h:1681
	 printf("VIDIOC_OVERLAY,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1681\n", sizeof(int));
	// VIDIOC_OVERLAY_OLD 12.1src/sys/contrib/v4l/videodev2.h:1760
	 printf("VIDIOC_OVERLAY_OLD,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1760\n", sizeof(int));
	// VIDIOC_QBUF 12.1src/sys/contrib/v4l/videodev2.h:1682
	 printf("VIDIOC_QBUF,struct v4l2_buffer,%zu,12.1src/sys/contrib/v4l/videodev2.h,1682\n", sizeof(struct v4l2_buffer));
	// VIDIOC_QUERYBUF 12.1src/sys/contrib/v4l/videodev2.h:1678
	 printf("VIDIOC_QUERYBUF,struct v4l2_buffer,%zu,12.1src/sys/contrib/v4l/videodev2.h,1678\n", sizeof(struct v4l2_buffer));
	// VIDIOC_QUERYCAP 12.1src/sys/contrib/v4l/videodev2.h:1672
	 printf("VIDIOC_QUERYCAP,struct v4l2_capability,%zu,12.1src/sys/contrib/v4l/videodev2.h,1672\n", sizeof(struct v4l2_capability));
	// VIDIOC_QUERYCTRL 12.1src/sys/contrib/v4l/videodev2.h:1698
	 printf("VIDIOC_QUERYCTRL,struct v4l2_queryctrl,%zu,12.1src/sys/contrib/v4l/videodev2.h,1698\n", sizeof(struct v4l2_queryctrl));
	// VIDIOC_QUERYMENU 12.1src/sys/contrib/v4l/videodev2.h:1699
	 printf("VIDIOC_QUERYMENU,struct v4l2_querymenu,%zu,12.1src/sys/contrib/v4l/videodev2.h,1699\n", sizeof(struct v4l2_querymenu));
	// VIDIOC_QUERYSTD 12.1src/sys/contrib/v4l/videodev2.h:1716
	 printf("VIDIOC_QUERYSTD,v4l2_std_id,%zu,12.1src/sys/contrib/v4l/videodev2.h,1716\n", sizeof(v4l2_std_id));
	// VIDIOC_QUERY_DV_PRESET 12.1src/sys/contrib/v4l/videodev2.h:1751
	 printf("VIDIOC_QUERY_DV_PRESET,struct v4l2_dv_preset,%zu,12.1src/sys/contrib/v4l/videodev2.h,1751\n", sizeof(struct v4l2_dv_preset));
	// VIDIOC_REQBUFS 12.1src/sys/contrib/v4l/videodev2.h:1677
	 printf("VIDIOC_REQBUFS,struct v4l2_requestbuffers,%zu,12.1src/sys/contrib/v4l/videodev2.h,1677\n", sizeof(struct v4l2_requestbuffers));
	// VIDIOC_STREAMOFF 12.1src/sys/contrib/v4l/videodev2.h:1685
	 printf("VIDIOC_STREAMOFF,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1685\n", sizeof(int));
	// VIDIOC_STREAMON 12.1src/sys/contrib/v4l/videodev2.h:1684
	 printf("VIDIOC_STREAMON,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1684\n", sizeof(int));
	// VIDIOC_S_AUDIO 12.1src/sys/contrib/v4l/videodev2.h:1697
	 printf("VIDIOC_S_AUDIO,struct v4l2_audio,%zu,12.1src/sys/contrib/v4l/videodev2.h,1697\n", sizeof(struct v4l2_audio));
	// VIDIOC_S_AUDOUT 12.1src/sys/contrib/v4l/videodev2.h:1706
	 printf("VIDIOC_S_AUDOUT,struct v4l2_audioout,%zu,12.1src/sys/contrib/v4l/videodev2.h,1706\n", sizeof(struct v4l2_audioout));
	// VIDIOC_S_CROP 12.1src/sys/contrib/v4l/videodev2.h:1713
	 printf("VIDIOC_S_CROP,struct v4l2_crop,%zu,12.1src/sys/contrib/v4l/videodev2.h,1713\n", sizeof(struct v4l2_crop));
	// VIDIOC_S_CTRL 12.1src/sys/contrib/v4l/videodev2.h:1693
	 printf("VIDIOC_S_CTRL,struct v4l2_control,%zu,12.1src/sys/contrib/v4l/videodev2.h,1693\n", sizeof(struct v4l2_control));
	// VIDIOC_S_CTRL_OLD 12.1src/sys/contrib/v4l/videodev2.h:1762
	 printf("VIDIOC_S_CTRL_OLD,struct v4l2_control,%zu,12.1src/sys/contrib/v4l/videodev2.h,1762\n", sizeof(struct v4l2_control));
	// VIDIOC_S_DV_PRESET 12.1src/sys/contrib/v4l/videodev2.h:1749
	 printf("VIDIOC_S_DV_PRESET,struct v4l2_dv_preset,%zu,12.1src/sys/contrib/v4l/videodev2.h,1749\n", sizeof(struct v4l2_dv_preset));
	// VIDIOC_S_DV_TIMINGS 12.1src/sys/contrib/v4l/videodev2.h:1752
	 printf("VIDIOC_S_DV_TIMINGS,struct v4l2_dv_timings,%zu,12.1src/sys/contrib/v4l/videodev2.h,1752\n", sizeof(struct v4l2_dv_timings));
	// VIDIOC_S_EXT_CTRLS 12.1src/sys/contrib/v4l/videodev2.h:1725
	 printf("VIDIOC_S_EXT_CTRLS,struct v4l2_ext_controls,%zu,12.1src/sys/contrib/v4l/videodev2.h,1725\n", sizeof(struct v4l2_ext_controls));
	// VIDIOC_S_FBUF 12.1src/sys/contrib/v4l/videodev2.h:1680
	 printf("VIDIOC_S_FBUF,struct v4l2_framebuffer,%zu,12.1src/sys/contrib/v4l/videodev2.h,1680\n", sizeof(struct v4l2_framebuffer));
	// VIDIOC_S_FMT 12.1src/sys/contrib/v4l/videodev2.h:1676
	 printf("VIDIOC_S_FMT,struct v4l2_format,%zu,12.1src/sys/contrib/v4l/videodev2.h,1676\n", sizeof(struct v4l2_format));
	// VIDIOC_S_FREQUENCY 12.1src/sys/contrib/v4l/videodev2.h:1710
	 printf("VIDIOC_S_FREQUENCY,struct v4l2_frequency,%zu,12.1src/sys/contrib/v4l/videodev2.h,1710\n", sizeof(struct v4l2_frequency));
	// VIDIOC_S_HW_FREQ_SEEK 12.1src/sys/contrib/v4l/videodev2.h:1747
	 printf("VIDIOC_S_HW_FREQ_SEEK,struct v4l2_hw_freq_seek,%zu,12.1src/sys/contrib/v4l/videodev2.h,1747\n", sizeof(struct v4l2_hw_freq_seek));
	// VIDIOC_S_INPUT 12.1src/sys/contrib/v4l/videodev2.h:1701
	 printf("VIDIOC_S_INPUT,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1701\n", sizeof(int));
	// VIDIOC_S_JPEGCOMP 12.1src/sys/contrib/v4l/videodev2.h:1715
	 printf("VIDIOC_S_JPEGCOMP,struct v4l2_jpegcompression,%zu,12.1src/sys/contrib/v4l/videodev2.h,1715\n", sizeof(struct v4l2_jpegcompression));
	// VIDIOC_S_MODULATOR 12.1src/sys/contrib/v4l/videodev2.h:1708
	 printf("VIDIOC_S_MODULATOR,struct v4l2_modulator,%zu,12.1src/sys/contrib/v4l/videodev2.h,1708\n", sizeof(struct v4l2_modulator));
	// VIDIOC_S_OUTPUT 12.1src/sys/contrib/v4l/videodev2.h:1703
	 printf("VIDIOC_S_OUTPUT,int,%zu,12.1src/sys/contrib/v4l/videodev2.h,1703\n", sizeof(int));
	// VIDIOC_S_PARM 12.1src/sys/contrib/v4l/videodev2.h:1687
	 printf("VIDIOC_S_PARM,struct v4l2_streamparm,%zu,12.1src/sys/contrib/v4l/videodev2.h,1687\n", sizeof(struct v4l2_streamparm));
	// VIDIOC_S_PARM_OLD 12.1src/sys/contrib/v4l/videodev2.h:1761
	 printf("VIDIOC_S_PARM_OLD,struct v4l2_streamparm,%zu,12.1src/sys/contrib/v4l/videodev2.h,1761\n", sizeof(struct v4l2_streamparm));
	// VIDIOC_S_PRIORITY 12.1src/sys/contrib/v4l/videodev2.h:1721
	 printf("VIDIOC_S_PRIORITY,enum v4l2_priority,%zu,12.1src/sys/contrib/v4l/videodev2.h,1721\n", sizeof(enum v4l2_priority));
	// VIDIOC_S_STD 12.1src/sys/contrib/v4l/videodev2.h:1689
	 printf("VIDIOC_S_STD,v4l2_std_id,%zu,12.1src/sys/contrib/v4l/videodev2.h,1689\n", sizeof(v4l2_std_id));
	// VIDIOC_S_TUNER 12.1src/sys/contrib/v4l/videodev2.h:1695
	 printf("VIDIOC_S_TUNER,struct v4l2_tuner,%zu,12.1src/sys/contrib/v4l/videodev2.h,1695\n", sizeof(struct v4l2_tuner));
	// VIDIOC_TRY_ENCODER_CMD 12.1src/sys/contrib/v4l/videodev2.h:1732
	 printf("VIDIOC_TRY_ENCODER_CMD,struct v4l2_encoder_cmd,%zu,12.1src/sys/contrib/v4l/videodev2.h,1732\n", sizeof(struct v4l2_encoder_cmd));
	// VIDIOC_TRY_EXT_CTRLS 12.1src/sys/contrib/v4l/videodev2.h:1726
	 printf("VIDIOC_TRY_EXT_CTRLS,struct v4l2_ext_controls,%zu,12.1src/sys/contrib/v4l/videodev2.h,1726\n", sizeof(struct v4l2_ext_controls));
	// VIDIOC_TRY_FMT 12.1src/sys/contrib/v4l/videodev2.h:1717
	 printf("VIDIOC_TRY_FMT,struct v4l2_format,%zu,12.1src/sys/contrib/v4l/videodev2.h,1717\n", sizeof(struct v4l2_format));

	return (0);
}
