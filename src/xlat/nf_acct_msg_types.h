/* Generated by ./src/xlat/gen.sh from ./src/xlat/nf_acct_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_acct_msg_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data nf_acct_msg_types_xdata[] = {
 [NFNL_MSG_ACCT_NEW] = XLAT(NFNL_MSG_ACCT_NEW),
 #define XLAT_VAL_0 ((unsigned) (NFNL_MSG_ACCT_NEW))
 #define XLAT_STR_0 STRINGIFY(NFNL_MSG_ACCT_NEW)
 [NFNL_MSG_ACCT_GET] = XLAT(NFNL_MSG_ACCT_GET),
 #define XLAT_VAL_1 ((unsigned) (NFNL_MSG_ACCT_GET))
 #define XLAT_STR_1 STRINGIFY(NFNL_MSG_ACCT_GET)
 [NFNL_MSG_ACCT_GET_CTRZERO] = XLAT(NFNL_MSG_ACCT_GET_CTRZERO),
 #define XLAT_VAL_2 ((unsigned) (NFNL_MSG_ACCT_GET_CTRZERO))
 #define XLAT_STR_2 STRINGIFY(NFNL_MSG_ACCT_GET_CTRZERO)
 [NFNL_MSG_ACCT_DEL] = XLAT(NFNL_MSG_ACCT_DEL),
 #define XLAT_VAL_3 ((unsigned) (NFNL_MSG_ACCT_DEL))
 #define XLAT_STR_3 STRINGIFY(NFNL_MSG_ACCT_DEL)
 [NFNL_MSG_ACCT_OVERQUOTA] = XLAT(NFNL_MSG_ACCT_OVERQUOTA),
 #define XLAT_VAL_4 ((unsigned) (NFNL_MSG_ACCT_OVERQUOTA))
 #define XLAT_STR_4 STRINGIFY(NFNL_MSG_ACCT_OVERQUOTA)
};
static
const struct xlat nf_acct_msg_types[1] = { {
 .data = nf_acct_msg_types_xdata,
 .size = ARRAY_SIZE(nf_acct_msg_types_xdata),
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
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

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