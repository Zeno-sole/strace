/* Generated by ./xlat/gen.sh from ./xlat/tcp_states.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCP_ESTABLISHED) || (defined(HAVE_DECL_TCP_ESTABLISHED) && HAVE_DECL_TCP_ESTABLISHED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_ESTABLISHED) == (1), "TCP_ESTABLISHED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_ESTABLISHED 1
#endif
#if defined(TCP_SYN_SENT) || (defined(HAVE_DECL_TCP_SYN_SENT) && HAVE_DECL_TCP_SYN_SENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_SYN_SENT) == (2), "TCP_SYN_SENT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_SYN_SENT 2
#endif
#if defined(TCP_SYN_RECV) || (defined(HAVE_DECL_TCP_SYN_RECV) && HAVE_DECL_TCP_SYN_RECV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_SYN_RECV) == (3), "TCP_SYN_RECV != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_SYN_RECV 3
#endif
#if defined(TCP_FIN_WAIT1) || (defined(HAVE_DECL_TCP_FIN_WAIT1) && HAVE_DECL_TCP_FIN_WAIT1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FIN_WAIT1) == (4), "TCP_FIN_WAIT1 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FIN_WAIT1 4
#endif
#if defined(TCP_FIN_WAIT2) || (defined(HAVE_DECL_TCP_FIN_WAIT2) && HAVE_DECL_TCP_FIN_WAIT2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_FIN_WAIT2) == (5), "TCP_FIN_WAIT2 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_FIN_WAIT2 5
#endif
#if defined(TCP_TIME_WAIT) || (defined(HAVE_DECL_TCP_TIME_WAIT) && HAVE_DECL_TCP_TIME_WAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_TIME_WAIT) == (6), "TCP_TIME_WAIT != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_TIME_WAIT 6
#endif
#if defined(TCP_CLOSE) || (defined(HAVE_DECL_TCP_CLOSE) && HAVE_DECL_TCP_CLOSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CLOSE) == (7), "TCP_CLOSE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CLOSE 7
#endif
#if defined(TCP_CLOSE_WAIT) || (defined(HAVE_DECL_TCP_CLOSE_WAIT) && HAVE_DECL_TCP_CLOSE_WAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CLOSE_WAIT) == (8), "TCP_CLOSE_WAIT != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CLOSE_WAIT 8
#endif
#if defined(TCP_LAST_ACK) || (defined(HAVE_DECL_TCP_LAST_ACK) && HAVE_DECL_TCP_LAST_ACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_LAST_ACK) == (9), "TCP_LAST_ACK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_LAST_ACK 9
#endif
#if defined(TCP_LISTEN) || (defined(HAVE_DECL_TCP_LISTEN) && HAVE_DECL_TCP_LISTEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_LISTEN) == (10), "TCP_LISTEN != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_LISTEN 10
#endif
#if defined(TCP_CLOSING) || (defined(HAVE_DECL_TCP_CLOSING) && HAVE_DECL_TCP_CLOSING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CLOSING) == (11), "TCP_CLOSING != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CLOSING 11
#endif
#if defined(TCP_NEW_SYN_RECV) || (defined(HAVE_DECL_TCP_NEW_SYN_RECV) && HAVE_DECL_TCP_NEW_SYN_RECV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_NEW_SYN_RECV) == (12), "TCP_NEW_SYN_RECV != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_NEW_SYN_RECV 12
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data tcp_states_xdata[] = {
 [TCP_ESTABLISHED] = XLAT(TCP_ESTABLISHED),
 #define XLAT_VAL_0 ((unsigned) (TCP_ESTABLISHED))
 #define XLAT_STR_0 STRINGIFY(TCP_ESTABLISHED)
 [TCP_SYN_SENT] = XLAT(TCP_SYN_SENT),
 #define XLAT_VAL_1 ((unsigned) (TCP_SYN_SENT))
 #define XLAT_STR_1 STRINGIFY(TCP_SYN_SENT)
 [TCP_SYN_RECV] = XLAT(TCP_SYN_RECV),
 #define XLAT_VAL_2 ((unsigned) (TCP_SYN_RECV))
 #define XLAT_STR_2 STRINGIFY(TCP_SYN_RECV)
 [TCP_FIN_WAIT1] = XLAT(TCP_FIN_WAIT1),
 #define XLAT_VAL_3 ((unsigned) (TCP_FIN_WAIT1))
 #define XLAT_STR_3 STRINGIFY(TCP_FIN_WAIT1)
 [TCP_FIN_WAIT2] = XLAT(TCP_FIN_WAIT2),
 #define XLAT_VAL_4 ((unsigned) (TCP_FIN_WAIT2))
 #define XLAT_STR_4 STRINGIFY(TCP_FIN_WAIT2)
 [TCP_TIME_WAIT] = XLAT(TCP_TIME_WAIT),
 #define XLAT_VAL_5 ((unsigned) (TCP_TIME_WAIT))
 #define XLAT_STR_5 STRINGIFY(TCP_TIME_WAIT)
 [TCP_CLOSE] = XLAT(TCP_CLOSE),
 #define XLAT_VAL_6 ((unsigned) (TCP_CLOSE))
 #define XLAT_STR_6 STRINGIFY(TCP_CLOSE)
 [TCP_CLOSE_WAIT] = XLAT(TCP_CLOSE_WAIT),
 #define XLAT_VAL_7 ((unsigned) (TCP_CLOSE_WAIT))
 #define XLAT_STR_7 STRINGIFY(TCP_CLOSE_WAIT)
 [TCP_LAST_ACK] = XLAT(TCP_LAST_ACK),
 #define XLAT_VAL_8 ((unsigned) (TCP_LAST_ACK))
 #define XLAT_STR_8 STRINGIFY(TCP_LAST_ACK)
 [TCP_LISTEN] = XLAT(TCP_LISTEN),
 #define XLAT_VAL_9 ((unsigned) (TCP_LISTEN))
 #define XLAT_STR_9 STRINGIFY(TCP_LISTEN)
 [TCP_CLOSING] = XLAT(TCP_CLOSING),
 #define XLAT_VAL_10 ((unsigned) (TCP_CLOSING))
 #define XLAT_STR_10 STRINGIFY(TCP_CLOSING)
 [TCP_NEW_SYN_RECV] = XLAT(TCP_NEW_SYN_RECV),
 #define XLAT_VAL_11 ((unsigned) (TCP_NEW_SYN_RECV))
 #define XLAT_STR_11 STRINGIFY(TCP_NEW_SYN_RECV)
};
const struct xlat tcp_states[1] = { {
 .data = tcp_states_xdata,
 .size = ARRAY_SIZE(tcp_states_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
