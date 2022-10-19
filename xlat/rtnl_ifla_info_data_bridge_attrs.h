/* Generated by ./xlat/gen.sh from ./xlat/rtnl_ifla_info_data_bridge_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFLA_BR_UNSPEC) || (defined(HAVE_DECL_IFLA_BR_UNSPEC) && HAVE_DECL_IFLA_BR_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_UNSPEC) == (0), "IFLA_BR_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_UNSPEC 0
#endif
#if defined(IFLA_BR_FORWARD_DELAY) || (defined(HAVE_DECL_IFLA_BR_FORWARD_DELAY) && HAVE_DECL_IFLA_BR_FORWARD_DELAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_FORWARD_DELAY) == (1), "IFLA_BR_FORWARD_DELAY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_FORWARD_DELAY 1
#endif
#if defined(IFLA_BR_HELLO_TIME) || (defined(HAVE_DECL_IFLA_BR_HELLO_TIME) && HAVE_DECL_IFLA_BR_HELLO_TIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_HELLO_TIME) == (2), "IFLA_BR_HELLO_TIME != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_HELLO_TIME 2
#endif
#if defined(IFLA_BR_MAX_AGE) || (defined(HAVE_DECL_IFLA_BR_MAX_AGE) && HAVE_DECL_IFLA_BR_MAX_AGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MAX_AGE) == (3), "IFLA_BR_MAX_AGE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MAX_AGE 3
#endif
#if defined(IFLA_BR_AGEING_TIME) || (defined(HAVE_DECL_IFLA_BR_AGEING_TIME) && HAVE_DECL_IFLA_BR_AGEING_TIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_AGEING_TIME) == (4), "IFLA_BR_AGEING_TIME != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_AGEING_TIME 4
#endif
#if defined(IFLA_BR_STP_STATE) || (defined(HAVE_DECL_IFLA_BR_STP_STATE) && HAVE_DECL_IFLA_BR_STP_STATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_STP_STATE) == (5), "IFLA_BR_STP_STATE != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_STP_STATE 5
#endif
#if defined(IFLA_BR_PRIORITY) || (defined(HAVE_DECL_IFLA_BR_PRIORITY) && HAVE_DECL_IFLA_BR_PRIORITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_PRIORITY) == (6), "IFLA_BR_PRIORITY != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_PRIORITY 6
#endif
#if defined(IFLA_BR_VLAN_FILTERING) || (defined(HAVE_DECL_IFLA_BR_VLAN_FILTERING) && HAVE_DECL_IFLA_BR_VLAN_FILTERING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_VLAN_FILTERING) == (7), "IFLA_BR_VLAN_FILTERING != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_VLAN_FILTERING 7
#endif
#if defined(IFLA_BR_VLAN_PROTOCOL) || (defined(HAVE_DECL_IFLA_BR_VLAN_PROTOCOL) && HAVE_DECL_IFLA_BR_VLAN_PROTOCOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_VLAN_PROTOCOL) == (8), "IFLA_BR_VLAN_PROTOCOL != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_VLAN_PROTOCOL 8
#endif
#if defined(IFLA_BR_GROUP_FWD_MASK) || (defined(HAVE_DECL_IFLA_BR_GROUP_FWD_MASK) && HAVE_DECL_IFLA_BR_GROUP_FWD_MASK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_GROUP_FWD_MASK) == (9), "IFLA_BR_GROUP_FWD_MASK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_GROUP_FWD_MASK 9
#endif
#if defined(IFLA_BR_ROOT_ID) || (defined(HAVE_DECL_IFLA_BR_ROOT_ID) && HAVE_DECL_IFLA_BR_ROOT_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_ROOT_ID) == (10), "IFLA_BR_ROOT_ID != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_ROOT_ID 10
#endif
#if defined(IFLA_BR_BRIDGE_ID) || (defined(HAVE_DECL_IFLA_BR_BRIDGE_ID) && HAVE_DECL_IFLA_BR_BRIDGE_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_BRIDGE_ID) == (11), "IFLA_BR_BRIDGE_ID != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_BRIDGE_ID 11
#endif
#if defined(IFLA_BR_ROOT_PORT) || (defined(HAVE_DECL_IFLA_BR_ROOT_PORT) && HAVE_DECL_IFLA_BR_ROOT_PORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_ROOT_PORT) == (12), "IFLA_BR_ROOT_PORT != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_ROOT_PORT 12
#endif
#if defined(IFLA_BR_ROOT_PATH_COST) || (defined(HAVE_DECL_IFLA_BR_ROOT_PATH_COST) && HAVE_DECL_IFLA_BR_ROOT_PATH_COST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_ROOT_PATH_COST) == (13), "IFLA_BR_ROOT_PATH_COST != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_ROOT_PATH_COST 13
#endif
#if defined(IFLA_BR_TOPOLOGY_CHANGE) || (defined(HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE) && HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_TOPOLOGY_CHANGE) == (14), "IFLA_BR_TOPOLOGY_CHANGE != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_TOPOLOGY_CHANGE 14
#endif
#if defined(IFLA_BR_TOPOLOGY_CHANGE_DETECTED) || (defined(HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE_DETECTED) && HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE_DETECTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_TOPOLOGY_CHANGE_DETECTED) == (15), "IFLA_BR_TOPOLOGY_CHANGE_DETECTED != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_TOPOLOGY_CHANGE_DETECTED 15
#endif
#if defined(IFLA_BR_HELLO_TIMER) || (defined(HAVE_DECL_IFLA_BR_HELLO_TIMER) && HAVE_DECL_IFLA_BR_HELLO_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_HELLO_TIMER) == (16), "IFLA_BR_HELLO_TIMER != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_HELLO_TIMER 16
#endif
#if defined(IFLA_BR_TCN_TIMER) || (defined(HAVE_DECL_IFLA_BR_TCN_TIMER) && HAVE_DECL_IFLA_BR_TCN_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_TCN_TIMER) == (17), "IFLA_BR_TCN_TIMER != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_TCN_TIMER 17
#endif
#if defined(IFLA_BR_TOPOLOGY_CHANGE_TIMER) || (defined(HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE_TIMER) && HAVE_DECL_IFLA_BR_TOPOLOGY_CHANGE_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_TOPOLOGY_CHANGE_TIMER) == (18), "IFLA_BR_TOPOLOGY_CHANGE_TIMER != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_TOPOLOGY_CHANGE_TIMER 18
#endif
#if defined(IFLA_BR_GC_TIMER) || (defined(HAVE_DECL_IFLA_BR_GC_TIMER) && HAVE_DECL_IFLA_BR_GC_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_GC_TIMER) == (19), "IFLA_BR_GC_TIMER != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_GC_TIMER 19
#endif
#if defined(IFLA_BR_GROUP_ADDR) || (defined(HAVE_DECL_IFLA_BR_GROUP_ADDR) && HAVE_DECL_IFLA_BR_GROUP_ADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_GROUP_ADDR) == (20), "IFLA_BR_GROUP_ADDR != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_GROUP_ADDR 20
#endif
#if defined(IFLA_BR_FDB_FLUSH) || (defined(HAVE_DECL_IFLA_BR_FDB_FLUSH) && HAVE_DECL_IFLA_BR_FDB_FLUSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_FDB_FLUSH) == (21), "IFLA_BR_FDB_FLUSH != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_FDB_FLUSH 21
#endif
#if defined(IFLA_BR_MCAST_ROUTER) || (defined(HAVE_DECL_IFLA_BR_MCAST_ROUTER) && HAVE_DECL_IFLA_BR_MCAST_ROUTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_ROUTER) == (22), "IFLA_BR_MCAST_ROUTER != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_ROUTER 22
#endif
#if defined(IFLA_BR_MCAST_SNOOPING) || (defined(HAVE_DECL_IFLA_BR_MCAST_SNOOPING) && HAVE_DECL_IFLA_BR_MCAST_SNOOPING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_SNOOPING) == (23), "IFLA_BR_MCAST_SNOOPING != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_SNOOPING 23
#endif
#if defined(IFLA_BR_MCAST_QUERY_USE_IFADDR) || (defined(HAVE_DECL_IFLA_BR_MCAST_QUERY_USE_IFADDR) && HAVE_DECL_IFLA_BR_MCAST_QUERY_USE_IFADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_QUERY_USE_IFADDR) == (24), "IFLA_BR_MCAST_QUERY_USE_IFADDR != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_QUERY_USE_IFADDR 24
#endif
#if defined(IFLA_BR_MCAST_QUERIER) || (defined(HAVE_DECL_IFLA_BR_MCAST_QUERIER) && HAVE_DECL_IFLA_BR_MCAST_QUERIER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_QUERIER) == (25), "IFLA_BR_MCAST_QUERIER != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_QUERIER 25
#endif
#if defined(IFLA_BR_MCAST_HASH_ELASTICITY) || (defined(HAVE_DECL_IFLA_BR_MCAST_HASH_ELASTICITY) && HAVE_DECL_IFLA_BR_MCAST_HASH_ELASTICITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_HASH_ELASTICITY) == (26), "IFLA_BR_MCAST_HASH_ELASTICITY != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_HASH_ELASTICITY 26
#endif
#if defined(IFLA_BR_MCAST_HASH_MAX) || (defined(HAVE_DECL_IFLA_BR_MCAST_HASH_MAX) && HAVE_DECL_IFLA_BR_MCAST_HASH_MAX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_HASH_MAX) == (27), "IFLA_BR_MCAST_HASH_MAX != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_HASH_MAX 27
#endif
#if defined(IFLA_BR_MCAST_LAST_MEMBER_CNT) || (defined(HAVE_DECL_IFLA_BR_MCAST_LAST_MEMBER_CNT) && HAVE_DECL_IFLA_BR_MCAST_LAST_MEMBER_CNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_LAST_MEMBER_CNT) == (28), "IFLA_BR_MCAST_LAST_MEMBER_CNT != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_LAST_MEMBER_CNT 28
#endif
#if defined(IFLA_BR_MCAST_STARTUP_QUERY_CNT) || (defined(HAVE_DECL_IFLA_BR_MCAST_STARTUP_QUERY_CNT) && HAVE_DECL_IFLA_BR_MCAST_STARTUP_QUERY_CNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_STARTUP_QUERY_CNT) == (29), "IFLA_BR_MCAST_STARTUP_QUERY_CNT != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_STARTUP_QUERY_CNT 29
#endif
#if defined(IFLA_BR_MCAST_LAST_MEMBER_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_LAST_MEMBER_INTVL) && HAVE_DECL_IFLA_BR_MCAST_LAST_MEMBER_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_LAST_MEMBER_INTVL) == (30), "IFLA_BR_MCAST_LAST_MEMBER_INTVL != 30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_LAST_MEMBER_INTVL 30
#endif
#if defined(IFLA_BR_MCAST_MEMBERSHIP_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_MEMBERSHIP_INTVL) && HAVE_DECL_IFLA_BR_MCAST_MEMBERSHIP_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_MEMBERSHIP_INTVL) == (31), "IFLA_BR_MCAST_MEMBERSHIP_INTVL != 31");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_MEMBERSHIP_INTVL 31
#endif
#if defined(IFLA_BR_MCAST_QUERIER_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_QUERIER_INTVL) && HAVE_DECL_IFLA_BR_MCAST_QUERIER_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_QUERIER_INTVL) == (32), "IFLA_BR_MCAST_QUERIER_INTVL != 32");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_QUERIER_INTVL 32
#endif
#if defined(IFLA_BR_MCAST_QUERY_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_QUERY_INTVL) && HAVE_DECL_IFLA_BR_MCAST_QUERY_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_QUERY_INTVL) == (33), "IFLA_BR_MCAST_QUERY_INTVL != 33");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_QUERY_INTVL 33
#endif
#if defined(IFLA_BR_MCAST_QUERY_RESPONSE_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_QUERY_RESPONSE_INTVL) && HAVE_DECL_IFLA_BR_MCAST_QUERY_RESPONSE_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_QUERY_RESPONSE_INTVL) == (34), "IFLA_BR_MCAST_QUERY_RESPONSE_INTVL != 34");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_QUERY_RESPONSE_INTVL 34
#endif
#if defined(IFLA_BR_MCAST_STARTUP_QUERY_INTVL) || (defined(HAVE_DECL_IFLA_BR_MCAST_STARTUP_QUERY_INTVL) && HAVE_DECL_IFLA_BR_MCAST_STARTUP_QUERY_INTVL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_STARTUP_QUERY_INTVL) == (35), "IFLA_BR_MCAST_STARTUP_QUERY_INTVL != 35");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_STARTUP_QUERY_INTVL 35
#endif
#if defined(IFLA_BR_NF_CALL_IPTABLES) || (defined(HAVE_DECL_IFLA_BR_NF_CALL_IPTABLES) && HAVE_DECL_IFLA_BR_NF_CALL_IPTABLES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_NF_CALL_IPTABLES) == (36), "IFLA_BR_NF_CALL_IPTABLES != 36");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_NF_CALL_IPTABLES 36
#endif
#if defined(IFLA_BR_NF_CALL_IP6TABLES) || (defined(HAVE_DECL_IFLA_BR_NF_CALL_IP6TABLES) && HAVE_DECL_IFLA_BR_NF_CALL_IP6TABLES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_NF_CALL_IP6TABLES) == (37), "IFLA_BR_NF_CALL_IP6TABLES != 37");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_NF_CALL_IP6TABLES 37
#endif
#if defined(IFLA_BR_NF_CALL_ARPTABLES) || (defined(HAVE_DECL_IFLA_BR_NF_CALL_ARPTABLES) && HAVE_DECL_IFLA_BR_NF_CALL_ARPTABLES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_NF_CALL_ARPTABLES) == (38), "IFLA_BR_NF_CALL_ARPTABLES != 38");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_NF_CALL_ARPTABLES 38
#endif
#if defined(IFLA_BR_VLAN_DEFAULT_PVID) || (defined(HAVE_DECL_IFLA_BR_VLAN_DEFAULT_PVID) && HAVE_DECL_IFLA_BR_VLAN_DEFAULT_PVID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_VLAN_DEFAULT_PVID) == (39), "IFLA_BR_VLAN_DEFAULT_PVID != 39");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_VLAN_DEFAULT_PVID 39
#endif
#if defined(IFLA_BR_PAD) || (defined(HAVE_DECL_IFLA_BR_PAD) && HAVE_DECL_IFLA_BR_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_PAD) == (40), "IFLA_BR_PAD != 40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_PAD 40
#endif
#if defined(IFLA_BR_VLAN_STATS_ENABLED) || (defined(HAVE_DECL_IFLA_BR_VLAN_STATS_ENABLED) && HAVE_DECL_IFLA_BR_VLAN_STATS_ENABLED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_VLAN_STATS_ENABLED) == (41), "IFLA_BR_VLAN_STATS_ENABLED != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_VLAN_STATS_ENABLED 41
#endif
#if defined(IFLA_BR_MCAST_STATS_ENABLED) || (defined(HAVE_DECL_IFLA_BR_MCAST_STATS_ENABLED) && HAVE_DECL_IFLA_BR_MCAST_STATS_ENABLED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_STATS_ENABLED) == (42), "IFLA_BR_MCAST_STATS_ENABLED != 42");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_STATS_ENABLED 42
#endif
#if defined(IFLA_BR_MCAST_IGMP_VERSION) || (defined(HAVE_DECL_IFLA_BR_MCAST_IGMP_VERSION) && HAVE_DECL_IFLA_BR_MCAST_IGMP_VERSION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_IGMP_VERSION) == (43), "IFLA_BR_MCAST_IGMP_VERSION != 43");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_IGMP_VERSION 43
#endif
#if defined(IFLA_BR_MCAST_MLD_VERSION) || (defined(HAVE_DECL_IFLA_BR_MCAST_MLD_VERSION) && HAVE_DECL_IFLA_BR_MCAST_MLD_VERSION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MCAST_MLD_VERSION) == (44), "IFLA_BR_MCAST_MLD_VERSION != 44");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MCAST_MLD_VERSION 44
#endif
#if defined(IFLA_BR_VLAN_STATS_PER_PORT) || (defined(HAVE_DECL_IFLA_BR_VLAN_STATS_PER_PORT) && HAVE_DECL_IFLA_BR_VLAN_STATS_PER_PORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_VLAN_STATS_PER_PORT) == (45), "IFLA_BR_VLAN_STATS_PER_PORT != 45");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_VLAN_STATS_PER_PORT 45
#endif
#if defined(IFLA_BR_MULTI_BOOLOPT) || (defined(HAVE_DECL_IFLA_BR_MULTI_BOOLOPT) && HAVE_DECL_IFLA_BR_MULTI_BOOLOPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_BR_MULTI_BOOLOPT) == (46), "IFLA_BR_MULTI_BOOLOPT != 46");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_BR_MULTI_BOOLOPT 46
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_info_data_bridge_attrs in mpers mode

# else

static const struct xlat_data rtnl_ifla_info_data_bridge_attrs_xdata[] = {
 [IFLA_BR_UNSPEC] = XLAT(IFLA_BR_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_BR_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_BR_UNSPEC)
 [IFLA_BR_FORWARD_DELAY] = XLAT(IFLA_BR_FORWARD_DELAY),
 #define XLAT_VAL_1 ((unsigned) (IFLA_BR_FORWARD_DELAY))
 #define XLAT_STR_1 STRINGIFY(IFLA_BR_FORWARD_DELAY)
 [IFLA_BR_HELLO_TIME] = XLAT(IFLA_BR_HELLO_TIME),
 #define XLAT_VAL_2 ((unsigned) (IFLA_BR_HELLO_TIME))
 #define XLAT_STR_2 STRINGIFY(IFLA_BR_HELLO_TIME)
 [IFLA_BR_MAX_AGE] = XLAT(IFLA_BR_MAX_AGE),
 #define XLAT_VAL_3 ((unsigned) (IFLA_BR_MAX_AGE))
 #define XLAT_STR_3 STRINGIFY(IFLA_BR_MAX_AGE)
 [IFLA_BR_AGEING_TIME] = XLAT(IFLA_BR_AGEING_TIME),
 #define XLAT_VAL_4 ((unsigned) (IFLA_BR_AGEING_TIME))
 #define XLAT_STR_4 STRINGIFY(IFLA_BR_AGEING_TIME)
 [IFLA_BR_STP_STATE] = XLAT(IFLA_BR_STP_STATE),
 #define XLAT_VAL_5 ((unsigned) (IFLA_BR_STP_STATE))
 #define XLAT_STR_5 STRINGIFY(IFLA_BR_STP_STATE)
 [IFLA_BR_PRIORITY] = XLAT(IFLA_BR_PRIORITY),
 #define XLAT_VAL_6 ((unsigned) (IFLA_BR_PRIORITY))
 #define XLAT_STR_6 STRINGIFY(IFLA_BR_PRIORITY)
 [IFLA_BR_VLAN_FILTERING] = XLAT(IFLA_BR_VLAN_FILTERING),
 #define XLAT_VAL_7 ((unsigned) (IFLA_BR_VLAN_FILTERING))
 #define XLAT_STR_7 STRINGIFY(IFLA_BR_VLAN_FILTERING)
 [IFLA_BR_VLAN_PROTOCOL] = XLAT(IFLA_BR_VLAN_PROTOCOL),
 #define XLAT_VAL_8 ((unsigned) (IFLA_BR_VLAN_PROTOCOL))
 #define XLAT_STR_8 STRINGIFY(IFLA_BR_VLAN_PROTOCOL)
 [IFLA_BR_GROUP_FWD_MASK] = XLAT(IFLA_BR_GROUP_FWD_MASK),
 #define XLAT_VAL_9 ((unsigned) (IFLA_BR_GROUP_FWD_MASK))
 #define XLAT_STR_9 STRINGIFY(IFLA_BR_GROUP_FWD_MASK)
 [IFLA_BR_ROOT_ID] = XLAT(IFLA_BR_ROOT_ID),
 #define XLAT_VAL_10 ((unsigned) (IFLA_BR_ROOT_ID))
 #define XLAT_STR_10 STRINGIFY(IFLA_BR_ROOT_ID)
 [IFLA_BR_BRIDGE_ID] = XLAT(IFLA_BR_BRIDGE_ID),
 #define XLAT_VAL_11 ((unsigned) (IFLA_BR_BRIDGE_ID))
 #define XLAT_STR_11 STRINGIFY(IFLA_BR_BRIDGE_ID)
 [IFLA_BR_ROOT_PORT] = XLAT(IFLA_BR_ROOT_PORT),
 #define XLAT_VAL_12 ((unsigned) (IFLA_BR_ROOT_PORT))
 #define XLAT_STR_12 STRINGIFY(IFLA_BR_ROOT_PORT)
 [IFLA_BR_ROOT_PATH_COST] = XLAT(IFLA_BR_ROOT_PATH_COST),
 #define XLAT_VAL_13 ((unsigned) (IFLA_BR_ROOT_PATH_COST))
 #define XLAT_STR_13 STRINGIFY(IFLA_BR_ROOT_PATH_COST)
 [IFLA_BR_TOPOLOGY_CHANGE] = XLAT(IFLA_BR_TOPOLOGY_CHANGE),
 #define XLAT_VAL_14 ((unsigned) (IFLA_BR_TOPOLOGY_CHANGE))
 #define XLAT_STR_14 STRINGIFY(IFLA_BR_TOPOLOGY_CHANGE)
 [IFLA_BR_TOPOLOGY_CHANGE_DETECTED] = XLAT(IFLA_BR_TOPOLOGY_CHANGE_DETECTED),
 #define XLAT_VAL_15 ((unsigned) (IFLA_BR_TOPOLOGY_CHANGE_DETECTED))
 #define XLAT_STR_15 STRINGIFY(IFLA_BR_TOPOLOGY_CHANGE_DETECTED)
 [IFLA_BR_HELLO_TIMER] = XLAT(IFLA_BR_HELLO_TIMER),
 #define XLAT_VAL_16 ((unsigned) (IFLA_BR_HELLO_TIMER))
 #define XLAT_STR_16 STRINGIFY(IFLA_BR_HELLO_TIMER)
 [IFLA_BR_TCN_TIMER] = XLAT(IFLA_BR_TCN_TIMER),
 #define XLAT_VAL_17 ((unsigned) (IFLA_BR_TCN_TIMER))
 #define XLAT_STR_17 STRINGIFY(IFLA_BR_TCN_TIMER)
 [IFLA_BR_TOPOLOGY_CHANGE_TIMER] = XLAT(IFLA_BR_TOPOLOGY_CHANGE_TIMER),
 #define XLAT_VAL_18 ((unsigned) (IFLA_BR_TOPOLOGY_CHANGE_TIMER))
 #define XLAT_STR_18 STRINGIFY(IFLA_BR_TOPOLOGY_CHANGE_TIMER)
 [IFLA_BR_GC_TIMER] = XLAT(IFLA_BR_GC_TIMER),
 #define XLAT_VAL_19 ((unsigned) (IFLA_BR_GC_TIMER))
 #define XLAT_STR_19 STRINGIFY(IFLA_BR_GC_TIMER)
 [IFLA_BR_GROUP_ADDR] = XLAT(IFLA_BR_GROUP_ADDR),
 #define XLAT_VAL_20 ((unsigned) (IFLA_BR_GROUP_ADDR))
 #define XLAT_STR_20 STRINGIFY(IFLA_BR_GROUP_ADDR)
 [IFLA_BR_FDB_FLUSH] = XLAT(IFLA_BR_FDB_FLUSH),
 #define XLAT_VAL_21 ((unsigned) (IFLA_BR_FDB_FLUSH))
 #define XLAT_STR_21 STRINGIFY(IFLA_BR_FDB_FLUSH)
 [IFLA_BR_MCAST_ROUTER] = XLAT(IFLA_BR_MCAST_ROUTER),
 #define XLAT_VAL_22 ((unsigned) (IFLA_BR_MCAST_ROUTER))
 #define XLAT_STR_22 STRINGIFY(IFLA_BR_MCAST_ROUTER)
 [IFLA_BR_MCAST_SNOOPING] = XLAT(IFLA_BR_MCAST_SNOOPING),
 #define XLAT_VAL_23 ((unsigned) (IFLA_BR_MCAST_SNOOPING))
 #define XLAT_STR_23 STRINGIFY(IFLA_BR_MCAST_SNOOPING)
 [IFLA_BR_MCAST_QUERY_USE_IFADDR] = XLAT(IFLA_BR_MCAST_QUERY_USE_IFADDR),
 #define XLAT_VAL_24 ((unsigned) (IFLA_BR_MCAST_QUERY_USE_IFADDR))
 #define XLAT_STR_24 STRINGIFY(IFLA_BR_MCAST_QUERY_USE_IFADDR)
 [IFLA_BR_MCAST_QUERIER] = XLAT(IFLA_BR_MCAST_QUERIER),
 #define XLAT_VAL_25 ((unsigned) (IFLA_BR_MCAST_QUERIER))
 #define XLAT_STR_25 STRINGIFY(IFLA_BR_MCAST_QUERIER)
 [IFLA_BR_MCAST_HASH_ELASTICITY] = XLAT(IFLA_BR_MCAST_HASH_ELASTICITY),
 #define XLAT_VAL_26 ((unsigned) (IFLA_BR_MCAST_HASH_ELASTICITY))
 #define XLAT_STR_26 STRINGIFY(IFLA_BR_MCAST_HASH_ELASTICITY)
 [IFLA_BR_MCAST_HASH_MAX] = XLAT(IFLA_BR_MCAST_HASH_MAX),
 #define XLAT_VAL_27 ((unsigned) (IFLA_BR_MCAST_HASH_MAX))
 #define XLAT_STR_27 STRINGIFY(IFLA_BR_MCAST_HASH_MAX)
 [IFLA_BR_MCAST_LAST_MEMBER_CNT] = XLAT(IFLA_BR_MCAST_LAST_MEMBER_CNT),
 #define XLAT_VAL_28 ((unsigned) (IFLA_BR_MCAST_LAST_MEMBER_CNT))
 #define XLAT_STR_28 STRINGIFY(IFLA_BR_MCAST_LAST_MEMBER_CNT)
 [IFLA_BR_MCAST_STARTUP_QUERY_CNT] = XLAT(IFLA_BR_MCAST_STARTUP_QUERY_CNT),
 #define XLAT_VAL_29 ((unsigned) (IFLA_BR_MCAST_STARTUP_QUERY_CNT))
 #define XLAT_STR_29 STRINGIFY(IFLA_BR_MCAST_STARTUP_QUERY_CNT)
 [IFLA_BR_MCAST_LAST_MEMBER_INTVL] = XLAT(IFLA_BR_MCAST_LAST_MEMBER_INTVL),
 #define XLAT_VAL_30 ((unsigned) (IFLA_BR_MCAST_LAST_MEMBER_INTVL))
 #define XLAT_STR_30 STRINGIFY(IFLA_BR_MCAST_LAST_MEMBER_INTVL)
 [IFLA_BR_MCAST_MEMBERSHIP_INTVL] = XLAT(IFLA_BR_MCAST_MEMBERSHIP_INTVL),
 #define XLAT_VAL_31 ((unsigned) (IFLA_BR_MCAST_MEMBERSHIP_INTVL))
 #define XLAT_STR_31 STRINGIFY(IFLA_BR_MCAST_MEMBERSHIP_INTVL)
 [IFLA_BR_MCAST_QUERIER_INTVL] = XLAT(IFLA_BR_MCAST_QUERIER_INTVL),
 #define XLAT_VAL_32 ((unsigned) (IFLA_BR_MCAST_QUERIER_INTVL))
 #define XLAT_STR_32 STRINGIFY(IFLA_BR_MCAST_QUERIER_INTVL)
 [IFLA_BR_MCAST_QUERY_INTVL] = XLAT(IFLA_BR_MCAST_QUERY_INTVL),
 #define XLAT_VAL_33 ((unsigned) (IFLA_BR_MCAST_QUERY_INTVL))
 #define XLAT_STR_33 STRINGIFY(IFLA_BR_MCAST_QUERY_INTVL)
 [IFLA_BR_MCAST_QUERY_RESPONSE_INTVL] = XLAT(IFLA_BR_MCAST_QUERY_RESPONSE_INTVL),
 #define XLAT_VAL_34 ((unsigned) (IFLA_BR_MCAST_QUERY_RESPONSE_INTVL))
 #define XLAT_STR_34 STRINGIFY(IFLA_BR_MCAST_QUERY_RESPONSE_INTVL)
 [IFLA_BR_MCAST_STARTUP_QUERY_INTVL] = XLAT(IFLA_BR_MCAST_STARTUP_QUERY_INTVL),
 #define XLAT_VAL_35 ((unsigned) (IFLA_BR_MCAST_STARTUP_QUERY_INTVL))
 #define XLAT_STR_35 STRINGIFY(IFLA_BR_MCAST_STARTUP_QUERY_INTVL)
 [IFLA_BR_NF_CALL_IPTABLES] = XLAT(IFLA_BR_NF_CALL_IPTABLES),
 #define XLAT_VAL_36 ((unsigned) (IFLA_BR_NF_CALL_IPTABLES))
 #define XLAT_STR_36 STRINGIFY(IFLA_BR_NF_CALL_IPTABLES)
 [IFLA_BR_NF_CALL_IP6TABLES] = XLAT(IFLA_BR_NF_CALL_IP6TABLES),
 #define XLAT_VAL_37 ((unsigned) (IFLA_BR_NF_CALL_IP6TABLES))
 #define XLAT_STR_37 STRINGIFY(IFLA_BR_NF_CALL_IP6TABLES)
 [IFLA_BR_NF_CALL_ARPTABLES] = XLAT(IFLA_BR_NF_CALL_ARPTABLES),
 #define XLAT_VAL_38 ((unsigned) (IFLA_BR_NF_CALL_ARPTABLES))
 #define XLAT_STR_38 STRINGIFY(IFLA_BR_NF_CALL_ARPTABLES)
 [IFLA_BR_VLAN_DEFAULT_PVID] = XLAT(IFLA_BR_VLAN_DEFAULT_PVID),
 #define XLAT_VAL_39 ((unsigned) (IFLA_BR_VLAN_DEFAULT_PVID))
 #define XLAT_STR_39 STRINGIFY(IFLA_BR_VLAN_DEFAULT_PVID)
 [IFLA_BR_PAD] = XLAT(IFLA_BR_PAD),
 #define XLAT_VAL_40 ((unsigned) (IFLA_BR_PAD))
 #define XLAT_STR_40 STRINGIFY(IFLA_BR_PAD)
 [IFLA_BR_VLAN_STATS_ENABLED] = XLAT(IFLA_BR_VLAN_STATS_ENABLED),
 #define XLAT_VAL_41 ((unsigned) (IFLA_BR_VLAN_STATS_ENABLED))
 #define XLAT_STR_41 STRINGIFY(IFLA_BR_VLAN_STATS_ENABLED)
 [IFLA_BR_MCAST_STATS_ENABLED] = XLAT(IFLA_BR_MCAST_STATS_ENABLED),
 #define XLAT_VAL_42 ((unsigned) (IFLA_BR_MCAST_STATS_ENABLED))
 #define XLAT_STR_42 STRINGIFY(IFLA_BR_MCAST_STATS_ENABLED)
 [IFLA_BR_MCAST_IGMP_VERSION] = XLAT(IFLA_BR_MCAST_IGMP_VERSION),
 #define XLAT_VAL_43 ((unsigned) (IFLA_BR_MCAST_IGMP_VERSION))
 #define XLAT_STR_43 STRINGIFY(IFLA_BR_MCAST_IGMP_VERSION)
 [IFLA_BR_MCAST_MLD_VERSION] = XLAT(IFLA_BR_MCAST_MLD_VERSION),
 #define XLAT_VAL_44 ((unsigned) (IFLA_BR_MCAST_MLD_VERSION))
 #define XLAT_STR_44 STRINGIFY(IFLA_BR_MCAST_MLD_VERSION)
 [IFLA_BR_VLAN_STATS_PER_PORT] = XLAT(IFLA_BR_VLAN_STATS_PER_PORT),
 #define XLAT_VAL_45 ((unsigned) (IFLA_BR_VLAN_STATS_PER_PORT))
 #define XLAT_STR_45 STRINGIFY(IFLA_BR_VLAN_STATS_PER_PORT)
 [IFLA_BR_MULTI_BOOLOPT] = XLAT(IFLA_BR_MULTI_BOOLOPT),
 #define XLAT_VAL_46 ((unsigned) (IFLA_BR_MULTI_BOOLOPT))
 #define XLAT_STR_46 STRINGIFY(IFLA_BR_MULTI_BOOLOPT)
};
static
const struct xlat rtnl_ifla_info_data_bridge_attrs[1] = { {
 .data = rtnl_ifla_info_data_bridge_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_info_data_bridge_attrs_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
#  endif
#  ifdef XLAT_VAL_35
  | XLAT_VAL_35
#  endif
#  ifdef XLAT_VAL_36
  | XLAT_VAL_36
#  endif
#  ifdef XLAT_VAL_37
  | XLAT_VAL_37
#  endif
#  ifdef XLAT_VAL_38
  | XLAT_VAL_38
#  endif
#  ifdef XLAT_VAL_39
  | XLAT_VAL_39
#  endif
#  ifdef XLAT_VAL_40
  | XLAT_VAL_40
#  endif
#  ifdef XLAT_VAL_41
  | XLAT_VAL_41
#  endif
#  ifdef XLAT_VAL_42
  | XLAT_VAL_42
#  endif
#  ifdef XLAT_VAL_43
  | XLAT_VAL_43
#  endif
#  ifdef XLAT_VAL_44
  | XLAT_VAL_44
#  endif
#  ifdef XLAT_VAL_45
  | XLAT_VAL_45
#  endif
#  ifdef XLAT_VAL_46
  | XLAT_VAL_46
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
#  endif
#  ifdef XLAT_STR_35
  + sizeof(XLAT_STR_35)
#  endif
#  ifdef XLAT_STR_36
  + sizeof(XLAT_STR_36)
#  endif
#  ifdef XLAT_STR_37
  + sizeof(XLAT_STR_37)
#  endif
#  ifdef XLAT_STR_38
  + sizeof(XLAT_STR_38)
#  endif
#  ifdef XLAT_STR_39
  + sizeof(XLAT_STR_39)
#  endif
#  ifdef XLAT_STR_40
  + sizeof(XLAT_STR_40)
#  endif
#  ifdef XLAT_STR_41
  + sizeof(XLAT_STR_41)
#  endif
#  ifdef XLAT_STR_42
  + sizeof(XLAT_STR_42)
#  endif
#  ifdef XLAT_STR_43
  + sizeof(XLAT_STR_43)
#  endif
#  ifdef XLAT_STR_44
  + sizeof(XLAT_STR_44)
#  endif
#  ifdef XLAT_STR_45
  + sizeof(XLAT_STR_45)
#  endif
#  ifdef XLAT_STR_46
  + sizeof(XLAT_STR_46)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
#  undef XLAT_STR_35
#  undef XLAT_VAL_35
#  undef XLAT_STR_36
#  undef XLAT_VAL_36
#  undef XLAT_STR_37
#  undef XLAT_VAL_37
#  undef XLAT_STR_38
#  undef XLAT_VAL_38
#  undef XLAT_STR_39
#  undef XLAT_VAL_39
#  undef XLAT_STR_40
#  undef XLAT_VAL_40
#  undef XLAT_STR_41
#  undef XLAT_VAL_41
#  undef XLAT_STR_42
#  undef XLAT_VAL_42
#  undef XLAT_STR_43
#  undef XLAT_VAL_43
#  undef XLAT_STR_44
#  undef XLAT_VAL_44
#  undef XLAT_STR_45
#  undef XLAT_VAL_45
#  undef XLAT_STR_46
#  undef XLAT_VAL_46
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */