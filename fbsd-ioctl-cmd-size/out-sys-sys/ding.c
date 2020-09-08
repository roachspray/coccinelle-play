
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

	// OSIOCAIFADDR 12.1src/sys/sys/sockio.h:73
	 printf("OSIOCAIFADDR,struct oifaliasreq,%zu,12.1src/sys/sys/sockio.h,73\n", sizeof(struct oifaliasreq));
	// SIOCADDMULTI 12.1src/sys/sys/sockio.h:87
	 printf("SIOCADDMULTI,struct ifreq,%zu,12.1src/sys/sys/sockio.h,87\n", sizeof(struct ifreq));
	// SIOCAIFADDR 12.1src/sys/sys/sockio.h:85
	 printf("SIOCAIFADDR,struct ifaliasreq,%zu,12.1src/sys/sys/sockio.h,85\n", sizeof(struct ifaliasreq));
	// SIOCAIFGROUP 12.1src/sys/sys/sockio.h:133
	 printf("SIOCAIFGROUP,struct ifgroupreq,%zu,12.1src/sys/sys/sockio.h,133\n", sizeof(struct ifgroupreq));
	// SIOCATMARK 12.1src/sys/sys/sockio.h:45
	 printf("SIOCATMARK,int,%zu,12.1src/sys/sys/sockio.h,45\n", sizeof(int));
	// SIOCDELMULTI 12.1src/sys/sys/sockio.h:88
	 printf("SIOCDELMULTI,struct ifreq,%zu,12.1src/sys/sys/sockio.h,88\n", sizeof(struct ifreq));
	// SIOCDIFADDR 12.1src/sys/sys/sockio.h:72
	 printf("SIOCDIFADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,72\n", sizeof(struct ifreq));
	// SIOCDIFGROUP 12.1src/sys/sys/sockio.h:135
	 printf("SIOCDIFGROUP,struct ifgroupreq,%zu,12.1src/sys/sys/sockio.h,135\n", sizeof(struct ifgroupreq));
	// SIOCDIFPHYADDR 12.1src/sys/sys/sockio.h:107
	 printf("SIOCDIFPHYADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,107\n", sizeof(struct ifreq));
	// SIOCGDRVSPEC 12.1src/sys/sys/sockio.h:125
	 printf("SIOCGDRVSPEC,struct ifdrv,%zu,12.1src/sys/sys/sockio.h,125\n", sizeof(struct ifdrv));
	// SIOCGETSGCNT 12.1src/sys/sys/sockio.h:52
	 printf("SIOCGETSGCNT,struct sioc_sg_req,%zu,12.1src/sys/sys/sockio.h,52\n", sizeof(struct sioc_sg_req));
	// SIOCGETVIFCNT 12.1src/sys/sys/sockio.h:51
	 printf("SIOCGETVIFCNT,struct sioc_vif_req,%zu,12.1src/sys/sys/sockio.h,51\n", sizeof(struct sioc_vif_req));
	// SIOCGHIWAT 12.1src/sys/sys/sockio.h:42
	 printf("SIOCGHIWAT,int,%zu,12.1src/sys/sys/sockio.h,42\n", sizeof(int));
	// SIOCGHWADDR 12.1src/sys/sys/sockio.h:102
	 printf("SIOCGHWADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,102\n", sizeof(struct ifreq));
	// SIOCGI2C 12.1src/sys/sys/sockio.h:101
	 printf("SIOCGI2C,struct ifreq,%zu,12.1src/sys/sys/sockio.h,101\n", sizeof(struct ifreq));
	// SIOCGIFADDR 12.1src/sys/sys/sockio.h:56
	 printf("SIOCGIFADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,56\n", sizeof(struct ifreq));
	// SIOCGIFBRDADDR 12.1src/sys/sys/sockio.h:63
	 printf("SIOCGIFBRDADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,63\n", sizeof(struct ifreq));
	// SIOCGIFCAP 12.1src/sys/sys/sockio.h:78
	 printf("SIOCGIFCAP,struct ifreq,%zu,12.1src/sys/sys/sockio.h,78\n", sizeof(struct ifreq));
	// SIOCGIFCONF 12.1src/sys/sys/sockio.h:66
	 printf("SIOCGIFCONF,struct ifconf,%zu,12.1src/sys/sys/sockio.h,66\n", sizeof(struct ifconf));
	// SIOCGIFDESCR 12.1src/sys/sys/sockio.h:84
	 printf("SIOCGIFDESCR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,84\n", sizeof(struct ifreq));
	// SIOCGIFDSTADDR 12.1src/sys/sys/sockio.h:59
	 printf("SIOCGIFDSTADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,59\n", sizeof(struct ifreq));
	// SIOCGIFFIB 12.1src/sys/sys/sockio.h:117
	 printf("SIOCGIFFIB,struct ifreq,%zu,12.1src/sys/sys/sockio.h,117\n", sizeof(struct ifreq));
	// SIOCGIFFLAGS 12.1src/sys/sys/sockio.h:61
	 printf("SIOCGIFFLAGS,struct ifreq,%zu,12.1src/sys/sys/sockio.h,61\n", sizeof(struct ifreq));
	// SIOCGIFGENERIC 12.1src/sys/sys/sockio.h:97
	 printf("SIOCGIFGENERIC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,97\n", sizeof(struct ifreq));
	// SIOCGIFGMEMB 12.1src/sys/sys/sockio.h:136
	 printf("SIOCGIFGMEMB,struct ifgroupreq,%zu,12.1src/sys/sys/sockio.h,136\n", sizeof(struct ifgroupreq));
	// SIOCGIFGROUP 12.1src/sys/sys/sockio.h:134
	 printf("SIOCGIFGROUP,struct ifgroupreq,%zu,12.1src/sys/sys/sockio.h,134\n", sizeof(struct ifgroupreq));
	// SIOCGIFINDEX 12.1src/sys/sys/sockio.h:79
	 printf("SIOCGIFINDEX,struct ifreq,%zu,12.1src/sys/sys/sockio.h,79\n", sizeof(struct ifreq));
	// SIOCGIFMAC 12.1src/sys/sys/sockio.h:80
	 printf("SIOCGIFMAC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,80\n", sizeof(struct ifreq));
	// SIOCGIFMEDIA 12.1src/sys/sys/sockio.h:94
	 printf("SIOCGIFMEDIA,struct ifmediareq,%zu,12.1src/sys/sys/sockio.h,94\n", sizeof(struct ifmediareq));
	// SIOCGIFMETRIC 12.1src/sys/sys/sockio.h:70
	 printf("SIOCGIFMETRIC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,70\n", sizeof(struct ifreq));
	// SIOCGIFMTU 12.1src/sys/sys/sockio.h:89
	 printf("SIOCGIFMTU,struct ifreq,%zu,12.1src/sys/sys/sockio.h,89\n", sizeof(struct ifreq));
	// SIOCGIFNETMASK 12.1src/sys/sys/sockio.h:68
	 printf("SIOCGIFNETMASK,struct ifreq,%zu,12.1src/sys/sys/sockio.h,68\n", sizeof(struct ifreq));
	// SIOCGIFPDSTADDR 12.1src/sys/sys/sockio.h:106
	 printf("SIOCGIFPDSTADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,106\n", sizeof(struct ifreq));
	// SIOCGIFPHYS 12.1src/sys/sys/sockio.h:91
	 printf("SIOCGIFPHYS,struct ifreq,%zu,12.1src/sys/sys/sockio.h,91\n", sizeof(struct ifreq));
	// SIOCGIFPSRCADDR 12.1src/sys/sys/sockio.h:105
	 printf("SIOCGIFPSRCADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,105\n", sizeof(struct ifreq));
	// SIOCGIFRSSHASH 12.1src/sys/sys/sockio.h:140
	 printf("SIOCGIFRSSHASH,struct ifrsshash,%zu,12.1src/sys/sys/sockio.h,140\n", sizeof(struct ifrsshash));
	// SIOCGIFRSSKEY 12.1src/sys/sys/sockio.h:139
	 printf("SIOCGIFRSSKEY,struct ifrsskey,%zu,12.1src/sys/sys/sockio.h,139\n", sizeof(struct ifrsskey));
	// SIOCGIFSTATUS 12.1src/sys/sys/sockio.h:99
	 printf("SIOCGIFSTATUS,struct ifstat,%zu,12.1src/sys/sys/sockio.h,99\n", sizeof(struct ifstat));
	// SIOCGIFXMEDIA 12.1src/sys/sys/sockio.h:137
	 printf("SIOCGIFXMEDIA,struct ifmediareq,%zu,12.1src/sys/sys/sockio.h,137\n", sizeof(struct ifmediareq));
	// SIOCGLANPCP 12.1src/sys/sys/sockio.h:143
	 printf("SIOCGLANPCP,struct ifreq,%zu,12.1src/sys/sys/sockio.h,143\n", sizeof(struct ifreq));
	// SIOCGLOWAT 12.1src/sys/sys/sockio.h:44
	 printf("SIOCGLOWAT,int,%zu,12.1src/sys/sys/sockio.h,44\n", sizeof(int));
	// SIOCGPGRP 12.1src/sys/sys/sockio.h:47
	 printf("SIOCGPGRP,int,%zu,12.1src/sys/sys/sockio.h,47\n", sizeof(int));
	// SIOCGPRIVATE_0 12.1src/sys/sys/sockio.h:111
	 printf("SIOCGPRIVATE_0,struct ifreq,%zu,12.1src/sys/sys/sockio.h,111\n", sizeof(struct ifreq));
	// SIOCGPRIVATE_1 12.1src/sys/sys/sockio.h:112
	 printf("SIOCGPRIVATE_1,struct ifreq,%zu,12.1src/sys/sys/sockio.h,112\n", sizeof(struct ifreq));
	// SIOCGTUNFIB 12.1src/sys/sys/sockio.h:120
	 printf("SIOCGTUNFIB,struct ifreq,%zu,12.1src/sys/sys/sockio.h,120\n", sizeof(struct ifreq));
	// SIOCIFCREATE 12.1src/sys/sys/sockio.h:128
	 printf("SIOCIFCREATE,struct ifreq,%zu,12.1src/sys/sys/sockio.h,128\n", sizeof(struct ifreq));
	// SIOCIFCREATE2 12.1src/sys/sys/sockio.h:129
	 printf("SIOCIFCREATE2,struct ifreq,%zu,12.1src/sys/sys/sockio.h,129\n", sizeof(struct ifreq));
	// SIOCIFDESTROY 12.1src/sys/sys/sockio.h:130
	 printf("SIOCIFDESTROY,struct ifreq,%zu,12.1src/sys/sys/sockio.h,130\n", sizeof(struct ifreq));
	// SIOCIFGCLONERS 12.1src/sys/sys/sockio.h:131
	 printf("SIOCIFGCLONERS,struct if_clonereq,%zu,12.1src/sys/sys/sockio.h,131\n", sizeof(struct if_clonereq));
	// SIOCSDRVSPEC 12.1src/sys/sys/sockio.h:123
	 printf("SIOCSDRVSPEC,struct ifdrv,%zu,12.1src/sys/sys/sockio.h,123\n", sizeof(struct ifdrv));
	// SIOCSHIWAT 12.1src/sys/sys/sockio.h:41
	 printf("SIOCSHIWAT,int,%zu,12.1src/sys/sys/sockio.h,41\n", sizeof(int));
	// SIOCSIFADDR 12.1src/sys/sys/sockio.h:54
	 printf("SIOCSIFADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,54\n", sizeof(struct ifreq));
	// SIOCSIFBRDADDR 12.1src/sys/sys/sockio.h:64
	 printf("SIOCSIFBRDADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,64\n", sizeof(struct ifreq));
	// SIOCSIFCAP 12.1src/sys/sys/sockio.h:77
	 printf("SIOCSIFCAP,struct ifreq,%zu,12.1src/sys/sys/sockio.h,77\n", sizeof(struct ifreq));
	// SIOCSIFDESCR 12.1src/sys/sys/sockio.h:83
	 printf("SIOCSIFDESCR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,83\n", sizeof(struct ifreq));
	// SIOCSIFDSTADDR 12.1src/sys/sys/sockio.h:57
	 printf("SIOCSIFDSTADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,57\n", sizeof(struct ifreq));
	// SIOCSIFFIB 12.1src/sys/sys/sockio.h:118
	 printf("SIOCSIFFIB,struct ifreq,%zu,12.1src/sys/sys/sockio.h,118\n", sizeof(struct ifreq));
	// SIOCSIFFLAGS 12.1src/sys/sys/sockio.h:60
	 printf("SIOCSIFFLAGS,struct ifreq,%zu,12.1src/sys/sys/sockio.h,60\n", sizeof(struct ifreq));
	// SIOCSIFGENERIC 12.1src/sys/sys/sockio.h:96
	 printf("SIOCSIFGENERIC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,96\n", sizeof(struct ifreq));
	// SIOCSIFLLADDR 12.1src/sys/sys/sockio.h:100
	 printf("SIOCSIFLLADDR,struct ifreq,%zu,12.1src/sys/sys/sockio.h,100\n", sizeof(struct ifreq));
	// SIOCSIFMAC 12.1src/sys/sys/sockio.h:81
	 printf("SIOCSIFMAC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,81\n", sizeof(struct ifreq));
	// SIOCSIFMEDIA 12.1src/sys/sys/sockio.h:93
	 printf("SIOCSIFMEDIA,struct ifreq,%zu,12.1src/sys/sys/sockio.h,93\n", sizeof(struct ifreq));
	// SIOCSIFMETRIC 12.1src/sys/sys/sockio.h:71
	 printf("SIOCSIFMETRIC,struct ifreq,%zu,12.1src/sys/sys/sockio.h,71\n", sizeof(struct ifreq));
	// SIOCSIFMTU 12.1src/sys/sys/sockio.h:90
	 printf("SIOCSIFMTU,struct ifreq,%zu,12.1src/sys/sys/sockio.h,90\n", sizeof(struct ifreq));
	// SIOCSIFNAME 12.1src/sys/sys/sockio.h:82
	 printf("SIOCSIFNAME,struct ifreq,%zu,12.1src/sys/sys/sockio.h,82\n", sizeof(struct ifreq));
	// SIOCSIFNETMASK 12.1src/sys/sys/sockio.h:69
	 printf("SIOCSIFNETMASK,struct ifreq,%zu,12.1src/sys/sys/sockio.h,69\n", sizeof(struct ifreq));
	// SIOCSIFPHYADDR 12.1src/sys/sys/sockio.h:104
	 printf("SIOCSIFPHYADDR,struct ifaliasreq,%zu,12.1src/sys/sys/sockio.h,104\n", sizeof(struct ifaliasreq));
	// SIOCSIFPHYS 12.1src/sys/sys/sockio.h:92
	 printf("SIOCSIFPHYS,struct ifreq,%zu,12.1src/sys/sys/sockio.h,92\n", sizeof(struct ifreq));
	// SIOCSIFRVNET 12.1src/sys/sys/sockio.h:115
	 printf("SIOCSIFRVNET,struct ifreq,%zu,12.1src/sys/sys/sockio.h,115\n", sizeof(struct ifreq));
	// SIOCSIFVNET 12.1src/sys/sys/sockio.h:114
	 printf("SIOCSIFVNET,struct ifreq,%zu,12.1src/sys/sys/sockio.h,114\n", sizeof(struct ifreq));
	// SIOCSLANPCP 12.1src/sys/sys/sockio.h:144
	 printf("SIOCSLANPCP,struct ifreq,%zu,12.1src/sys/sys/sockio.h,144\n", sizeof(struct ifreq));
	// SIOCSLOWAT 12.1src/sys/sys/sockio.h:43
	 printf("SIOCSLOWAT,int,%zu,12.1src/sys/sys/sockio.h,43\n", sizeof(int));
	// SIOCSPGRP 12.1src/sys/sys/sockio.h:46
	 printf("SIOCSPGRP,int,%zu,12.1src/sys/sys/sockio.h,46\n", sizeof(int));
	// SIOCSTUNFIB 12.1src/sys/sys/sockio.h:121
	 printf("SIOCSTUNFIB,struct ifreq,%zu,12.1src/sys/sys/sockio.h,121\n", sizeof(struct ifreq));
	// GPIOACCESS32 12.1src/sys/sys/gpio.h:176
	 printf("GPIOACCESS32,struct gpio_access_32,%zu,12.1src/sys/sys/gpio.h,176\n", sizeof(struct gpio_access_32));
	// GPIOCONFIG32 12.1src/sys/sys/gpio.h:177
	 printf("GPIOCONFIG32,struct gpio_config_32,%zu,12.1src/sys/sys/gpio.h,177\n", sizeof(struct gpio_config_32));
	// GPIOGET 12.1src/sys/sys/gpio.h:172
	 printf("GPIOGET,struct gpio_req,%zu,12.1src/sys/sys/gpio.h,172\n", sizeof(struct gpio_req));
	// GPIOGETCONFIG 12.1src/sys/sys/gpio.h:170
	 printf("GPIOGETCONFIG,struct gpio_pin,%zu,12.1src/sys/sys/gpio.h,170\n", sizeof(struct gpio_pin));
	// GPIOMAXPIN 12.1src/sys/sys/gpio.h:169
	 printf("GPIOMAXPIN,int,%zu,12.1src/sys/sys/gpio.h,169\n", sizeof(int));
	// GPIOSET 12.1src/sys/sys/gpio.h:173
	 printf("GPIOSET,struct gpio_req,%zu,12.1src/sys/sys/gpio.h,173\n", sizeof(struct gpio_req));
	// GPIOSETCONFIG 12.1src/sys/sys/gpio.h:171
	 printf("GPIOSETCONFIG,struct gpio_pin,%zu,12.1src/sys/sys/gpio.h,171\n", sizeof(struct gpio_pin));
	// GPIOSETNAME 12.1src/sys/sys/gpio.h:175
	 printf("GPIOSETNAME,struct gpio_pin,%zu,12.1src/sys/sys/gpio.h,175\n", sizeof(struct gpio_pin));
	// GPIOTOGGLE 12.1src/sys/sys/gpio.h:174
	 printf("GPIOTOGGLE,struct gpio_req,%zu,12.1src/sys/sys/gpio.h,174\n", sizeof(struct gpio_req));
	// CDIOCCAPABILITY 12.1src/sys/sys/cdio.h:275
	 printf("CDIOCCAPABILITY,struct ioc_capability,%zu,12.1src/sys/sys/cdio.h,275\n", sizeof(struct ioc_capability));
	// CDIOCGETVOL 12.1src/sys/sys/cdio.h:182
	 printf("CDIOCGETVOL,struct ioc_vol,%zu,12.1src/sys/sys/cdio.h,182\n", sizeof(struct ioc_vol));
	// CDIOCPITCH 12.1src/sys/sys/cdio.h:240
	 printf("CDIOCPITCH,struct ioc_pitch,%zu,12.1src/sys/sys/cdio.h,240\n", sizeof(struct ioc_pitch));
	// CDIOCPLAYBLOCKS 12.1src/sys/sys/cdio.h:129
	 printf("CDIOCPLAYBLOCKS,struct ioc_play_blocks,%zu,12.1src/sys/sys/cdio.h,129\n", sizeof(struct ioc_play_blocks));
	// CDIOCPLAYMSF 12.1src/sys/sys/cdio.h:222
	 printf("CDIOCPLAYMSF,struct ioc_play_msf,%zu,12.1src/sys/sys/cdio.h,222\n", sizeof(struct ioc_play_msf));
	// CDIOCPLAYTRACKS 12.1src/sys/sys/cdio.h:122
	 printf("CDIOCPLAYTRACKS,struct ioc_play_track,%zu,12.1src/sys/sys/cdio.h,122\n", sizeof(struct ioc_play_track));
	// CDIOCREADSUBCHANNEL 12.1src/sys/sys/cdio.h:145
	 printf("CDIOCREADSUBCHANNEL,struct ioc_read_subchannel,%zu,12.1src/sys/sys/cdio.h,145\n", sizeof(struct ioc_read_subchannel));
	// CDIOCSETPATCH 12.1src/sys/sys/cdio.h:176
	 printf("CDIOCSETPATCH,struct ioc_patch,%zu,12.1src/sys/sys/cdio.h,176\n", sizeof(struct ioc_patch));
	// CDIOCSETVOL 12.1src/sys/sys/cdio.h:184
	 printf("CDIOCSETVOL,struct ioc_vol,%zu,12.1src/sys/sys/cdio.h,184\n", sizeof(struct ioc_vol));
	// CDIOREADTOCENTRY 12.1src/sys/sys/cdio.h:170
	 printf("CDIOREADTOCENTRY,struct ioc_read_toc_single_entry,%zu,12.1src/sys/sys/cdio.h,170\n", sizeof(struct ioc_read_toc_single_entry));
	// CDIOREADTOCENTRYS 12.1src/sys/sys/cdio.h:162
	 printf("CDIOREADTOCENTRYS,struct ioc_read_toc_entry,%zu,12.1src/sys/sys/cdio.h,162\n", sizeof(struct ioc_read_toc_entry));
	// CDIOREADTOCHEADER 12.1src/sys/sys/cdio.h:153
	 printf("CDIOREADTOCHEADER,struct ioc_toc_header,%zu,12.1src/sys/sys/cdio.h,153\n", sizeof(struct ioc_toc_header));
	// CONS_BELLTYPE 12.1src/sys/sys/consio.h:122
	 printf("CONS_BELLTYPE,int,%zu,12.1src/sys/sys/consio.h,122\n", sizeof(int));
	// CONS_BLANKTIME 12.1src/sys/sys/consio.h:94
	 printf("CONS_BLANKTIME,int,%zu,12.1src/sys/sys/consio.h,94\n", sizeof(int));
	// CONS_CURRENT 12.1src/sys/sys/consio.h:85
	 printf("CONS_CURRENT,int,%zu,12.1src/sys/sys/consio.h,85\n", sizeof(int));
	// CONS_CURRENTADP 12.1src/sys/sys/consio.h:280
	 printf("CONS_CURRENTADP,int,%zu,12.1src/sys/sys/consio.h,280\n", sizeof(int));
	// CONS_CURSORTYPE 12.1src/sys/sys/consio.h:117
	 printf("CONS_CURSORTYPE,int,%zu,12.1src/sys/sys/consio.h,117\n", sizeof(int));
	// CONS_GET 12.1src/sys/sys/consio.h:88
	 printf("CONS_GET,int,%zu,12.1src/sys/sys/consio.h,88\n", sizeof(int));
	// CONS_GETCURSORSHAPE 12.1src/sys/sys/consio.h:202
	 printf("CONS_GETCURSORSHAPE,struct cshape,%zu,12.1src/sys/sys/consio.h,202\n", sizeof(struct cshape));
	// CONS_GETINFO 12.1src/sys/sys/consio.h:274
	 printf("CONS_GETINFO,vid_info_t,%zu,12.1src/sys/sys/consio.h,274\n", sizeof(vid_info_t));
	// CONS_GETTERM 12.1src/sys/sys/consio.h:324
	 printf("CONS_GETTERM,term_info_t,%zu,12.1src/sys/sys/consio.h,324\n", sizeof(term_info_t));
	// CONS_GETVERS 12.1src/sys/sys/consio.h:277
	 printf("CONS_GETVERS,int,%zu,12.1src/sys/sys/consio.h,277\n", sizeof(int));
	// CONS_GSAVER 12.1src/sys/sys/consio.h:106
	 printf("CONS_GSAVER,ssaver_t,%zu,12.1src/sys/sys/consio.h,106\n", sizeof(ssaver_t));
	// CONS_HISTORY 12.1src/sys/sys/consio.h:125
	 printf("CONS_HISTORY,int,%zu,12.1src/sys/sys/consio.h,125\n", sizeof(int));
	// CONS_IDLE 12.1src/sys/sys/consio.h:175
	 printf("CONS_IDLE,int,%zu,12.1src/sys/sys/consio.h,175\n", sizeof(int));
	// CONS_MOUSECTL 12.1src/sys/sys/consio.h:172
	 printf("CONS_MOUSECTL,mouse_info_t,%zu,12.1src/sys/sys/consio.h,172\n", sizeof(mouse_info_t));
	// CONS_SAVERMODE 12.1src/sys/sys/consio.h:181
	 printf("CONS_SAVERMODE,int,%zu,12.1src/sys/sys/consio.h,181\n", sizeof(int));
	// CONS_SAVERSTART 12.1src/sys/sys/consio.h:184
	 printf("CONS_SAVERSTART,int,%zu,12.1src/sys/sys/consio.h,184\n", sizeof(int));
	// CONS_SCRSHOT 12.1src/sys/sys/consio.h:310
	 printf("CONS_SCRSHOT,scrshot_t,%zu,12.1src/sys/sys/consio.h,310\n", sizeof(scrshot_t));
	// CONS_SETCURSORSHAPE 12.1src/sys/sys/consio.h:203
	 printf("CONS_SETCURSORSHAPE,struct cshape,%zu,12.1src/sys/sys/consio.h,203\n", sizeof(struct cshape));
	// CONS_SETTERM 12.1src/sys/sys/consio.h:325
	 printf("CONS_SETTERM,term_info_t,%zu,12.1src/sys/sys/consio.h,325\n", sizeof(term_info_t));
	// CONS_SSAVER 12.1src/sys/sys/consio.h:105
	 printf("CONS_SSAVER,ssaver_t,%zu,12.1src/sys/sys/consio.h,105\n", sizeof(ssaver_t));
	// GIO_ATTR 12.1src/sys/sys/consio.h:79
	 printf("GIO_ATTR,int,%zu,12.1src/sys/sys/consio.h,79\n", sizeof(int));
	// GIO_COLOR 12.1src/sys/sys/consio.h:82
	 printf("GIO_COLOR,int,%zu,12.1src/sys/sys/consio.h,82\n", sizeof(int));
	// GIO_FONT8x14 12.1src/sys/sys/consio.h:246
	 printf("GIO_FONT8x14,fnt14_t,%zu,12.1src/sys/sys/consio.h,246\n", sizeof(fnt14_t));
	// GIO_FONT8x16 12.1src/sys/sys/consio.h:248
	 printf("GIO_FONT8x16,fnt16_t,%zu,12.1src/sys/sys/consio.h,248\n", sizeof(fnt16_t));
	// GIO_FONT8x8 12.1src/sys/sys/consio.h:244
	 printf("GIO_FONT8x8,fnt8_t,%zu,12.1src/sys/sys/consio.h,244\n", sizeof(fnt8_t));
	// GIO_SCRNMAP 12.1src/sys/sys/consio.h:75
	 printf("GIO_SCRNMAP,scrmap_t,%zu,12.1src/sys/sys/consio.h,75\n", sizeof(scrmap_t));
	// GIO_VFONT 12.1src/sys/sys/consio.h:250
	 printf("GIO_VFONT,vfnt_t,%zu,12.1src/sys/sys/consio.h,250\n", sizeof(vfnt_t));
	// KDGETMODE 12.1src/sys/sys/consio.h:55
	 printf("KDGETMODE,int,%zu,12.1src/sys/sys/consio.h,55\n", sizeof(int));
	// KDRASTER 12.1src/sys/sys/consio.h:67
	 printf("KDRASTER,scr_size_t,%zu,12.1src/sys/sys/consio.h,67\n", sizeof(scr_size_t));
	// PIO_FONT8x14 12.1src/sys/sys/consio.h:245
	 printf("PIO_FONT8x14,fnt14_t,%zu,12.1src/sys/sys/consio.h,245\n", sizeof(fnt14_t));
	// PIO_FONT8x16 12.1src/sys/sys/consio.h:247
	 printf("PIO_FONT8x16,fnt16_t,%zu,12.1src/sys/sys/consio.h,247\n", sizeof(fnt16_t));
	// PIO_FONT8x8 12.1src/sys/sys/consio.h:243
	 printf("PIO_FONT8x8,fnt8_t,%zu,12.1src/sys/sys/consio.h,243\n", sizeof(fnt8_t));
	// PIO_SCRNMAP 12.1src/sys/sys/consio.h:76
	 printf("PIO_SCRNMAP,scrmap_t,%zu,12.1src/sys/sys/consio.h,76\n", sizeof(scrmap_t));
	// PIO_VFONT 12.1src/sys/sys/consio.h:249
	 printf("PIO_VFONT,vfnt_t,%zu,12.1src/sys/sys/consio.h,249\n", sizeof(vfnt_t));
	// VT_GETACTIVE 12.1src/sys/sys/consio.h:366
	 printf("VT_GETACTIVE,int,%zu,12.1src/sys/sys/consio.h,366\n", sizeof(int));
	// VT_GETINDEX 12.1src/sys/sys/consio.h:369
	 printf("VT_GETINDEX,int,%zu,12.1src/sys/sys/consio.h,369\n", sizeof(int));
	// VT_GETMODE 12.1src/sys/sys/consio.h:351
	 printf("VT_GETMODE,vtmode_t,%zu,12.1src/sys/sys/consio.h,351\n", sizeof(vtmode_t));
	// VT_LOCKSWITCH 12.1src/sys/sys/consio.h:372
	 printf("VT_LOCKSWITCH,int,%zu,12.1src/sys/sys/consio.h,372\n", sizeof(int));
	// VT_OPENQRY 12.1src/sys/sys/consio.h:332
	 printf("VT_OPENQRY,int,%zu,12.1src/sys/sys/consio.h,332\n", sizeof(int));
	// VT_SETMODE 12.1src/sys/sys/consio.h:350
	 printf("VT_SETMODE,vtmode_t,%zu,12.1src/sys/sys/consio.h,350\n", sizeof(vtmode_t));
	// MOUSE_GETHWID 12.1src/sys/sys/mouse.h:48
	 printf("MOUSE_GETHWID,int,%zu,12.1src/sys/sys/mouse.h,48\n", sizeof(int));
	// MOUSE_GETLEVEL 12.1src/sys/sys/mouse.h:39
	 printf("MOUSE_GETLEVEL,int,%zu,12.1src/sys/sys/mouse.h,39\n", sizeof(int));
	// MOUSE_SETLEVEL 12.1src/sys/sys/mouse.h:40
	 printf("MOUSE_SETLEVEL,int,%zu,12.1src/sys/sys/mouse.h,40\n", sizeof(int));
	// MOUSE_SETRATE 12.1src/sys/sys/mouse.h:47
	 printf("MOUSE_SETRATE,int,%zu,12.1src/sys/sys/mouse.h,47\n", sizeof(int));
	// MOUSE_SETRESOLUTION 12.1src/sys/sys/mouse.h:45
	 printf("MOUSE_SETRESOLUTION,int,%zu,12.1src/sys/sys/mouse.h,45\n", sizeof(int));
	// MOUSE_SETSCALING 12.1src/sys/sys/mouse.h:46
	 printf("MOUSE_SETSCALING,int,%zu,12.1src/sys/sys/mouse.h,46\n", sizeof(int));
	// AGPIOC_DEALLOCATE 12.1src/sys/sys/agpio.h:90
	 printf("AGPIOC_DEALLOCATE,int,%zu,12.1src/sys/sys/agpio.h,90\n", sizeof(int));
	// IOCATAATTACH 12.1src/sys/sys/ata.h:591
	 printf("IOCATAATTACH,int,%zu,12.1src/sys/sys/ata.h,591\n", sizeof(int));
	// IOCATADETACH 12.1src/sys/sys/ata.h:592
	 printf("IOCATADETACH,int,%zu,12.1src/sys/sys/ata.h,592\n", sizeof(int));
	// IOCATADEVICES 12.1src/sys/sys/ata.h:593
	 printf("IOCATADEVICES,struct ata_ioc_devices,%zu,12.1src/sys/sys/ata.h,593\n", sizeof(struct ata_ioc_devices));
	// IOCATAGMAXCHANNEL 12.1src/sys/sys/ata.h:589
	 printf("IOCATAGMAXCHANNEL,int,%zu,12.1src/sys/sys/ata.h,589\n", sizeof(int));
	// IOCATAGMODE 12.1src/sys/sys/ata.h:1006
	 printf("IOCATAGMODE,int,%zu,12.1src/sys/sys/ata.h,1006\n", sizeof(int));
	// IOCATAGPARM 12.1src/sys/sys/ata.h:1005
	 printf("IOCATAGPARM,struct ata_params,%zu,12.1src/sys/sys/ata.h,1005\n", sizeof(struct ata_params));
	// IOCATAGSPINDOWN 12.1src/sys/sys/ata.h:1009
	 printf("IOCATAGSPINDOWN,int,%zu,12.1src/sys/sys/ata.h,1009\n", sizeof(int));
	// IOCATARAIDADDSPARE 12.1src/sys/sys/ata.h:1056
	 printf("IOCATARAIDADDSPARE,struct ata_ioc_raid_config,%zu,12.1src/sys/sys/ata.h,1056\n", sizeof(struct ata_ioc_raid_config));
	// IOCATARAIDCREATE 12.1src/sys/sys/ata.h:1053
	 printf("IOCATARAIDCREATE,struct ata_ioc_raid_config,%zu,12.1src/sys/sys/ata.h,1053\n", sizeof(struct ata_ioc_raid_config));
	// IOCATARAIDDELETE 12.1src/sys/sys/ata.h:1054
	 printf("IOCATARAIDDELETE,int,%zu,12.1src/sys/sys/ata.h,1054\n", sizeof(int));
	// IOCATARAIDREBUILD 12.1src/sys/sys/ata.h:1057
	 printf("IOCATARAIDREBUILD,int,%zu,12.1src/sys/sys/ata.h,1057\n", sizeof(int));
	// IOCATARAIDSTATUS 12.1src/sys/sys/ata.h:1055
	 printf("IOCATARAIDSTATUS,struct ata_ioc_raid_status,%zu,12.1src/sys/sys/ata.h,1055\n", sizeof(struct ata_ioc_raid_status));
	// IOCATAREINIT 12.1src/sys/sys/ata.h:590
	 printf("IOCATAREINIT,int,%zu,12.1src/sys/sys/ata.h,590\n", sizeof(int));
	// IOCATAREQUEST 12.1src/sys/sys/ata.h:1004
	 printf("IOCATAREQUEST,struct ata_ioc_request,%zu,12.1src/sys/sys/ata.h,1004\n", sizeof(struct ata_ioc_request));
	// IOCATASMODE 12.1src/sys/sys/ata.h:1007
	 printf("IOCATASMODE,int,%zu,12.1src/sys/sys/ata.h,1007\n", sizeof(int));
	// IOCATASSPINDOWN 12.1src/sys/sys/ata.h:1010
	 printf("IOCATASSPINDOWN,int,%zu,12.1src/sys/sys/ata.h,1010\n", sizeof(int));
	// OTIOCGETD 12.1src/sys/sys/ioctl_compat.h:76
	 printf("OTIOCGETD,int,%zu,12.1src/sys/sys/ioctl_compat.h,76\n", sizeof(int));
	// OTIOCSETD 12.1src/sys/sys/ioctl_compat.h:77
	 printf("OTIOCSETD,int,%zu,12.1src/sys/sys/ioctl_compat.h,77\n", sizeof(int));
	// TIOCGETC 12.1src/sys/sys/ioctl_compat.h:83
	 printf("TIOCGETC,struct tchars,%zu,12.1src/sys/sys/ioctl_compat.h,83\n", sizeof(struct tchars));
	// TIOCGETP 12.1src/sys/sys/ioctl_compat.h:79
	 printf("TIOCGETP,struct sgttyb,%zu,12.1src/sys/sys/ioctl_compat.h,79\n", sizeof(struct sgttyb));
	// TIOCGLTC 12.1src/sys/sys/ioctl_compat.h:132
	 printf("TIOCGLTC,struct ltchars,%zu,12.1src/sys/sys/ioctl_compat.h,132\n", sizeof(struct ltchars));
	// TIOCLBIC 12.1src/sys/sys/ioctl_compat.h:151
	 printf("TIOCLBIC,int,%zu,12.1src/sys/sys/ioctl_compat.h,151\n", sizeof(int));
	// TIOCLBIS 12.1src/sys/sys/ioctl_compat.h:152
	 printf("TIOCLBIS,int,%zu,12.1src/sys/sys/ioctl_compat.h,152\n", sizeof(int));
	// TIOCLGET 12.1src/sys/sys/ioctl_compat.h:134
	 printf("TIOCLGET,int,%zu,12.1src/sys/sys/ioctl_compat.h,134\n", sizeof(int));
	// TIOCLSET 12.1src/sys/sys/ioctl_compat.h:150
	 printf("TIOCLSET,int,%zu,12.1src/sys/sys/ioctl_compat.h,150\n", sizeof(int));
	// TIOCSETC 12.1src/sys/sys/ioctl_compat.h:82
	 printf("TIOCSETC,struct tchars,%zu,12.1src/sys/sys/ioctl_compat.h,82\n", sizeof(struct tchars));
	// TIOCSETN 12.1src/sys/sys/ioctl_compat.h:81
	 printf("TIOCSETN,struct sgttyb,%zu,12.1src/sys/sys/ioctl_compat.h,81\n", sizeof(struct sgttyb));
	// TIOCSETP 12.1src/sys/sys/ioctl_compat.h:80
	 printf("TIOCSETP,struct sgttyb,%zu,12.1src/sys/sys/ioctl_compat.h,80\n", sizeof(struct sgttyb));
	// TIOCSLTC 12.1src/sys/sys/ioctl_compat.h:133
	 printf("TIOCSLTC,struct ltchars,%zu,12.1src/sys/sys/ioctl_compat.h,133\n", sizeof(struct ltchars));
	// DVDIOCREADSTRUCTURE 12.1src/sys/sys/dvdio.h:110
	 printf("DVDIOCREADSTRUCTURE,struct dvd_struct,%zu,12.1src/sys/sys/dvdio.h,110\n", sizeof(struct dvd_struct));
	// DVDIOCREPORTKEY 12.1src/sys/sys/dvdio.h:108
	 printf("DVDIOCREPORTKEY,struct dvd_authinfo,%zu,12.1src/sys/sys/dvdio.h,108\n", sizeof(struct dvd_authinfo));
	// DVDIOCSENDKEY 12.1src/sys/sys/dvdio.h:109
	 printf("DVDIOCSENDKEY,struct dvd_authinfo,%zu,12.1src/sys/sys/dvdio.h,109\n", sizeof(struct dvd_authinfo));
	// SNPSTTY 12.1src/sys/sys/snoop.h:31
	 printf("SNPSTTY,int,%zu,12.1src/sys/sys/snoop.h,31\n", sizeof(int));
	// EFIIOC_GET_TABLE 12.1src/sys/sys/efiio.h:51
	 printf("EFIIOC_GET_TABLE,struct efi_get_table_ioc,%zu,12.1src/sys/sys/efiio.h,51\n", sizeof(struct efi_get_table_ioc));
	// EFIIOC_GET_TIME 12.1src/sys/sys/efiio.h:52
	 printf("EFIIOC_GET_TIME,struct efi_tm,%zu,12.1src/sys/sys/efiio.h,52\n", sizeof(struct efi_tm));
	// EFIIOC_SET_TIME 12.1src/sys/sys/efiio.h:53
	 printf("EFIIOC_SET_TIME,struct efi_tm,%zu,12.1src/sys/sys/efiio.h,53\n", sizeof(struct efi_tm));
	// EFIIOC_VAR_GET 12.1src/sys/sys/efiio.h:54
	 printf("EFIIOC_VAR_GET,struct efi_var_ioc,%zu,12.1src/sys/sys/efiio.h,54\n", sizeof(struct efi_var_ioc));
	// EFIIOC_VAR_NEXT 12.1src/sys/sys/efiio.h:55
	 printf("EFIIOC_VAR_NEXT,struct efi_var_ioc,%zu,12.1src/sys/sys/efiio.h,55\n", sizeof(struct efi_var_ioc));
	// EFIIOC_VAR_SET 12.1src/sys/sys/efiio.h:56
	 printf("EFIIOC_VAR_SET,struct efi_var_ioc,%zu,12.1src/sys/sys/efiio.h,56\n", sizeof(struct efi_var_ioc));
	// DEV_ATTACH 12.1src/sys/sys/bus.h:121
	 printf("DEV_ATTACH,struct devreq,%zu,12.1src/sys/sys/bus.h,121\n", sizeof(struct devreq));
	// DEV_CLEAR_DRIVER 12.1src/sys/sys/bus.h:128
	 printf("DEV_CLEAR_DRIVER,struct devreq,%zu,12.1src/sys/sys/bus.h,128\n", sizeof(struct devreq));
	// DEV_DELETE 12.1src/sys/sys/bus.h:130
	 printf("DEV_DELETE,struct devreq,%zu,12.1src/sys/sys/bus.h,130\n", sizeof(struct devreq));
	// DEV_DETACH 12.1src/sys/sys/bus.h:122
	 printf("DEV_DETACH,struct devreq,%zu,12.1src/sys/sys/bus.h,122\n", sizeof(struct devreq));
	// DEV_DISABLE 12.1src/sys/sys/bus.h:124
	 printf("DEV_DISABLE,struct devreq,%zu,12.1src/sys/sys/bus.h,124\n", sizeof(struct devreq));
	// DEV_ENABLE 12.1src/sys/sys/bus.h:123
	 printf("DEV_ENABLE,struct devreq,%zu,12.1src/sys/sys/bus.h,123\n", sizeof(struct devreq));
	// DEV_FREEZE 12.1src/sys/sys/bus.h:131
	 printf("DEV_FREEZE,struct devreq,%zu,12.1src/sys/sys/bus.h,131\n", sizeof(struct devreq));
	// DEV_RESCAN 12.1src/sys/sys/bus.h:129
	 printf("DEV_RESCAN,struct devreq,%zu,12.1src/sys/sys/bus.h,129\n", sizeof(struct devreq));
	// DEV_RESET 12.1src/sys/sys/bus.h:133
	 printf("DEV_RESET,struct devreq,%zu,12.1src/sys/sys/bus.h,133\n", sizeof(struct devreq));
	// DEV_RESUME 12.1src/sys/sys/bus.h:126
	 printf("DEV_RESUME,struct devreq,%zu,12.1src/sys/sys/bus.h,126\n", sizeof(struct devreq));
	// DEV_SET_DRIVER 12.1src/sys/sys/bus.h:127
	 printf("DEV_SET_DRIVER,struct devreq,%zu,12.1src/sys/sys/bus.h,127\n", sizeof(struct devreq));
	// DEV_SUSPEND 12.1src/sys/sys/bus.h:125
	 printf("DEV_SUSPEND,struct devreq,%zu,12.1src/sys/sys/bus.h,125\n", sizeof(struct devreq));
	// DEV_THAW 12.1src/sys/sys/bus.h:132
	 printf("DEV_THAW,struct devreq,%zu,12.1src/sys/sys/bus.h,132\n", sizeof(struct devreq));
	// AACIO_STATS 12.1src/sys/sys/aac_ioctl.h:55
	 printf("AACIO_STATS,union aac_statrequest,%zu,12.1src/sys/sys/aac_ioctl.h,55\n", sizeof(union aac_statrequest));
	// MEMRANGE_GET 12.1src/sys/sys/memrange.h:45
	 printf("MEMRANGE_GET,struct mem_range_op,%zu,12.1src/sys/sys/memrange.h,45\n", sizeof(struct mem_range_op));
	// MEMRANGE_SET 12.1src/sys/sys/memrange.h:46
	 printf("MEMRANGE_SET,struct mem_range_op,%zu,12.1src/sys/sys/memrange.h,46\n", sizeof(struct mem_range_op));
	// MTIOCERRSTAT 12.1src/sys/sys/mtio.h:330
	 printf("MTIOCERRSTAT,union mterrstat,%zu,12.1src/sys/sys/mtio.h,330\n", sizeof(union mterrstat));
	// MTIOCEXTGET 12.1src/sys/sys/mtio.h:342
	 printf("MTIOCEXTGET,struct mtextget,%zu,12.1src/sys/sys/mtio.h,342\n", sizeof(struct mtextget));
	// MTIOCEXTLOCATE 12.1src/sys/sys/mtio.h:341
	 printf("MTIOCEXTLOCATE,struct mtlocate,%zu,12.1src/sys/sys/mtio.h,341\n", sizeof(struct mtlocate));
	// MTIOCGET 12.1src/sys/sys/mtio.h:316
	 printf("MTIOCGET,struct mtget,%zu,12.1src/sys/sys/mtio.h,316\n", sizeof(struct mtget));
	// MTIOCGETEOTMODEL 12.1src/sys/sys/mtio.h:338
	 printf("MTIOCGETEOTMODEL,u_int32_t,%zu,12.1src/sys/sys/mtio.h,338\n", sizeof(u_int32_t));
	// MTIOCHLOCATE 12.1src/sys/sys/mtio.h:329
	 printf("MTIOCHLOCATE,u_int32_t,%zu,12.1src/sys/sys/mtio.h,329\n", sizeof(u_int32_t));
	// MTIOCPARAMGET 12.1src/sys/sys/mtio.h:343
	 printf("MTIOCPARAMGET,struct mtextget,%zu,12.1src/sys/sys/mtio.h,343\n", sizeof(struct mtextget));
	// MTIOCPARAMSET 12.1src/sys/sys/mtio.h:344
	 printf("MTIOCPARAMSET,struct mtparamset,%zu,12.1src/sys/sys/mtio.h,344\n", sizeof(struct mtparamset));
	// MTIOCRBLIM 12.1src/sys/sys/mtio.h:340
	 printf("MTIOCRBLIM,struct mtrblim,%zu,12.1src/sys/sys/mtio.h,340\n", sizeof(struct mtrblim));
	// MTIOCRDHPOS 12.1src/sys/sys/mtio.h:327
	 printf("MTIOCRDHPOS,u_int32_t,%zu,12.1src/sys/sys/mtio.h,327\n", sizeof(u_int32_t));
	// MTIOCRDSPOS 12.1src/sys/sys/mtio.h:326
	 printf("MTIOCRDSPOS,u_int32_t,%zu,12.1src/sys/sys/mtio.h,326\n", sizeof(u_int32_t));
	// MTIOCSETEOTMODEL 12.1src/sys/sys/mtio.h:336
	 printf("MTIOCSETEOTMODEL,u_int32_t,%zu,12.1src/sys/sys/mtio.h,336\n", sizeof(u_int32_t));
	// MTIOCSETLIST 12.1src/sys/sys/mtio.h:345
	 printf("MTIOCSETLIST,struct mtsetlist,%zu,12.1src/sys/sys/mtio.h,345\n", sizeof(struct mtsetlist));
	// MTIOCSLOCATE 12.1src/sys/sys/mtio.h:328
	 printf("MTIOCSLOCATE,u_int32_t,%zu,12.1src/sys/sys/mtio.h,328\n", sizeof(u_int32_t));
	// MTIOCTOP 12.1src/sys/sys/mtio.h:315
	 printf("MTIOCTOP,struct mtop,%zu,12.1src/sys/sys/mtio.h,315\n", sizeof(struct mtop));
	// WDIOC_GETPRETIMEOUT 12.1src/sys/sys/watchdog.h:44
	 printf("WDIOC_GETPRETIMEOUT,int,%zu,12.1src/sys/sys/watchdog.h,44\n", sizeof(int));
	// WDIOC_GETTIMELEFT 12.1src/sys/sys/watchdog.h:43
	 printf("WDIOC_GETTIMELEFT,int,%zu,12.1src/sys/sys/watchdog.h,43\n", sizeof(int));
	// WDIOC_GETTIMEOUT 12.1src/sys/sys/watchdog.h:42
	 printf("WDIOC_GETTIMEOUT,int,%zu,12.1src/sys/sys/watchdog.h,42\n", sizeof(int));
	// WDIOC_SETPRETIMEOUT 12.1src/sys/sys/watchdog.h:45
	 printf("WDIOC_SETPRETIMEOUT,int,%zu,12.1src/sys/sys/watchdog.h,45\n", sizeof(int));
	// WDIOC_SETPRETIMEOUTACT 12.1src/sys/sys/watchdog.h:47
	 printf("WDIOC_SETPRETIMEOUTACT,int,%zu,12.1src/sys/sys/watchdog.h,47\n", sizeof(int));
	// WDIOC_SETSOFT 12.1src/sys/sys/watchdog.h:50
	 printf("WDIOC_SETSOFT,int,%zu,12.1src/sys/sys/watchdog.h,50\n", sizeof(int));
	// WDIOC_SETSOFTTIMEOUTACT 12.1src/sys/sys/watchdog.h:51
	 printf("WDIOC_SETSOFTTIMEOUTACT,int,%zu,12.1src/sys/sys/watchdog.h,51\n", sizeof(int));
	// WDIOC_SETTIMEOUT 12.1src/sys/sys/watchdog.h:41
	 printf("WDIOC_SETTIMEOUT,int,%zu,12.1src/sys/sys/watchdog.h,41\n", sizeof(int));
	// CPUCTL_CPUID 12.1src/sys/sys/cpuctl.h:57
	 printf("CPUCTL_CPUID,cpuctl_cpuid_args_t,%zu,12.1src/sys/sys/cpuctl.h,57\n", sizeof(cpuctl_cpuid_args_t));
	// CPUCTL_CPUID_COUNT 12.1src/sys/sys/cpuctl.h:61
	 printf("CPUCTL_CPUID_COUNT,cpuctl_cpuid_count_args_t,%zu,12.1src/sys/sys/cpuctl.h,61\n", sizeof(cpuctl_cpuid_count_args_t));
	// CPUCTL_MSRCBIT 12.1src/sys/sys/cpuctl.h:60
	 printf("CPUCTL_MSRCBIT,cpuctl_msr_args_t,%zu,12.1src/sys/sys/cpuctl.h,60\n", sizeof(cpuctl_msr_args_t));
	// CPUCTL_MSRSBIT 12.1src/sys/sys/cpuctl.h:59
	 printf("CPUCTL_MSRSBIT,cpuctl_msr_args_t,%zu,12.1src/sys/sys/cpuctl.h,59\n", sizeof(cpuctl_msr_args_t));
	// CPUCTL_RDMSR 12.1src/sys/sys/cpuctl.h:55
	 printf("CPUCTL_RDMSR,cpuctl_msr_args_t,%zu,12.1src/sys/sys/cpuctl.h,55\n", sizeof(cpuctl_msr_args_t));
	// CPUCTL_UPDATE 12.1src/sys/sys/cpuctl.h:58
	 printf("CPUCTL_UPDATE,cpuctl_update_args_t,%zu,12.1src/sys/sys/cpuctl.h,58\n", sizeof(cpuctl_update_args_t));
	// CPUCTL_WRMSR 12.1src/sys/sys/cpuctl.h:56
	 printf("CPUCTL_WRMSR,cpuctl_msr_args_t,%zu,12.1src/sys/sys/cpuctl.h,56\n", sizeof(cpuctl_msr_args_t));
	// PCIOCATTACHED 12.1src/sys/sys/pciio.h:162
	 printf("PCIOCATTACHED,struct pci_io,%zu,12.1src/sys/sys/pciio.h,162\n", sizeof(struct pci_io));
	// PCIOCBARMMAP 12.1src/sys/sys/pciio.h:165
	 printf("PCIOCBARMMAP,struct pci_bar_mmap,%zu,12.1src/sys/sys/pciio.h,165\n", sizeof(struct pci_bar_mmap));
	// PCIOCGETBAR 12.1src/sys/sys/pciio.h:163
	 printf("PCIOCGETBAR,struct pci_bar_io,%zu,12.1src/sys/sys/pciio.h,163\n", sizeof(struct pci_bar_io));
	// PCIOCGETCONF 12.1src/sys/sys/pciio.h:159
	 printf("PCIOCGETCONF,struct pci_conf_io,%zu,12.1src/sys/sys/pciio.h,159\n", sizeof(struct pci_conf_io));
	// PCIOCLISTVPD 12.1src/sys/sys/pciio.h:164
	 printf("PCIOCLISTVPD,struct pci_list_vpd_io,%zu,12.1src/sys/sys/pciio.h,164\n", sizeof(struct pci_list_vpd_io));
	// PCIOCREAD 12.1src/sys/sys/pciio.h:160
	 printf("PCIOCREAD,struct pci_io,%zu,12.1src/sys/sys/pciio.h,160\n", sizeof(struct pci_io));
	// PCIOCWRITE 12.1src/sys/sys/pciio.h:161
	 printf("PCIOCWRITE,struct pci_io,%zu,12.1src/sys/sys/pciio.h,161\n", sizeof(struct pci_io));
	// PPS_IOC_FETCH 12.1src/sys/sys/timepps.h:132
	 printf("PPS_IOC_FETCH,struct pps_fetch_args,%zu,12.1src/sys/sys/timepps.h,132\n", sizeof(struct pps_fetch_args));
	// PPS_IOC_FETCH_FFCOUNTER 12.1src/sys/sys/timepps.h:134
	 printf("PPS_IOC_FETCH_FFCOUNTER,struct pps_fetch_ffc_args,%zu,12.1src/sys/sys/timepps.h,134\n", sizeof(struct pps_fetch_ffc_args));
	// PPS_IOC_GETCAP 12.1src/sys/sys/timepps.h:131
	 printf("PPS_IOC_GETCAP,int,%zu,12.1src/sys/sys/timepps.h,131\n", sizeof(int));
	// PPS_IOC_GETPARAMS 12.1src/sys/sys/timepps.h:130
	 printf("PPS_IOC_GETPARAMS,pps_params_t,%zu,12.1src/sys/sys/timepps.h,130\n", sizeof(pps_params_t));
	// PPS_IOC_KCBIND 12.1src/sys/sys/timepps.h:133
	 printf("PPS_IOC_KCBIND,struct pps_kcbind_args,%zu,12.1src/sys/sys/timepps.h,133\n", sizeof(struct pps_kcbind_args));
	// PPS_IOC_SETPARAMS 12.1src/sys/sys/timepps.h:129
	 printf("PPS_IOC_SETPARAMS,pps_params_t,%zu,12.1src/sys/sys/timepps.h,129\n", sizeof(pps_params_t));
	// MDIOCATTACH 12.1src/sys/sys/mdioctl.h:81
	 printf("MDIOCATTACH,struct md_ioctl,%zu,12.1src/sys/sys/mdioctl.h,81\n", sizeof(struct md_ioctl));
	// MDIOCDETACH 12.1src/sys/sys/mdioctl.h:82
	 printf("MDIOCDETACH,struct md_ioctl,%zu,12.1src/sys/sys/mdioctl.h,82\n", sizeof(struct md_ioctl));
	// MDIOCLIST 12.1src/sys/sys/mdioctl.h:84
	 printf("MDIOCLIST,struct md_ioctl,%zu,12.1src/sys/sys/mdioctl.h,84\n", sizeof(struct md_ioctl));
	// MDIOCQUERY 12.1src/sys/sys/mdioctl.h:83
	 printf("MDIOCQUERY,struct md_ioctl,%zu,12.1src/sys/sys/mdioctl.h,83\n", sizeof(struct md_ioctl));
	// MDIOCRESIZE 12.1src/sys/sys/mdioctl.h:85
	 printf("MDIOCRESIZE,struct md_ioctl,%zu,12.1src/sys/sys/mdioctl.h,85\n", sizeof(struct md_ioctl));
	// FD_FORM 12.1src/sys/sys/fdcio.h:129
	 printf("FD_FORM,struct fd_formb,%zu,12.1src/sys/sys/fdcio.h,129\n", sizeof(struct fd_formb));
	// FD_GDTYPE 12.1src/sys/sys/fdcio.h:146
	 printf("FD_GDTYPE,enum fd_drivetype,%zu,12.1src/sys/sys/fdcio.h,146\n", sizeof(enum fd_drivetype));
	// FD_GOPTS 12.1src/sys/sys/fdcio.h:133
	 printf("FD_GOPTS,int,%zu,12.1src/sys/sys/fdcio.h,133\n", sizeof(int));
	// FD_GSTAT 12.1src/sys/sys/fdcio.h:144
	 printf("FD_GSTAT,struct fdc_status,%zu,12.1src/sys/sys/fdcio.h,144\n", sizeof(struct fdc_status));
	// FD_GTYPE 12.1src/sys/sys/fdcio.h:130
	 printf("FD_GTYPE,struct fd_type,%zu,12.1src/sys/sys/fdcio.h,130\n", sizeof(struct fd_type));
	// FD_READID 12.1src/sys/sys/fdcio.h:138
	 printf("FD_READID,struct fdc_readid,%zu,12.1src/sys/sys/fdcio.h,138\n", sizeof(struct fdc_readid));
	// FD_SOPTS 12.1src/sys/sys/fdcio.h:134
	 printf("FD_SOPTS,int,%zu,12.1src/sys/sys/fdcio.h,134\n", sizeof(int));
	// FD_STYPE 12.1src/sys/sys/fdcio.h:131
	 printf("FD_STYPE,struct fd_type,%zu,12.1src/sys/sys/fdcio.h,131\n", sizeof(struct fd_type));
	// ALT_READ_TG_MEM 12.1src/sys/sys/tiio.h:330
	 printf("ALT_READ_TG_MEM,struct tg_mem,%zu,12.1src/sys/sys/tiio.h,330\n", sizeof(struct tg_mem));
	// ALT_READ_TG_REG 12.1src/sys/sys/tiio.h:332
	 printf("ALT_READ_TG_REG,struct tg_reg,%zu,12.1src/sys/sys/tiio.h,332\n", sizeof(struct tg_reg));
	// ALT_WRITE_TG_MEM 12.1src/sys/sys/tiio.h:331
	 printf("ALT_WRITE_TG_MEM,struct tg_mem,%zu,12.1src/sys/sys/tiio.h,331\n", sizeof(struct tg_mem));
	// ALT_WRITE_TG_REG 12.1src/sys/sys/tiio.h:333
	 printf("ALT_WRITE_TG_REG,struct tg_reg,%zu,12.1src/sys/sys/tiio.h,333\n", sizeof(struct tg_reg));
	// TIIOCGETPARAMS 12.1src/sys/sys/tiio.h:320
	 printf("TIIOCGETPARAMS,struct ti_params,%zu,12.1src/sys/sys/tiio.h,320\n", sizeof(struct ti_params));
	// TIIOCGETSTATS 12.1src/sys/sys/tiio.h:319
	 printf("TIIOCGETSTATS,struct ti_stats,%zu,12.1src/sys/sys/tiio.h,319\n", sizeof(struct ti_stats));
	// TIIOCGETTRACE 12.1src/sys/sys/tiio.h:323
	 printf("TIIOCGETTRACE,struct ti_trace_buf,%zu,12.1src/sys/sys/tiio.h,323\n", sizeof(struct ti_trace_buf));
	// TIIOCSETPARAMS 12.1src/sys/sys/tiio.h:321
	 printf("TIIOCSETPARAMS,struct ti_params,%zu,12.1src/sys/sys/tiio.h,321\n", sizeof(struct ti_params));
	// TIIOCSETTRACE 12.1src/sys/sys/tiio.h:322
	 printf("TIIOCSETTRACE,ti_trace_type,%zu,12.1src/sys/sys/tiio.h,322\n", sizeof(ti_trace_type));
	// CDRIOCBLANK 12.1src/sys/sys/cdrio.h:121
	 printf("CDRIOCBLANK,int,%zu,12.1src/sys/sys/cdrio.h,121\n", sizeof(int));
	// CDRIOCFIXATE 12.1src/sys/sys/cdrio.h:131
	 printf("CDRIOCFIXATE,int,%zu,12.1src/sys/sys/cdrio.h,131\n", sizeof(int));
	// CDRIOCFORMAT 12.1src/sys/sys/cdrio.h:139
	 printf("CDRIOCFORMAT,struct cdr_format_params,%zu,12.1src/sys/sys/cdrio.h,139\n", sizeof(struct cdr_format_params));
	// CDRIOCGETBLOCKSIZE 12.1src/sys/sys/cdrio.h:135
	 printf("CDRIOCGETBLOCKSIZE,int,%zu,12.1src/sys/sys/cdrio.h,135\n", sizeof(int));
	// CDRIOCGETPROGRESS 12.1src/sys/sys/cdrio.h:137
	 printf("CDRIOCGETPROGRESS,int,%zu,12.1src/sys/sys/cdrio.h,137\n", sizeof(int));
	// CDRIOCINITTRACK 12.1src/sys/sys/cdrio.h:128
	 printf("CDRIOCINITTRACK,struct cdr_track,%zu,12.1src/sys/sys/cdrio.h,128\n", sizeof(struct cdr_track));
	// CDRIOCINITWRITER 12.1src/sys/sys/cdrio.h:127
	 printf("CDRIOCINITWRITER,int,%zu,12.1src/sys/sys/cdrio.h,127\n", sizeof(int));
	// CDRIOCNEXTWRITEABLEADDR 12.1src/sys/sys/cdrio.h:126
	 printf("CDRIOCNEXTWRITEABLEADDR,int,%zu,12.1src/sys/sys/cdrio.h,126\n", sizeof(int));
	// CDRIOCREADFORMATCAPS 12.1src/sys/sys/cdrio.h:138
	 printf("CDRIOCREADFORMATCAPS,struct cdr_format_capacities,%zu,12.1src/sys/sys/cdrio.h,138\n", sizeof(struct cdr_format_capacities));
	// CDRIOCREADSPEED 12.1src/sys/sys/cdrio.h:132
	 printf("CDRIOCREADSPEED,int,%zu,12.1src/sys/sys/cdrio.h,132\n", sizeof(int));
	// CDRIOCSENDCUE 12.1src/sys/sys/cdrio.h:129
	 printf("CDRIOCSENDCUE,struct cdr_cuesheet,%zu,12.1src/sys/sys/cdrio.h,129\n", sizeof(struct cdr_cuesheet));
	// CDRIOCSETBLOCKSIZE 12.1src/sys/sys/cdrio.h:136
	 printf("CDRIOCSETBLOCKSIZE,int,%zu,12.1src/sys/sys/cdrio.h,136\n", sizeof(int));
	// CDRIOCWRITESPEED 12.1src/sys/sys/cdrio.h:133
	 printf("CDRIOCWRITESPEED,int,%zu,12.1src/sys/sys/cdrio.h,133\n", sizeof(int));
	// DIOCGATTR 12.1src/sys/sys/disk.h:142
	 printf("DIOCGATTR,struct diocgattr_arg,%zu,12.1src/sys/sys/disk.h,142\n", sizeof(struct diocgattr_arg));
	// DIOCGIDENT 12.1src/sys/sys/disk.h:85
	 printf("DIOCGIDENT,char [ DISK_IDENT_SIZE ],%zu,12.1src/sys/sys/disk.h,85\n", sizeof(char [ DISK_IDENT_SIZE ]));
	// DIOCGPHYSPATH 12.1src/sys/sys/disk.h:124
	 printf("DIOCGPHYSPATH,char [ MAXPATHLEN ],%zu,12.1src/sys/sys/disk.h,124\n", sizeof(char [ MAXPATHLEN ]));
	// DIOCGPROVIDERNAME 12.1src/sys/sys/disk.h:106
	 printf("DIOCGPROVIDERNAME,char [ MAXPATHLEN ],%zu,12.1src/sys/sys/disk.h,106\n", sizeof(char [ MAXPATHLEN ]));
	// DIOCSKERNELDUMP 12.1src/sys/sys/disk.h:154
	 printf("DIOCSKERNELDUMP,struct diocskerneldump_arg,%zu,12.1src/sys/sys/disk.h,154\n", sizeof(struct diocskerneldump_arg));
	// DIOCZONECMD 12.1src/sys/sys/disk.h:144
	 printf("DIOCZONECMD,struct disk_zone_args,%zu,12.1src/sys/sys/disk.h,144\n", sizeof(struct disk_zone_args));
	// PIOCGFL 12.1src/sys/sys/pioctl.h:62
	 printf("PIOCGFL,unsigned int,%zu,12.1src/sys/sys/pioctl.h,62\n", sizeof(unsigned int));
	// PIOCSTATUS 12.1src/sys/sys/pioctl.h:61
	 printf("PIOCSTATUS,struct procfs_status,%zu,12.1src/sys/sys/pioctl.h,61\n", sizeof(struct procfs_status));
	// PIOCWAIT 12.1src/sys/sys/pioctl.h:58
	 printf("PIOCWAIT,struct procfs_status,%zu,12.1src/sys/sys/pioctl.h,58\n", sizeof(struct procfs_status));
	// IOV_CONFIG 12.1src/sys/sys/iov.h:254
	 printf("IOV_CONFIG,struct pci_iov_arg,%zu,12.1src/sys/sys/iov.h,254\n", sizeof(struct pci_iov_arg));
	// IOV_GET_SCHEMA 12.1src/sys/sys/iov.h:256
	 printf("IOV_GET_SCHEMA,struct pci_iov_schema,%zu,12.1src/sys/sys/iov.h,256\n", sizeof(struct pci_iov_schema));
	// AIOGCAP 12.1src/sys/sys/soundcard.h:306
	 printf("AIOGCAP,snd_capabilities,%zu,12.1src/sys/sys/soundcard.h,306\n", sizeof(snd_capabilities));
	// AIOGFMT 12.1src/sys/sys/soundcard.h:250
	 printf("AIOGFMT,snd_chan_param,%zu,12.1src/sys/sys/soundcard.h,250\n", sizeof(snd_chan_param));
	// AIOGMIX 12.1src/sys/sys/soundcard.h:264
	 printf("AIOGMIX,snd_mix_param,%zu,12.1src/sys/sys/soundcard.h,264\n", sizeof(snd_mix_param));
	// AIOGSIZE 12.1src/sys/sys/soundcard.h:142
	 printf("AIOGSIZE,struct snd_size,%zu,12.1src/sys/sys/soundcard.h,142\n", sizeof(struct snd_size));
	// AIONWRITE 12.1src/sys/sys/soundcard.h:137
	 printf("AIONWRITE,int,%zu,12.1src/sys/sys/soundcard.h,137\n", sizeof(int));
	// AIOSFMT 12.1src/sys/sys/soundcard.h:251
	 printf("AIOSFMT,snd_chan_param,%zu,12.1src/sys/sys/soundcard.h,251\n", sizeof(snd_chan_param));
	// AIOSMIX 12.1src/sys/sys/soundcard.h:265
	 printf("AIOSMIX,snd_mix_param,%zu,12.1src/sys/sys/soundcard.h,265\n", sizeof(snd_mix_param));
	// AIOSSIZE 12.1src/sys/sys/soundcard.h:143
	 printf("AIOSSIZE,struct snd_size,%zu,12.1src/sys/sys/soundcard.h,143\n", sizeof(struct snd_size));
	// AIOSTOP 12.1src/sys/sys/soundcard.h:273
	 printf("AIOSTOP,int,%zu,12.1src/sys/sys/soundcard.h,273\n", sizeof(int));
	// AIOSYNC 12.1src/sys/sys/soundcard.h:287
	 printf("AIOSYNC,snd_sync_parm,%zu,12.1src/sys/sys/soundcard.h,287\n", sizeof(snd_sync_parm));
	// MIOGPASSTHRU 12.1src/sys/sys/soundcard.h:774
	 printf("MIOGPASSTHRU,int,%zu,12.1src/sys/sys/soundcard.h,774\n", sizeof(int));
	// MIOSPASSTHRU 12.1src/sys/sys/soundcard.h:773
	 printf("MIOSPASSTHRU,int,%zu,12.1src/sys/sys/soundcard.h,773\n", sizeof(int));
	// OSS_GETVERSION 12.1src/sys/sys/soundcard.h:1733
	 printf("OSS_GETVERSION,int,%zu,12.1src/sys/sys/soundcard.h,1733\n", sizeof(int));
	// SNDCTL_AUDIOINFO 12.1src/sys/sys/soundcard.h:1989
	 printf("SNDCTL_AUDIOINFO,oss_audioinfo,%zu,12.1src/sys/sys/soundcard.h,1989\n", sizeof(oss_audioinfo));
	// SNDCTL_AUDIOINFO_EX 12.1src/sys/sys/soundcard.h:1995
	 printf("SNDCTL_AUDIOINFO_EX,oss_audioinfo,%zu,12.1src/sys/sys/soundcard.h,1995\n", sizeof(oss_audioinfo));
	// SNDCTL_CARDINFO 12.1src/sys/sys/soundcard.h:1993
	 printf("SNDCTL_CARDINFO,oss_card_info,%zu,12.1src/sys/sys/soundcard.h,1993\n", sizeof(oss_card_info));
	// SNDCTL_COPR_HALT 12.1src/sys/sys/soundcard.h:993
	 printf("SNDCTL_COPR_HALT,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,993\n", sizeof(copr_debug_buf));
	// SNDCTL_COPR_LOAD 12.1src/sys/sys/soundcard.h:987
	 printf("SNDCTL_COPR_LOAD,copr_buffer,%zu,12.1src/sys/sys/soundcard.h,987\n", sizeof(copr_buffer));
	// SNDCTL_COPR_RCODE 12.1src/sys/sys/soundcard.h:989
	 printf("SNDCTL_COPR_RCODE,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,989\n", sizeof(copr_debug_buf));
	// SNDCTL_COPR_RCVMSG 12.1src/sys/sys/soundcard.h:995
	 printf("SNDCTL_COPR_RCVMSG,copr_msg,%zu,12.1src/sys/sys/soundcard.h,995\n", sizeof(copr_msg));
	// SNDCTL_COPR_RDATA 12.1src/sys/sys/soundcard.h:988
	 printf("SNDCTL_COPR_RDATA,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,988\n", sizeof(copr_debug_buf));
	// SNDCTL_COPR_RUN 12.1src/sys/sys/soundcard.h:992
	 printf("SNDCTL_COPR_RUN,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,992\n", sizeof(copr_debug_buf));
	// SNDCTL_COPR_SENDMSG 12.1src/sys/sys/soundcard.h:994
	 printf("SNDCTL_COPR_SENDMSG,copr_msg,%zu,12.1src/sys/sys/soundcard.h,994\n", sizeof(copr_msg));
	// SNDCTL_COPR_WCODE 12.1src/sys/sys/soundcard.h:991
	 printf("SNDCTL_COPR_WCODE,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,991\n", sizeof(copr_debug_buf));
	// SNDCTL_COPR_WDATA 12.1src/sys/sys/soundcard.h:990
	 printf("SNDCTL_COPR_WDATA,copr_debug_buf,%zu,12.1src/sys/sys/soundcard.h,990\n", sizeof(copr_debug_buf));
	// SNDCTL_DSP_BIND_CHANNEL 12.1src/sys/sys/soundcard.h:1717
	 printf("SNDCTL_DSP_BIND_CHANNEL,int,%zu,12.1src/sys/sys/soundcard.h,1717\n", sizeof(int));
	// SNDCTL_DSP_COOKEDMODE 12.1src/sys/sys/soundcard.h:1628
	 printf("SNDCTL_DSP_COOKEDMODE,int,%zu,12.1src/sys/sys/soundcard.h,1628\n", sizeof(int));
	// SNDCTL_DSP_CURRENT_IPTR 12.1src/sys/sys/soundcard.h:1669
	 printf("SNDCTL_DSP_CURRENT_IPTR,oss_count_t,%zu,12.1src/sys/sys/soundcard.h,1669\n", sizeof(oss_count_t));
	// SNDCTL_DSP_CURRENT_OPTR 12.1src/sys/sys/soundcard.h:1670
	 printf("SNDCTL_DSP_CURRENT_OPTR,oss_count_t,%zu,12.1src/sys/sys/soundcard.h,1670\n", sizeof(oss_count_t));
	// SNDCTL_DSP_GETBLKSIZE 12.1src/sys/sys/soundcard.h:785
	 printf("SNDCTL_DSP_GETBLKSIZE,int,%zu,12.1src/sys/sys/soundcard.h,785\n", sizeof(int));
	// SNDCTL_DSP_GETCAPS 12.1src/sys/sys/soundcard.h:829
	 printf("SNDCTL_DSP_GETCAPS,int,%zu,12.1src/sys/sys/soundcard.h,829\n", sizeof(int));
	// SNDCTL_DSP_GETCHANNELMASK 12.1src/sys/sys/soundcard.h:1716
	 printf("SNDCTL_DSP_GETCHANNELMASK,int,%zu,12.1src/sys/sys/soundcard.h,1716\n", sizeof(int));
	// SNDCTL_DSP_GETERROR 12.1src/sys/sys/soundcard.h:1597
	 printf("SNDCTL_DSP_GETERROR,audio_errinfo,%zu,12.1src/sys/sys/soundcard.h,1597\n", sizeof(audio_errinfo));
	// SNDCTL_DSP_GETFMTS 12.1src/sys/sys/soundcard.h:806
	 printf("SNDCTL_DSP_GETFMTS,int,%zu,12.1src/sys/sys/soundcard.h,806\n", sizeof(int));
	// SNDCTL_DSP_GETIPEAKS 12.1src/sys/sys/soundcard.h:1707
	 printf("SNDCTL_DSP_GETIPEAKS,oss_peaks_t,%zu,12.1src/sys/sys/soundcard.h,1707\n", sizeof(oss_peaks_t));
	// SNDCTL_DSP_GETIPTR 12.1src/sys/sys/soundcard.h:933
	 printf("SNDCTL_DSP_GETIPTR,count_info,%zu,12.1src/sys/sys/soundcard.h,933\n", sizeof(count_info));
	// SNDCTL_DSP_GETISPACE 12.1src/sys/sys/soundcard.h:820
	 printf("SNDCTL_DSP_GETISPACE,audio_buf_info,%zu,12.1src/sys/sys/soundcard.h,820\n", sizeof(audio_buf_info));
	// SNDCTL_DSP_GETODELAY 12.1src/sys/sys/soundcard.h:945
	 printf("SNDCTL_DSP_GETODELAY,int,%zu,12.1src/sys/sys/soundcard.h,945\n", sizeof(int));
	// SNDCTL_DSP_GETOPEAKS 12.1src/sys/sys/soundcard.h:1708
	 printf("SNDCTL_DSP_GETOPEAKS,oss_peaks_t,%zu,12.1src/sys/sys/soundcard.h,1708\n", sizeof(oss_peaks_t));
	// SNDCTL_DSP_GETOPTR 12.1src/sys/sys/soundcard.h:934
	 printf("SNDCTL_DSP_GETOPTR,count_info,%zu,12.1src/sys/sys/soundcard.h,934\n", sizeof(count_info));
	// SNDCTL_DSP_GETOSPACE 12.1src/sys/sys/soundcard.h:819
	 printf("SNDCTL_DSP_GETOSPACE,audio_buf_info,%zu,12.1src/sys/sys/soundcard.h,819\n", sizeof(audio_buf_info));
	// SNDCTL_DSP_GETPLAYVOL 12.1src/sys/sys/soundcard.h:1595
	 printf("SNDCTL_DSP_GETPLAYVOL,int,%zu,12.1src/sys/sys/soundcard.h,1595\n", sizeof(int));
	// SNDCTL_DSP_GETRECVOL 12.1src/sys/sys/soundcard.h:1684
	 printf("SNDCTL_DSP_GETRECVOL,int,%zu,12.1src/sys/sys/soundcard.h,1684\n", sizeof(int));
	// SNDCTL_DSP_GETTRIGGER 12.1src/sys/sys/soundcard.h:919
	 printf("SNDCTL_DSP_GETTRIGGER,int,%zu,12.1src/sys/sys/soundcard.h,919\n", sizeof(int));
	// SNDCTL_DSP_GET_CHNORDER 12.1src/sys/sys/soundcard.h:1691
	 printf("SNDCTL_DSP_GET_CHNORDER,unsigned long long,%zu,12.1src/sys/sys/soundcard.h,1691\n", sizeof(unsigned long long));
	// SNDCTL_DSP_GET_PLAYTGT 12.1src/sys/sys/soundcard.h:1682
	 printf("SNDCTL_DSP_GET_PLAYTGT,int,%zu,12.1src/sys/sys/soundcard.h,1682\n", sizeof(int));
	// SNDCTL_DSP_GET_RECSRC 12.1src/sys/sys/soundcard.h:1678
	 printf("SNDCTL_DSP_GET_RECSRC,int,%zu,12.1src/sys/sys/soundcard.h,1678\n", sizeof(int));
	// SNDCTL_DSP_LOW_WATER 12.1src/sys/sys/soundcard.h:1652
	 printf("SNDCTL_DSP_LOW_WATER,int,%zu,12.1src/sys/sys/soundcard.h,1652\n", sizeof(int));
	// SNDCTL_DSP_MAPINBUF 12.1src/sys/sys/soundcard.h:941
	 printf("SNDCTL_DSP_MAPINBUF,buffmem_desc,%zu,12.1src/sys/sys/soundcard.h,941\n", sizeof(buffmem_desc));
	// SNDCTL_DSP_MAPOUTBUF 12.1src/sys/sys/soundcard.h:942
	 printf("SNDCTL_DSP_MAPOUTBUF,buffmem_desc,%zu,12.1src/sys/sys/soundcard.h,942\n", sizeof(buffmem_desc));
	// SNDCTL_DSP_POLICY 12.1src/sys/sys/soundcard.h:1709
	 printf("SNDCTL_DSP_POLICY,int,%zu,12.1src/sys/sys/soundcard.h,1709\n", sizeof(int));
	// SNDCTL_DSP_SETBLKSIZE 12.1src/sys/sys/soundcard.h:786
	 printf("SNDCTL_DSP_SETBLKSIZE,int,%zu,12.1src/sys/sys/soundcard.h,786\n", sizeof(int));
	// SNDCTL_DSP_SETFMT 12.1src/sys/sys/soundcard.h:787
	 printf("SNDCTL_DSP_SETFMT,int,%zu,12.1src/sys/sys/soundcard.h,787\n", sizeof(int));
	// SNDCTL_DSP_SETFRAGMENT 12.1src/sys/sys/soundcard.h:803
	 printf("SNDCTL_DSP_SETFRAGMENT,int,%zu,12.1src/sys/sys/soundcard.h,803\n", sizeof(int));
	// SNDCTL_DSP_SETPLAYVOL 12.1src/sys/sys/soundcard.h:1596
	 printf("SNDCTL_DSP_SETPLAYVOL,int,%zu,12.1src/sys/sys/soundcard.h,1596\n", sizeof(int));
	// SNDCTL_DSP_SETRECVOL 12.1src/sys/sys/soundcard.h:1685
	 printf("SNDCTL_DSP_SETRECVOL,int,%zu,12.1src/sys/sys/soundcard.h,1685\n", sizeof(int));
	// SNDCTL_DSP_SETTRIGGER 12.1src/sys/sys/soundcard.h:920
	 printf("SNDCTL_DSP_SETTRIGGER,int,%zu,12.1src/sys/sys/soundcard.h,920\n", sizeof(int));
	// SNDCTL_DSP_SET_CHNORDER 12.1src/sys/sys/soundcard.h:1692
	 printf("SNDCTL_DSP_SET_CHNORDER,unsigned long long,%zu,12.1src/sys/sys/soundcard.h,1692\n", sizeof(unsigned long long));
	// SNDCTL_DSP_SET_PLAYTGT 12.1src/sys/sys/soundcard.h:1683
	 printf("SNDCTL_DSP_SET_PLAYTGT,int,%zu,12.1src/sys/sys/soundcard.h,1683\n", sizeof(int));
	// SNDCTL_DSP_SET_RECSRC 12.1src/sys/sys/soundcard.h:1679
	 printf("SNDCTL_DSP_SET_RECSRC,int,%zu,12.1src/sys/sys/soundcard.h,1679\n", sizeof(int));
	// SNDCTL_DSP_SPEED 12.1src/sys/sys/soundcard.h:783
	 printf("SNDCTL_DSP_SPEED,int,%zu,12.1src/sys/sys/soundcard.h,783\n", sizeof(int));
	// SNDCTL_DSP_STEREO 12.1src/sys/sys/soundcard.h:784
	 printf("SNDCTL_DSP_STEREO,int,%zu,12.1src/sys/sys/soundcard.h,784\n", sizeof(int));
	// SNDCTL_DSP_SUBDIVIDE 12.1src/sys/sys/soundcard.h:802
	 printf("SNDCTL_DSP_SUBDIVIDE,int,%zu,12.1src/sys/sys/soundcard.h,802\n", sizeof(int));
	// SNDCTL_DSP_SYNCGROUP 12.1src/sys/sys/soundcard.h:1611
	 printf("SNDCTL_DSP_SYNCGROUP,oss_syncgroup,%zu,12.1src/sys/sys/soundcard.h,1611\n", sizeof(oss_syncgroup));
	// SNDCTL_DSP_SYNCSTART 12.1src/sys/sys/soundcard.h:1612
	 printf("SNDCTL_DSP_SYNCSTART,int,%zu,12.1src/sys/sys/soundcard.h,1612\n", sizeof(int));
	// SNDCTL_ENGINEINFO 12.1src/sys/sys/soundcard.h:1994
	 printf("SNDCTL_ENGINEINFO,oss_audioinfo,%zu,12.1src/sys/sys/soundcard.h,1994\n", sizeof(oss_audioinfo));
	// SNDCTL_FM_4OP_ENABLE 12.1src/sys/sys/soundcard.h:332
	 printf("SNDCTL_FM_4OP_ENABLE,int,%zu,12.1src/sys/sys/soundcard.h,332\n", sizeof(int));
	// SNDCTL_FM_LOAD_INSTR 12.1src/sys/sys/soundcard.h:323
	 printf("SNDCTL_FM_LOAD_INSTR,struct sbi_instrument,%zu,12.1src/sys/sys/soundcard.h,323\n", sizeof(struct sbi_instrument));
	// SNDCTL_GETLABEL 12.1src/sys/sys/soundcard.h:2004
	 printf("SNDCTL_GETLABEL,oss_label_t,%zu,12.1src/sys/sys/soundcard.h,2004\n", sizeof(oss_label_t));
	// SNDCTL_GETSONG 12.1src/sys/sys/soundcard.h:2001
	 printf("SNDCTL_GETSONG,oss_longname_t,%zu,12.1src/sys/sys/soundcard.h,2001\n", sizeof(oss_longname_t));
	// SNDCTL_MIDIINFO 12.1src/sys/sys/soundcard.h:1991
	 printf("SNDCTL_MIDIINFO,oss_midi_info,%zu,12.1src/sys/sys/soundcard.h,1991\n", sizeof(oss_midi_info));
	// SNDCTL_MIDI_INFO 12.1src/sys/sys/soundcard.h:328
	 printf("SNDCTL_MIDI_INFO,struct midi_info,%zu,12.1src/sys/sys/soundcard.h,328\n", sizeof(struct midi_info));
	// SNDCTL_MIDI_MPUCMD 12.1src/sys/sys/soundcard.h:772
	 printf("SNDCTL_MIDI_MPUCMD,mpu_command_rec,%zu,12.1src/sys/sys/soundcard.h,772\n", sizeof(mpu_command_rec));
	// SNDCTL_MIDI_MPUMODE 12.1src/sys/sys/soundcard.h:771
	 printf("SNDCTL_MIDI_MPUMODE,int,%zu,12.1src/sys/sys/soundcard.h,771\n", sizeof(int));
	// SNDCTL_MIDI_PRETIME 12.1src/sys/sys/soundcard.h:770
	 printf("SNDCTL_MIDI_PRETIME,int,%zu,12.1src/sys/sys/soundcard.h,770\n", sizeof(int));
	// SNDCTL_MIXERINFO 12.1src/sys/sys/soundcard.h:1992
	 printf("SNDCTL_MIXERINFO,oss_mixerinfo,%zu,12.1src/sys/sys/soundcard.h,1992\n", sizeof(oss_mixerinfo));
	// SNDCTL_MIX_ENUMINFO 12.1src/sys/sys/soundcard.h:1990
	 printf("SNDCTL_MIX_ENUMINFO,oss_mixer_enuminfo,%zu,12.1src/sys/sys/soundcard.h,1990\n", sizeof(oss_mixer_enuminfo));
	// SNDCTL_MIX_EXTINFO 12.1src/sys/sys/soundcard.h:1985
	 printf("SNDCTL_MIX_EXTINFO,oss_mixext,%zu,12.1src/sys/sys/soundcard.h,1985\n", sizeof(oss_mixext));
	// SNDCTL_MIX_NREXT 12.1src/sys/sys/soundcard.h:1984
	 printf("SNDCTL_MIX_NREXT,int,%zu,12.1src/sys/sys/soundcard.h,1984\n", sizeof(int));
	// SNDCTL_MIX_NRMIX 12.1src/sys/sys/soundcard.h:1983
	 printf("SNDCTL_MIX_NRMIX,int,%zu,12.1src/sys/sys/soundcard.h,1983\n", sizeof(int));
	// SNDCTL_MIX_READ 12.1src/sys/sys/soundcard.h:1986
	 printf("SNDCTL_MIX_READ,oss_mixer_value,%zu,12.1src/sys/sys/soundcard.h,1986\n", sizeof(oss_mixer_value));
	// SNDCTL_MIX_WRITE 12.1src/sys/sys/soundcard.h:1987
	 printf("SNDCTL_MIX_WRITE,oss_mixer_value,%zu,12.1src/sys/sys/soundcard.h,1987\n", sizeof(oss_mixer_value));
	// SNDCTL_PMGR_ACCESS 12.1src/sys/sys/soundcard.h:333
	 printf("SNDCTL_PMGR_ACCESS,struct patmgr_info,%zu,12.1src/sys/sys/soundcard.h,333\n", sizeof(struct patmgr_info));
	// SNDCTL_PMGR_IFACE 12.1src/sys/sys/soundcard.h:476
	 printf("SNDCTL_PMGR_IFACE,struct patmgr_info,%zu,12.1src/sys/sys/soundcard.h,476\n", sizeof(struct patmgr_info));
	// SNDCTL_SEQ_CTRLRATE 12.1src/sys/sys/soundcard.h:319
	 printf("SNDCTL_SEQ_CTRLRATE,int,%zu,12.1src/sys/sys/soundcard.h,319\n", sizeof(int));
	// SNDCTL_SEQ_GETINCOUNT 12.1src/sys/sys/soundcard.h:321
	 printf("SNDCTL_SEQ_GETINCOUNT,int,%zu,12.1src/sys/sys/soundcard.h,321\n", sizeof(int));
	// SNDCTL_SEQ_GETOUTCOUNT 12.1src/sys/sys/soundcard.h:320
	 printf("SNDCTL_SEQ_GETOUTCOUNT,int,%zu,12.1src/sys/sys/soundcard.h,320\n", sizeof(int));
	// SNDCTL_SEQ_GETTIME 12.1src/sys/sys/soundcard.h:336
	 printf("SNDCTL_SEQ_GETTIME,int,%zu,12.1src/sys/sys/soundcard.h,336\n", sizeof(int));
	// SNDCTL_SEQ_NRMIDIS 12.1src/sys/sys/soundcard.h:327
	 printf("SNDCTL_SEQ_NRMIDIS,int,%zu,12.1src/sys/sys/soundcard.h,327\n", sizeof(int));
	// SNDCTL_SEQ_NRSYNTHS 12.1src/sys/sys/soundcard.h:326
	 printf("SNDCTL_SEQ_NRSYNTHS,int,%zu,12.1src/sys/sys/soundcard.h,326\n", sizeof(int));
	// SNDCTL_SEQ_OUTOFBAND 12.1src/sys/sys/soundcard.h:335
	 printf("SNDCTL_SEQ_OUTOFBAND,struct seq_event_rec,%zu,12.1src/sys/sys/soundcard.h,335\n", sizeof(struct seq_event_rec));
	// SNDCTL_SEQ_PERCMODE 12.1src/sys/sys/soundcard.h:322
	 printf("SNDCTL_SEQ_PERCMODE,int,%zu,12.1src/sys/sys/soundcard.h,322\n", sizeof(int));
	// SNDCTL_SEQ_RESETSAMPLES 12.1src/sys/sys/soundcard.h:325
	 printf("SNDCTL_SEQ_RESETSAMPLES,int,%zu,12.1src/sys/sys/soundcard.h,325\n", sizeof(int));
	// SNDCTL_SEQ_TESTMIDI 12.1src/sys/sys/soundcard.h:324
	 printf("SNDCTL_SEQ_TESTMIDI,int,%zu,12.1src/sys/sys/soundcard.h,324\n", sizeof(int));
	// SNDCTL_SEQ_THRESHOLD 12.1src/sys/sys/soundcard.h:329
	 printf("SNDCTL_SEQ_THRESHOLD,int,%zu,12.1src/sys/sys/soundcard.h,329\n", sizeof(int));
	// SNDCTL_SETLABEL 12.1src/sys/sys/soundcard.h:2003
	 printf("SNDCTL_SETLABEL,oss_label_t,%zu,12.1src/sys/sys/soundcard.h,2003\n", sizeof(oss_label_t));
	// SNDCTL_SETNAME 12.1src/sys/sys/soundcard.h:2002
	 printf("SNDCTL_SETNAME,oss_longname_t,%zu,12.1src/sys/sys/soundcard.h,2002\n", sizeof(oss_longname_t));
	// SNDCTL_SETSONG 12.1src/sys/sys/soundcard.h:2000
	 printf("SNDCTL_SETSONG,oss_longname_t,%zu,12.1src/sys/sys/soundcard.h,2000\n", sizeof(oss_longname_t));
	// SNDCTL_SYNTH_INFO 12.1src/sys/sys/soundcard.h:318
	 printf("SNDCTL_SYNTH_INFO,struct synth_info,%zu,12.1src/sys/sys/soundcard.h,318\n", sizeof(struct synth_info));
	// SNDCTL_SYNTH_MEMAVL 12.1src/sys/sys/soundcard.h:331
	 printf("SNDCTL_SYNTH_MEMAVL,int,%zu,12.1src/sys/sys/soundcard.h,331\n", sizeof(int));
	// SNDCTL_SYSINFO 12.1src/sys/sys/soundcard.h:1980
	 printf("SNDCTL_SYSINFO,oss_sysinfo,%zu,12.1src/sys/sys/soundcard.h,1980\n", sizeof(oss_sysinfo));
	// SNDCTL_TMR_METRONOME 12.1src/sys/sys/soundcard.h:354
	 printf("SNDCTL_TMR_METRONOME,int,%zu,12.1src/sys/sys/soundcard.h,354\n", sizeof(int));
	// SNDCTL_TMR_SELECT 12.1src/sys/sys/soundcard.h:355
	 printf("SNDCTL_TMR_SELECT,int,%zu,12.1src/sys/sys/soundcard.h,355\n", sizeof(int));
	// SNDCTL_TMR_SOURCE 12.1src/sys/sys/soundcard.h:347
	 printf("SNDCTL_TMR_SOURCE,int,%zu,12.1src/sys/sys/soundcard.h,347\n", sizeof(int));
	// SNDCTL_TMR_TEMPO 12.1src/sys/sys/soundcard.h:346
	 printf("SNDCTL_TMR_TEMPO,int,%zu,12.1src/sys/sys/soundcard.h,346\n", sizeof(int));
	// SNDCTL_TMR_TIMEBASE 12.1src/sys/sys/soundcard.h:342
	 printf("SNDCTL_TMR_TIMEBASE,int,%zu,12.1src/sys/sys/soundcard.h,342\n", sizeof(int));
	// SOUND_MIXER_INFO 12.1src/sys/sys/soundcard.h:1195
	 printf("SOUND_MIXER_INFO,mixer_info,%zu,12.1src/sys/sys/soundcard.h,1195\n", sizeof(mixer_info));
	// SOUND_PCM_READ_BITS 12.1src/sys/sys/soundcard.h:953
	 printf("SOUND_PCM_READ_BITS,int,%zu,12.1src/sys/sys/soundcard.h,953\n", sizeof(int));
	// SOUND_PCM_READ_CHANNELS 12.1src/sys/sys/soundcard.h:952
	 printf("SOUND_PCM_READ_CHANNELS,int,%zu,12.1src/sys/sys/soundcard.h,952\n", sizeof(int));
	// SOUND_PCM_READ_FILTER 12.1src/sys/sys/soundcard.h:954
	 printf("SOUND_PCM_READ_FILTER,int,%zu,12.1src/sys/sys/soundcard.h,954\n", sizeof(int));
	// SOUND_PCM_READ_RATE 12.1src/sys/sys/soundcard.h:951
	 printf("SOUND_PCM_READ_RATE,int,%zu,12.1src/sys/sys/soundcard.h,951\n", sizeof(int));
	// SOUND_PCM_WRITE_CHANNELS 12.1src/sys/sys/soundcard.h:793
	 printf("SOUND_PCM_WRITE_CHANNELS,int,%zu,12.1src/sys/sys/soundcard.h,793\n", sizeof(int));
	// SOUND_PCM_WRITE_FILTER 12.1src/sys/sys/soundcard.h:795
	 printf("SOUND_PCM_WRITE_FILTER,int,%zu,12.1src/sys/sys/soundcard.h,795\n", sizeof(int));
	// FIOASYNC 12.1src/sys/sys/filio.h:51
	 printf("FIOASYNC,int,%zu,12.1src/sys/sys/filio.h,51\n", sizeof(int));
	// FIOBMAP2 12.1src/sys/sys/filio.h:72
	 printf("FIOBMAP2,struct fiobmap2_arg,%zu,12.1src/sys/sys/filio.h,72\n", sizeof(struct fiobmap2_arg));
	// FIODGNAME 12.1src/sys/sys/filio.h:60
	 printf("FIODGNAME,struct fiodgname_arg,%zu,12.1src/sys/sys/filio.h,60\n", sizeof(struct fiodgname_arg));
	// FIODTYPE 12.1src/sys/sys/filio.h:54
	 printf("FIODTYPE,int,%zu,12.1src/sys/sys/filio.h,54\n", sizeof(int));
	// FIOGETLBA 12.1src/sys/sys/filio.h:55
	 printf("FIOGETLBA,int,%zu,12.1src/sys/sys/filio.h,55\n", sizeof(int));
	// FIOGETOWN 12.1src/sys/sys/filio.h:53
	 printf("FIOGETOWN,int,%zu,12.1src/sys/sys/filio.h,53\n", sizeof(int));
	// FIONBIO 12.1src/sys/sys/filio.h:50
	 printf("FIONBIO,int,%zu,12.1src/sys/sys/filio.h,50\n", sizeof(int));
	// FIONREAD 12.1src/sys/sys/filio.h:49
	 printf("FIONREAD,int,%zu,12.1src/sys/sys/filio.h,49\n", sizeof(int));
	// FIONSPACE 12.1src/sys/sys/filio.h:62
	 printf("FIONSPACE,int,%zu,12.1src/sys/sys/filio.h,62\n", sizeof(int));
	// FIONWRITE 12.1src/sys/sys/filio.h:61
	 printf("FIONWRITE,int,%zu,12.1src/sys/sys/filio.h,61\n", sizeof(int));
	// FIOSETOWN 12.1src/sys/sys/filio.h:52
	 printf("FIOSETOWN,int,%zu,12.1src/sys/sys/filio.h,52\n", sizeof(int));
	// FBIOGATTR 12.1src/sys/sys/fbio.h:226
	 printf("FBIOGATTR,struct fbgattr,%zu,12.1src/sys/sys/fbio.h,226\n", sizeof(struct fbgattr));
	// FBIOGCURMAX 12.1src/sys/sys/fbio.h:276
	 printf("FBIOGCURMAX,struct fbcurpos,%zu,12.1src/sys/sys/fbio.h,276\n", sizeof(struct fbcurpos));
	// FBIOGCURPOS 12.1src/sys/sys/fbio.h:273
	 printf("FBIOGCURPOS,struct fbcurpos,%zu,12.1src/sys/sys/fbio.h,273\n", sizeof(struct fbcurpos));
	// FBIOGCURSOR 12.1src/sys/sys/fbio.h:269
	 printf("FBIOGCURSOR,struct fbcursor,%zu,12.1src/sys/sys/fbio.h,269\n", sizeof(struct fbcursor));
	// FBIOGETCMAP 12.1src/sys/sys/fbio.h:201
	 printf("FBIOGETCMAP,struct fbcmap,%zu,12.1src/sys/sys/fbio.h,201\n", sizeof(struct fbcmap));
	// FBIOGETCMAPI 12.1src/sys/sys/fbio.h:330
	 printf("FBIOGETCMAPI,struct fbcmap_i,%zu,12.1src/sys/sys/fbio.h,330\n", sizeof(struct fbcmap_i));
	// FBIOGINFO 12.1src/sys/sys/fbio.h:187
	 printf("FBIOGINFO,struct fbinfo,%zu,12.1src/sys/sys/fbio.h,187\n", sizeof(struct fbinfo));
	// FBIOGTYPE 12.1src/sys/sys/fbio.h:107
	 printf("FBIOGTYPE,struct fbtype,%zu,12.1src/sys/sys/fbio.h,107\n", sizeof(struct fbtype));
	// FBIOGVIDEO 12.1src/sys/sys/fbio.h:235
	 printf("FBIOGVIDEO,int,%zu,12.1src/sys/sys/fbio.h,235\n", sizeof(int));
	// FBIOGXINFO 12.1src/sys/sys/fbio.h:291
	 printf("FBIOGXINFO,struct brd_info,%zu,12.1src/sys/sys/fbio.h,291\n", sizeof(struct brd_info));
	// FBIOMONINFO 12.1src/sys/sys/fbio.h:313
	 printf("FBIOMONINFO,struct mon_info,%zu,12.1src/sys/sys/fbio.h,313\n", sizeof(struct mon_info));
	// FBIOPUTCMAP 12.1src/sys/sys/fbio.h:200
	 printf("FBIOPUTCMAP,struct fbcmap,%zu,12.1src/sys/sys/fbio.h,200\n", sizeof(struct fbcmap));
	// FBIOPUTCMAPI 12.1src/sys/sys/fbio.h:329
	 printf("FBIOPUTCMAPI,struct fbcmap_i,%zu,12.1src/sys/sys/fbio.h,329\n", sizeof(struct fbcmap_i));
	// FBIOSATTR 12.1src/sys/sys/fbio.h:225
	 printf("FBIOSATTR,struct fbsattr,%zu,12.1src/sys/sys/fbio.h,225\n", sizeof(struct fbsattr));
	// FBIOSCURPOS 12.1src/sys/sys/fbio.h:272
	 printf("FBIOSCURPOS,struct fbcurpos,%zu,12.1src/sys/sys/fbio.h,272\n", sizeof(struct fbcurpos));
	// FBIOSCURSOR 12.1src/sys/sys/fbio.h:268
	 printf("FBIOSCURSOR,struct fbcursor,%zu,12.1src/sys/sys/fbio.h,268\n", sizeof(struct fbcursor));
	// FBIOSVIDEO 12.1src/sys/sys/fbio.h:234
	 printf("FBIOSVIDEO,int,%zu,12.1src/sys/sys/fbio.h,234\n", sizeof(int));
	// FBIO_ADAPTER 12.1src/sys/sys/fbio.h:588
	 printf("FBIO_ADAPTER,int,%zu,12.1src/sys/sys/fbio.h,588\n", sizeof(int));
	// FBIO_ADPINFO 12.1src/sys/sys/fbio.h:590
	 printf("FBIO_ADPINFO,struct video_adapter_info,%zu,12.1src/sys/sys/fbio.h,590\n", sizeof(struct video_adapter_info));
	// FBIO_ADPTYPE 12.1src/sys/sys/fbio.h:589
	 printf("FBIO_ADPTYPE,int,%zu,12.1src/sys/sys/fbio.h,589\n", sizeof(int));
	// FBIO_BLANK 12.1src/sys/sys/fbio.h:620
	 printf("FBIO_BLANK,int,%zu,12.1src/sys/sys/fbio.h,620\n", sizeof(int));
	// FBIO_FINDMODE 12.1src/sys/sys/fbio.h:594
	 printf("FBIO_FINDMODE,struct video_info,%zu,12.1src/sys/sys/fbio.h,594\n", sizeof(struct video_info));
	// FBIO_GETDISPSTART 12.1src/sys/sys/fbio.h:603
	 printf("FBIO_GETDISPSTART,video_display_start_t,%zu,12.1src/sys/sys/fbio.h,603\n", sizeof(video_display_start_t));
	// FBIO_GETLINEWIDTH 12.1src/sys/sys/fbio.h:607
	 printf("FBIO_GETLINEWIDTH,u_int,%zu,12.1src/sys/sys/fbio.h,607\n", sizeof(u_int));
	// FBIO_GETMODE 12.1src/sys/sys/fbio.h:595
	 printf("FBIO_GETMODE,int,%zu,12.1src/sys/sys/fbio.h,595\n", sizeof(int));
	// FBIO_GETPALETTE 12.1src/sys/sys/fbio.h:611
	 printf("FBIO_GETPALETTE,video_color_palette_t,%zu,12.1src/sys/sys/fbio.h,611\n", sizeof(video_color_palette_t));
	// FBIO_GETWINORG 12.1src/sys/sys/fbio.h:599
	 printf("FBIO_GETWINORG,u_int,%zu,12.1src/sys/sys/fbio.h,599\n", sizeof(u_int));
	// FBIO_MODEINFO 12.1src/sys/sys/fbio.h:593
	 printf("FBIO_MODEINFO,struct video_info,%zu,12.1src/sys/sys/fbio.h,593\n", sizeof(struct video_info));
	// FBIO_SETDISPSTART 12.1src/sys/sys/fbio.h:604
	 printf("FBIO_SETDISPSTART,video_display_start_t,%zu,12.1src/sys/sys/fbio.h,604\n", sizeof(video_display_start_t));
	// FBIO_SETLINEWIDTH 12.1src/sys/sys/fbio.h:608
	 printf("FBIO_SETLINEWIDTH,u_int,%zu,12.1src/sys/sys/fbio.h,608\n", sizeof(u_int));
	// FBIO_SETMODE 12.1src/sys/sys/fbio.h:596
	 printf("FBIO_SETMODE,int,%zu,12.1src/sys/sys/fbio.h,596\n", sizeof(int));
	// FBIO_SETPALETTE 12.1src/sys/sys/fbio.h:612
	 printf("FBIO_SETPALETTE,video_color_palette_t,%zu,12.1src/sys/sys/fbio.h,612\n", sizeof(video_color_palette_t));
	// FBIO_SETWINORG 12.1src/sys/sys/fbio.h:600
	 printf("FBIO_SETWINORG,u_int,%zu,12.1src/sys/sys/fbio.h,600\n", sizeof(u_int));
	// SPIGENIOC_TRANSFER 12.1src/sys/sys/spigenio.h:48
	 printf("SPIGENIOC_TRANSFER,struct spigen_transfer,%zu,12.1src/sys/sys/spigenio.h,48\n", sizeof(struct spigen_transfer));
	// SPIGENIOC_TRANSFER_MMAPPED 12.1src/sys/sys/spigenio.h:50
	 printf("SPIGENIOC_TRANSFER_MMAPPED,struct spigen_transfer_mmapped,%zu,12.1src/sys/sys/spigenio.h,50\n", sizeof(struct spigen_transfer_mmapped));
	// TIOCCONS 12.1src/sys/sys/ttycom.h:93
	 printf("TIOCCONS,int,%zu,12.1src/sys/sys/ttycom.h,93\n", sizeof(int));
	// TIOCEXT 12.1src/sys/sys/ttycom.h:91
	 printf("TIOCEXT,int,%zu,12.1src/sys/sys/ttycom.h,91\n", sizeof(int));
	// TIOCFLUSH 12.1src/sys/sys/ttycom.h:68
	 printf("TIOCFLUSH,int,%zu,12.1src/sys/sys/ttycom.h,68\n", sizeof(int));
	// TIOCGDRAINWAIT 12.1src/sys/sys/ttycom.h:79
	 printf("TIOCGDRAINWAIT,int,%zu,12.1src/sys/sys/ttycom.h,79\n", sizeof(int));
	// TIOCGETA 12.1src/sys/sys/ttycom.h:70
	 printf("TIOCGETA,struct termios,%zu,12.1src/sys/sys/ttycom.h,70\n", sizeof(struct termios));
	// TIOCGETD 12.1src/sys/sys/ttycom.h:75
	 printf("TIOCGETD,int,%zu,12.1src/sys/sys/ttycom.h,75\n", sizeof(int));
	// TIOCGPGRP 12.1src/sys/sys/ttycom.h:134
	 printf("TIOCGPGRP,int,%zu,12.1src/sys/sys/ttycom.h,134\n", sizeof(int));
	// TIOCGPTN 12.1src/sys/sys/ttycom.h:67
	 printf("TIOCGPTN,int,%zu,12.1src/sys/sys/ttycom.h,67\n", sizeof(int));
	// TIOCGSID 12.1src/sys/sys/ttycom.h:94
	 printf("TIOCGSID,int,%zu,12.1src/sys/sys/ttycom.h,94\n", sizeof(int));
	// TIOCGWINSZ 12.1src/sys/sys/ttycom.h:100
	 printf("TIOCGWINSZ,struct winsize,%zu,12.1src/sys/sys/ttycom.h,100\n", sizeof(struct winsize));
	// TIOCMBIC 12.1src/sys/sys/ttycom.h:115
	 printf("TIOCMBIC,int,%zu,12.1src/sys/sys/ttycom.h,115\n", sizeof(int));
	// TIOCMBIS 12.1src/sys/sys/ttycom.h:116
	 printf("TIOCMBIS,int,%zu,12.1src/sys/sys/ttycom.h,116\n", sizeof(int));
	// TIOCMGDTRWAIT 12.1src/sys/sys/ttycom.h:85
	 printf("TIOCMGDTRWAIT,int,%zu,12.1src/sys/sys/ttycom.h,85\n", sizeof(int));
	// TIOCMGET 12.1src/sys/sys/ttycom.h:102
	 printf("TIOCMGET,int,%zu,12.1src/sys/sys/ttycom.h,102\n", sizeof(int));
	// TIOCMSDTRWAIT 12.1src/sys/sys/ttycom.h:86
	 printf("TIOCMSDTRWAIT,int,%zu,12.1src/sys/sys/ttycom.h,86\n", sizeof(int));
	// TIOCMSET 12.1src/sys/sys/ttycom.h:117
	 printf("TIOCMSET,int,%zu,12.1src/sys/sys/ttycom.h,117\n", sizeof(int));
	// TIOCOUTQ 12.1src/sys/sys/ttycom.h:131
	 printf("TIOCOUTQ,int,%zu,12.1src/sys/sys/ttycom.h,131\n", sizeof(int));
	// TIOCPKT 12.1src/sys/sys/ttycom.h:120
	 printf("TIOCPKT,int,%zu,12.1src/sys/sys/ttycom.h,120\n", sizeof(int));
	// TIOCSDRAINWAIT 12.1src/sys/sys/ttycom.h:80
	 printf("TIOCSDRAINWAIT,int,%zu,12.1src/sys/sys/ttycom.h,80\n", sizeof(int));
	// TIOCSETA 12.1src/sys/sys/ttycom.h:71
	 printf("TIOCSETA,struct termios,%zu,12.1src/sys/sys/ttycom.h,71\n", sizeof(struct termios));
	// TIOCSETAF 12.1src/sys/sys/ttycom.h:73
	 printf("TIOCSETAF,struct termios,%zu,12.1src/sys/sys/ttycom.h,73\n", sizeof(struct termios));
	// TIOCSETAW 12.1src/sys/sys/ttycom.h:72
	 printf("TIOCSETAW,struct termios,%zu,12.1src/sys/sys/ttycom.h,72\n", sizeof(struct termios));
	// TIOCSETD 12.1src/sys/sys/ttycom.h:76
	 printf("TIOCSETD,int,%zu,12.1src/sys/sys/ttycom.h,76\n", sizeof(int));
	// TIOCSPGRP 12.1src/sys/sys/ttycom.h:133
	 printf("TIOCSPGRP,int,%zu,12.1src/sys/sys/ttycom.h,133\n", sizeof(int));
	// TIOCSTI 12.1src/sys/sys/ttycom.h:130
	 printf("TIOCSTI,char,%zu,12.1src/sys/sys/ttycom.h,130\n", sizeof(char));
	// TIOCSWINSZ 12.1src/sys/sys/ttycom.h:99
	 printf("TIOCSWINSZ,struct winsize,%zu,12.1src/sys/sys/ttycom.h,99\n", sizeof(struct winsize));
	// TIOCTIMESTAMP 12.1src/sys/sys/ttycom.h:83
	 printf("TIOCTIMESTAMP,struct timeval,%zu,12.1src/sys/sys/ttycom.h,83\n", sizeof(struct timeval));
	// TIOCUCNTL 12.1src/sys/sys/ttycom.h:97
	 printf("TIOCUCNTL,int,%zu,12.1src/sys/sys/ttycom.h,97\n", sizeof(int));
	// CHIOEXCHANGE 12.1src/sys/sys/chio.h:272
	 printf("CHIOEXCHANGE,struct changer_exchange,%zu,12.1src/sys/sys/chio.h,272\n", sizeof(struct changer_exchange));
	// CHIOGPARAMS 12.1src/sys/sys/chio.h:276
	 printf("CHIOGPARAMS,struct changer_params,%zu,12.1src/sys/sys/chio.h,276\n", sizeof(struct changer_params));
	// CHIOGPICKER 12.1src/sys/sys/chio.h:274
	 printf("CHIOGPICKER,int,%zu,12.1src/sys/sys/chio.h,274\n", sizeof(int));
	// CHIOGSTATUS 12.1src/sys/sys/chio.h:280
	 printf("CHIOGSTATUS,struct changer_element_status_request,%zu,12.1src/sys/sys/chio.h,280\n", sizeof(struct changer_element_status_request));
	// CHIOMOVE 12.1src/sys/sys/chio.h:271
	 printf("CHIOMOVE,struct changer_move,%zu,12.1src/sys/sys/chio.h,271\n", sizeof(struct changer_move));
	// CHIOPOSITION 12.1src/sys/sys/chio.h:273
	 printf("CHIOPOSITION,struct changer_position,%zu,12.1src/sys/sys/chio.h,273\n", sizeof(struct changer_position));
	// CHIOSETVOLTAG 12.1src/sys/sys/chio.h:279
	 printf("CHIOSETVOLTAG,struct changer_set_voltag_request,%zu,12.1src/sys/sys/chio.h,279\n", sizeof(struct changer_set_voltag_request));
	// CHIOSPICKER 12.1src/sys/sys/chio.h:275
	 printf("CHIOSPICKER,int,%zu,12.1src/sys/sys/chio.h,275\n", sizeof(int));
	// OCHIOGSTATUS 12.1src/sys/sys/chio.h:278
	 printf("OCHIOGSTATUS,struct changer_element_status_request,%zu,12.1src/sys/sys/chio.h,278\n", sizeof(struct changer_element_status_request));
	// PTIOCGETTIMEOUT 12.1src/sys/sys/ptio.h:36
	 printf("PTIOCGETTIMEOUT,int,%zu,12.1src/sys/sys/ptio.h,36\n", sizeof(int));
	// PTIOCSETTIMEOUT 12.1src/sys/sys/ptio.h:37
	 printf("PTIOCSETTIMEOUT,int,%zu,12.1src/sys/sys/ptio.h,37\n", sizeof(int));
	// GETFKEY 12.1src/sys/sys/kbio.h:231
	 printf("GETFKEY,fkeyarg_t,%zu,12.1src/sys/sys/kbio.h,231\n", sizeof(fkeyarg_t));
	// GIO_DEADKEYMAP 12.1src/sys/sys/kbio.h:244
	 printf("GIO_DEADKEYMAP,accentmap_t,%zu,12.1src/sys/sys/kbio.h,244\n", sizeof(accentmap_t));
	// GIO_KEYMAPENT 12.1src/sys/sys/kbio.h:246
	 printf("GIO_KEYMAPENT,keyarg_t,%zu,12.1src/sys/sys/kbio.h,246\n", sizeof(keyarg_t));
	// KBADDKBD 12.1src/sys/sys/kbio.h:74
	 printf("KBADDKBD,keyboard_info_t,%zu,12.1src/sys/sys/kbio.h,74\n", sizeof(keyboard_info_t));
	// KBRELKBD 12.1src/sys/sys/kbio.h:75
	 printf("KBRELKBD,keyboard_info_t,%zu,12.1src/sys/sys/kbio.h,75\n", sizeof(keyboard_info_t));
	// KDGETLED 12.1src/sys/sys/kbio.h:57
	 printf("KDGETLED,int,%zu,12.1src/sys/sys/kbio.h,57\n", sizeof(int));
	// KDGETMODE 12.1src/sys/sys/kbio.h:25
	 printf("KDGETMODE,int,%zu,12.1src/sys/sys/kbio.h,25\n", sizeof(int));
	// KDGETREPEAT 12.1src/sys/sys/kbio.h:91
	 printf("KDGETREPEAT,keyboard_repeat_t,%zu,12.1src/sys/sys/kbio.h,91\n", sizeof(keyboard_repeat_t));
	// KDGKBINFO 12.1src/sys/sys/kbio.h:83
	 printf("KDGKBINFO,keyboard_info_t,%zu,12.1src/sys/sys/kbio.h,83\n", sizeof(keyboard_info_t));
	// KDGKBMODE 12.1src/sys/sys/kbio.h:17
	 printf("KDGKBMODE,int,%zu,12.1src/sys/sys/kbio.h,17\n", sizeof(int));
	// KDGKBSTATE 12.1src/sys/sys/kbio.h:36
	 printf("KDGKBSTATE,int,%zu,12.1src/sys/sys/kbio.h,36\n", sizeof(int));
	// KDGKBTYPE 12.1src/sys/sys/kbio.h:50
	 printf("KDGKBTYPE,int,%zu,12.1src/sys/sys/kbio.h,50\n", sizeof(int));
	// KDSETREPEAT 12.1src/sys/sys/kbio.h:90
	 printf("KDSETREPEAT,keyboard_repeat_t,%zu,12.1src/sys/sys/kbio.h,90\n", sizeof(keyboard_repeat_t));
	// OGIO_KEYMAP 12.1src/sys/sys/kbio.h:241
	 printf("OGIO_KEYMAP,okeymap_t,%zu,12.1src/sys/sys/kbio.h,241\n", sizeof(okeymap_t));
	// OPIO_KEYMAP 12.1src/sys/sys/kbio.h:242
	 printf("OPIO_KEYMAP,okeymap_t,%zu,12.1src/sys/sys/kbio.h,242\n", sizeof(okeymap_t));
	// PIO_DEADKEYMAP 12.1src/sys/sys/kbio.h:245
	 printf("PIO_DEADKEYMAP,accentmap_t,%zu,12.1src/sys/sys/kbio.h,245\n", sizeof(accentmap_t));
	// PIO_KEYMAPENT 12.1src/sys/sys/kbio.h:247
	 printf("PIO_KEYMAPENT,keyarg_t,%zu,12.1src/sys/sys/kbio.h,247\n", sizeof(keyarg_t));
	// SETFKEY 12.1src/sys/sys/kbio.h:232
	 printf("SETFKEY,fkeyarg_t,%zu,12.1src/sys/sys/kbio.h,232\n", sizeof(fkeyarg_t));
	// CFIOCQRY 12.1src/sys/sys/cfictl.h:47
	 printf("CFIOCQRY,struct cfiocqry,%zu,12.1src/sys/sys/cfictl.h,47\n", sizeof(struct cfiocqry));
	// JOY_GETTIMEOUT 12.1src/sys/sys/joystick.h:46
	 printf("JOY_GETTIMEOUT,int,%zu,12.1src/sys/sys/joystick.h,46\n", sizeof(int));
	// JOY_GET_X_OFFSET 12.1src/sys/sys/joystick.h:49
	 printf("JOY_GET_X_OFFSET,int,%zu,12.1src/sys/sys/joystick.h,49\n", sizeof(int));
	// JOY_GET_Y_OFFSET 12.1src/sys/sys/joystick.h:50
	 printf("JOY_GET_Y_OFFSET,int,%zu,12.1src/sys/sys/joystick.h,50\n", sizeof(int));
	// JOY_SETTIMEOUT 12.1src/sys/sys/joystick.h:45
	 printf("JOY_SETTIMEOUT,int,%zu,12.1src/sys/sys/joystick.h,45\n", sizeof(int));
	// JOY_SET_X_OFFSET 12.1src/sys/sys/joystick.h:47
	 printf("JOY_SET_X_OFFSET,int,%zu,12.1src/sys/sys/joystick.h,47\n", sizeof(int));
	// JOY_SET_Y_OFFSET 12.1src/sys/sys/joystick.h:48
	 printf("JOY_SET_Y_OFFSET,int,%zu,12.1src/sys/sys/joystick.h,48\n", sizeof(int));

	return (0);
}
