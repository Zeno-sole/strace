/* Generated by ./xlat/gen.sh from ./xlat/rtnl_ifla_xdp_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFLA_XDP_UNSPEC) || (defined(HAVE_DECL_IFLA_XDP_UNSPEC) && HAVE_DECL_IFLA_XDP_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_UNSPEC) == (0), "IFLA_XDP_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_UNSPEC 0
#endif
#if defined(IFLA_XDP_FD) || (defined(HAVE_DECL_IFLA_XDP_FD) && HAVE_DECL_IFLA_XDP_FD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_FD) == (1), "IFLA_XDP_FD != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_FD 1
#endif
#if defined(IFLA_XDP_ATTACHED) || (defined(HAVE_DECL_IFLA_XDP_ATTACHED) && HAVE_DECL_IFLA_XDP_ATTACHED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_ATTACHED) == (2), "IFLA_XDP_ATTACHED != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_ATTACHED 2
#endif
#if defined(IFLA_XDP_FLAGS) || (defined(HAVE_DECL_IFLA_XDP_FLAGS) && HAVE_DECL_IFLA_XDP_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_FLAGS) == (3), "IFLA_XDP_FLAGS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_FLAGS 3
#endif
#if defined(IFLA_XDP_PROG_ID) || (defined(HAVE_DECL_IFLA_XDP_PROG_ID) && HAVE_DECL_IFLA_XDP_PROG_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_PROG_ID) == (4), "IFLA_XDP_PROG_ID != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_PROG_ID 4
#endif
#if defined(IFLA_XDP_DRV_PROG_ID) || (defined(HAVE_DECL_IFLA_XDP_DRV_PROG_ID) && HAVE_DECL_IFLA_XDP_DRV_PROG_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_DRV_PROG_ID) == (5), "IFLA_XDP_DRV_PROG_ID != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_DRV_PROG_ID 5
#endif
#if defined(IFLA_XDP_SKB_PROG_ID) || (defined(HAVE_DECL_IFLA_XDP_SKB_PROG_ID) && HAVE_DECL_IFLA_XDP_SKB_PROG_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_SKB_PROG_ID) == (6), "IFLA_XDP_SKB_PROG_ID != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_SKB_PROG_ID 6
#endif
#if defined(IFLA_XDP_HW_PROG_ID) || (defined(HAVE_DECL_IFLA_XDP_HW_PROG_ID) && HAVE_DECL_IFLA_XDP_HW_PROG_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_HW_PROG_ID) == (7), "IFLA_XDP_HW_PROG_ID != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_HW_PROG_ID 7
#endif
#if defined(IFLA_XDP_EXPECTED_FD) || (defined(HAVE_DECL_IFLA_XDP_EXPECTED_FD) && HAVE_DECL_IFLA_XDP_EXPECTED_FD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_XDP_EXPECTED_FD) == (8), "IFLA_XDP_EXPECTED_FD != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_XDP_EXPECTED_FD 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_xdp_attrs in mpers mode

# else

static const struct xlat_data rtnl_ifla_xdp_attrs_xdata[] = {
 [IFLA_XDP_UNSPEC] = XLAT(IFLA_XDP_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_XDP_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_XDP_UNSPEC)
 [IFLA_XDP_FD] = XLAT(IFLA_XDP_FD),
 #define XLAT_VAL_1 ((unsigned) (IFLA_XDP_FD))
 #define XLAT_STR_1 STRINGIFY(IFLA_XDP_FD)
 [IFLA_XDP_ATTACHED] = XLAT(IFLA_XDP_ATTACHED),
 #define XLAT_VAL_2 ((unsigned) (IFLA_XDP_ATTACHED))
 #define XLAT_STR_2 STRINGIFY(IFLA_XDP_ATTACHED)
 [IFLA_XDP_FLAGS] = XLAT(IFLA_XDP_FLAGS),
 #define XLAT_VAL_3 ((unsigned) (IFLA_XDP_FLAGS))
 #define XLAT_STR_3 STRINGIFY(IFLA_XDP_FLAGS)
 [IFLA_XDP_PROG_ID] = XLAT(IFLA_XDP_PROG_ID),
 #define XLAT_VAL_4 ((unsigned) (IFLA_XDP_PROG_ID))
 #define XLAT_STR_4 STRINGIFY(IFLA_XDP_PROG_ID)
 [IFLA_XDP_DRV_PROG_ID] = XLAT(IFLA_XDP_DRV_PROG_ID),
 #define XLAT_VAL_5 ((unsigned) (IFLA_XDP_DRV_PROG_ID))
 #define XLAT_STR_5 STRINGIFY(IFLA_XDP_DRV_PROG_ID)
 [IFLA_XDP_SKB_PROG_ID] = XLAT(IFLA_XDP_SKB_PROG_ID),
 #define XLAT_VAL_6 ((unsigned) (IFLA_XDP_SKB_PROG_ID))
 #define XLAT_STR_6 STRINGIFY(IFLA_XDP_SKB_PROG_ID)
 [IFLA_XDP_HW_PROG_ID] = XLAT(IFLA_XDP_HW_PROG_ID),
 #define XLAT_VAL_7 ((unsigned) (IFLA_XDP_HW_PROG_ID))
 #define XLAT_STR_7 STRINGIFY(IFLA_XDP_HW_PROG_ID)
 [IFLA_XDP_EXPECTED_FD] = XLAT(IFLA_XDP_EXPECTED_FD),
 #define XLAT_VAL_8 ((unsigned) (IFLA_XDP_EXPECTED_FD))
 #define XLAT_STR_8 STRINGIFY(IFLA_XDP_EXPECTED_FD)
};
static
const struct xlat rtnl_ifla_xdp_attrs[1] = { {
 .data = rtnl_ifla_xdp_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_xdp_attrs_xdata),
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
