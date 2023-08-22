/* Generated by ./src/xlat/gen.sh from ./src/xlat/blkpg_ops.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKPG_ADD_PARTITION) == (1), "BLKPG_ADD_PARTITION != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKPG_DEL_PARTITION) == (2), "BLKPG_DEL_PARTITION != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKPG_RESIZE_PARTITION) == (3), "BLKPG_RESIZE_PARTITION != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat blkpg_ops[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data blkpg_ops_xdata[] = {
 [BLKPG_ADD_PARTITION] = XLAT(BLKPG_ADD_PARTITION),
 #define XLAT_VAL_0 ((unsigned) (BLKPG_ADD_PARTITION))
 #define XLAT_STR_0 STRINGIFY(BLKPG_ADD_PARTITION)
 [BLKPG_DEL_PARTITION] = XLAT(BLKPG_DEL_PARTITION),
 #define XLAT_VAL_1 ((unsigned) (BLKPG_DEL_PARTITION))
 #define XLAT_STR_1 STRINGIFY(BLKPG_DEL_PARTITION)
 [BLKPG_RESIZE_PARTITION] = XLAT(BLKPG_RESIZE_PARTITION),
 #define XLAT_VAL_2 ((unsigned) (BLKPG_RESIZE_PARTITION))
 #define XLAT_STR_2 STRINGIFY(BLKPG_RESIZE_PARTITION)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat blkpg_ops[1] = { {
 .data = blkpg_ops_xdata,
 .size = ARRAY_SIZE(blkpg_ops_xdata),
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
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */