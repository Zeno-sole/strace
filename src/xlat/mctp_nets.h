/* Generated by ./src/xlat/gen.sh from ./src/xlat/mctp_nets.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MCTP_NET_ANY) == (0x0), "MCTP_NET_ANY != 0x0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mctp_nets in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data mctp_nets_xdata[] = {
 XLAT(MCTP_NET_ANY),
 #define XLAT_VAL_0 ((unsigned) (MCTP_NET_ANY))
 #define XLAT_STR_0 STRINGIFY(MCTP_NET_ANY)
};
static
const struct xlat mctp_nets[1] = { {
 .data = mctp_nets_xdata,
 .size = ARRAY_SIZE(mctp_nets_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */