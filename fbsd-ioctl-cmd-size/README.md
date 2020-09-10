
Work in progress tool to perhaps solve [ioctl cmd size](https://wiki.freebsd.org/IdeasPage#IOCTL_command_checking_tool)
FreeBSD IdeasPage entry

**Issues:**

- Various options can cause various `#if[n]def` cases to be used which can 
impact sizes. This does not handle all those cases, but for the most part is
useful. 
- sys/net does not include altq and has been modified..and would need modifying
to generate the CSV from scratch
- `/usr/src/sys/sys/ipmi.h` is not included in sys/sys
- `/usr/src/sys/sys/mpt_ioctl.h` not included in sys/sys
