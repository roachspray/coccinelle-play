
#include <sys/types.h>
#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include "ding.h"

int
main(int argc, char **argv)
{
	printf("macro,type,size,file,line\n");

	// NIOCCTRL freebsd-src/sys/net/netmap.h:629
	 printf("NIOCCTRL,struct nmreq_header,%zu,freebsd-src/sys/net/netmap.h,629\n", sizeof(struct nmreq_header));
	// CDNR_ADD_ELEM freebsd-src/sys/net/altq/altq_cdnr.h:203
	 printf("CDNR_ADD_ELEM,struct cdnr_add_element,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,203\n", sizeof(struct cdnr_add_element));
	// CDNR_ADD_FILTER freebsd-src/sys/net/altq/altq_cdnr.h:200
	 printf("CDNR_ADD_FILTER,struct cdnr_add_filter,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,200\n", sizeof(struct cdnr_add_filter));
	// CDNR_ADD_TBM freebsd-src/sys/net/altq/altq_cdnr.h:205
	 printf("CDNR_ADD_TBM,struct cdnr_add_tbmeter,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,205\n", sizeof(struct cdnr_add_tbmeter));
	// CDNR_ADD_TCM freebsd-src/sys/net/altq/altq_cdnr.h:208
	 printf("CDNR_ADD_TCM,struct cdnr_add_trtcm,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,208\n", sizeof(struct cdnr_add_trtcm));
	// CDNR_ADD_TSW freebsd-src/sys/net/altq/altq_cdnr.h:211
	 printf("CDNR_ADD_TSW,struct cdnr_add_tswtcm,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,211\n", sizeof(struct cdnr_add_tswtcm));
	// CDNR_DEL_ELEM freebsd-src/sys/net/altq/altq_cdnr.h:204
	 printf("CDNR_DEL_ELEM,struct cdnr_delete_element,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,204\n", sizeof(struct cdnr_delete_element));
	// CDNR_DEL_FILTER freebsd-src/sys/net/altq/altq_cdnr.h:201
	 printf("CDNR_DEL_FILTER,struct cdnr_delete_filter,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,201\n", sizeof(struct cdnr_delete_filter));
	// CDNR_DISABLE freebsd-src/sys/net/altq/altq_cdnr.h:199
	 printf("CDNR_DISABLE,struct cdnr_interface,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,199\n", sizeof(struct cdnr_interface));
	// CDNR_ENABLE freebsd-src/sys/net/altq/altq_cdnr.h:198
	 printf("CDNR_ENABLE,struct cdnr_interface,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,198\n", sizeof(struct cdnr_interface));
	// CDNR_GETSTATS freebsd-src/sys/net/altq/altq_cdnr.h:202
	 printf("CDNR_GETSTATS,struct cdnr_get_stats,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,202\n", sizeof(struct cdnr_get_stats));
	// CDNR_IF_ATTACH freebsd-src/sys/net/altq/altq_cdnr.h:196
	 printf("CDNR_IF_ATTACH,struct cdnr_interface,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,196\n", sizeof(struct cdnr_interface));
	// CDNR_IF_DETACH freebsd-src/sys/net/altq/altq_cdnr.h:197
	 printf("CDNR_IF_DETACH,struct cdnr_interface,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,197\n", sizeof(struct cdnr_interface));
	// CDNR_MOD_TBM freebsd-src/sys/net/altq/altq_cdnr.h:206
	 printf("CDNR_MOD_TBM,struct cdnr_modify_tbmeter,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,206\n", sizeof(struct cdnr_modify_tbmeter));
	// CDNR_MOD_TCM freebsd-src/sys/net/altq/altq_cdnr.h:209
	 printf("CDNR_MOD_TCM,struct cdnr_modify_trtcm,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,209\n", sizeof(struct cdnr_modify_trtcm));
	// CDNR_MOD_TSW freebsd-src/sys/net/altq/altq_cdnr.h:212
	 printf("CDNR_MOD_TSW,struct cdnr_modify_tswtcm,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,212\n", sizeof(struct cdnr_modify_tswtcm));
	// CDNR_TBM_STATS freebsd-src/sys/net/altq/altq_cdnr.h:207
	 printf("CDNR_TBM_STATS,struct cdnr_tbmeter_stats,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,207\n", sizeof(struct cdnr_tbmeter_stats));
	// CDNR_TCM_STATS freebsd-src/sys/net/altq/altq_cdnr.h:210
	 printf("CDNR_TCM_STATS,struct cdnr_tcm_stats,%zu,freebsd-src/sys/net/altq/altq_cdnr.h,210\n", sizeof(struct cdnr_tcm_stats));
	// SIOCGLAGG freebsd-src/sys/net/if_lagg.h:127
	 printf("SIOCGLAGG,struct lagg_reqall,%zu,freebsd-src/sys/net/if_lagg.h,127\n", sizeof(struct lagg_reqall));
	// SIOCGLAGGFLAGS freebsd-src/sys/net/if_lagg.h:135
	 printf("SIOCGLAGGFLAGS,struct lagg_reqflags,%zu,freebsd-src/sys/net/if_lagg.h,135\n", sizeof(struct lagg_reqflags));
	// SIOCGLAGGOPTS freebsd-src/sys/net/if_lagg.h:160
	 printf("SIOCGLAGGOPTS,struct lagg_reqopts,%zu,freebsd-src/sys/net/if_lagg.h,160\n", sizeof(struct lagg_reqopts));
	// SIOCGLAGGPORT freebsd-src/sys/net/if_lagg.h:109
	 printf("SIOCGLAGGPORT,struct lagg_reqport,%zu,freebsd-src/sys/net/if_lagg.h,109\n", sizeof(struct lagg_reqport));
	// SIOCSLAGG freebsd-src/sys/net/if_lagg.h:128
	 printf("SIOCSLAGG,struct lagg_reqall,%zu,freebsd-src/sys/net/if_lagg.h,128\n", sizeof(struct lagg_reqall));
	// SIOCSLAGGDELPORT freebsd-src/sys/net/if_lagg.h:111
	 printf("SIOCSLAGGDELPORT,struct lagg_reqport,%zu,freebsd-src/sys/net/if_lagg.h,111\n", sizeof(struct lagg_reqport));
	// SIOCSLAGGHASH freebsd-src/sys/net/if_lagg.h:136
	 printf("SIOCSLAGGHASH,struct lagg_reqflags,%zu,freebsd-src/sys/net/if_lagg.h,136\n", sizeof(struct lagg_reqflags));
	// SIOCSLAGGOPTS freebsd-src/sys/net/if_lagg.h:161
	 printf("SIOCSLAGGOPTS,struct lagg_reqopts,%zu,freebsd-src/sys/net/if_lagg.h,161\n", sizeof(struct lagg_reqopts));
	// SIOCSLAGGPORT freebsd-src/sys/net/if_lagg.h:110
	 printf("SIOCSLAGGPORT,struct lagg_reqport,%zu,freebsd-src/sys/net/if_lagg.h,110\n", sizeof(struct lagg_reqport));
	// TUNGDEBUG freebsd-src/sys/net/if_tun.h:39
	 printf("TUNGDEBUG,int,%zu,freebsd-src/sys/net/if_tun.h,39\n", sizeof(int));
	// TUNGIFHEAD freebsd-src/sys/net/if_tun.h:47
	 printf("TUNGIFHEAD,int,%zu,freebsd-src/sys/net/if_tun.h,47\n", sizeof(int));
	// TUNGIFINFO freebsd-src/sys/net/if_tun.h:41
	 printf("TUNGIFINFO,struct tuninfo,%zu,freebsd-src/sys/net/if_tun.h,41\n", sizeof(struct tuninfo));
	// TUNGIFNAME freebsd-src/sys/net/if_tun.h:43
	 printf("TUNGIFNAME,struct ifreq,%zu,freebsd-src/sys/net/if_tun.h,43\n", sizeof(struct ifreq));
	// TUNSDEBUG freebsd-src/sys/net/if_tun.h:38
	 printf("TUNSDEBUG,int,%zu,freebsd-src/sys/net/if_tun.h,38\n", sizeof(int));
	// TUNSIFHEAD freebsd-src/sys/net/if_tun.h:46
	 printf("TUNSIFHEAD,int,%zu,freebsd-src/sys/net/if_tun.h,46\n", sizeof(int));
	// TUNSIFINFO freebsd-src/sys/net/if_tun.h:40
	 printf("TUNSIFINFO,struct tuninfo,%zu,freebsd-src/sys/net/if_tun.h,40\n", sizeof(struct tuninfo));
	// TUNSIFMODE freebsd-src/sys/net/if_tun.h:44
	 printf("TUNSIFMODE,int,%zu,freebsd-src/sys/net/if_tun.h,44\n", sizeof(int));
	// TUNSLMODE freebsd-src/sys/net/if_tun.h:42
	 printf("TUNSLMODE,int,%zu,freebsd-src/sys/net/if_tun.h,42\n", sizeof(int));
	// SIOCGETPFSYNC freebsd-src/sys/net/if_pfsync.h:244
	 printf("SIOCGETPFSYNC,struct ifreq,%zu,freebsd-src/sys/net/if_pfsync.h,244\n", sizeof(struct ifreq));
	// SIOCSETPFSYNC freebsd-src/sys/net/if_pfsync.h:243
	 printf("SIOCSETPFSYNC,struct ifreq,%zu,freebsd-src/sys/net/if_pfsync.h,243\n", sizeof(struct ifreq));
	// PFILIOC_LINK freebsd-src/sys/net/pfil.h:79
	// printf("PFILIOC_LINK,struct pfilioc_link,%zu,freebsd-src/sys/net/pfil.h,79\n", sizeof(struct pfilioc_link));
	// PFILIOC_LISTHEADS freebsd-src/sys/net/pfil.h:77
	// printf("PFILIOC_LISTHEADS,struct pfilioc_list,%zu,freebsd-src/sys/net/pfil.h,77\n", sizeof(struct pfilioc_list));
	// PFILIOC_LISTHOOKS freebsd-src/sys/net/pfil.h:78
	// printf("PFILIOC_LISTHOOKS,struct pfilioc_list,%zu,freebsd-src/sys/net/pfil.h,78\n", sizeof(struct pfilioc_list));
	// NIOCCONFIG freebsd-src/sys/net/netmap_legacy.h:255
	 printf("NIOCCONFIG,struct nm_ifreq,%zu,freebsd-src/sys/net/netmap_legacy.h,255\n", sizeof(struct nm_ifreq));
	// NIOCGINFO freebsd-src/sys/net/netmap_legacy.h:253
	 printf("NIOCGINFO,struct nmreq,%zu,freebsd-src/sys/net/netmap_legacy.h,253\n", sizeof(struct nmreq));
	// NIOCREGIF freebsd-src/sys/net/netmap_legacy.h:254
	 printf("NIOCREGIF,struct nmreq,%zu,freebsd-src/sys/net/netmap_legacy.h,254\n", sizeof(struct nmreq));
	// GREGADDRD freebsd-src/sys/net/if_gre.h:166
	 printf("GREGADDRD,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,166\n", sizeof(struct ifreq));
	// GREGADDRS freebsd-src/sys/net/if_gre.h:165
	 printf("GREGADDRS,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,165\n", sizeof(struct ifreq));
	// GREGKEY freebsd-src/sys/net/if_gre.h:170
	 printf("GREGKEY,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,170\n", sizeof(struct ifreq));
	// GREGOPTS freebsd-src/sys/net/if_gre.h:172
	 printf("GREGOPTS,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,172\n", sizeof(struct ifreq));
	// GREGPORT freebsd-src/sys/net/if_gre.h:174
	 printf("GREGPORT,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,174\n", sizeof(struct ifreq));
	// GREGPROTO freebsd-src/sys/net/if_gre.h:168
	 printf("GREGPROTO,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,168\n", sizeof(struct ifreq));
	// GRESADDRD freebsd-src/sys/net/if_gre.h:164
	 printf("GRESADDRD,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,164\n", sizeof(struct ifreq));
	// GRESADDRS freebsd-src/sys/net/if_gre.h:163
	 printf("GRESADDRS,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,163\n", sizeof(struct ifreq));
	// GRESKEY freebsd-src/sys/net/if_gre.h:171
	 printf("GRESKEY,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,171\n", sizeof(struct ifreq));
	// GRESOPTS freebsd-src/sys/net/if_gre.h:173
	 printf("GRESOPTS,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,173\n", sizeof(struct ifreq));
	// GRESPORT freebsd-src/sys/net/if_gre.h:175
	 printf("GRESPORT,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,175\n", sizeof(struct ifreq));
	// GRESPROTO freebsd-src/sys/net/if_gre.h:167
	 printf("GRESPROTO,struct ifreq,%zu,freebsd-src/sys/net/if_gre.h,167\n", sizeof(struct ifreq));
	// TAPGVNETHDR freebsd-src/sys/net/if_tap.h:60
	 printf("TAPGVNETHDR,int,%zu,freebsd-src/sys/net/if_tap.h,60\n", sizeof(int));
	// TAPSVNETHDR freebsd-src/sys/net/if_tap.h:59
	 printf("TAPSVNETHDR,int,%zu,freebsd-src/sys/net/if_tap.h,59\n", sizeof(int));
	// BIOCFEEDBACK freebsd-src/sys/net/bpf.h:147
	 printf("BIOCFEEDBACK,u_int,%zu,freebsd-src/sys/net/bpf.h,147\n", sizeof(u_int));
	// BIOCGBLEN freebsd-src/sys/net/bpf.h:124
	 printf("BIOCGBLEN,u_int,%zu,freebsd-src/sys/net/bpf.h,124\n", sizeof(u_int));
	// BIOCGDIRECTION freebsd-src/sys/net/bpf.h:141
	 printf("BIOCGDIRECTION,u_int,%zu,freebsd-src/sys/net/bpf.h,141\n", sizeof(u_int));
	// BIOCGDLT freebsd-src/sys/net/bpf.h:129
	 printf("BIOCGDLT,u_int,%zu,freebsd-src/sys/net/bpf.h,129\n", sizeof(u_int));
	// BIOCGDLTLIST freebsd-src/sys/net/bpf.h:144
	 printf("BIOCGDLTLIST,struct bpf_dltlist,%zu,freebsd-src/sys/net/bpf.h,144\n", sizeof(struct bpf_dltlist));
	// BIOCGETBUFMODE freebsd-src/sys/net/bpf.h:148
	 printf("BIOCGETBUFMODE,u_int,%zu,freebsd-src/sys/net/bpf.h,148\n", sizeof(u_int));
	// BIOCGETIF freebsd-src/sys/net/bpf.h:130
	 printf("BIOCGETIF,struct ifreq,%zu,freebsd-src/sys/net/bpf.h,130\n", sizeof(struct ifreq));
	// BIOCGETZMAX freebsd-src/sys/net/bpf.h:150
	 printf("BIOCGETZMAX,size_t,%zu,freebsd-src/sys/net/bpf.h,150\n", sizeof(size_t));
	// BIOCGHDRCMPLT freebsd-src/sys/net/bpf.h:139
	 printf("BIOCGHDRCMPLT,u_int,%zu,freebsd-src/sys/net/bpf.h,139\n", sizeof(u_int));
	// BIOCGRSIG freebsd-src/sys/net/bpf.h:137
	 printf("BIOCGRSIG,u_int,%zu,freebsd-src/sys/net/bpf.h,137\n", sizeof(u_int));
	// BIOCGRTIMEOUT freebsd-src/sys/net/bpf.h:133
	 printf("BIOCGRTIMEOUT,struct timeval,%zu,freebsd-src/sys/net/bpf.h,133\n", sizeof(struct timeval));
	// BIOCGSTATS freebsd-src/sys/net/bpf.h:134
	 printf("BIOCGSTATS,struct bpf_stat,%zu,freebsd-src/sys/net/bpf.h,134\n", sizeof(struct bpf_stat));
	// BIOCGTSTAMP freebsd-src/sys/net/bpf.h:154
	 printf("BIOCGTSTAMP,u_int,%zu,freebsd-src/sys/net/bpf.h,154\n", sizeof(u_int));
	// BIOCIMMEDIATE freebsd-src/sys/net/bpf.h:135
	 printf("BIOCIMMEDIATE,u_int,%zu,freebsd-src/sys/net/bpf.h,135\n", sizeof(u_int));
	// BIOCROTZBUF freebsd-src/sys/net/bpf.h:151
	 printf("BIOCROTZBUF,struct bpf_zbuf,%zu,freebsd-src/sys/net/bpf.h,151\n", sizeof(struct bpf_zbuf));
	// BIOCSBLEN freebsd-src/sys/net/bpf.h:125
	 printf("BIOCSBLEN,u_int,%zu,freebsd-src/sys/net/bpf.h,125\n", sizeof(u_int));
	// BIOCSDIRECTION freebsd-src/sys/net/bpf.h:142
	 printf("BIOCSDIRECTION,u_int,%zu,freebsd-src/sys/net/bpf.h,142\n", sizeof(u_int));
	// BIOCSDLT freebsd-src/sys/net/bpf.h:143
	 printf("BIOCSDLT,u_int,%zu,freebsd-src/sys/net/bpf.h,143\n", sizeof(u_int));
	// BIOCSETBUFMODE freebsd-src/sys/net/bpf.h:149
	 printf("BIOCSETBUFMODE,u_int,%zu,freebsd-src/sys/net/bpf.h,149\n", sizeof(u_int));
	// BIOCSETF freebsd-src/sys/net/bpf.h:126
	 printf("BIOCSETF,struct bpf_program,%zu,freebsd-src/sys/net/bpf.h,126\n", sizeof(struct bpf_program));
	// BIOCSETFNR freebsd-src/sys/net/bpf.h:153
	 printf("BIOCSETFNR,struct bpf_program,%zu,freebsd-src/sys/net/bpf.h,153\n", sizeof(struct bpf_program));
	// BIOCSETIF freebsd-src/sys/net/bpf.h:131
	 printf("BIOCSETIF,struct ifreq,%zu,freebsd-src/sys/net/bpf.h,131\n", sizeof(struct ifreq));
	// BIOCSETWF freebsd-src/sys/net/bpf.h:146
	 printf("BIOCSETWF,struct bpf_program,%zu,freebsd-src/sys/net/bpf.h,146\n", sizeof(struct bpf_program));
	// BIOCSETZBUF freebsd-src/sys/net/bpf.h:152
	 printf("BIOCSETZBUF,struct bpf_zbuf,%zu,freebsd-src/sys/net/bpf.h,152\n", sizeof(struct bpf_zbuf));
	// BIOCSHDRCMPLT freebsd-src/sys/net/bpf.h:140
	 printf("BIOCSHDRCMPLT,u_int,%zu,freebsd-src/sys/net/bpf.h,140\n", sizeof(u_int));
	// BIOCSRSIG freebsd-src/sys/net/bpf.h:138
	 printf("BIOCSRSIG,u_int,%zu,freebsd-src/sys/net/bpf.h,138\n", sizeof(u_int));
	// BIOCSRTIMEOUT freebsd-src/sys/net/bpf.h:132
	 printf("BIOCSRTIMEOUT,struct timeval,%zu,freebsd-src/sys/net/bpf.h,132\n", sizeof(struct timeval));
	// BIOCSTSTAMP freebsd-src/sys/net/bpf.h:155
	 printf("BIOCSTSTAMP,u_int,%zu,freebsd-src/sys/net/bpf.h,155\n", sizeof(u_int));
	// BIOCVERSION freebsd-src/sys/net/bpf.h:136
	 printf("BIOCVERSION,struct bpf_version,%zu,freebsd-src/sys/net/bpf.h,136\n", sizeof(struct bpf_version));
	// DIOCADDADDR freebsd-src/sys/net/pfvar.h:1492
	 printf("DIOCADDADDR,struct pfioc_pooladdr,%zu,freebsd-src/sys/net/pfvar.h,1492\n", sizeof(struct pfioc_pooladdr));
	// DIOCADDALTQV0 freebsd-src/sys/net/pfvar.h:1481
	 printf("DIOCADDALTQV0,struct pfioc_altq_v0,%zu,freebsd-src/sys/net/pfvar.h,1481\n", sizeof(struct pfioc_altq_v0));
	// DIOCADDALTQV1 freebsd-src/sys/net/pfvar.h:1482
	 printf("DIOCADDALTQV1,struct pfioc_altq_v1,%zu,freebsd-src/sys/net/pfvar.h,1482\n", sizeof(struct pfioc_altq_v1));
	// DIOCADDRULE freebsd-src/sys/net/pfvar.h:1458
	 printf("DIOCADDRULE,struct pfioc_rule,%zu,freebsd-src/sys/net/pfvar.h,1458\n", sizeof(struct pfioc_rule));
	// DIOCADDSTATE freebsd-src/sys/net/pfvar.h:1474
	 printf("DIOCADDSTATE,struct pfioc_state,%zu,freebsd-src/sys/net/pfvar.h,1474\n", sizeof(struct pfioc_state));
	// DIOCBEGINADDRS freebsd-src/sys/net/pfvar.h:1491
	 printf("DIOCBEGINADDRS,struct pfioc_pooladdr,%zu,freebsd-src/sys/net/pfvar.h,1491\n", sizeof(struct pfioc_pooladdr));
	// DIOCCHANGEADDR freebsd-src/sys/net/pfvar.h:1495
	 printf("DIOCCHANGEADDR,struct pfioc_pooladdr,%zu,freebsd-src/sys/net/pfvar.h,1495\n", sizeof(struct pfioc_pooladdr));
	// DIOCCHANGEALTQV0 freebsd-src/sys/net/pfvar.h:1487
	 printf("DIOCCHANGEALTQV0,struct pfioc_altq_v0,%zu,freebsd-src/sys/net/pfvar.h,1487\n", sizeof(struct pfioc_altq_v0));
	// DIOCCHANGEALTQV1 freebsd-src/sys/net/pfvar.h:1488
	 printf("DIOCCHANGEALTQV1,struct pfioc_altq_v1,%zu,freebsd-src/sys/net/pfvar.h,1488\n", sizeof(struct pfioc_altq_v1));
	// DIOCCHANGERULE freebsd-src/sys/net/pfvar.h:1470
	 printf("DIOCCHANGERULE,struct pfioc_rule,%zu,freebsd-src/sys/net/pfvar.h,1470\n", sizeof(struct pfioc_rule));
	// DIOCCLRIFFLAG freebsd-src/sys/net/pfvar.h:1526
	 printf("DIOCCLRIFFLAG,struct pfioc_iface,%zu,freebsd-src/sys/net/pfvar.h,1526\n", sizeof(struct pfioc_iface));
	// DIOCCLRSTATES freebsd-src/sys/net/pfvar.h:1462
	 printf("DIOCCLRSTATES,struct pfioc_state_kill,%zu,freebsd-src/sys/net/pfvar.h,1462\n", sizeof(struct pfioc_state_kill));
	// DIOCGETADDR freebsd-src/sys/net/pfvar.h:1494
	 printf("DIOCGETADDR,struct pfioc_pooladdr,%zu,freebsd-src/sys/net/pfvar.h,1494\n", sizeof(struct pfioc_pooladdr));
	// DIOCGETADDRS freebsd-src/sys/net/pfvar.h:1493
	 printf("DIOCGETADDRS,struct pfioc_pooladdr,%zu,freebsd-src/sys/net/pfvar.h,1493\n", sizeof(struct pfioc_pooladdr));
	// DIOCGETALTQSV0 freebsd-src/sys/net/pfvar.h:1483
	 printf("DIOCGETALTQSV0,struct pfioc_altq_v0,%zu,freebsd-src/sys/net/pfvar.h,1483\n", sizeof(struct pfioc_altq_v0));
	// DIOCGETALTQSV1 freebsd-src/sys/net/pfvar.h:1484
	 printf("DIOCGETALTQSV1,struct pfioc_altq_v1,%zu,freebsd-src/sys/net/pfvar.h,1484\n", sizeof(struct pfioc_altq_v1));
	// DIOCGETALTQV0 freebsd-src/sys/net/pfvar.h:1485
	 printf("DIOCGETALTQV0,struct pfioc_altq_v0,%zu,freebsd-src/sys/net/pfvar.h,1485\n", sizeof(struct pfioc_altq_v0));
	// DIOCGETALTQV1 freebsd-src/sys/net/pfvar.h:1486
	 printf("DIOCGETALTQV1,struct pfioc_altq_v1,%zu,freebsd-src/sys/net/pfvar.h,1486\n", sizeof(struct pfioc_altq_v1));
	// DIOCGETLIMIT freebsd-src/sys/net/pfvar.h:1476
	 printf("DIOCGETLIMIT,struct pfioc_limit,%zu,freebsd-src/sys/net/pfvar.h,1476\n", sizeof(struct pfioc_limit));
	// DIOCGETQSTATSV0 freebsd-src/sys/net/pfvar.h:1489
	 printf("DIOCGETQSTATSV0,struct pfioc_qstats_v0,%zu,freebsd-src/sys/net/pfvar.h,1489\n", sizeof(struct pfioc_qstats_v0));
	// DIOCGETQSTATSV1 freebsd-src/sys/net/pfvar.h:1490
	 printf("DIOCGETQSTATSV1,struct pfioc_qstats_v1,%zu,freebsd-src/sys/net/pfvar.h,1490\n", sizeof(struct pfioc_qstats_v1));
	// DIOCGETRULE freebsd-src/sys/net/pfvar.h:1460
	 printf("DIOCGETRULE,struct pfioc_rule,%zu,freebsd-src/sys/net/pfvar.h,1460\n", sizeof(struct pfioc_rule));
	// DIOCGETRULES freebsd-src/sys/net/pfvar.h:1459
	 printf("DIOCGETRULES,struct pfioc_rule,%zu,freebsd-src/sys/net/pfvar.h,1459\n", sizeof(struct pfioc_rule));
	// DIOCGETRULESET freebsd-src/sys/net/pfvar.h:1498
	 printf("DIOCGETRULESET,struct pfioc_ruleset,%zu,freebsd-src/sys/net/pfvar.h,1498\n", sizeof(struct pfioc_ruleset));
	// DIOCGETRULESETS freebsd-src/sys/net/pfvar.h:1497
	 printf("DIOCGETRULESETS,struct pfioc_ruleset,%zu,freebsd-src/sys/net/pfvar.h,1497\n", sizeof(struct pfioc_ruleset));
	// DIOCGETSRCNODES freebsd-src/sys/net/pfvar.h:1521
	 printf("DIOCGETSRCNODES,struct pfioc_src_nodes,%zu,freebsd-src/sys/net/pfvar.h,1521\n", sizeof(struct pfioc_src_nodes));
	// DIOCGETSTATE freebsd-src/sys/net/pfvar.h:1463
	 printf("DIOCGETSTATE,struct pfioc_state,%zu,freebsd-src/sys/net/pfvar.h,1463\n", sizeof(struct pfioc_state));
	// DIOCGETSTATES freebsd-src/sys/net/pfvar.h:1469
	 printf("DIOCGETSTATES,struct pfioc_states,%zu,freebsd-src/sys/net/pfvar.h,1469\n", sizeof(struct pfioc_states));
	// DIOCGETSTATUS freebsd-src/sys/net/pfvar.h:1465
	 printf("DIOCGETSTATUS,struct pf_status,%zu,freebsd-src/sys/net/pfvar.h,1465\n", sizeof(struct pf_status));
	// DIOCGETTIMEOUT freebsd-src/sys/net/pfvar.h:1473
	 printf("DIOCGETTIMEOUT,struct pfioc_tm,%zu,freebsd-src/sys/net/pfvar.h,1473\n", sizeof(struct pfioc_tm));
	// DIOCGIFSPEEDV0 freebsd-src/sys/net/pfvar.h:1543
	 printf("DIOCGIFSPEEDV0,struct pf_ifspeed_v0,%zu,freebsd-src/sys/net/pfvar.h,1543\n", sizeof(struct pf_ifspeed_v0));
	// DIOCGIFSPEEDV1 freebsd-src/sys/net/pfvar.h:1544
	 printf("DIOCGIFSPEEDV1,struct pf_ifspeed_v1,%zu,freebsd-src/sys/net/pfvar.h,1544\n", sizeof(struct pf_ifspeed_v1));
	// DIOCIGETIFACES freebsd-src/sys/net/pfvar.h:1524
	 printf("DIOCIGETIFACES,struct pfioc_iface,%zu,freebsd-src/sys/net/pfvar.h,1524\n", sizeof(struct pfioc_iface));
	// DIOCKILLSRCNODES freebsd-src/sys/net/pfvar.h:1527
	 printf("DIOCKILLSRCNODES,struct pfioc_src_node_kill,%zu,freebsd-src/sys/net/pfvar.h,1527\n", sizeof(struct pfioc_src_node_kill));
	// DIOCKILLSTATES freebsd-src/sys/net/pfvar.h:1478
	 printf("DIOCKILLSTATES,struct pfioc_state_kill,%zu,freebsd-src/sys/net/pfvar.h,1478\n", sizeof(struct pfioc_state_kill));
	// DIOCNATLOOK freebsd-src/sys/net/pfvar.h:1467
	 printf("DIOCNATLOOK,struct pfioc_natlook,%zu,freebsd-src/sys/net/pfvar.h,1467\n", sizeof(struct pfioc_natlook));
	// DIOCOSFPADD freebsd-src/sys/net/pfvar.h:1516
	 printf("DIOCOSFPADD,struct pf_osfp_ioctl,%zu,freebsd-src/sys/net/pfvar.h,1516\n", sizeof(struct pf_osfp_ioctl));
	// DIOCOSFPGET freebsd-src/sys/net/pfvar.h:1517
	 printf("DIOCOSFPGET,struct pf_osfp_ioctl,%zu,freebsd-src/sys/net/pfvar.h,1517\n", sizeof(struct pf_osfp_ioctl));
	// DIOCRADDADDRS freebsd-src/sys/net/pfvar.h:1506
	 printf("DIOCRADDADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1506\n", sizeof(struct pfioc_table));
	// DIOCRADDTABLES freebsd-src/sys/net/pfvar.h:1500
	 printf("DIOCRADDTABLES,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1500\n", sizeof(struct pfioc_table));
	// DIOCRCLRADDRS freebsd-src/sys/net/pfvar.h:1505
	 printf("DIOCRCLRADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1505\n", sizeof(struct pfioc_table));
	// DIOCRCLRASTATS freebsd-src/sys/net/pfvar.h:1511
	 printf("DIOCRCLRASTATS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1511\n", sizeof(struct pfioc_table));
	// DIOCRCLRTABLES freebsd-src/sys/net/pfvar.h:1499
	 printf("DIOCRCLRTABLES,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1499\n", sizeof(struct pfioc_table));
	// DIOCRCLRTSTATS freebsd-src/sys/net/pfvar.h:1504
	 printf("DIOCRCLRTSTATS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1504\n", sizeof(struct pfioc_table));
	// DIOCRDELADDRS freebsd-src/sys/net/pfvar.h:1507
	 printf("DIOCRDELADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1507\n", sizeof(struct pfioc_table));
	// DIOCRDELTABLES freebsd-src/sys/net/pfvar.h:1501
	 printf("DIOCRDELTABLES,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1501\n", sizeof(struct pfioc_table));
	// DIOCRGETADDRS freebsd-src/sys/net/pfvar.h:1509
	 printf("DIOCRGETADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1509\n", sizeof(struct pfioc_table));
	// DIOCRGETASTATS freebsd-src/sys/net/pfvar.h:1510
	 printf("DIOCRGETASTATS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1510\n", sizeof(struct pfioc_table));
	// DIOCRGETTABLES freebsd-src/sys/net/pfvar.h:1502
	 printf("DIOCRGETTABLES,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1502\n", sizeof(struct pfioc_table));
	// DIOCRGETTSTATS freebsd-src/sys/net/pfvar.h:1503
	 printf("DIOCRGETTSTATS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1503\n", sizeof(struct pfioc_table));
	// DIOCRINADEFINE freebsd-src/sys/net/pfvar.h:1514
	 printf("DIOCRINADEFINE,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1514\n", sizeof(struct pfioc_table));
	// DIOCRSETADDRS freebsd-src/sys/net/pfvar.h:1508
	 printf("DIOCRSETADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1508\n", sizeof(struct pfioc_table));
	// DIOCRSETTFLAGS freebsd-src/sys/net/pfvar.h:1513
	 printf("DIOCRSETTFLAGS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1513\n", sizeof(struct pfioc_table));
	// DIOCRTSTADDRS freebsd-src/sys/net/pfvar.h:1512
	 printf("DIOCRTSTADDRS,struct pfioc_table,%zu,freebsd-src/sys/net/pfvar.h,1512\n", sizeof(struct pfioc_table));
	// DIOCSETDEBUG freebsd-src/sys/net/pfvar.h:1468
	 printf("DIOCSETDEBUG,u_int32_t,%zu,freebsd-src/sys/net/pfvar.h,1468\n", sizeof(u_int32_t));
	// DIOCSETHOSTID freebsd-src/sys/net/pfvar.h:1523
	 printf("DIOCSETHOSTID,u_int32_t,%zu,freebsd-src/sys/net/pfvar.h,1523\n", sizeof(u_int32_t));
	// DIOCSETIFFLAG freebsd-src/sys/net/pfvar.h:1525
	 printf("DIOCSETIFFLAG,struct pfioc_iface,%zu,freebsd-src/sys/net/pfvar.h,1525\n", sizeof(struct pfioc_iface));
	// DIOCSETLIMIT freebsd-src/sys/net/pfvar.h:1477
	 printf("DIOCSETLIMIT,struct pfioc_limit,%zu,freebsd-src/sys/net/pfvar.h,1477\n", sizeof(struct pfioc_limit));
	// DIOCSETSTATUSIF freebsd-src/sys/net/pfvar.h:1464
	 printf("DIOCSETSTATUSIF,struct pfioc_if,%zu,freebsd-src/sys/net/pfvar.h,1464\n", sizeof(struct pfioc_if));
	// DIOCSETTIMEOUT freebsd-src/sys/net/pfvar.h:1472
	 printf("DIOCSETTIMEOUT,struct pfioc_tm,%zu,freebsd-src/sys/net/pfvar.h,1472\n", sizeof(struct pfioc_tm));
	// DIOCXBEGIN freebsd-src/sys/net/pfvar.h:1518
	 printf("DIOCXBEGIN,struct pfioc_trans,%zu,freebsd-src/sys/net/pfvar.h,1518\n", sizeof(struct pfioc_trans));
	// DIOCXCOMMIT freebsd-src/sys/net/pfvar.h:1519
	 printf("DIOCXCOMMIT,struct pfioc_trans,%zu,freebsd-src/sys/net/pfvar.h,1519\n", sizeof(struct pfioc_trans));
	// DIOCXROLLBACK freebsd-src/sys/net/pfvar.h:1520
	 printf("DIOCXROLLBACK,struct pfioc_trans,%zu,freebsd-src/sys/net/pfvar.h,1520\n", sizeof(struct pfioc_trans));
	// IPSECGREQID freebsd-src/sys/net/if_ipsec.h:36
	 printf("IPSECGREQID,struct ifreq,%zu,freebsd-src/sys/net/if_ipsec.h,36\n", sizeof(struct ifreq));
	// IPSECSREQID freebsd-src/sys/net/if_ipsec.h:37
	 printf("IPSECSREQID,struct ifreq,%zu,freebsd-src/sys/net/if_ipsec.h,37\n", sizeof(struct ifreq));
	// GIFGOPTS freebsd-src/sys/net/if_gif.h:123
	 printf("GIFGOPTS,struct ifreq,%zu,freebsd-src/sys/net/if_gif.h,123\n", sizeof(struct ifreq));
	// GIFSOPTS freebsd-src/sys/net/if_gif.h:124
	 printf("GIFSOPTS,struct ifreq,%zu,freebsd-src/sys/net/if_gif.h,124\n", sizeof(struct ifreq));

	return (0);
}
