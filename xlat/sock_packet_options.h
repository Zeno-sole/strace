/* Generated by ./xlat/gen.sh from ./xlat/sock_packet_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_packet_options in mpers mode

# else

static const struct xlat_data sock_packet_options_xdata[] = {
#if defined(PACKET_ADD_MEMBERSHIP) || (defined(HAVE_DECL_PACKET_ADD_MEMBERSHIP) && HAVE_DECL_PACKET_ADD_MEMBERSHIP)
  XLAT(PACKET_ADD_MEMBERSHIP),
 #define XLAT_VAL_0 ((unsigned) (PACKET_ADD_MEMBERSHIP))
 #define XLAT_STR_0 STRINGIFY(PACKET_ADD_MEMBERSHIP)
#endif
#if defined(PACKET_DROP_MEMBERSHIP) || (defined(HAVE_DECL_PACKET_DROP_MEMBERSHIP) && HAVE_DECL_PACKET_DROP_MEMBERSHIP)
  XLAT(PACKET_DROP_MEMBERSHIP),
 #define XLAT_VAL_1 ((unsigned) (PACKET_DROP_MEMBERSHIP))
 #define XLAT_STR_1 STRINGIFY(PACKET_DROP_MEMBERSHIP)
#endif
#if defined(PACKET_RECV_OUTPUT) || (defined(HAVE_DECL_PACKET_RECV_OUTPUT) && HAVE_DECL_PACKET_RECV_OUTPUT)
  XLAT(PACKET_RECV_OUTPUT),
 #define XLAT_VAL_2 ((unsigned) (PACKET_RECV_OUTPUT))
 #define XLAT_STR_2 STRINGIFY(PACKET_RECV_OUTPUT)
#endif
#if defined(PACKET_RX_RING) || (defined(HAVE_DECL_PACKET_RX_RING) && HAVE_DECL_PACKET_RX_RING)
  XLAT(PACKET_RX_RING),
 #define XLAT_VAL_3 ((unsigned) (PACKET_RX_RING))
 #define XLAT_STR_3 STRINGIFY(PACKET_RX_RING)
#endif
#if defined(PACKET_STATISTICS) || (defined(HAVE_DECL_PACKET_STATISTICS) && HAVE_DECL_PACKET_STATISTICS)
  XLAT(PACKET_STATISTICS),
 #define XLAT_VAL_4 ((unsigned) (PACKET_STATISTICS))
 #define XLAT_STR_4 STRINGIFY(PACKET_STATISTICS)
#endif
#if defined(PACKET_COPY_THRESH) || (defined(HAVE_DECL_PACKET_COPY_THRESH) && HAVE_DECL_PACKET_COPY_THRESH)
  XLAT(PACKET_COPY_THRESH),
 #define XLAT_VAL_5 ((unsigned) (PACKET_COPY_THRESH))
 #define XLAT_STR_5 STRINGIFY(PACKET_COPY_THRESH)
#endif
#if defined(PACKET_AUXDATA) || (defined(HAVE_DECL_PACKET_AUXDATA) && HAVE_DECL_PACKET_AUXDATA)
  XLAT(PACKET_AUXDATA),
 #define XLAT_VAL_6 ((unsigned) (PACKET_AUXDATA))
 #define XLAT_STR_6 STRINGIFY(PACKET_AUXDATA)
#endif
#if defined(PACKET_ORIGDEV) || (defined(HAVE_DECL_PACKET_ORIGDEV) && HAVE_DECL_PACKET_ORIGDEV)
  XLAT(PACKET_ORIGDEV),
 #define XLAT_VAL_7 ((unsigned) (PACKET_ORIGDEV))
 #define XLAT_STR_7 STRINGIFY(PACKET_ORIGDEV)
#endif
#if defined(PACKET_VERSION) || (defined(HAVE_DECL_PACKET_VERSION) && HAVE_DECL_PACKET_VERSION)
  XLAT(PACKET_VERSION),
 #define XLAT_VAL_8 ((unsigned) (PACKET_VERSION))
 #define XLAT_STR_8 STRINGIFY(PACKET_VERSION)
#endif
#if defined(PACKET_HDRLEN) || (defined(HAVE_DECL_PACKET_HDRLEN) && HAVE_DECL_PACKET_HDRLEN)
  XLAT(PACKET_HDRLEN),
 #define XLAT_VAL_9 ((unsigned) (PACKET_HDRLEN))
 #define XLAT_STR_9 STRINGIFY(PACKET_HDRLEN)
#endif
#if defined(PACKET_RESERVE) || (defined(HAVE_DECL_PACKET_RESERVE) && HAVE_DECL_PACKET_RESERVE)
  XLAT(PACKET_RESERVE),
 #define XLAT_VAL_10 ((unsigned) (PACKET_RESERVE))
 #define XLAT_STR_10 STRINGIFY(PACKET_RESERVE)
#endif
#if defined(PACKET_TX_RING) || (defined(HAVE_DECL_PACKET_TX_RING) && HAVE_DECL_PACKET_TX_RING)
  XLAT(PACKET_TX_RING),
 #define XLAT_VAL_11 ((unsigned) (PACKET_TX_RING))
 #define XLAT_STR_11 STRINGIFY(PACKET_TX_RING)
#endif
#if defined(PACKET_LOSS) || (defined(HAVE_DECL_PACKET_LOSS) && HAVE_DECL_PACKET_LOSS)
  XLAT(PACKET_LOSS),
 #define XLAT_VAL_12 ((unsigned) (PACKET_LOSS))
 #define XLAT_STR_12 STRINGIFY(PACKET_LOSS)
#endif
#if defined(PACKET_VNET_HDR) || (defined(HAVE_DECL_PACKET_VNET_HDR) && HAVE_DECL_PACKET_VNET_HDR)
  XLAT(PACKET_VNET_HDR),
 #define XLAT_VAL_13 ((unsigned) (PACKET_VNET_HDR))
 #define XLAT_STR_13 STRINGIFY(PACKET_VNET_HDR)
#endif
#if defined(PACKET_TX_TIMESTAMP) || (defined(HAVE_DECL_PACKET_TX_TIMESTAMP) && HAVE_DECL_PACKET_TX_TIMESTAMP)
  XLAT(PACKET_TX_TIMESTAMP),
 #define XLAT_VAL_14 ((unsigned) (PACKET_TX_TIMESTAMP))
 #define XLAT_STR_14 STRINGIFY(PACKET_TX_TIMESTAMP)
#endif
#if defined(PACKET_TIMESTAMP) || (defined(HAVE_DECL_PACKET_TIMESTAMP) && HAVE_DECL_PACKET_TIMESTAMP)
  XLAT(PACKET_TIMESTAMP),
 #define XLAT_VAL_15 ((unsigned) (PACKET_TIMESTAMP))
 #define XLAT_STR_15 STRINGIFY(PACKET_TIMESTAMP)
#endif
#if defined(PACKET_FANOUT) || (defined(HAVE_DECL_PACKET_FANOUT) && HAVE_DECL_PACKET_FANOUT)
  XLAT(PACKET_FANOUT),
 #define XLAT_VAL_16 ((unsigned) (PACKET_FANOUT))
 #define XLAT_STR_16 STRINGIFY(PACKET_FANOUT)
#endif
#if defined(PACKET_TX_HAS_OFF) || (defined(HAVE_DECL_PACKET_TX_HAS_OFF) && HAVE_DECL_PACKET_TX_HAS_OFF)
  XLAT(PACKET_TX_HAS_OFF),
 #define XLAT_VAL_17 ((unsigned) (PACKET_TX_HAS_OFF))
 #define XLAT_STR_17 STRINGIFY(PACKET_TX_HAS_OFF)
#endif
#if defined(PACKET_QDISC_BYPASS) || (defined(HAVE_DECL_PACKET_QDISC_BYPASS) && HAVE_DECL_PACKET_QDISC_BYPASS)
  XLAT(PACKET_QDISC_BYPASS),
 #define XLAT_VAL_18 ((unsigned) (PACKET_QDISC_BYPASS))
 #define XLAT_STR_18 STRINGIFY(PACKET_QDISC_BYPASS)
#endif
#if defined(PACKET_ROLLOVER_STATS) || (defined(HAVE_DECL_PACKET_ROLLOVER_STATS) && HAVE_DECL_PACKET_ROLLOVER_STATS)
  XLAT(PACKET_ROLLOVER_STATS),
 #define XLAT_VAL_19 ((unsigned) (PACKET_ROLLOVER_STATS))
 #define XLAT_STR_19 STRINGIFY(PACKET_ROLLOVER_STATS)
#endif
#if defined(PACKET_FANOUT_DATA) || (defined(HAVE_DECL_PACKET_FANOUT_DATA) && HAVE_DECL_PACKET_FANOUT_DATA)
  XLAT(PACKET_FANOUT_DATA),
 #define XLAT_VAL_20 ((unsigned) (PACKET_FANOUT_DATA))
 #define XLAT_STR_20 STRINGIFY(PACKET_FANOUT_DATA)
#endif
};
static
const struct xlat sock_packet_options[1] = { {
 .data = sock_packet_options_xdata,
 .size = ARRAY_SIZE(sock_packet_options_xdata),
 .type = XT_NORMAL,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */