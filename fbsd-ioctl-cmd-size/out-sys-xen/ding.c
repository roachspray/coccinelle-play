
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

	// IOCTL_GNTDEV_ALLOC_GREF 12.1src/sys/xen/gntdev.h:133
	 printf("IOCTL_GNTDEV_ALLOC_GREF,struct ioctl_gntdev_alloc_gref,%zu,12.1src/sys/xen/gntdev.h,133\n", sizeof(struct ioctl_gntdev_alloc_gref));
	// IOCTL_GNTDEV_DEALLOC_GREF 12.1src/sys/xen/gntdev.h:148
	 printf("IOCTL_GNTDEV_DEALLOC_GREF,struct ioctl_gntdev_dealloc_gref,%zu,12.1src/sys/xen/gntdev.h,148\n", sizeof(struct ioctl_gntdev_dealloc_gref));
	// IOCTL_GNTDEV_GET_OFFSET_FOR_VADDR 12.1src/sys/xen/gntdev.h:183
	 printf("IOCTL_GNTDEV_GET_OFFSET_FOR_VADDR,struct ioctl_gntdev_get_offset_for_vaddr,%zu,12.1src/sys/xen/gntdev.h,183\n", sizeof(struct ioctl_gntdev_get_offset_for_vaddr));
	// IOCTL_GNTDEV_MAP_GRANT_REF 12.1src/sys/xen/gntdev.h:163
	 printf("IOCTL_GNTDEV_MAP_GRANT_REF,struct ioctl_gntdev_map_grant_ref,%zu,12.1src/sys/xen/gntdev.h,163\n", sizeof(struct ioctl_gntdev_map_grant_ref));
	// IOCTL_GNTDEV_SET_UNMAP_NOTIFY 12.1src/sys/xen/gntdev.h:119
	 printf("IOCTL_GNTDEV_SET_UNMAP_NOTIFY,struct ioctl_gntdev_unmap_notify,%zu,12.1src/sys/xen/gntdev.h,119\n", sizeof(struct ioctl_gntdev_unmap_notify));
	// IOCTL_GNTDEV_UNMAP_GRANT_REF 12.1src/sys/xen/gntdev.h:175
	 printf("IOCTL_GNTDEV_UNMAP_GRANT_REF,struct ioctl_gntdev_unmap_grant_ref,%zu,12.1src/sys/xen/gntdev.h,175\n", sizeof(struct ioctl_gntdev_unmap_grant_ref));
	// IOCTL_EVTCHN_BIND_INTERDOMAIN 12.1src/sys/xen/evtchn.h:49
	 printf("IOCTL_EVTCHN_BIND_INTERDOMAIN,struct ioctl_evtchn_bind_interdomain,%zu,12.1src/sys/xen/evtchn.h,49\n", sizeof(struct ioctl_evtchn_bind_interdomain));
	// IOCTL_EVTCHN_BIND_UNBOUND_PORT 12.1src/sys/xen/evtchn.h:59
	 printf("IOCTL_EVTCHN_BIND_UNBOUND_PORT,struct ioctl_evtchn_bind_unbound_port,%zu,12.1src/sys/xen/evtchn.h,59\n", sizeof(struct ioctl_evtchn_bind_unbound_port));
	// IOCTL_EVTCHN_BIND_VIRQ 12.1src/sys/xen/evtchn.h:39
	 printf("IOCTL_EVTCHN_BIND_VIRQ,struct ioctl_evtchn_bind_virq,%zu,12.1src/sys/xen/evtchn.h,39\n", sizeof(struct ioctl_evtchn_bind_virq));
	// IOCTL_EVTCHN_NOTIFY 12.1src/sys/xen/evtchn.h:78
	 printf("IOCTL_EVTCHN_NOTIFY,struct ioctl_evtchn_notify,%zu,12.1src/sys/xen/evtchn.h,78\n", sizeof(struct ioctl_evtchn_notify));
	// IOCTL_EVTCHN_UNBIND 12.1src/sys/xen/evtchn.h:69
	 printf("IOCTL_EVTCHN_UNBIND,struct ioctl_evtchn_unbind,%zu,12.1src/sys/xen/evtchn.h,69\n", sizeof(struct ioctl_evtchn_unbind));
	// IOCTL_PRIVCMD_HYPERCALL 12.1src/sys/xen/privcmd.h:54
	 printf("IOCTL_PRIVCMD_HYPERCALL,struct ioctl_privcmd_hypercall,%zu,12.1src/sys/xen/privcmd.h,54\n", sizeof(struct ioctl_privcmd_hypercall));
	// IOCTL_PRIVCMD_MMAPBATCH 12.1src/sys/xen/privcmd.h:56
	 printf("IOCTL_PRIVCMD_MMAPBATCH,struct ioctl_privcmd_mmapbatch,%zu,12.1src/sys/xen/privcmd.h,56\n", sizeof(struct ioctl_privcmd_mmapbatch));

	return (0);
}
