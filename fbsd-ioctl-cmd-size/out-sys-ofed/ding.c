
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

	// IB_USER_MAD_REGISTER_AGENT 12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h:245
	 printf("IB_USER_MAD_REGISTER_AGENT,struct ib_user_mad_reg_req,%zu,12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h,245\n", sizeof(struct ib_user_mad_reg_req));
	// IB_USER_MAD_REGISTER_AGENT2 12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h:252
	 printf("IB_USER_MAD_REGISTER_AGENT2,struct ib_user_mad_reg_req2,%zu,12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h,252\n", sizeof(struct ib_user_mad_reg_req2));
	// IB_USER_MAD_UNREGISTER_AGENT 12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h:247
	 printf("IB_USER_MAD_UNREGISTER_AGENT,__u32,%zu,12.1src/sys/ofed/include/uapi/rdma/ib_user_mad.h,247\n", sizeof(__u32));

	return (0);
}
