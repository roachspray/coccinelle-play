
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

	// FIODGNAME_32 12.1src/sys/compat/freebsd32/freebsd32_ioctl.h:63
	 printf("FIODGNAME_32,struct fiodgname_arg32,%zu,12.1src/sys/compat/freebsd32/freebsd32_ioctl.h,63\n", sizeof(struct fiodgname_arg32));
	// MEMRANGE_GET32 12.1src/sys/compat/freebsd32/freebsd32_ioctl.h:64
	 printf("MEMRANGE_GET32,struct mem_range_op32,%zu,12.1src/sys/compat/freebsd32/freebsd32_ioctl.h,64\n", sizeof(struct mem_range_op32));
	// MEMRANGE_SET32 12.1src/sys/compat/freebsd32/freebsd32_ioctl.h:65
	 printf("MEMRANGE_SET32,struct mem_range_op32,%zu,12.1src/sys/compat/freebsd32/freebsd32_ioctl.h,65\n", sizeof(struct mem_range_op32));
	// PCIOCBARMMAP_32 12.1src/sys/compat/freebsd32/freebsd32_ioctl.h:67
	 printf("PCIOCBARMMAP_32,struct pci_bar_mmap32,%zu,12.1src/sys/compat/freebsd32/freebsd32_ioctl.h,67\n", sizeof(struct pci_bar_mmap32));
	// SG_IO_32 12.1src/sys/compat/freebsd32/freebsd32_ioctl.h:66
	 printf("SG_IO_32,struct sg_io_hdr32,%zu,12.1src/sys/compat/freebsd32/freebsd32_ioctl.h,66\n", sizeof(struct sg_io_hdr32));

	return (0);
}
