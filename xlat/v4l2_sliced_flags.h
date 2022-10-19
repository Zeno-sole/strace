/* Generated by ./xlat/gen.sh from ./xlat/v4l2_sliced_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(V4L2_SLICED_VBI_625) || (defined(HAVE_DECL_V4L2_SLICED_VBI_625) && HAVE_DECL_V4L2_SLICED_VBI_625)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SLICED_VBI_625) == ((V4L2_SLICED_TELETEXT_B | V4L2_SLICED_VPS | V4L2_SLICED_WSS_625)), "V4L2_SLICED_VBI_625 != (V4L2_SLICED_TELETEXT_B | V4L2_SLICED_VPS | V4L2_SLICED_WSS_625)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SLICED_VBI_625 (V4L2_SLICED_TELETEXT_B | V4L2_SLICED_VPS | V4L2_SLICED_WSS_625)
#endif
#if defined(V4L2_SLICED_TELETEXT_B) || (defined(HAVE_DECL_V4L2_SLICED_TELETEXT_B) && HAVE_DECL_V4L2_SLICED_TELETEXT_B)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SLICED_TELETEXT_B) == (0x0001), "V4L2_SLICED_TELETEXT_B != 0x0001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SLICED_TELETEXT_B 0x0001
#endif
#if defined(V4L2_SLICED_VPS) || (defined(HAVE_DECL_V4L2_SLICED_VPS) && HAVE_DECL_V4L2_SLICED_VPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SLICED_VPS) == (0x0400), "V4L2_SLICED_VPS != 0x0400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SLICED_VPS 0x0400
#endif
#if defined(V4L2_SLICED_CAPTION_525) || (defined(HAVE_DECL_V4L2_SLICED_CAPTION_525) && HAVE_DECL_V4L2_SLICED_CAPTION_525)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SLICED_CAPTION_525) == (0x1000), "V4L2_SLICED_CAPTION_525 != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SLICED_CAPTION_525 0x1000
#endif
#if defined(V4L2_SLICED_WSS_625) || (defined(HAVE_DECL_V4L2_SLICED_WSS_625) && HAVE_DECL_V4L2_SLICED_WSS_625)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SLICED_WSS_625) == (0x4000), "V4L2_SLICED_WSS_625 != 0x4000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SLICED_WSS_625 0x4000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_sliced_flags[];

# else

static const struct xlat_data v4l2_sliced_flags_xdata[] = {
 XLAT(V4L2_SLICED_VBI_625),
 #define XLAT_VAL_0 ((unsigned) (V4L2_SLICED_VBI_625))
 #define XLAT_STR_0 STRINGIFY(V4L2_SLICED_VBI_625)
 XLAT(V4L2_SLICED_TELETEXT_B),
 #define XLAT_VAL_1 ((unsigned) (V4L2_SLICED_TELETEXT_B))
 #define XLAT_STR_1 STRINGIFY(V4L2_SLICED_TELETEXT_B)
 XLAT(V4L2_SLICED_VPS),
 #define XLAT_VAL_2 ((unsigned) (V4L2_SLICED_VPS))
 #define XLAT_STR_2 STRINGIFY(V4L2_SLICED_VPS)
 XLAT(V4L2_SLICED_CAPTION_525),
 #define XLAT_VAL_3 ((unsigned) (V4L2_SLICED_CAPTION_525))
 #define XLAT_STR_3 STRINGIFY(V4L2_SLICED_CAPTION_525)
 XLAT(V4L2_SLICED_WSS_625),
 #define XLAT_VAL_4 ((unsigned) (V4L2_SLICED_WSS_625))
 #define XLAT_STR_4 STRINGIFY(V4L2_SLICED_WSS_625)

};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_sliced_flags[1] = { {
 .data = v4l2_sliced_flags_xdata,
 .size = ARRAY_SIZE(v4l2_sliced_flags_xdata),
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
