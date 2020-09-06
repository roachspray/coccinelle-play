
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

	// NGIOCGINFO 12.1src/sys/netgraph/ng_message.h:371
	 printf("NGIOCGINFO,struct nodeinfo,%zu,12.1src/sys/netgraph/ng_message.h,371\n", sizeof(struct nodeinfo));
	// NGIOCSETNAME 12.1src/sys/netgraph/ng_message.h:372
	 printf("NGIOCSETNAME,struct ngm_name,%zu,12.1src/sys/netgraph/ng_message.h,372\n", sizeof(struct ngm_name));
	// SIOC_HCI_RAW_NODE_GET_BDADDR 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:118
	 printf("SIOC_HCI_RAW_NODE_GET_BDADDR,struct ng_btsocket_hci_raw_node_bdaddr,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,118\n", sizeof(struct ng_btsocket_hci_raw_node_bdaddr));
	// SIOC_HCI_RAW_NODE_GET_BUFFER 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:110
	 printf("SIOC_HCI_RAW_NODE_GET_BUFFER,struct ng_btsocket_hci_raw_node_buffer,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,110\n", sizeof(struct ng_btsocket_hci_raw_node_buffer));
	// SIOC_HCI_RAW_NODE_GET_CON_LIST 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:160
	 printf("SIOC_HCI_RAW_NODE_GET_CON_LIST,struct ng_btsocket_hci_raw_con_list,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,160\n", sizeof(struct ng_btsocket_hci_raw_con_list));
	// SIOC_HCI_RAW_NODE_GET_DEBUG 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:99
	 printf("SIOC_HCI_RAW_NODE_GET_DEBUG,struct ng_btsocket_hci_raw_node_debug,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,99\n", sizeof(struct ng_btsocket_hci_raw_node_debug));
	// SIOC_HCI_RAW_NODE_GET_FEATURES 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:126
	 printf("SIOC_HCI_RAW_NODE_GET_FEATURES,struct ng_btsocket_hci_raw_node_features,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,126\n", sizeof(struct ng_btsocket_hci_raw_node_features));
	// SIOC_HCI_RAW_NODE_GET_LINK_POLICY_MASK 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:168
	 printf("SIOC_HCI_RAW_NODE_GET_LINK_POLICY_MASK,struct ng_btsocket_hci_raw_node_link_policy_mask,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,168\n", sizeof(struct ng_btsocket_hci_raw_node_link_policy_mask));
	// SIOC_HCI_RAW_NODE_GET_NEIGHBOR_CACHE 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:151
	 printf("SIOC_HCI_RAW_NODE_GET_NEIGHBOR_CACHE,struct ng_btsocket_hci_raw_node_neighbor_cache,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,151\n", sizeof(struct ng_btsocket_hci_raw_node_neighbor_cache));
	// SIOC_HCI_RAW_NODE_GET_PACKET_MASK 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:179
	 printf("SIOC_HCI_RAW_NODE_GET_PACKET_MASK,struct ng_btsocket_hci_raw_node_packet_mask,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,179\n", sizeof(struct ng_btsocket_hci_raw_node_packet_mask));
	// SIOC_HCI_RAW_NODE_GET_ROLE_SWITCH 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:190
	 printf("SIOC_HCI_RAW_NODE_GET_ROLE_SWITCH,struct ng_btsocket_hci_raw_node_role_switch,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,190\n", sizeof(struct ng_btsocket_hci_raw_node_role_switch));
	// SIOC_HCI_RAW_NODE_GET_STAT 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:134
	 printf("SIOC_HCI_RAW_NODE_GET_STAT,struct ng_btsocket_hci_raw_node_stat,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,134\n", sizeof(struct ng_btsocket_hci_raw_node_stat));
	// SIOC_HCI_RAW_NODE_GET_STATE 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:87
	 printf("SIOC_HCI_RAW_NODE_GET_STATE,struct ng_btsocket_hci_raw_node_state,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,87\n", sizeof(struct ng_btsocket_hci_raw_node_state));
	// SIOC_HCI_RAW_NODE_LIST_NAMES 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:202
	 printf("SIOC_HCI_RAW_NODE_LIST_NAMES,struct ng_btsocket_hci_raw_node_list_names,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,202\n", sizeof(struct ng_btsocket_hci_raw_node_list_names));
	// SIOC_HCI_RAW_NODE_SET_DEBUG 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:102
	 printf("SIOC_HCI_RAW_NODE_SET_DEBUG,struct ng_btsocket_hci_raw_node_debug,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,102\n", sizeof(struct ng_btsocket_hci_raw_node_debug));
	// SIOC_HCI_RAW_NODE_SET_LINK_POLICY_MASK 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:171
	 printf("SIOC_HCI_RAW_NODE_SET_LINK_POLICY_MASK,struct ng_btsocket_hci_raw_node_link_policy_mask,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,171\n", sizeof(struct ng_btsocket_hci_raw_node_link_policy_mask));
	// SIOC_HCI_RAW_NODE_SET_PACKET_MASK 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:182
	 printf("SIOC_HCI_RAW_NODE_SET_PACKET_MASK,struct ng_btsocket_hci_raw_node_packet_mask,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,182\n", sizeof(struct ng_btsocket_hci_raw_node_packet_mask));
	// SIOC_HCI_RAW_NODE_SET_ROLE_SWITCH 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:193
	 printf("SIOC_HCI_RAW_NODE_SET_ROLE_SWITCH,struct ng_btsocket_hci_raw_node_role_switch,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,193\n", sizeof(struct ng_btsocket_hci_raw_node_role_switch));
	// SIOC_L2CAP_L2CA_GET_INFO 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:280
	 printf("SIOC_L2CAP_L2CA_GET_INFO,struct ng_btsocket_l2cap_raw_get_info,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,280\n", sizeof(struct ng_btsocket_l2cap_raw_get_info));
	// SIOC_L2CAP_L2CA_PING 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:269
	 printf("SIOC_L2CAP_L2CA_PING,struct ng_btsocket_l2cap_raw_ping,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,269\n", sizeof(struct ng_btsocket_l2cap_raw_ping));
	// SIOC_L2CAP_NODE_GET_AUTO_DISCON_TIMO 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:326
	 printf("SIOC_L2CAP_NODE_GET_AUTO_DISCON_TIMO,struct ng_btsocket_l2cap_raw_auto_discon_timo,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,326\n", sizeof(struct ng_btsocket_l2cap_raw_auto_discon_timo));
	// SIOC_L2CAP_NODE_GET_CHAN_LIST 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:317
	 printf("SIOC_L2CAP_NODE_GET_CHAN_LIST,struct ng_btsocket_l2cap_raw_chan_list,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,317\n", sizeof(struct ng_btsocket_l2cap_raw_chan_list));
	// SIOC_L2CAP_NODE_GET_CON_LIST 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:308
	 printf("SIOC_L2CAP_NODE_GET_CON_LIST,struct ng_btsocket_l2cap_raw_con_list,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,308\n", sizeof(struct ng_btsocket_l2cap_raw_con_list));
	// SIOC_L2CAP_NODE_GET_DEBUG 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:296
	 printf("SIOC_L2CAP_NODE_GET_DEBUG,struct ng_btsocket_l2cap_raw_node_debug,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,296\n", sizeof(struct ng_btsocket_l2cap_raw_node_debug));
	// SIOC_L2CAP_NODE_GET_FLAGS 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:288
	 printf("SIOC_L2CAP_NODE_GET_FLAGS,struct ng_btsocket_l2cap_raw_node_flags,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,288\n", sizeof(struct ng_btsocket_l2cap_raw_node_flags));
	// SIOC_L2CAP_NODE_SET_AUTO_DISCON_TIMO 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:329
	 printf("SIOC_L2CAP_NODE_SET_AUTO_DISCON_TIMO,struct ng_btsocket_l2cap_raw_auto_discon_timo,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,329\n", sizeof(struct ng_btsocket_l2cap_raw_auto_discon_timo));
	// SIOC_L2CAP_NODE_SET_DEBUG 12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h:299
	 printf("SIOC_L2CAP_NODE_SET_DEBUG,struct ng_btsocket_l2cap_raw_node_debug,%zu,12.1src/sys/netgraph/bluetooth/include/ng_btsocket.h,299\n", sizeof(struct ng_btsocket_l2cap_raw_node_debug));

	return (0);
}
