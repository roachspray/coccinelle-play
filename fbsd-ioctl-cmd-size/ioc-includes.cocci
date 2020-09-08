@r@                                                                      
type t;
expression a,b;
identifier m;
position p1;
@@                                                                              
(
#define m _IOWR(a, b, t@p1)
|
#define m _IOR(a, b, t@p1)
|
#define m _IOW(a, b, t@p1)
)
@script:python@
pos1 << r.p1;
macro_name << r.m;
arg_type << r.t;
@@
import os
import sys

out_h = os.path.join(os.getcwd(), "ding.h")
notes = os.path.join(os.getcwd(), "include.notes")

h = None
if os.path.exists(out_h) == False:
	h = open(out_h, "wt")
	start = """#ifndef	_DING_H
#define	_DING_H
#include "/usr/src/sys/net/ethernet.h"                                          
#include "/usr/src/sys/sys/socket.h"                                            
#include "/usr/src/sys/sys/_sockaddr_storage.h"                                 
#include "/usr/src/sys/net/if_dl.h"                                             
#include "/usr/src/sys/net/if_media.h"                                          
                                                                                
#include "/usr/src/sys/netinet/in.h"                                            
#include "/usr/src/sys/net/if.h"                                                
#include "/usr/src/sys/net/if_var.h"                                            
#include "/usr/src/sys/netinet/ip_mroute.h"

#ifndef	USING_CDDL
#include "/usr/src/sys/contrib/ipfilter/netinet/ip_fil.h"
#endif
#include "/usr/src/sys/netpfil/pf/pf.h"                                         
#include "/usr/src/sys/net/pfvar.h"                                             
#include "/usr/src/sys/sys/eventhandler.h"   

#include "/usr/src/sys/cam/scsi/scsi_all.h"
#include "/usr/src/sys/cam/ctl/ctl.h"
#include "/usr/src/sys/cam/ctl/ctl_io.h"

#include "/usr/src/sys/sys/pciio.h"

#include "/usr/src/sys/dev/aac/aacreg.h"

#include "/usr/src/sys/sys/_termios.h"
#include "/usr/src/sys/sys/fbio.h"
/*------------------------------------------------------------------------*/

"""
	h.write(start)

if h is None:
	h = open(out_h, "at")

h.write('#include "%s"\n' % pos1[0].file)                                      

with open("include.notes", "at") as ih:
	ih.write("%s:%s:%s\n" % (pos1[0].file, macro_name, arg_type))
	ih.close()
