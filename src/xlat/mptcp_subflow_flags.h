/* Generated by ./src/xlat/gen.sh from ./src/xlat/mptcp_subflow_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_MCAP_REM) == ((1 << 0)), "MPTCP_SUBFLOW_FLAG_MCAP_REM != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_MCAP_LOC) == ((1 << 1)), "MPTCP_SUBFLOW_FLAG_MCAP_LOC != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_JOIN_REM) == ((1 << 2)), "MPTCP_SUBFLOW_FLAG_JOIN_REM != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_JOIN_LOC) == ((1 << 3)), "MPTCP_SUBFLOW_FLAG_JOIN_LOC != (1 << 3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_BKUP_REM) == ((1 << 4)), "MPTCP_SUBFLOW_FLAG_BKUP_REM != (1 << 4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_BKUP_LOC) == ((1 << 5)), "MPTCP_SUBFLOW_FLAG_BKUP_LOC != (1 << 5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_FULLY_ESTABLISHED) == ((1 << 6)), "MPTCP_SUBFLOW_FLAG_FULLY_ESTABLISHED != (1 << 6)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_CONNECTED) == ((1 << 7)), "MPTCP_SUBFLOW_FLAG_CONNECTED != (1 << 7)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPTCP_SUBFLOW_FLAG_MAPVALID) == ((1 << 8)), "MPTCP_SUBFLOW_FLAG_MAPVALID != (1 << 8)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mptcp_subflow_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data mptcp_subflow_flags_xdata[] = {
 XLAT(MPTCP_SUBFLOW_FLAG_MCAP_REM),
 #define XLAT_VAL_0 ((unsigned) (MPTCP_SUBFLOW_FLAG_MCAP_REM))
 #define XLAT_STR_0 STRINGIFY(MPTCP_SUBFLOW_FLAG_MCAP_REM)
 XLAT(MPTCP_SUBFLOW_FLAG_MCAP_LOC),
 #define XLAT_VAL_1 ((unsigned) (MPTCP_SUBFLOW_FLAG_MCAP_LOC))
 #define XLAT_STR_1 STRINGIFY(MPTCP_SUBFLOW_FLAG_MCAP_LOC)
 XLAT(MPTCP_SUBFLOW_FLAG_JOIN_REM),
 #define XLAT_VAL_2 ((unsigned) (MPTCP_SUBFLOW_FLAG_JOIN_REM))
 #define XLAT_STR_2 STRINGIFY(MPTCP_SUBFLOW_FLAG_JOIN_REM)
 XLAT(MPTCP_SUBFLOW_FLAG_JOIN_LOC),
 #define XLAT_VAL_3 ((unsigned) (MPTCP_SUBFLOW_FLAG_JOIN_LOC))
 #define XLAT_STR_3 STRINGIFY(MPTCP_SUBFLOW_FLAG_JOIN_LOC)
 XLAT(MPTCP_SUBFLOW_FLAG_BKUP_REM),
 #define XLAT_VAL_4 ((unsigned) (MPTCP_SUBFLOW_FLAG_BKUP_REM))
 #define XLAT_STR_4 STRINGIFY(MPTCP_SUBFLOW_FLAG_BKUP_REM)
 XLAT(MPTCP_SUBFLOW_FLAG_BKUP_LOC),
 #define XLAT_VAL_5 ((unsigned) (MPTCP_SUBFLOW_FLAG_BKUP_LOC))
 #define XLAT_STR_5 STRINGIFY(MPTCP_SUBFLOW_FLAG_BKUP_LOC)
 XLAT(MPTCP_SUBFLOW_FLAG_FULLY_ESTABLISHED),
 #define XLAT_VAL_6 ((unsigned) (MPTCP_SUBFLOW_FLAG_FULLY_ESTABLISHED))
 #define XLAT_STR_6 STRINGIFY(MPTCP_SUBFLOW_FLAG_FULLY_ESTABLISHED)
 XLAT(MPTCP_SUBFLOW_FLAG_CONNECTED),
 #define XLAT_VAL_7 ((unsigned) (MPTCP_SUBFLOW_FLAG_CONNECTED))
 #define XLAT_STR_7 STRINGIFY(MPTCP_SUBFLOW_FLAG_CONNECTED)
 XLAT(MPTCP_SUBFLOW_FLAG_MAPVALID),
 #define XLAT_VAL_8 ((unsigned) (MPTCP_SUBFLOW_FLAG_MAPVALID))
 #define XLAT_STR_8 STRINGIFY(MPTCP_SUBFLOW_FLAG_MAPVALID)
};
static
const struct xlat mptcp_subflow_flags[1] = { {
 .data = mptcp_subflow_flags_xdata,
 .size = ARRAY_SIZE(mptcp_subflow_flags_xdata),
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
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
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
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
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
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */