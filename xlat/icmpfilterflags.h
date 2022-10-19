/* Generated by ./xlat/gen.sh from ./xlat/icmpfilterflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat icmpfilterflags in mpers mode

# else

static const struct xlat_data icmpfilterflags_xdata[] = {
#if defined(ICMP_ECHOREPLY) || (defined(HAVE_DECL_ICMP_ECHOREPLY) && HAVE_DECL_ICMP_ECHOREPLY)
  XLAT_PAIR(1ULL<<ICMP_ECHOREPLY, "1<<ICMP_ECHOREPLY"),
 #define XLAT_VAL_0 ((unsigned) (1ULL<<ICMP_ECHOREPLY))
 #define XLAT_STR_0 "1<<ICMP_ECHOREPLY"
#endif
#if defined(ICMP_DEST_UNREACH) || (defined(HAVE_DECL_ICMP_DEST_UNREACH) && HAVE_DECL_ICMP_DEST_UNREACH)
  XLAT_PAIR(1ULL<<ICMP_DEST_UNREACH, "1<<ICMP_DEST_UNREACH"),
 #define XLAT_VAL_1 ((unsigned) (1ULL<<ICMP_DEST_UNREACH))
 #define XLAT_STR_1 "1<<ICMP_DEST_UNREACH"
#endif
#if defined(ICMP_SOURCE_QUENCH) || (defined(HAVE_DECL_ICMP_SOURCE_QUENCH) && HAVE_DECL_ICMP_SOURCE_QUENCH)
  XLAT_PAIR(1ULL<<ICMP_SOURCE_QUENCH, "1<<ICMP_SOURCE_QUENCH"),
 #define XLAT_VAL_2 ((unsigned) (1ULL<<ICMP_SOURCE_QUENCH))
 #define XLAT_STR_2 "1<<ICMP_SOURCE_QUENCH"
#endif
#if defined(ICMP_REDIRECT) || (defined(HAVE_DECL_ICMP_REDIRECT) && HAVE_DECL_ICMP_REDIRECT)
  XLAT_PAIR(1ULL<<ICMP_REDIRECT, "1<<ICMP_REDIRECT"),
 #define XLAT_VAL_3 ((unsigned) (1ULL<<ICMP_REDIRECT))
 #define XLAT_STR_3 "1<<ICMP_REDIRECT"
#endif
#if defined(ICMP_ECHO) || (defined(HAVE_DECL_ICMP_ECHO) && HAVE_DECL_ICMP_ECHO)
  XLAT_PAIR(1ULL<<ICMP_ECHO, "1<<ICMP_ECHO"),
 #define XLAT_VAL_4 ((unsigned) (1ULL<<ICMP_ECHO))
 #define XLAT_STR_4 "1<<ICMP_ECHO"
#endif
#if defined(ICMP_TIME_EXCEEDED) || (defined(HAVE_DECL_ICMP_TIME_EXCEEDED) && HAVE_DECL_ICMP_TIME_EXCEEDED)
  XLAT_PAIR(1ULL<<ICMP_TIME_EXCEEDED, "1<<ICMP_TIME_EXCEEDED"),
 #define XLAT_VAL_5 ((unsigned) (1ULL<<ICMP_TIME_EXCEEDED))
 #define XLAT_STR_5 "1<<ICMP_TIME_EXCEEDED"
#endif
#if defined(ICMP_PARAMETERPROB) || (defined(HAVE_DECL_ICMP_PARAMETERPROB) && HAVE_DECL_ICMP_PARAMETERPROB)
  XLAT_PAIR(1ULL<<ICMP_PARAMETERPROB, "1<<ICMP_PARAMETERPROB"),
 #define XLAT_VAL_6 ((unsigned) (1ULL<<ICMP_PARAMETERPROB))
 #define XLAT_STR_6 "1<<ICMP_PARAMETERPROB"
#endif
#if defined(ICMP_TIMESTAMP) || (defined(HAVE_DECL_ICMP_TIMESTAMP) && HAVE_DECL_ICMP_TIMESTAMP)
  XLAT_PAIR(1ULL<<ICMP_TIMESTAMP, "1<<ICMP_TIMESTAMP"),
 #define XLAT_VAL_7 ((unsigned) (1ULL<<ICMP_TIMESTAMP))
 #define XLAT_STR_7 "1<<ICMP_TIMESTAMP"
#endif
#if defined(ICMP_TIMESTAMPREPLY) || (defined(HAVE_DECL_ICMP_TIMESTAMPREPLY) && HAVE_DECL_ICMP_TIMESTAMPREPLY)
  XLAT_PAIR(1ULL<<ICMP_TIMESTAMPREPLY, "1<<ICMP_TIMESTAMPREPLY"),
 #define XLAT_VAL_8 ((unsigned) (1ULL<<ICMP_TIMESTAMPREPLY))
 #define XLAT_STR_8 "1<<ICMP_TIMESTAMPREPLY"
#endif
#if defined(ICMP_INFO_REQUEST) || (defined(HAVE_DECL_ICMP_INFO_REQUEST) && HAVE_DECL_ICMP_INFO_REQUEST)
  XLAT_PAIR(1ULL<<ICMP_INFO_REQUEST, "1<<ICMP_INFO_REQUEST"),
 #define XLAT_VAL_9 ((unsigned) (1ULL<<ICMP_INFO_REQUEST))
 #define XLAT_STR_9 "1<<ICMP_INFO_REQUEST"
#endif
#if defined(ICMP_INFO_REPLY) || (defined(HAVE_DECL_ICMP_INFO_REPLY) && HAVE_DECL_ICMP_INFO_REPLY)
  XLAT_PAIR(1ULL<<ICMP_INFO_REPLY, "1<<ICMP_INFO_REPLY"),
 #define XLAT_VAL_10 ((unsigned) (1ULL<<ICMP_INFO_REPLY))
 #define XLAT_STR_10 "1<<ICMP_INFO_REPLY"
#endif
#if defined(ICMP_ADDRESS) || (defined(HAVE_DECL_ICMP_ADDRESS) && HAVE_DECL_ICMP_ADDRESS)
  XLAT_PAIR(1ULL<<ICMP_ADDRESS, "1<<ICMP_ADDRESS"),
 #define XLAT_VAL_11 ((unsigned) (1ULL<<ICMP_ADDRESS))
 #define XLAT_STR_11 "1<<ICMP_ADDRESS"
#endif
#if defined(ICMP_ADDRESSREPLY) || (defined(HAVE_DECL_ICMP_ADDRESSREPLY) && HAVE_DECL_ICMP_ADDRESSREPLY)
  XLAT_PAIR(1ULL<<ICMP_ADDRESSREPLY, "1<<ICMP_ADDRESSREPLY"),
 #define XLAT_VAL_12 ((unsigned) (1ULL<<ICMP_ADDRESSREPLY))
 #define XLAT_STR_12 "1<<ICMP_ADDRESSREPLY"
#endif
};
static
const struct xlat icmpfilterflags[1] = { {
 .data = icmpfilterflags_xdata,
 .size = ARRAY_SIZE(icmpfilterflags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
