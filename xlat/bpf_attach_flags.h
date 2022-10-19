/* Generated by ./xlat/gen.sh from ./xlat/bpf_attach_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_ALLOW_OVERRIDE) || (defined(HAVE_DECL_BPF_F_ALLOW_OVERRIDE) && HAVE_DECL_BPF_F_ALLOW_OVERRIDE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_ALLOW_OVERRIDE) == (1U), "BPF_F_ALLOW_OVERRIDE != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_ALLOW_OVERRIDE 1U
#endif
#if defined(BPF_F_ALLOW_MULTI) || (defined(HAVE_DECL_BPF_F_ALLOW_MULTI) && HAVE_DECL_BPF_F_ALLOW_MULTI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_ALLOW_MULTI) == ((1U << 1)), "BPF_F_ALLOW_MULTI != (1U << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_ALLOW_MULTI (1U << 1)
#endif
#if defined(BPF_F_REPLACE) || (defined(HAVE_DECL_BPF_F_REPLACE) && HAVE_DECL_BPF_F_REPLACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_REPLACE) == ((1U << 2)), "BPF_F_REPLACE != (1U << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_REPLACE (1U << 2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_attach_flags in mpers mode

# else

static const struct xlat_data bpf_attach_flags_xdata[] = {
 XLAT(BPF_F_ALLOW_OVERRIDE),
 #define XLAT_VAL_0 ((unsigned) (BPF_F_ALLOW_OVERRIDE))
 #define XLAT_STR_0 STRINGIFY(BPF_F_ALLOW_OVERRIDE)
 XLAT(BPF_F_ALLOW_MULTI),
 #define XLAT_VAL_1 ((unsigned) (BPF_F_ALLOW_MULTI))
 #define XLAT_STR_1 STRINGIFY(BPF_F_ALLOW_MULTI)
 XLAT(BPF_F_REPLACE),
 #define XLAT_VAL_2 ((unsigned) (BPF_F_REPLACE))
 #define XLAT_STR_2 STRINGIFY(BPF_F_REPLACE)
};
static
const struct xlat bpf_attach_flags[1] = { {
 .data = bpf_attach_flags_xdata,
 .size = ARRAY_SIZE(bpf_attach_flags_xdata),
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
