/* Generated by ./xlat/gen.sh from ./xlat/seccomp_filter_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SECCOMP_FILTER_FLAG_TSYNC) || (defined(HAVE_DECL_SECCOMP_FILTER_FLAG_TSYNC) && HAVE_DECL_SECCOMP_FILTER_FLAG_TSYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_FILTER_FLAG_TSYNC) == ((1<<0)), "SECCOMP_FILTER_FLAG_TSYNC != (1<<0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_FILTER_FLAG_TSYNC (1<<0)
#endif
#if defined(SECCOMP_FILTER_FLAG_LOG) || (defined(HAVE_DECL_SECCOMP_FILTER_FLAG_LOG) && HAVE_DECL_SECCOMP_FILTER_FLAG_LOG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_FILTER_FLAG_LOG) == ((1<<1)), "SECCOMP_FILTER_FLAG_LOG != (1<<1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_FILTER_FLAG_LOG (1<<1)
#endif
#if defined(SECCOMP_FILTER_FLAG_SPEC_ALLOW) || (defined(HAVE_DECL_SECCOMP_FILTER_FLAG_SPEC_ALLOW) && HAVE_DECL_SECCOMP_FILTER_FLAG_SPEC_ALLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_FILTER_FLAG_SPEC_ALLOW) == ((1<<2)), "SECCOMP_FILTER_FLAG_SPEC_ALLOW != (1<<2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_FILTER_FLAG_SPEC_ALLOW (1<<2)
#endif
#if defined(SECCOMP_FILTER_FLAG_NEW_LISTENER) || (defined(HAVE_DECL_SECCOMP_FILTER_FLAG_NEW_LISTENER) && HAVE_DECL_SECCOMP_FILTER_FLAG_NEW_LISTENER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_FILTER_FLAG_NEW_LISTENER) == ((1<<3)), "SECCOMP_FILTER_FLAG_NEW_LISTENER != (1<<3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_FILTER_FLAG_NEW_LISTENER (1<<3)
#endif
#if defined(SECCOMP_FILTER_FLAG_TSYNC_ESRCH) || (defined(HAVE_DECL_SECCOMP_FILTER_FLAG_TSYNC_ESRCH) && HAVE_DECL_SECCOMP_FILTER_FLAG_TSYNC_ESRCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_FILTER_FLAG_TSYNC_ESRCH) == ((1<<4)), "SECCOMP_FILTER_FLAG_TSYNC_ESRCH != (1<<4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_FILTER_FLAG_TSYNC_ESRCH (1<<4)
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data seccomp_filter_flags_xdata[] = {
 XLAT(SECCOMP_FILTER_FLAG_TSYNC),
 #define XLAT_VAL_0 ((unsigned) (SECCOMP_FILTER_FLAG_TSYNC))
 #define XLAT_STR_0 STRINGIFY(SECCOMP_FILTER_FLAG_TSYNC)
 XLAT(SECCOMP_FILTER_FLAG_LOG),
 #define XLAT_VAL_1 ((unsigned) (SECCOMP_FILTER_FLAG_LOG))
 #define XLAT_STR_1 STRINGIFY(SECCOMP_FILTER_FLAG_LOG)
 XLAT(SECCOMP_FILTER_FLAG_SPEC_ALLOW),
 #define XLAT_VAL_2 ((unsigned) (SECCOMP_FILTER_FLAG_SPEC_ALLOW))
 #define XLAT_STR_2 STRINGIFY(SECCOMP_FILTER_FLAG_SPEC_ALLOW)
 XLAT(SECCOMP_FILTER_FLAG_NEW_LISTENER),
 #define XLAT_VAL_3 ((unsigned) (SECCOMP_FILTER_FLAG_NEW_LISTENER))
 #define XLAT_STR_3 STRINGIFY(SECCOMP_FILTER_FLAG_NEW_LISTENER)
 XLAT(SECCOMP_FILTER_FLAG_TSYNC_ESRCH),
 #define XLAT_VAL_4 ((unsigned) (SECCOMP_FILTER_FLAG_TSYNC_ESRCH))
 #define XLAT_STR_4 STRINGIFY(SECCOMP_FILTER_FLAG_TSYNC_ESRCH)
};
const struct xlat seccomp_filter_flags[1] = { {
 .data = seccomp_filter_flags_xdata,
 .size = ARRAY_SIZE(seccomp_filter_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
