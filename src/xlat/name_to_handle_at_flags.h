/* Generated by ./src/xlat/gen.sh from ./src/xlat/name_to_handle_at_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat name_to_handle_at_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data name_to_handle_at_flags_xdata[] = {
 XLAT(AT_SYMLINK_FOLLOW),
 #define XLAT_VAL_0 ((unsigned) (AT_SYMLINK_FOLLOW))
 #define XLAT_STR_0 STRINGIFY(AT_SYMLINK_FOLLOW)
 XLAT(AT_EMPTY_PATH),
 #define XLAT_VAL_1 ((unsigned) (AT_EMPTY_PATH))
 #define XLAT_STR_1 STRINGIFY(AT_EMPTY_PATH)
};
static
const struct xlat name_to_handle_at_flags[1] = { {
 .data = name_to_handle_at_flags_xdata,
 .size = ARRAY_SIZE(name_to_handle_at_flags_xdata),
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