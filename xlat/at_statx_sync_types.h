/* Generated by ./xlat/gen.sh from ./xlat/at_statx_sync_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AT_STATX_SYNC_AS_STAT) || (defined(HAVE_DECL_AT_STATX_SYNC_AS_STAT) && HAVE_DECL_AT_STATX_SYNC_AS_STAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_STATX_SYNC_AS_STAT) == (0x0000), "AT_STATX_SYNC_AS_STAT != 0x0000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_STATX_SYNC_AS_STAT 0x0000
#endif
#if defined(AT_STATX_FORCE_SYNC) || (defined(HAVE_DECL_AT_STATX_FORCE_SYNC) && HAVE_DECL_AT_STATX_FORCE_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_STATX_FORCE_SYNC) == (0x2000), "AT_STATX_FORCE_SYNC != 0x2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_STATX_FORCE_SYNC 0x2000
#endif
#if defined(AT_STATX_DONT_SYNC) || (defined(HAVE_DECL_AT_STATX_DONT_SYNC) && HAVE_DECL_AT_STATX_DONT_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_STATX_DONT_SYNC) == (0x4000), "AT_STATX_DONT_SYNC != 0x4000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_STATX_DONT_SYNC 0x4000
#endif
#if defined(AT_STATX_SYNC_TYPE) || (defined(HAVE_DECL_AT_STATX_SYNC_TYPE) && HAVE_DECL_AT_STATX_SYNC_TYPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_STATX_SYNC_TYPE) == (0x6000), "AT_STATX_SYNC_TYPE != 0x6000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_STATX_SYNC_TYPE 0x6000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat at_statx_sync_types in mpers mode

# else

static const struct xlat_data at_statx_sync_types_xdata[] = {
 XLAT(AT_STATX_SYNC_AS_STAT),
 #define XLAT_VAL_0 ((unsigned) (AT_STATX_SYNC_AS_STAT))
 #define XLAT_STR_0 STRINGIFY(AT_STATX_SYNC_AS_STAT)
 XLAT(AT_STATX_FORCE_SYNC),
 #define XLAT_VAL_1 ((unsigned) (AT_STATX_FORCE_SYNC))
 #define XLAT_STR_1 STRINGIFY(AT_STATX_FORCE_SYNC)
 XLAT(AT_STATX_DONT_SYNC),
 #define XLAT_VAL_2 ((unsigned) (AT_STATX_DONT_SYNC))
 #define XLAT_STR_2 STRINGIFY(AT_STATX_DONT_SYNC)

 XLAT(AT_STATX_SYNC_TYPE),
 #define XLAT_VAL_3 ((unsigned) (AT_STATX_SYNC_TYPE))
 #define XLAT_STR_3 STRINGIFY(AT_STATX_SYNC_TYPE)
};
static
const struct xlat at_statx_sync_types[1] = { {
 .data = at_statx_sync_types_xdata,
 .size = ARRAY_SIZE(at_statx_sync_types_xdata),
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
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
