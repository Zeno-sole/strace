/* Generated by ./src/xlat/gen.sh from ./src/xlat/bpf_test_run_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_TEST_RUN_ON_CPU) || (defined(HAVE_DECL_BPF_F_TEST_RUN_ON_CPU) && HAVE_DECL_BPF_F_TEST_RUN_ON_CPU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_TEST_RUN_ON_CPU) == ((1U << 0)), "BPF_F_TEST_RUN_ON_CPU != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_TEST_RUN_ON_CPU (1U << 0)
#endif
#if defined(BPF_F_TEST_XDP_LIVE_FRAMES) || (defined(HAVE_DECL_BPF_F_TEST_XDP_LIVE_FRAMES) && HAVE_DECL_BPF_F_TEST_XDP_LIVE_FRAMES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_TEST_XDP_LIVE_FRAMES) == ((1U << 1)), "BPF_F_TEST_XDP_LIVE_FRAMES != (1U << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_TEST_XDP_LIVE_FRAMES (1U << 1)
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_test_run_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data bpf_test_run_flags_xdata[] = {
 XLAT(BPF_F_TEST_RUN_ON_CPU),
 #define XLAT_VAL_0 ((unsigned) (BPF_F_TEST_RUN_ON_CPU))
 #define XLAT_STR_0 STRINGIFY(BPF_F_TEST_RUN_ON_CPU)
 XLAT(BPF_F_TEST_XDP_LIVE_FRAMES),
 #define XLAT_VAL_1 ((unsigned) (BPF_F_TEST_XDP_LIVE_FRAMES))
 #define XLAT_STR_1 STRINGIFY(BPF_F_TEST_XDP_LIVE_FRAMES)
};
static
const struct xlat bpf_test_run_flags[1] = { {
 .data = bpf_test_run_flags_xdata,
 .size = ARRAY_SIZE(bpf_test_run_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */