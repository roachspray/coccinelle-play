
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

	// NIOCCTRL 12.1src/sys/net/netmap.h:629
	 printf("NIOCCTRL,struct nmreq_header,%zu,12.1src/sys/net/netmap.h,629\n", sizeof(struct nmreq_header));
	// HFSC_ADD_CLASS 12.1src/sys/net/altq/altq_hfsc.h:232
	 printf("HFSC_ADD_CLASS,struct hfsc_add_class,%zu,12.1src/sys/net/altq/altq_hfsc.h,232\n", sizeof(struct hfsc_add_class));
	// HFSC_ADD_FILTER 12.1src/sys/net/altq/altq_hfsc.h:235
	 printf("HFSC_ADD_FILTER,struct hfsc_add_filter,%zu,12.1src/sys/net/altq/altq_hfsc.h,235\n", sizeof(struct hfsc_add_filter));
	// HFSC_CLEAR_HIERARCHY 12.1src/sys/net/altq/altq_hfsc.h:231
	 printf("HFSC_CLEAR_HIERARCHY,struct hfsc_interface,%zu,12.1src/sys/net/altq/altq_hfsc.h,231\n", sizeof(struct hfsc_interface));
	// HFSC_DEL_CLASS 12.1src/sys/net/altq/altq_hfsc.h:233
	 printf("HFSC_DEL_CLASS,struct hfsc_delete_class,%zu,12.1src/sys/net/altq/altq_hfsc.h,233\n", sizeof(struct hfsc_delete_class));
	// HFSC_DEL_FILTER 12.1src/sys/net/altq/altq_hfsc.h:236
	 printf("HFSC_DEL_FILTER,struct hfsc_delete_filter,%zu,12.1src/sys/net/altq/altq_hfsc.h,236\n", sizeof(struct hfsc_delete_filter));
	// HFSC_DISABLE 12.1src/sys/net/altq/altq_hfsc.h:230
	 printf("HFSC_DISABLE,struct hfsc_interface,%zu,12.1src/sys/net/altq/altq_hfsc.h,230\n", sizeof(struct hfsc_interface));
	// HFSC_ENABLE 12.1src/sys/net/altq/altq_hfsc.h:229
	 printf("HFSC_ENABLE,struct hfsc_interface,%zu,12.1src/sys/net/altq/altq_hfsc.h,229\n", sizeof(struct hfsc_interface));
	// HFSC_GETSTATS 12.1src/sys/net/altq/altq_hfsc.h:237
	 printf("HFSC_GETSTATS,struct hfsc_class_stats,%zu,12.1src/sys/net/altq/altq_hfsc.h,237\n", sizeof(struct hfsc_class_stats));
	// HFSC_IF_ATTACH 12.1src/sys/net/altq/altq_hfsc.h:227
	 printf("HFSC_IF_ATTACH,struct hfsc_attach,%zu,12.1src/sys/net/altq/altq_hfsc.h,227\n", sizeof(struct hfsc_attach));
	// HFSC_IF_DETACH 12.1src/sys/net/altq/altq_hfsc.h:228
	 printf("HFSC_IF_DETACH,struct hfsc_interface,%zu,12.1src/sys/net/altq/altq_hfsc.h,228\n", sizeof(struct hfsc_interface));
	// HFSC_MOD_CLASS 12.1src/sys/net/altq/altq_hfsc.h:234
	 printf("HFSC_MOD_CLASS,struct hfsc_modify_class,%zu,12.1src/sys/net/altq/altq_hfsc.h,234\n", sizeof(struct hfsc_modify_class));
	// CBQ_ADD_CLASS 12.1src/sys/net/altq/altq_cbq.h:192
	 printf("CBQ_ADD_CLASS,struct cbq_add_class,%zu,12.1src/sys/net/altq/altq_cbq.h,192\n", sizeof(struct cbq_add_class));
	// CBQ_ADD_FILTER 12.1src/sys/net/altq/altq_cbq.h:195
	 printf("CBQ_ADD_FILTER,struct cbq_add_filter,%zu,12.1src/sys/net/altq/altq_cbq.h,195\n", sizeof(struct cbq_add_filter));
	// CBQ_CLEAR_HIERARCHY 12.1src/sys/net/altq/altq_cbq.h:191
	 printf("CBQ_CLEAR_HIERARCHY,struct cbq_interface,%zu,12.1src/sys/net/altq/altq_cbq.h,191\n", sizeof(struct cbq_interface));
	// CBQ_DEL_CLASS 12.1src/sys/net/altq/altq_cbq.h:193
	 printf("CBQ_DEL_CLASS,struct cbq_delete_class,%zu,12.1src/sys/net/altq/altq_cbq.h,193\n", sizeof(struct cbq_delete_class));
	// CBQ_DEL_FILTER 12.1src/sys/net/altq/altq_cbq.h:196
	 printf("CBQ_DEL_FILTER,struct cbq_delete_filter,%zu,12.1src/sys/net/altq/altq_cbq.h,196\n", sizeof(struct cbq_delete_filter));
	// CBQ_DISABLE 12.1src/sys/net/altq/altq_cbq.h:190
	 printf("CBQ_DISABLE,struct cbq_interface,%zu,12.1src/sys/net/altq/altq_cbq.h,190\n", sizeof(struct cbq_interface));
	// CBQ_ENABLE 12.1src/sys/net/altq/altq_cbq.h:189
	 printf("CBQ_ENABLE,struct cbq_interface,%zu,12.1src/sys/net/altq/altq_cbq.h,189\n", sizeof(struct cbq_interface));
	// CBQ_GETSTATS 12.1src/sys/net/altq/altq_cbq.h:197
	 printf("CBQ_GETSTATS,struct cbq_getstats,%zu,12.1src/sys/net/altq/altq_cbq.h,197\n", sizeof(struct cbq_getstats));
	// CBQ_IF_ATTACH 12.1src/sys/net/altq/altq_cbq.h:187
	 printf("CBQ_IF_ATTACH,struct cbq_interface,%zu,12.1src/sys/net/altq/altq_cbq.h,187\n", sizeof(struct cbq_interface));
	// CBQ_IF_DETACH 12.1src/sys/net/altq/altq_cbq.h:188
	 printf("CBQ_IF_DETACH,struct cbq_interface,%zu,12.1src/sys/net/altq/altq_cbq.h,188\n", sizeof(struct cbq_interface));
	// CBQ_MODIFY_CLASS 12.1src/sys/net/altq/altq_cbq.h:194
	 printf("CBQ_MODIFY_CLASS,struct cbq_modify_class,%zu,12.1src/sys/net/altq/altq_cbq.h,194\n", sizeof(struct cbq_modify_class));
	// CDNR_ADD_ELEM 12.1src/sys/net/altq/altq_cdnr.h:203
	 printf("CDNR_ADD_ELEM,struct cdnr_add_element,%zu,12.1src/sys/net/altq/altq_cdnr.h,203\n", sizeof(struct cdnr_add_element));
	// CDNR_ADD_FILTER 12.1src/sys/net/altq/altq_cdnr.h:200
	 printf("CDNR_ADD_FILTER,struct cdnr_add_filter,%zu,12.1src/sys/net/altq/altq_cdnr.h,200\n", sizeof(struct cdnr_add_filter));
	// CDNR_ADD_TBM 12.1src/sys/net/altq/altq_cdnr.h:205
	 printf("CDNR_ADD_TBM,struct cdnr_add_tbmeter,%zu,12.1src/sys/net/altq/altq_cdnr.h,205\n", sizeof(struct cdnr_add_tbmeter));
	// CDNR_ADD_TCM 12.1src/sys/net/altq/altq_cdnr.h:208
	 printf("CDNR_ADD_TCM,struct cdnr_add_trtcm,%zu,12.1src/sys/net/altq/altq_cdnr.h,208\n", sizeof(struct cdnr_add_trtcm));
	// CDNR_ADD_TSW 12.1src/sys/net/altq/altq_cdnr.h:211
	 printf("CDNR_ADD_TSW,struct cdnr_add_tswtcm,%zu,12.1src/sys/net/altq/altq_cdnr.h,211\n", sizeof(struct cdnr_add_tswtcm));
	// CDNR_DEL_ELEM 12.1src/sys/net/altq/altq_cdnr.h:204
	 printf("CDNR_DEL_ELEM,struct cdnr_delete_element,%zu,12.1src/sys/net/altq/altq_cdnr.h,204\n", sizeof(struct cdnr_delete_element));
	// CDNR_DEL_FILTER 12.1src/sys/net/altq/altq_cdnr.h:201
	 printf("CDNR_DEL_FILTER,struct cdnr_delete_filter,%zu,12.1src/sys/net/altq/altq_cdnr.h,201\n", sizeof(struct cdnr_delete_filter));
	// CDNR_DISABLE 12.1src/sys/net/altq/altq_cdnr.h:199
	 printf("CDNR_DISABLE,struct cdnr_interface,%zu,12.1src/sys/net/altq/altq_cdnr.h,199\n", sizeof(struct cdnr_interface));
	// CDNR_ENABLE 12.1src/sys/net/altq/altq_cdnr.h:198
	 printf("CDNR_ENABLE,struct cdnr_interface,%zu,12.1src/sys/net/altq/altq_cdnr.h,198\n", sizeof(struct cdnr_interface));
	// CDNR_GETSTATS 12.1src/sys/net/altq/altq_cdnr.h:202
	 printf("CDNR_GETSTATS,struct cdnr_get_stats,%zu,12.1src/sys/net/altq/altq_cdnr.h,202\n", sizeof(struct cdnr_get_stats));
	// CDNR_IF_ATTACH 12.1src/sys/net/altq/altq_cdnr.h:196
	 printf("CDNR_IF_ATTACH,struct cdnr_interface,%zu,12.1src/sys/net/altq/altq_cdnr.h,196\n", sizeof(struct cdnr_interface));
	// CDNR_IF_DETACH 12.1src/sys/net/altq/altq_cdnr.h:197
	 printf("CDNR_IF_DETACH,struct cdnr_interface,%zu,12.1src/sys/net/altq/altq_cdnr.h,197\n", sizeof(struct cdnr_interface));
	// CDNR_MOD_TBM 12.1src/sys/net/altq/altq_cdnr.h:206
	 printf("CDNR_MOD_TBM,struct cdnr_modify_tbmeter,%zu,12.1src/sys/net/altq/altq_cdnr.h,206\n", sizeof(struct cdnr_modify_tbmeter));
	// CDNR_MOD_TCM 12.1src/sys/net/altq/altq_cdnr.h:209
	 printf("CDNR_MOD_TCM,struct cdnr_modify_trtcm,%zu,12.1src/sys/net/altq/altq_cdnr.h,209\n", sizeof(struct cdnr_modify_trtcm));
	// CDNR_MOD_TSW 12.1src/sys/net/altq/altq_cdnr.h:212
	 printf("CDNR_MOD_TSW,struct cdnr_modify_tswtcm,%zu,12.1src/sys/net/altq/altq_cdnr.h,212\n", sizeof(struct cdnr_modify_tswtcm));
	// CDNR_TBM_STATS 12.1src/sys/net/altq/altq_cdnr.h:207
	 printf("CDNR_TBM_STATS,struct cdnr_tbmeter_stats,%zu,12.1src/sys/net/altq/altq_cdnr.h,207\n", sizeof(struct cdnr_tbmeter_stats));
	// CDNR_TCM_STATS 12.1src/sys/net/altq/altq_cdnr.h:210
	 printf("CDNR_TCM_STATS,struct cdnr_tcm_stats,%zu,12.1src/sys/net/altq/altq_cdnr.h,210\n", sizeof(struct cdnr_tcm_stats));
	// PRIQ_ADD_CLASS 12.1src/sys/net/altq/altq_priq.h:134
	 printf("PRIQ_ADD_CLASS,struct priq_add_class,%zu,12.1src/sys/net/altq/altq_priq.h,134\n", sizeof(struct priq_add_class));
	// PRIQ_ADD_FILTER 12.1src/sys/net/altq/altq_priq.h:137
	 printf("PRIQ_ADD_FILTER,struct priq_add_filter,%zu,12.1src/sys/net/altq/altq_priq.h,137\n", sizeof(struct priq_add_filter));
	// PRIQ_CLEAR 12.1src/sys/net/altq/altq_priq.h:133
	 printf("PRIQ_CLEAR,struct priq_interface,%zu,12.1src/sys/net/altq/altq_priq.h,133\n", sizeof(struct priq_interface));
	// PRIQ_DEL_CLASS 12.1src/sys/net/altq/altq_priq.h:135
	 printf("PRIQ_DEL_CLASS,struct priq_delete_class,%zu,12.1src/sys/net/altq/altq_priq.h,135\n", sizeof(struct priq_delete_class));
	// PRIQ_DEL_FILTER 12.1src/sys/net/altq/altq_priq.h:138
	 printf("PRIQ_DEL_FILTER,struct priq_delete_filter,%zu,12.1src/sys/net/altq/altq_priq.h,138\n", sizeof(struct priq_delete_filter));
	// PRIQ_DISABLE 12.1src/sys/net/altq/altq_priq.h:132
	 printf("PRIQ_DISABLE,struct priq_interface,%zu,12.1src/sys/net/altq/altq_priq.h,132\n", sizeof(struct priq_interface));
	// PRIQ_ENABLE 12.1src/sys/net/altq/altq_priq.h:131
	 printf("PRIQ_ENABLE,struct priq_interface,%zu,12.1src/sys/net/altq/altq_priq.h,131\n", sizeof(struct priq_interface));
	// PRIQ_GETSTATS 12.1src/sys/net/altq/altq_priq.h:139
	 printf("PRIQ_GETSTATS,struct priq_class_stats,%zu,12.1src/sys/net/altq/altq_priq.h,139\n", sizeof(struct priq_class_stats));
	// PRIQ_IF_ATTACH 12.1src/sys/net/altq/altq_priq.h:129
	 printf("PRIQ_IF_ATTACH,struct priq_interface,%zu,12.1src/sys/net/altq/altq_priq.h,129\n", sizeof(struct priq_interface));
	// PRIQ_IF_DETACH 12.1src/sys/net/altq/altq_priq.h:130
	 printf("PRIQ_IF_DETACH,struct priq_interface,%zu,12.1src/sys/net/altq/altq_priq.h,130\n", sizeof(struct priq_interface));
	// PRIQ_MOD_CLASS 12.1src/sys/net/altq/altq_priq.h:136
	 printf("PRIQ_MOD_CLASS,struct priq_modify_class,%zu,12.1src/sys/net/altq/altq_priq.h,136\n", sizeof(struct priq_modify_class));
	// RED_CONFIG 12.1src/sys/net/altq/altq_red.h:111
	 printf("RED_CONFIG,struct red_conf,%zu,12.1src/sys/net/altq/altq_red.h,111\n", sizeof(struct red_conf));
	// RED_DISABLE 12.1src/sys/net/altq/altq_red.h:110
	 printf("RED_DISABLE,struct red_interface,%zu,12.1src/sys/net/altq/altq_red.h,110\n", sizeof(struct red_interface));
	// RED_ENABLE 12.1src/sys/net/altq/altq_red.h:109
	 printf("RED_ENABLE,struct red_interface,%zu,12.1src/sys/net/altq/altq_red.h,109\n", sizeof(struct red_interface));
	// RED_GETSTATS 12.1src/sys/net/altq/altq_red.h:112
	 printf("RED_GETSTATS,struct red_stats,%zu,12.1src/sys/net/altq/altq_red.h,112\n", sizeof(struct red_stats));
	// RED_IF_ATTACH 12.1src/sys/net/altq/altq_red.h:107
	 printf("RED_IF_ATTACH,struct red_interface,%zu,12.1src/sys/net/altq/altq_red.h,107\n", sizeof(struct red_interface));
	// RED_IF_DETACH 12.1src/sys/net/altq/altq_red.h:108
	 printf("RED_IF_DETACH,struct red_interface,%zu,12.1src/sys/net/altq/altq_red.h,108\n", sizeof(struct red_interface));
	// RED_SETDEFAULTS 12.1src/sys/net/altq/altq_red.h:113
	 printf("RED_SETDEFAULTS,struct redparams,%zu,12.1src/sys/net/altq/altq_red.h,113\n", sizeof(struct redparams));
	// ALTQGTYPE 12.1src/sys/net/altq/altq.h:178
	 printf("ALTQGTYPE,struct altqreq,%zu,12.1src/sys/net/altq/altq.h,178\n", sizeof(struct altqreq));
	// ALTQTBRGET 12.1src/sys/net/altq/altq.h:199
	 printf("ALTQTBRGET,struct tbrreq,%zu,12.1src/sys/net/altq/altq.h,199\n", sizeof(struct tbrreq));
	// ALTQTBRSET 12.1src/sys/net/altq/altq.h:198
	 printf("ALTQTBRSET,struct tbrreq,%zu,12.1src/sys/net/altq/altq.h,198\n", sizeof(struct tbrreq));
	// RIO_CONFIG 12.1src/sys/net/altq/altq_rio.h:82
	 printf("RIO_CONFIG,struct rio_conf,%zu,12.1src/sys/net/altq/altq_rio.h,82\n", sizeof(struct rio_conf));
	// RIO_DISABLE 12.1src/sys/net/altq/altq_rio.h:81
	 printf("RIO_DISABLE,struct rio_interface,%zu,12.1src/sys/net/altq/altq_rio.h,81\n", sizeof(struct rio_interface));
	// RIO_ENABLE 12.1src/sys/net/altq/altq_rio.h:80
	 printf("RIO_ENABLE,struct rio_interface,%zu,12.1src/sys/net/altq/altq_rio.h,80\n", sizeof(struct rio_interface));
	// RIO_GETSTATS 12.1src/sys/net/altq/altq_rio.h:83
	 printf("RIO_GETSTATS,struct rio_stats,%zu,12.1src/sys/net/altq/altq_rio.h,83\n", sizeof(struct rio_stats));
	// RIO_IF_ATTACH 12.1src/sys/net/altq/altq_rio.h:78
	 printf("RIO_IF_ATTACH,struct rio_interface,%zu,12.1src/sys/net/altq/altq_rio.h,78\n", sizeof(struct rio_interface));
	// RIO_IF_DETACH 12.1src/sys/net/altq/altq_rio.h:79
	 printf("RIO_IF_DETACH,struct rio_interface,%zu,12.1src/sys/net/altq/altq_rio.h,79\n", sizeof(struct rio_interface));
	// RIO_SETDEFAULTS 12.1src/sys/net/altq/altq_rio.h:84
	 printf("RIO_SETDEFAULTS,struct redparams [ RIO_NDROPPREC ],%zu,12.1src/sys/net/altq/altq_rio.h,84\n", sizeof(struct redparams [ RIO_NDROPPREC ]));
	// SIOCGLAGG 12.1src/sys/net/if_lagg.h:127
	 printf("SIOCGLAGG,struct lagg_reqall,%zu,12.1src/sys/net/if_lagg.h,127\n", sizeof(struct lagg_reqall));
	// SIOCGLAGGFLAGS 12.1src/sys/net/if_lagg.h:135
	 printf("SIOCGLAGGFLAGS,struct lagg_reqflags,%zu,12.1src/sys/net/if_lagg.h,135\n", sizeof(struct lagg_reqflags));
	// SIOCGLAGGOPTS 12.1src/sys/net/if_lagg.h:158
	 printf("SIOCGLAGGOPTS,struct lagg_reqopts,%zu,12.1src/sys/net/if_lagg.h,158\n", sizeof(struct lagg_reqopts));
	// SIOCGLAGGPORT 12.1src/sys/net/if_lagg.h:109
	 printf("SIOCGLAGGPORT,struct lagg_reqport,%zu,12.1src/sys/net/if_lagg.h,109\n", sizeof(struct lagg_reqport));
	// SIOCSLAGG 12.1src/sys/net/if_lagg.h:128
	 printf("SIOCSLAGG,struct lagg_reqall,%zu,12.1src/sys/net/if_lagg.h,128\n", sizeof(struct lagg_reqall));
	// SIOCSLAGGDELPORT 12.1src/sys/net/if_lagg.h:111
	 printf("SIOCSLAGGDELPORT,struct lagg_reqport,%zu,12.1src/sys/net/if_lagg.h,111\n", sizeof(struct lagg_reqport));
	// SIOCSLAGGHASH 12.1src/sys/net/if_lagg.h:136
	 printf("SIOCSLAGGHASH,struct lagg_reqflags,%zu,12.1src/sys/net/if_lagg.h,136\n", sizeof(struct lagg_reqflags));
	// SIOCSLAGGOPTS 12.1src/sys/net/if_lagg.h:159
	 printf("SIOCSLAGGOPTS,struct lagg_reqopts,%zu,12.1src/sys/net/if_lagg.h,159\n", sizeof(struct lagg_reqopts));
	// SIOCSLAGGPORT 12.1src/sys/net/if_lagg.h:110
	 printf("SIOCSLAGGPORT,struct lagg_reqport,%zu,12.1src/sys/net/if_lagg.h,110\n", sizeof(struct lagg_reqport));
	// TUNGDEBUG 12.1src/sys/net/if_tun.h:39
	 printf("TUNGDEBUG,int,%zu,12.1src/sys/net/if_tun.h,39\n", sizeof(int));
	// TUNGIFHEAD 12.1src/sys/net/if_tun.h:47
	 printf("TUNGIFHEAD,int,%zu,12.1src/sys/net/if_tun.h,47\n", sizeof(int));
	// TUNGIFINFO 12.1src/sys/net/if_tun.h:41
	 printf("TUNGIFINFO,struct tuninfo,%zu,12.1src/sys/net/if_tun.h,41\n", sizeof(struct tuninfo));
	// TUNGIFNAME 12.1src/sys/net/if_tun.h:43
	 printf("TUNGIFNAME,struct ifreq,%zu,12.1src/sys/net/if_tun.h,43\n", sizeof(struct ifreq));
	// TUNSDEBUG 12.1src/sys/net/if_tun.h:38
	 printf("TUNSDEBUG,int,%zu,12.1src/sys/net/if_tun.h,38\n", sizeof(int));
	// TUNSIFHEAD 12.1src/sys/net/if_tun.h:46
	 printf("TUNSIFHEAD,int,%zu,12.1src/sys/net/if_tun.h,46\n", sizeof(int));
	// TUNSIFINFO 12.1src/sys/net/if_tun.h:40
	 printf("TUNSIFINFO,struct tuninfo,%zu,12.1src/sys/net/if_tun.h,40\n", sizeof(struct tuninfo));
	// TUNSIFMODE 12.1src/sys/net/if_tun.h:44
	 printf("TUNSIFMODE,int,%zu,12.1src/sys/net/if_tun.h,44\n", sizeof(int));
	// TUNSLMODE 12.1src/sys/net/if_tun.h:42
	 printf("TUNSLMODE,int,%zu,12.1src/sys/net/if_tun.h,42\n", sizeof(int));
	// SIOCGETPFSYNC 12.1src/sys/net/if_pfsync.h:244
	 printf("SIOCGETPFSYNC,struct ifreq,%zu,12.1src/sys/net/if_pfsync.h,244\n", sizeof(struct ifreq));
	// SIOCSETPFSYNC 12.1src/sys/net/if_pfsync.h:243
	 printf("SIOCSETPFSYNC,struct ifreq,%zu,12.1src/sys/net/if_pfsync.h,243\n", sizeof(struct ifreq));
	// NIOCCONFIG 12.1src/sys/net/netmap_legacy.h:255
	 printf("NIOCCONFIG,struct nm_ifreq,%zu,12.1src/sys/net/netmap_legacy.h,255\n", sizeof(struct nm_ifreq));
	// NIOCGINFO 12.1src/sys/net/netmap_legacy.h:253
	 printf("NIOCGINFO,struct nmreq,%zu,12.1src/sys/net/netmap_legacy.h,253\n", sizeof(struct nmreq));
	// NIOCREGIF 12.1src/sys/net/netmap_legacy.h:254
	 printf("NIOCREGIF,struct nmreq,%zu,12.1src/sys/net/netmap_legacy.h,254\n", sizeof(struct nmreq));
	// GREGADDRD 12.1src/sys/net/if_gre.h:166
	 printf("GREGADDRD,struct ifreq,%zu,12.1src/sys/net/if_gre.h,166\n", sizeof(struct ifreq));
	// GREGADDRS 12.1src/sys/net/if_gre.h:165
	 printf("GREGADDRS,struct ifreq,%zu,12.1src/sys/net/if_gre.h,165\n", sizeof(struct ifreq));
	// GREGKEY 12.1src/sys/net/if_gre.h:170
	 printf("GREGKEY,struct ifreq,%zu,12.1src/sys/net/if_gre.h,170\n", sizeof(struct ifreq));
	// GREGOPTS 12.1src/sys/net/if_gre.h:172
	 printf("GREGOPTS,struct ifreq,%zu,12.1src/sys/net/if_gre.h,172\n", sizeof(struct ifreq));
	// GREGPORT 12.1src/sys/net/if_gre.h:174
	 printf("GREGPORT,struct ifreq,%zu,12.1src/sys/net/if_gre.h,174\n", sizeof(struct ifreq));
	// GREGPROTO 12.1src/sys/net/if_gre.h:168
	 printf("GREGPROTO,struct ifreq,%zu,12.1src/sys/net/if_gre.h,168\n", sizeof(struct ifreq));
	// GRESADDRD 12.1src/sys/net/if_gre.h:164
	 printf("GRESADDRD,struct ifreq,%zu,12.1src/sys/net/if_gre.h,164\n", sizeof(struct ifreq));
	// GRESADDRS 12.1src/sys/net/if_gre.h:163
	 printf("GRESADDRS,struct ifreq,%zu,12.1src/sys/net/if_gre.h,163\n", sizeof(struct ifreq));
	// GRESKEY 12.1src/sys/net/if_gre.h:171
	 printf("GRESKEY,struct ifreq,%zu,12.1src/sys/net/if_gre.h,171\n", sizeof(struct ifreq));
	// GRESOPTS 12.1src/sys/net/if_gre.h:173
	 printf("GRESOPTS,struct ifreq,%zu,12.1src/sys/net/if_gre.h,173\n", sizeof(struct ifreq));
	// GRESPORT 12.1src/sys/net/if_gre.h:175
	 printf("GRESPORT,struct ifreq,%zu,12.1src/sys/net/if_gre.h,175\n", sizeof(struct ifreq));
	// GRESPROTO 12.1src/sys/net/if_gre.h:167
	 printf("GRESPROTO,struct ifreq,%zu,12.1src/sys/net/if_gre.h,167\n", sizeof(struct ifreq));
	// TAPGDEBUG 12.1src/sys/net/if_tap.h:57
	 printf("TAPGDEBUG,int,%zu,12.1src/sys/net/if_tap.h,57\n", sizeof(int));
	// TAPGIFINFO 12.1src/sys/net/if_tap.h:59
	 printf("TAPGIFINFO,struct tapinfo,%zu,12.1src/sys/net/if_tap.h,59\n", sizeof(struct tapinfo));
	// TAPGIFNAME 12.1src/sys/net/if_tap.h:60
	 printf("TAPGIFNAME,struct ifreq,%zu,12.1src/sys/net/if_tap.h,60\n", sizeof(struct ifreq));
	// TAPSDEBUG 12.1src/sys/net/if_tap.h:56
	 printf("TAPSDEBUG,int,%zu,12.1src/sys/net/if_tap.h,56\n", sizeof(int));
	// TAPSIFINFO 12.1src/sys/net/if_tap.h:58
	 printf("TAPSIFINFO,struct tapinfo,%zu,12.1src/sys/net/if_tap.h,58\n", sizeof(struct tapinfo));
	// BIOCFEEDBACK 12.1src/sys/net/bpf.h:143
	 printf("BIOCFEEDBACK,u_int,%zu,12.1src/sys/net/bpf.h,143\n", sizeof(u_int));
	// BIOCGBLEN 12.1src/sys/net/bpf.h:120
	 printf("BIOCGBLEN,u_int,%zu,12.1src/sys/net/bpf.h,120\n", sizeof(u_int));
	// BIOCGDIRECTION 12.1src/sys/net/bpf.h:137
	 printf("BIOCGDIRECTION,u_int,%zu,12.1src/sys/net/bpf.h,137\n", sizeof(u_int));
	// BIOCGDLT 12.1src/sys/net/bpf.h:125
	 printf("BIOCGDLT,u_int,%zu,12.1src/sys/net/bpf.h,125\n", sizeof(u_int));
	// BIOCGDLTLIST 12.1src/sys/net/bpf.h:140
	 printf("BIOCGDLTLIST,struct bpf_dltlist,%zu,12.1src/sys/net/bpf.h,140\n", sizeof(struct bpf_dltlist));
	// BIOCGETBUFMODE 12.1src/sys/net/bpf.h:144
	 printf("BIOCGETBUFMODE,u_int,%zu,12.1src/sys/net/bpf.h,144\n", sizeof(u_int));
	// BIOCGETIF 12.1src/sys/net/bpf.h:126
	 printf("BIOCGETIF,struct ifreq,%zu,12.1src/sys/net/bpf.h,126\n", sizeof(struct ifreq));
	// BIOCGETZMAX 12.1src/sys/net/bpf.h:146
	 printf("BIOCGETZMAX,size_t,%zu,12.1src/sys/net/bpf.h,146\n", sizeof(size_t));
	// BIOCGHDRCMPLT 12.1src/sys/net/bpf.h:135
	 printf("BIOCGHDRCMPLT,u_int,%zu,12.1src/sys/net/bpf.h,135\n", sizeof(u_int));
	// BIOCGRSIG 12.1src/sys/net/bpf.h:133
	 printf("BIOCGRSIG,u_int,%zu,12.1src/sys/net/bpf.h,133\n", sizeof(u_int));
	// BIOCGRTIMEOUT 12.1src/sys/net/bpf.h:129
	 printf("BIOCGRTIMEOUT,struct timeval,%zu,12.1src/sys/net/bpf.h,129\n", sizeof(struct timeval));
	// BIOCGSTATS 12.1src/sys/net/bpf.h:130
	 printf("BIOCGSTATS,struct bpf_stat,%zu,12.1src/sys/net/bpf.h,130\n", sizeof(struct bpf_stat));
	// BIOCGTSTAMP 12.1src/sys/net/bpf.h:150
	 printf("BIOCGTSTAMP,u_int,%zu,12.1src/sys/net/bpf.h,150\n", sizeof(u_int));
	// BIOCIMMEDIATE 12.1src/sys/net/bpf.h:131
	 printf("BIOCIMMEDIATE,u_int,%zu,12.1src/sys/net/bpf.h,131\n", sizeof(u_int));
	// BIOCROTZBUF 12.1src/sys/net/bpf.h:147
	 printf("BIOCROTZBUF,struct bpf_zbuf,%zu,12.1src/sys/net/bpf.h,147\n", sizeof(struct bpf_zbuf));
	// BIOCSBLEN 12.1src/sys/net/bpf.h:121
	 printf("BIOCSBLEN,u_int,%zu,12.1src/sys/net/bpf.h,121\n", sizeof(u_int));
	// BIOCSDIRECTION 12.1src/sys/net/bpf.h:138
	 printf("BIOCSDIRECTION,u_int,%zu,12.1src/sys/net/bpf.h,138\n", sizeof(u_int));
	// BIOCSDLT 12.1src/sys/net/bpf.h:139
	 printf("BIOCSDLT,u_int,%zu,12.1src/sys/net/bpf.h,139\n", sizeof(u_int));
	// BIOCSETBUFMODE 12.1src/sys/net/bpf.h:145
	 printf("BIOCSETBUFMODE,u_int,%zu,12.1src/sys/net/bpf.h,145\n", sizeof(u_int));
	// BIOCSETF 12.1src/sys/net/bpf.h:122
	 printf("BIOCSETF,struct bpf_program,%zu,12.1src/sys/net/bpf.h,122\n", sizeof(struct bpf_program));
	// BIOCSETFNR 12.1src/sys/net/bpf.h:149
	 printf("BIOCSETFNR,struct bpf_program,%zu,12.1src/sys/net/bpf.h,149\n", sizeof(struct bpf_program));
	// BIOCSETIF 12.1src/sys/net/bpf.h:127
	 printf("BIOCSETIF,struct ifreq,%zu,12.1src/sys/net/bpf.h,127\n", sizeof(struct ifreq));
	// BIOCSETWF 12.1src/sys/net/bpf.h:142
	 printf("BIOCSETWF,struct bpf_program,%zu,12.1src/sys/net/bpf.h,142\n", sizeof(struct bpf_program));
	// BIOCSETZBUF 12.1src/sys/net/bpf.h:148
	 printf("BIOCSETZBUF,struct bpf_zbuf,%zu,12.1src/sys/net/bpf.h,148\n", sizeof(struct bpf_zbuf));
	// BIOCSHDRCMPLT 12.1src/sys/net/bpf.h:136
	 printf("BIOCSHDRCMPLT,u_int,%zu,12.1src/sys/net/bpf.h,136\n", sizeof(u_int));
	// BIOCSRSIG 12.1src/sys/net/bpf.h:134
	 printf("BIOCSRSIG,u_int,%zu,12.1src/sys/net/bpf.h,134\n", sizeof(u_int));
	// BIOCSRTIMEOUT 12.1src/sys/net/bpf.h:128
	 printf("BIOCSRTIMEOUT,struct timeval,%zu,12.1src/sys/net/bpf.h,128\n", sizeof(struct timeval));
	// BIOCSTSTAMP 12.1src/sys/net/bpf.h:151
	 printf("BIOCSTSTAMP,u_int,%zu,12.1src/sys/net/bpf.h,151\n", sizeof(u_int));
	// BIOCVERSION 12.1src/sys/net/bpf.h:132
	 printf("BIOCVERSION,struct bpf_version,%zu,12.1src/sys/net/bpf.h,132\n", sizeof(struct bpf_version));
	// DIOCADDADDR 12.1src/sys/net/pfvar.h:1475
	 printf("DIOCADDADDR,struct pfioc_pooladdr,%zu,12.1src/sys/net/pfvar.h,1475\n", sizeof(struct pfioc_pooladdr));
	// DIOCADDALTQV0 12.1src/sys/net/pfvar.h:1464
	 printf("DIOCADDALTQV0,struct pfioc_altq_v0,%zu,12.1src/sys/net/pfvar.h,1464\n", sizeof(struct pfioc_altq_v0));
	// DIOCADDALTQV1 12.1src/sys/net/pfvar.h:1465
	 printf("DIOCADDALTQV1,struct pfioc_altq_v1,%zu,12.1src/sys/net/pfvar.h,1465\n", sizeof(struct pfioc_altq_v1));
	// DIOCADDRULE 12.1src/sys/net/pfvar.h:1441
	 printf("DIOCADDRULE,struct pfioc_rule,%zu,12.1src/sys/net/pfvar.h,1441\n", sizeof(struct pfioc_rule));
	// DIOCADDSTATE 12.1src/sys/net/pfvar.h:1457
	 printf("DIOCADDSTATE,struct pfioc_state,%zu,12.1src/sys/net/pfvar.h,1457\n", sizeof(struct pfioc_state));
	// DIOCBEGINADDRS 12.1src/sys/net/pfvar.h:1474
	 printf("DIOCBEGINADDRS,struct pfioc_pooladdr,%zu,12.1src/sys/net/pfvar.h,1474\n", sizeof(struct pfioc_pooladdr));
	// DIOCCHANGEADDR 12.1src/sys/net/pfvar.h:1478
	 printf("DIOCCHANGEADDR,struct pfioc_pooladdr,%zu,12.1src/sys/net/pfvar.h,1478\n", sizeof(struct pfioc_pooladdr));
	// DIOCCHANGEALTQV0 12.1src/sys/net/pfvar.h:1470
	 printf("DIOCCHANGEALTQV0,struct pfioc_altq_v0,%zu,12.1src/sys/net/pfvar.h,1470\n", sizeof(struct pfioc_altq_v0));
	// DIOCCHANGEALTQV1 12.1src/sys/net/pfvar.h:1471
	 printf("DIOCCHANGEALTQV1,struct pfioc_altq_v1,%zu,12.1src/sys/net/pfvar.h,1471\n", sizeof(struct pfioc_altq_v1));
	// DIOCCHANGERULE 12.1src/sys/net/pfvar.h:1453
	 printf("DIOCCHANGERULE,struct pfioc_rule,%zu,12.1src/sys/net/pfvar.h,1453\n", sizeof(struct pfioc_rule));
	// DIOCCLRIFFLAG 12.1src/sys/net/pfvar.h:1509
	 printf("DIOCCLRIFFLAG,struct pfioc_iface,%zu,12.1src/sys/net/pfvar.h,1509\n", sizeof(struct pfioc_iface));
	// DIOCCLRSTATES 12.1src/sys/net/pfvar.h:1445
	 printf("DIOCCLRSTATES,struct pfioc_state_kill,%zu,12.1src/sys/net/pfvar.h,1445\n", sizeof(struct pfioc_state_kill));
	// DIOCGETADDR 12.1src/sys/net/pfvar.h:1477
	 printf("DIOCGETADDR,struct pfioc_pooladdr,%zu,12.1src/sys/net/pfvar.h,1477\n", sizeof(struct pfioc_pooladdr));
	// DIOCGETADDRS 12.1src/sys/net/pfvar.h:1476
	 printf("DIOCGETADDRS,struct pfioc_pooladdr,%zu,12.1src/sys/net/pfvar.h,1476\n", sizeof(struct pfioc_pooladdr));
	// DIOCGETALTQSV0 12.1src/sys/net/pfvar.h:1466
	 printf("DIOCGETALTQSV0,struct pfioc_altq_v0,%zu,12.1src/sys/net/pfvar.h,1466\n", sizeof(struct pfioc_altq_v0));
	// DIOCGETALTQSV1 12.1src/sys/net/pfvar.h:1467
	 printf("DIOCGETALTQSV1,struct pfioc_altq_v1,%zu,12.1src/sys/net/pfvar.h,1467\n", sizeof(struct pfioc_altq_v1));
	// DIOCGETALTQV0 12.1src/sys/net/pfvar.h:1468
	 printf("DIOCGETALTQV0,struct pfioc_altq_v0,%zu,12.1src/sys/net/pfvar.h,1468\n", sizeof(struct pfioc_altq_v0));
	// DIOCGETALTQV1 12.1src/sys/net/pfvar.h:1469
	 printf("DIOCGETALTQV1,struct pfioc_altq_v1,%zu,12.1src/sys/net/pfvar.h,1469\n", sizeof(struct pfioc_altq_v1));
	// DIOCGETLIMIT 12.1src/sys/net/pfvar.h:1459
	 printf("DIOCGETLIMIT,struct pfioc_limit,%zu,12.1src/sys/net/pfvar.h,1459\n", sizeof(struct pfioc_limit));
	// DIOCGETQSTATSV0 12.1src/sys/net/pfvar.h:1472
	 printf("DIOCGETQSTATSV0,struct pfioc_qstats_v0,%zu,12.1src/sys/net/pfvar.h,1472\n", sizeof(struct pfioc_qstats_v0));
	// DIOCGETQSTATSV1 12.1src/sys/net/pfvar.h:1473
	 printf("DIOCGETQSTATSV1,struct pfioc_qstats_v1,%zu,12.1src/sys/net/pfvar.h,1473\n", sizeof(struct pfioc_qstats_v1));
	// DIOCGETRULE 12.1src/sys/net/pfvar.h:1443
	 printf("DIOCGETRULE,struct pfioc_rule,%zu,12.1src/sys/net/pfvar.h,1443\n", sizeof(struct pfioc_rule));
	// DIOCGETRULES 12.1src/sys/net/pfvar.h:1442
	 printf("DIOCGETRULES,struct pfioc_rule,%zu,12.1src/sys/net/pfvar.h,1442\n", sizeof(struct pfioc_rule));
	// DIOCGETRULESET 12.1src/sys/net/pfvar.h:1481
	 printf("DIOCGETRULESET,struct pfioc_ruleset,%zu,12.1src/sys/net/pfvar.h,1481\n", sizeof(struct pfioc_ruleset));
	// DIOCGETRULESETS 12.1src/sys/net/pfvar.h:1480
	 printf("DIOCGETRULESETS,struct pfioc_ruleset,%zu,12.1src/sys/net/pfvar.h,1480\n", sizeof(struct pfioc_ruleset));
	// DIOCGETSRCNODES 12.1src/sys/net/pfvar.h:1504
	 printf("DIOCGETSRCNODES,struct pfioc_src_nodes,%zu,12.1src/sys/net/pfvar.h,1504\n", sizeof(struct pfioc_src_nodes));
	// DIOCGETSTATE 12.1src/sys/net/pfvar.h:1446
	 printf("DIOCGETSTATE,struct pfioc_state,%zu,12.1src/sys/net/pfvar.h,1446\n", sizeof(struct pfioc_state));
	// DIOCGETSTATES 12.1src/sys/net/pfvar.h:1452
	 printf("DIOCGETSTATES,struct pfioc_states,%zu,12.1src/sys/net/pfvar.h,1452\n", sizeof(struct pfioc_states));
	// DIOCGETSTATUS 12.1src/sys/net/pfvar.h:1448
	 printf("DIOCGETSTATUS,struct pf_status,%zu,12.1src/sys/net/pfvar.h,1448\n", sizeof(struct pf_status));
	// DIOCGETTIMEOUT 12.1src/sys/net/pfvar.h:1456
	 printf("DIOCGETTIMEOUT,struct pfioc_tm,%zu,12.1src/sys/net/pfvar.h,1456\n", sizeof(struct pfioc_tm));
	// DIOCGIFSPEEDV0 12.1src/sys/net/pfvar.h:1526
	 printf("DIOCGIFSPEEDV0,struct pf_ifspeed_v0,%zu,12.1src/sys/net/pfvar.h,1526\n", sizeof(struct pf_ifspeed_v0));
	// DIOCGIFSPEEDV1 12.1src/sys/net/pfvar.h:1527
	 printf("DIOCGIFSPEEDV1,struct pf_ifspeed_v1,%zu,12.1src/sys/net/pfvar.h,1527\n", sizeof(struct pf_ifspeed_v1));
	// DIOCIGETIFACES 12.1src/sys/net/pfvar.h:1507
	 printf("DIOCIGETIFACES,struct pfioc_iface,%zu,12.1src/sys/net/pfvar.h,1507\n", sizeof(struct pfioc_iface));
	// DIOCKILLSRCNODES 12.1src/sys/net/pfvar.h:1510
	 printf("DIOCKILLSRCNODES,struct pfioc_src_node_kill,%zu,12.1src/sys/net/pfvar.h,1510\n", sizeof(struct pfioc_src_node_kill));
	// DIOCKILLSTATES 12.1src/sys/net/pfvar.h:1461
	 printf("DIOCKILLSTATES,struct pfioc_state_kill,%zu,12.1src/sys/net/pfvar.h,1461\n", sizeof(struct pfioc_state_kill));
	// DIOCNATLOOK 12.1src/sys/net/pfvar.h:1450
	 printf("DIOCNATLOOK,struct pfioc_natlook,%zu,12.1src/sys/net/pfvar.h,1450\n", sizeof(struct pfioc_natlook));
	// DIOCOSFPADD 12.1src/sys/net/pfvar.h:1499
	 printf("DIOCOSFPADD,struct pf_osfp_ioctl,%zu,12.1src/sys/net/pfvar.h,1499\n", sizeof(struct pf_osfp_ioctl));
	// DIOCOSFPGET 12.1src/sys/net/pfvar.h:1500
	 printf("DIOCOSFPGET,struct pf_osfp_ioctl,%zu,12.1src/sys/net/pfvar.h,1500\n", sizeof(struct pf_osfp_ioctl));
	// DIOCRADDADDRS 12.1src/sys/net/pfvar.h:1489
	 printf("DIOCRADDADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1489\n", sizeof(struct pfioc_table));
	// DIOCRADDTABLES 12.1src/sys/net/pfvar.h:1483
	 printf("DIOCRADDTABLES,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1483\n", sizeof(struct pfioc_table));
	// DIOCRCLRADDRS 12.1src/sys/net/pfvar.h:1488
	 printf("DIOCRCLRADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1488\n", sizeof(struct pfioc_table));
	// DIOCRCLRASTATS 12.1src/sys/net/pfvar.h:1494
	 printf("DIOCRCLRASTATS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1494\n", sizeof(struct pfioc_table));
	// DIOCRCLRTABLES 12.1src/sys/net/pfvar.h:1482
	 printf("DIOCRCLRTABLES,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1482\n", sizeof(struct pfioc_table));
	// DIOCRCLRTSTATS 12.1src/sys/net/pfvar.h:1487
	 printf("DIOCRCLRTSTATS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1487\n", sizeof(struct pfioc_table));
	// DIOCRDELADDRS 12.1src/sys/net/pfvar.h:1490
	 printf("DIOCRDELADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1490\n", sizeof(struct pfioc_table));
	// DIOCRDELTABLES 12.1src/sys/net/pfvar.h:1484
	 printf("DIOCRDELTABLES,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1484\n", sizeof(struct pfioc_table));
	// DIOCRGETADDRS 12.1src/sys/net/pfvar.h:1492
	 printf("DIOCRGETADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1492\n", sizeof(struct pfioc_table));
	// DIOCRGETASTATS 12.1src/sys/net/pfvar.h:1493
	 printf("DIOCRGETASTATS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1493\n", sizeof(struct pfioc_table));
	// DIOCRGETTABLES 12.1src/sys/net/pfvar.h:1485
	 printf("DIOCRGETTABLES,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1485\n", sizeof(struct pfioc_table));
	// DIOCRGETTSTATS 12.1src/sys/net/pfvar.h:1486
	 printf("DIOCRGETTSTATS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1486\n", sizeof(struct pfioc_table));
	// DIOCRINADEFINE 12.1src/sys/net/pfvar.h:1497
	 printf("DIOCRINADEFINE,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1497\n", sizeof(struct pfioc_table));
	// DIOCRSETADDRS 12.1src/sys/net/pfvar.h:1491
	 printf("DIOCRSETADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1491\n", sizeof(struct pfioc_table));
	// DIOCRSETTFLAGS 12.1src/sys/net/pfvar.h:1496
	 printf("DIOCRSETTFLAGS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1496\n", sizeof(struct pfioc_table));
	// DIOCRTSTADDRS 12.1src/sys/net/pfvar.h:1495
	 printf("DIOCRTSTADDRS,struct pfioc_table,%zu,12.1src/sys/net/pfvar.h,1495\n", sizeof(struct pfioc_table));
	// DIOCSETDEBUG 12.1src/sys/net/pfvar.h:1451
	 printf("DIOCSETDEBUG,u_int32_t,%zu,12.1src/sys/net/pfvar.h,1451\n", sizeof(u_int32_t));
	// DIOCSETHOSTID 12.1src/sys/net/pfvar.h:1506
	 printf("DIOCSETHOSTID,u_int32_t,%zu,12.1src/sys/net/pfvar.h,1506\n", sizeof(u_int32_t));
	// DIOCSETIFFLAG 12.1src/sys/net/pfvar.h:1508
	 printf("DIOCSETIFFLAG,struct pfioc_iface,%zu,12.1src/sys/net/pfvar.h,1508\n", sizeof(struct pfioc_iface));
	// DIOCSETLIMIT 12.1src/sys/net/pfvar.h:1460
	 printf("DIOCSETLIMIT,struct pfioc_limit,%zu,12.1src/sys/net/pfvar.h,1460\n", sizeof(struct pfioc_limit));
	// DIOCSETSTATUSIF 12.1src/sys/net/pfvar.h:1447
	 printf("DIOCSETSTATUSIF,struct pfioc_if,%zu,12.1src/sys/net/pfvar.h,1447\n", sizeof(struct pfioc_if));
	// DIOCSETTIMEOUT 12.1src/sys/net/pfvar.h:1455
	 printf("DIOCSETTIMEOUT,struct pfioc_tm,%zu,12.1src/sys/net/pfvar.h,1455\n", sizeof(struct pfioc_tm));
	// DIOCXBEGIN 12.1src/sys/net/pfvar.h:1501
	 printf("DIOCXBEGIN,struct pfioc_trans,%zu,12.1src/sys/net/pfvar.h,1501\n", sizeof(struct pfioc_trans));
	// DIOCXCOMMIT 12.1src/sys/net/pfvar.h:1502
	 printf("DIOCXCOMMIT,struct pfioc_trans,%zu,12.1src/sys/net/pfvar.h,1502\n", sizeof(struct pfioc_trans));
	// DIOCXROLLBACK 12.1src/sys/net/pfvar.h:1503
	 printf("DIOCXROLLBACK,struct pfioc_trans,%zu,12.1src/sys/net/pfvar.h,1503\n", sizeof(struct pfioc_trans));
	// IPSECGREQID 12.1src/sys/net/if_ipsec.h:36
	 printf("IPSECGREQID,struct ifreq,%zu,12.1src/sys/net/if_ipsec.h,36\n", sizeof(struct ifreq));
	// IPSECSREQID 12.1src/sys/net/if_ipsec.h:37
	 printf("IPSECSREQID,struct ifreq,%zu,12.1src/sys/net/if_ipsec.h,37\n", sizeof(struct ifreq));
	// GIFGOPTS 12.1src/sys/net/if_gif.h:125
	 printf("GIFGOPTS,struct ifreq,%zu,12.1src/sys/net/if_gif.h,125\n", sizeof(struct ifreq));
	// GIFSOPTS 12.1src/sys/net/if_gif.h:126
	 printf("GIFSOPTS,struct ifreq,%zu,12.1src/sys/net/if_gif.h,126\n", sizeof(struct ifreq));

	return (0);
}
