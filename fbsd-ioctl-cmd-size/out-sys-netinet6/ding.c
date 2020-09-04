
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

	// OSIOCAIFADDR_IN6 12.1src/sys/netinet6/in6_var.h:443
	 printf("OSIOCAIFADDR_IN6,struct oin6_aliasreq,%zu,12.1src/sys/netinet6/in6_var.h,443\n", sizeof(struct oin6_aliasreq));
	// OSIOCGIFINFO_IN6 12.1src/sys/netinet6/in6_var.h:453
	 printf("OSIOCGIFINFO_IN6,struct in6_ondireq,%zu,12.1src/sys/netinet6/in6_var.h,453\n", sizeof(struct in6_ondireq));
	// SIOCAADDRCTL_POLICY 12.1src/sys/netinet6/in6_var.h:489
	 printf("SIOCAADDRCTL_POLICY,struct in6_addrpolicy,%zu,12.1src/sys/netinet6/in6_var.h,489\n", sizeof(struct in6_addrpolicy));
	// SIOCAIFADDR_IN6 12.1src/sys/netinet6/in6_var.h:444
	 printf("SIOCAIFADDR_IN6,struct in6_aliasreq,%zu,12.1src/sys/netinet6/in6_var.h,444\n", sizeof(struct in6_aliasreq));
	// SIOCAIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:478
	 printf("SIOCAIFPREFIX_IN6,struct in6_rrenumreq,%zu,12.1src/sys/netinet6/in6_var.h,478\n", sizeof(struct in6_rrenumreq));
	// SIOCCIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:480
	 printf("SIOCCIFPREFIX_IN6,struct in6_rrenumreq,%zu,12.1src/sys/netinet6/in6_var.h,480\n", sizeof(struct in6_rrenumreq));
	// SIOCDADDRCTL_POLICY 12.1src/sys/netinet6/in6_var.h:490
	 printf("SIOCDADDRCTL_POLICY,struct in6_addrpolicy,%zu,12.1src/sys/netinet6/in6_var.h,490\n", sizeof(struct in6_addrpolicy));
	// SIOCDIFADDR_IN6 12.1src/sys/netinet6/in6_var.h:442
	 printf("SIOCDIFADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,442\n", sizeof(struct in6_ifreq));
	// SIOCDIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:477
	 printf("SIOCDIFPREFIX_IN6,struct in6_prefixreq,%zu,12.1src/sys/netinet6/in6_var.h,477\n", sizeof(struct in6_prefixreq));
	// SIOCGDEFIFACE_IN6 12.1src/sys/netinet6/in6_var.h:467
	 printf("SIOCGDEFIFACE_IN6,struct in6_ndifreq,%zu,12.1src/sys/netinet6/in6_var.h,467\n", sizeof(struct in6_ndifreq));
	// SIOCGETMIFCNT_IN6 12.1src/sys/netinet6/in6_var.h:487
	 printf("SIOCGETMIFCNT_IN6,struct sioc_mif_req6,%zu,12.1src/sys/netinet6/in6_var.h,487\n", sizeof(struct sioc_mif_req6));
	// SIOCGETSGCNT_IN6 12.1src/sys/netinet6/in6_var.h:485
	 printf("SIOCGETSGCNT_IN6,struct sioc_sg_req6,%zu,12.1src/sys/netinet6/in6_var.h,485\n", sizeof(struct sioc_sg_req6));
	// SIOCGIFADDR_IN6 12.1src/sys/netinet6/in6_var.h:428
	 printf("SIOCGIFADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,428\n", sizeof(struct in6_ifreq));
	// SIOCGIFAFLAG_IN6 12.1src/sys/netinet6/in6_var.h:450
	 printf("SIOCGIFAFLAG_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,450\n", sizeof(struct in6_ifreq));
	// SIOCGIFALIFETIME_IN6 12.1src/sys/netinet6/in6_var.h:462
	 printf("SIOCGIFALIFETIME_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,462\n", sizeof(struct in6_ifreq));
	// SIOCGIFDSTADDR_IN6 12.1src/sys/netinet6/in6_var.h:439
	 printf("SIOCGIFDSTADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,439\n", sizeof(struct in6_ifreq));
	// SIOCGIFINFO_IN6 12.1src/sys/netinet6/in6_var.h:455
	 printf("SIOCGIFINFO_IN6,struct in6_ndireq,%zu,12.1src/sys/netinet6/in6_var.h,455\n", sizeof(struct in6_ndireq));
	// SIOCGIFNETMASK_IN6 12.1src/sys/netinet6/in6_var.h:440
	 printf("SIOCGIFNETMASK_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,440\n", sizeof(struct in6_ifreq));
	// SIOCGIFPDSTADDR_IN6 12.1src/sys/netinet6/in6_var.h:448
	 printf("SIOCGIFPDSTADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,448\n", sizeof(struct in6_ifreq));
	// SIOCGIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:476
	 printf("SIOCGIFPREFIX_IN6,struct in6_prefixreq,%zu,12.1src/sys/netinet6/in6_var.h,476\n", sizeof(struct in6_prefixreq));
	// SIOCGIFPSRCADDR_IN6 12.1src/sys/netinet6/in6_var.h:447
	 printf("SIOCGIFPSRCADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,447\n", sizeof(struct in6_ifreq));
	// SIOCGIFSTAT_ICMP6 12.1src/sys/netinet6/in6_var.h:464
	 printf("SIOCGIFSTAT_ICMP6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,464\n", sizeof(struct in6_ifreq));
	// SIOCGIFSTAT_IN6 12.1src/sys/netinet6/in6_var.h:463
	 printf("SIOCGIFSTAT_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,463\n", sizeof(struct in6_ifreq));
	// SIOCGNBRINFO_IN6 12.1src/sys/netinet6/in6_var.h:458
	 printf("SIOCGNBRINFO_IN6,struct in6_nbrinfo,%zu,12.1src/sys/netinet6/in6_var.h,458\n", sizeof(struct in6_nbrinfo));
	// SIOCGSCOPE6 12.1src/sys/netinet6/in6_var.h:472
	 printf("SIOCGSCOPE6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,472\n", sizeof(struct in6_ifreq));
	// SIOCGSCOPE6DEF 12.1src/sys/netinet6/in6_var.h:473
	 printf("SIOCGSCOPE6DEF,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,473\n", sizeof(struct in6_ifreq));
	// SIOCSDEFIFACE_IN6 12.1src/sys/netinet6/in6_var.h:466
	 printf("SIOCSDEFIFACE_IN6,struct in6_ndifreq,%zu,12.1src/sys/netinet6/in6_var.h,466\n", sizeof(struct in6_ndifreq));
	// SIOCSGIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:482
	 printf("SIOCSGIFPREFIX_IN6,struct in6_rrenumreq,%zu,12.1src/sys/netinet6/in6_var.h,482\n", sizeof(struct in6_rrenumreq));
	// SIOCSIFADDR_IN6 12.1src/sys/netinet6/in6_var.h:427
	 printf("SIOCSIFADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,427\n", sizeof(struct in6_ifreq));
	// SIOCSIFDSTADDR_IN6 12.1src/sys/netinet6/in6_var.h:435
	 printf("SIOCSIFDSTADDR_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,435\n", sizeof(struct in6_ifreq));
	// SIOCSIFINFO_FLAGS 12.1src/sys/netinet6/in6_var.h:469
	 printf("SIOCSIFINFO_FLAGS,struct in6_ndireq,%zu,12.1src/sys/netinet6/in6_var.h,469\n", sizeof(struct in6_ndireq));
	// SIOCSIFINFO_IN6 12.1src/sys/netinet6/in6_var.h:456
	 printf("SIOCSIFINFO_IN6,struct in6_ndireq,%zu,12.1src/sys/netinet6/in6_var.h,456\n", sizeof(struct in6_ndireq));
	// SIOCSIFNETMASK_IN6 12.1src/sys/netinet6/in6_var.h:436
	 printf("SIOCSIFNETMASK_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,436\n", sizeof(struct in6_ifreq));
	// SIOCSIFPHYADDR_IN6 12.1src/sys/netinet6/in6_var.h:446
	 printf("SIOCSIFPHYADDR_IN6,struct in6_aliasreq,%zu,12.1src/sys/netinet6/in6_var.h,446\n", sizeof(struct in6_aliasreq));
	// SIOCSIFPREFIX_IN6 12.1src/sys/netinet6/in6_var.h:475
	 printf("SIOCSIFPREFIX_IN6,struct in6_prefixreq,%zu,12.1src/sys/netinet6/in6_var.h,475\n", sizeof(struct in6_prefixreq));
	// SIOCSNDFLUSH_IN6 12.1src/sys/netinet6/in6_var.h:457
	 printf("SIOCSNDFLUSH_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,457\n", sizeof(struct in6_ifreq));
	// SIOCSPFXFLUSH_IN6 12.1src/sys/netinet6/in6_var.h:459
	 printf("SIOCSPFXFLUSH_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,459\n", sizeof(struct in6_ifreq));
	// SIOCSRTRFLUSH_IN6 12.1src/sys/netinet6/in6_var.h:460
	 printf("SIOCSRTRFLUSH_IN6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,460\n", sizeof(struct in6_ifreq));
	// SIOCSSCOPE6 12.1src/sys/netinet6/in6_var.h:471
	 printf("SIOCSSCOPE6,struct in6_ifreq,%zu,12.1src/sys/netinet6/in6_var.h,471\n", sizeof(struct in6_ifreq));

	return (0);
}
