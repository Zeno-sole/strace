/* Generated by ./xlat/gen.sh from ./xlat/sigev_value.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SIGEV_SIGNAL) || (defined(HAVE_DECL_SIGEV_SIGNAL) && HAVE_DECL_SIGEV_SIGNAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SIGEV_SIGNAL) == (0), "SIGEV_SIGNAL != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SIGEV_SIGNAL 0
#endif
#if defined(SIGEV_NONE) || (defined(HAVE_DECL_SIGEV_NONE) && HAVE_DECL_SIGEV_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SIGEV_NONE) == (1), "SIGEV_NONE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SIGEV_NONE 1
#endif
#if defined(SIGEV_THREAD) || (defined(HAVE_DECL_SIGEV_THREAD) && HAVE_DECL_SIGEV_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SIGEV_THREAD) == (2), "SIGEV_THREAD != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SIGEV_THREAD 2
#endif
#if defined(SIGEV_THREAD_ID) || (defined(HAVE_DECL_SIGEV_THREAD_ID) && HAVE_DECL_SIGEV_THREAD_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SIGEV_THREAD_ID) == (4), "SIGEV_THREAD_ID != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SIGEV_THREAD_ID 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigev_value[];

# else

static const struct xlat_data sigev_value_xdata[] = {
 [SIGEV_SIGNAL] = XLAT(SIGEV_SIGNAL),
 #define XLAT_VAL_0 ((unsigned) (SIGEV_SIGNAL))
 #define XLAT_STR_0 STRINGIFY(SIGEV_SIGNAL)
 [SIGEV_NONE] = XLAT(SIGEV_NONE),
 #define XLAT_VAL_1 ((unsigned) (SIGEV_NONE))
 #define XLAT_STR_1 STRINGIFY(SIGEV_NONE)
 [SIGEV_THREAD] = XLAT(SIGEV_THREAD),
 #define XLAT_VAL_2 ((unsigned) (SIGEV_THREAD))
 #define XLAT_STR_2 STRINGIFY(SIGEV_THREAD)
 [SIGEV_THREAD_ID] = XLAT(SIGEV_THREAD_ID),
 #define XLAT_VAL_3 ((unsigned) (SIGEV_THREAD_ID))
 #define XLAT_STR_3 STRINGIFY(SIGEV_THREAD_ID)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigev_value[1] = { {
 .data = sigev_value_xdata,
 .size = ARRAY_SIZE(sigev_value_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
