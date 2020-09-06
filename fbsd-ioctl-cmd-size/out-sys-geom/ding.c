
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

	// GEOM_CTL 12.1src/sys/geom/geom_ctl.h:79
	 printf("GEOM_CTL,struct gctl_req,%zu,12.1src/sys/geom/geom_ctl.h,79\n", sizeof(struct gctl_req));
	// G_GATE_CMD_CANCEL 12.1src/sys/geom/gate/g_gate.h:71
	 printf("G_GATE_CMD_CANCEL,struct g_gate_ctl_cancel,%zu,12.1src/sys/geom/gate/g_gate.h,71\n", sizeof(struct g_gate_ctl_cancel));
	// G_GATE_CMD_CREATE 12.1src/sys/geom/gate/g_gate.h:68
	 printf("G_GATE_CMD_CREATE,struct g_gate_ctl_create,%zu,12.1src/sys/geom/gate/g_gate.h,68\n", sizeof(struct g_gate_ctl_create));
	// G_GATE_CMD_DESTROY 12.1src/sys/geom/gate/g_gate.h:70
	 printf("G_GATE_CMD_DESTROY,struct g_gate_ctl_destroy,%zu,12.1src/sys/geom/gate/g_gate.h,70\n", sizeof(struct g_gate_ctl_destroy));
	// G_GATE_CMD_DONE 12.1src/sys/geom/gate/g_gate.h:73
	 printf("G_GATE_CMD_DONE,struct g_gate_ctl_io,%zu,12.1src/sys/geom/gate/g_gate.h,73\n", sizeof(struct g_gate_ctl_io));
	// G_GATE_CMD_MODIFY 12.1src/sys/geom/gate/g_gate.h:69
	 printf("G_GATE_CMD_MODIFY,struct g_gate_ctl_modify,%zu,12.1src/sys/geom/gate/g_gate.h,69\n", sizeof(struct g_gate_ctl_modify));
	// G_GATE_CMD_START 12.1src/sys/geom/gate/g_gate.h:72
	 printf("G_GATE_CMD_START,struct g_gate_ctl_io,%zu,12.1src/sys/geom/gate/g_gate.h,72\n", sizeof(struct g_gate_ctl_io));

	return (0);
}
