
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

	// SIOCGVH 12.1src/sys/netinet/ip_carp.h:138
	 printf("SIOCGVH,struct ifreq,%zu,12.1src/sys/netinet/ip_carp.h,138\n", sizeof(struct ifreq));
	// SIOCSVH 12.1src/sys/netinet/ip_carp.h:137
	 printf("SIOCSVH,struct ifreq,%zu,12.1src/sys/netinet/ip_carp.h,137\n", sizeof(struct ifreq));
	// NETDUMPGCONF 12.1src/sys/netinet/netdump/netdump.h:73
	 printf("NETDUMPGCONF,struct netdump_conf,%zu,12.1src/sys/netinet/netdump/netdump.h,73\n", sizeof(struct netdump_conf));
	// NETDUMPSCONF 12.1src/sys/netinet/netdump/netdump.h:74
	 printf("NETDUMPSCONF,struct netdump_conf,%zu,12.1src/sys/netinet/netdump/netdump.h,74\n", sizeof(struct netdump_conf));

	return (0);
}
