/* Generated by ./xlat/gen.sh from ./xlat/uring_enter_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IORING_ENTER_GETEVENTS) || (defined(HAVE_DECL_IORING_ENTER_GETEVENTS) && HAVE_DECL_IORING_ENTER_GETEVENTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_ENTER_GETEVENTS) == (1U), "IORING_ENTER_GETEVENTS != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_ENTER_GETEVENTS 1U
#endif
#if defined(IORING_ENTER_SQ_WAKEUP) || (defined(HAVE_DECL_IORING_ENTER_SQ_WAKEUP) && HAVE_DECL_IORING_ENTER_SQ_WAKEUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_ENTER_SQ_WAKEUP) == ((1U << 1)), "IORING_ENTER_SQ_WAKEUP != (1U << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_ENTER_SQ_WAKEUP (1U << 1)
#endif
#if defined(IORING_ENTER_SQ_WAIT) || (defined(HAVE_DECL_IORING_ENTER_SQ_WAIT) && HAVE_DECL_IORING_ENTER_SQ_WAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_ENTER_SQ_WAIT) == ((1U << 2)), "IORING_ENTER_SQ_WAIT != (1U << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_ENTER_SQ_WAIT (1U << 2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_enter_flags in mpers mode

# else

static const struct xlat_data uring_enter_flags_xdata[] = {
 XLAT(IORING_ENTER_GETEVENTS),
 #define XLAT_VAL_0 ((unsigned) (IORING_ENTER_GETEVENTS))
 #define XLAT_STR_0 STRINGIFY(IORING_ENTER_GETEVENTS)
 XLAT(IORING_ENTER_SQ_WAKEUP),
 #define XLAT_VAL_1 ((unsigned) (IORING_ENTER_SQ_WAKEUP))
 #define XLAT_STR_1 STRINGIFY(IORING_ENTER_SQ_WAKEUP)
 XLAT(IORING_ENTER_SQ_WAIT),
 #define XLAT_VAL_2 ((unsigned) (IORING_ENTER_SQ_WAIT))
 #define XLAT_STR_2 STRINGIFY(IORING_ENTER_SQ_WAIT)
};
static
const struct xlat uring_enter_flags[1] = { {
 .data = uring_enter_flags_xdata,
 .size = ARRAY_SIZE(uring_enter_flags_xdata),
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
