/* Generated by ./src/xlat/gen.sh from ./src/xlat/lirc_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat lirc_modes in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data lirc_modes_xdata[] = {
 XLAT(LIRC_MODE_RAW),
 #define XLAT_VAL_0 ((unsigned) (LIRC_MODE_RAW))
 #define XLAT_STR_0 STRINGIFY(LIRC_MODE_RAW)
 XLAT(LIRC_MODE_PULSE),
 #define XLAT_VAL_1 ((unsigned) (LIRC_MODE_PULSE))
 #define XLAT_STR_1 STRINGIFY(LIRC_MODE_PULSE)
 XLAT(LIRC_MODE_MODE2),
 #define XLAT_VAL_2 ((unsigned) (LIRC_MODE_MODE2))
 #define XLAT_STR_2 STRINGIFY(LIRC_MODE_MODE2)
 XLAT(LIRC_MODE_SCANCODE),
 #define XLAT_VAL_3 ((unsigned) (LIRC_MODE_SCANCODE))
 #define XLAT_STR_3 STRINGIFY(LIRC_MODE_SCANCODE)
 XLAT(LIRC_MODE_LIRCCODE),
 #define XLAT_VAL_4 ((unsigned) (LIRC_MODE_LIRCCODE))
 #define XLAT_STR_4 STRINGIFY(LIRC_MODE_LIRCCODE)
};
static
const struct xlat lirc_modes[1] = { {
 .data = lirc_modes_xdata,
 .size = ARRAY_SIZE(lirc_modes_xdata),
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