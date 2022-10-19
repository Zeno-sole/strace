/* Generated by ./xlat/gen.sh from ./xlat/sigchld_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CLD_EXITED) || (defined(HAVE_DECL_CLD_EXITED) && HAVE_DECL_CLD_EXITED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_EXITED) == (1), "CLD_EXITED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_EXITED 1
#endif
#if defined(CLD_KILLED) || (defined(HAVE_DECL_CLD_KILLED) && HAVE_DECL_CLD_KILLED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_KILLED) == (2), "CLD_KILLED != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_KILLED 2
#endif
#if defined(CLD_DUMPED) || (defined(HAVE_DECL_CLD_DUMPED) && HAVE_DECL_CLD_DUMPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_DUMPED) == (3), "CLD_DUMPED != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_DUMPED 3
#endif
#if defined(CLD_TRAPPED) || (defined(HAVE_DECL_CLD_TRAPPED) && HAVE_DECL_CLD_TRAPPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_TRAPPED) == (4), "CLD_TRAPPED != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_TRAPPED 4
#endif
#if defined(CLD_STOPPED) || (defined(HAVE_DECL_CLD_STOPPED) && HAVE_DECL_CLD_STOPPED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_STOPPED) == (5), "CLD_STOPPED != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_STOPPED 5
#endif
#if defined(CLD_CONTINUED) || (defined(HAVE_DECL_CLD_CONTINUED) && HAVE_DECL_CLD_CONTINUED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLD_CONTINUED) == (6), "CLD_CONTINUED != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLD_CONTINUED 6
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigchld_codes[];

# else

static const struct xlat_data sigchld_codes_xdata[] = {
 [CLD_EXITED] = XLAT(CLD_EXITED),
 #define XLAT_VAL_0 ((unsigned) (CLD_EXITED))
 #define XLAT_STR_0 STRINGIFY(CLD_EXITED)
 [CLD_KILLED] = XLAT(CLD_KILLED),
 #define XLAT_VAL_1 ((unsigned) (CLD_KILLED))
 #define XLAT_STR_1 STRINGIFY(CLD_KILLED)
 [CLD_DUMPED] = XLAT(CLD_DUMPED),
 #define XLAT_VAL_2 ((unsigned) (CLD_DUMPED))
 #define XLAT_STR_2 STRINGIFY(CLD_DUMPED)
 [CLD_TRAPPED] = XLAT(CLD_TRAPPED),
 #define XLAT_VAL_3 ((unsigned) (CLD_TRAPPED))
 #define XLAT_STR_3 STRINGIFY(CLD_TRAPPED)
 [CLD_STOPPED] = XLAT(CLD_STOPPED),
 #define XLAT_VAL_4 ((unsigned) (CLD_STOPPED))
 #define XLAT_STR_4 STRINGIFY(CLD_STOPPED)
 [CLD_CONTINUED] = XLAT(CLD_CONTINUED),
 #define XLAT_VAL_5 ((unsigned) (CLD_CONTINUED))
 #define XLAT_STR_5 STRINGIFY(CLD_CONTINUED)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigchld_codes[1] = { {
 .data = sigchld_codes_xdata,
 .size = ARRAY_SIZE(sigchld_codes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
