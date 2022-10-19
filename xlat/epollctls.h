/* Generated by ./xlat/gen.sh from ./xlat/epollctls.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(EPOLL_CTL_ADD) || (defined(HAVE_DECL_EPOLL_CTL_ADD) && HAVE_DECL_EPOLL_CTL_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLL_CTL_ADD) == (1), "EPOLL_CTL_ADD != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLL_CTL_ADD 1
#endif
#if defined(EPOLL_CTL_DEL) || (defined(HAVE_DECL_EPOLL_CTL_DEL) && HAVE_DECL_EPOLL_CTL_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLL_CTL_DEL) == (2), "EPOLL_CTL_DEL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLL_CTL_DEL 2
#endif
#if defined(EPOLL_CTL_MOD) || (defined(HAVE_DECL_EPOLL_CTL_MOD) && HAVE_DECL_EPOLL_CTL_MOD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLL_CTL_MOD) == (3), "EPOLL_CTL_MOD != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLL_CTL_MOD 3
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat epollctls in mpers mode

# else

static const struct xlat_data epollctls_xdata[] = {
 [EPOLL_CTL_ADD] = XLAT(EPOLL_CTL_ADD),
 #define XLAT_VAL_0 ((unsigned) (EPOLL_CTL_ADD))
 #define XLAT_STR_0 STRINGIFY(EPOLL_CTL_ADD)
 [EPOLL_CTL_DEL] = XLAT(EPOLL_CTL_DEL),
 #define XLAT_VAL_1 ((unsigned) (EPOLL_CTL_DEL))
 #define XLAT_STR_1 STRINGIFY(EPOLL_CTL_DEL)
 [EPOLL_CTL_MOD] = XLAT(EPOLL_CTL_MOD),
 #define XLAT_VAL_2 ((unsigned) (EPOLL_CTL_MOD))
 #define XLAT_STR_2 STRINGIFY(EPOLL_CTL_MOD)
};
static
const struct xlat epollctls[1] = { {
 .data = epollctls_xdata,
 .size = ARRAY_SIZE(epollctls_xdata),
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
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
