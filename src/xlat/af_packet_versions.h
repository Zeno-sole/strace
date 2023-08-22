/* Generated by ./src/xlat/gen.sh from ./src/xlat/af_packet_versions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TPACKET_V1) || (defined(HAVE_DECL_TPACKET_V1) && HAVE_DECL_TPACKET_V1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TPACKET_V1) == (0), "TPACKET_V1 != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TPACKET_V1 0
#endif
#if defined(TPACKET_V2) || (defined(HAVE_DECL_TPACKET_V2) && HAVE_DECL_TPACKET_V2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TPACKET_V2) == (1), "TPACKET_V2 != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TPACKET_V2 1
#endif
#if defined(TPACKET_V3) || (defined(HAVE_DECL_TPACKET_V3) && HAVE_DECL_TPACKET_V3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TPACKET_V3) == (2), "TPACKET_V3 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TPACKET_V3 2
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat af_packet_versions in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data af_packet_versions_xdata[] = {
 [TPACKET_V1] = XLAT(TPACKET_V1),
 #define XLAT_VAL_0 ((unsigned) (TPACKET_V1))
 #define XLAT_STR_0 STRINGIFY(TPACKET_V1)
 [TPACKET_V2] = XLAT(TPACKET_V2),
 #define XLAT_VAL_1 ((unsigned) (TPACKET_V2))
 #define XLAT_STR_1 STRINGIFY(TPACKET_V2)
 [TPACKET_V3] = XLAT(TPACKET_V3),
 #define XLAT_VAL_2 ((unsigned) (TPACKET_V3))
 #define XLAT_STR_2 STRINGIFY(TPACKET_V3)
};
static
const struct xlat af_packet_versions[1] = { {
 .data = af_packet_versions_xdata,
 .size = ARRAY_SIZE(af_packet_versions_xdata),
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