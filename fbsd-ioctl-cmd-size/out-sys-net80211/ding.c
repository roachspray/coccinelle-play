
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

	// SIOCG80211 12.1src/sys/net80211/ieee80211_ioctl.h:601
	 printf("SIOCG80211,struct ieee80211req,%zu,12.1src/sys/net80211/ieee80211_ioctl.h,601\n", sizeof(struct ieee80211req));
	// SIOCG80211STATS 12.1src/sys/net80211/ieee80211_ioctl.h:602
	 printf("SIOCG80211STATS,struct ifreq,%zu,12.1src/sys/net80211/ieee80211_ioctl.h,602\n", sizeof(struct ifreq));
	// SIOCS80211 12.1src/sys/net80211/ieee80211_ioctl.h:600
	 printf("SIOCS80211,struct ieee80211req,%zu,12.1src/sys/net80211/ieee80211_ioctl.h,600\n", sizeof(struct ieee80211req));

	return (0);
}
