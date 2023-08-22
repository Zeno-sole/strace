/* Generated by ./src/xlat/gen.sh from ./src/xlat/packet_diag_info_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat packet_diag_info_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data packet_diag_info_flags_xdata[] = {
 XLAT(PDI_RUNNING),
 #define XLAT_VAL_0 ((unsigned) (PDI_RUNNING))
 #define XLAT_STR_0 STRINGIFY(PDI_RUNNING)
 XLAT(PDI_AUXDATA),
 #define XLAT_VAL_1 ((unsigned) (PDI_AUXDATA))
 #define XLAT_STR_1 STRINGIFY(PDI_AUXDATA)
 XLAT(PDI_ORIGDEV),
 #define XLAT_VAL_2 ((unsigned) (PDI_ORIGDEV))
 #define XLAT_STR_2 STRINGIFY(PDI_ORIGDEV)
 XLAT(PDI_VNETHDR),
 #define XLAT_VAL_3 ((unsigned) (PDI_VNETHDR))
 #define XLAT_STR_3 STRINGIFY(PDI_VNETHDR)
 XLAT(PDI_LOSS),
 #define XLAT_VAL_4 ((unsigned) (PDI_LOSS))
 #define XLAT_STR_4 STRINGIFY(PDI_LOSS)
};
static
const struct xlat packet_diag_info_flags[1] = { {
 .data = packet_diag_info_flags_xdata,
 .size = ARRAY_SIZE(packet_diag_info_flags_xdata),
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