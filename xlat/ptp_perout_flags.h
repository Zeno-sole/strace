/* Generated by ./xlat/gen.sh from ./xlat/ptp_perout_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PTP_PEROUT_ONE_SHOT) || (defined(HAVE_DECL_PTP_PEROUT_ONE_SHOT) && HAVE_DECL_PTP_PEROUT_ONE_SHOT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PTP_PEROUT_ONE_SHOT) == ((1<<0)), "PTP_PEROUT_ONE_SHOT != (1<<0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PTP_PEROUT_ONE_SHOT (1<<0)
#endif
#if defined(PTP_PEROUT_DUTY_CYCLE) || (defined(HAVE_DECL_PTP_PEROUT_DUTY_CYCLE) && HAVE_DECL_PTP_PEROUT_DUTY_CYCLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PTP_PEROUT_DUTY_CYCLE) == ((1<<1)), "PTP_PEROUT_DUTY_CYCLE != (1<<1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PTP_PEROUT_DUTY_CYCLE (1<<1)
#endif
#if defined(PTP_PEROUT_PHASE) || (defined(HAVE_DECL_PTP_PEROUT_PHASE) && HAVE_DECL_PTP_PEROUT_PHASE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PTP_PEROUT_PHASE) == ((1<<2)), "PTP_PEROUT_PHASE != (1<<2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PTP_PEROUT_PHASE (1<<2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ptp_perout_flags in mpers mode

# else

static const struct xlat_data ptp_perout_flags_xdata[] = {
 XLAT(PTP_PEROUT_ONE_SHOT),
 #define XLAT_VAL_0 ((unsigned) (PTP_PEROUT_ONE_SHOT))
 #define XLAT_STR_0 STRINGIFY(PTP_PEROUT_ONE_SHOT)
 XLAT(PTP_PEROUT_DUTY_CYCLE),
 #define XLAT_VAL_1 ((unsigned) (PTP_PEROUT_DUTY_CYCLE))
 #define XLAT_STR_1 STRINGIFY(PTP_PEROUT_DUTY_CYCLE)
 XLAT(PTP_PEROUT_PHASE),
 #define XLAT_VAL_2 ((unsigned) (PTP_PEROUT_PHASE))
 #define XLAT_STR_2 STRINGIFY(PTP_PEROUT_PHASE)
};
static
const struct xlat ptp_perout_flags[1] = { {
 .data = ptp_perout_flags_xdata,
 .size = ARRAY_SIZE(ptp_perout_flags_xdata),
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