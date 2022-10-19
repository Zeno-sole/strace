/* Generated by ./xlat/gen.sh from ./xlat/nlmsgerr_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NLMSGERR_ATTR_UNUSED) || (defined(HAVE_DECL_NLMSGERR_ATTR_UNUSED) && HAVE_DECL_NLMSGERR_ATTR_UNUSED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NLMSGERR_ATTR_UNUSED) == (0), "NLMSGERR_ATTR_UNUSED != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NLMSGERR_ATTR_UNUSED 0
#endif
#if defined(NLMSGERR_ATTR_MSG) || (defined(HAVE_DECL_NLMSGERR_ATTR_MSG) && HAVE_DECL_NLMSGERR_ATTR_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NLMSGERR_ATTR_MSG) == (1), "NLMSGERR_ATTR_MSG != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NLMSGERR_ATTR_MSG 1
#endif
#if defined(NLMSGERR_ATTR_OFFS) || (defined(HAVE_DECL_NLMSGERR_ATTR_OFFS) && HAVE_DECL_NLMSGERR_ATTR_OFFS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NLMSGERR_ATTR_OFFS) == (2), "NLMSGERR_ATTR_OFFS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NLMSGERR_ATTR_OFFS 2
#endif
#if defined(NLMSGERR_ATTR_COOKIE) || (defined(HAVE_DECL_NLMSGERR_ATTR_COOKIE) && HAVE_DECL_NLMSGERR_ATTR_COOKIE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NLMSGERR_ATTR_COOKIE) == (3), "NLMSGERR_ATTR_COOKIE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NLMSGERR_ATTR_COOKIE 3
#endif
#if defined(NLMSGERR_ATTR_POLICY) || (defined(HAVE_DECL_NLMSGERR_ATTR_POLICY) && HAVE_DECL_NLMSGERR_ATTR_POLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NLMSGERR_ATTR_POLICY) == (4), "NLMSGERR_ATTR_POLICY != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NLMSGERR_ATTR_POLICY 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nlmsgerr_attrs in mpers mode

# else

static const struct xlat_data nlmsgerr_attrs_xdata[] = {
 [NLMSGERR_ATTR_UNUSED] = XLAT(NLMSGERR_ATTR_UNUSED),
 #define XLAT_VAL_0 ((unsigned) (NLMSGERR_ATTR_UNUSED))
 #define XLAT_STR_0 STRINGIFY(NLMSGERR_ATTR_UNUSED)
 [NLMSGERR_ATTR_MSG] = XLAT(NLMSGERR_ATTR_MSG),
 #define XLAT_VAL_1 ((unsigned) (NLMSGERR_ATTR_MSG))
 #define XLAT_STR_1 STRINGIFY(NLMSGERR_ATTR_MSG)
 [NLMSGERR_ATTR_OFFS] = XLAT(NLMSGERR_ATTR_OFFS),
 #define XLAT_VAL_2 ((unsigned) (NLMSGERR_ATTR_OFFS))
 #define XLAT_STR_2 STRINGIFY(NLMSGERR_ATTR_OFFS)
 [NLMSGERR_ATTR_COOKIE] = XLAT(NLMSGERR_ATTR_COOKIE),
 #define XLAT_VAL_3 ((unsigned) (NLMSGERR_ATTR_COOKIE))
 #define XLAT_STR_3 STRINGIFY(NLMSGERR_ATTR_COOKIE)
 [NLMSGERR_ATTR_POLICY] = XLAT(NLMSGERR_ATTR_POLICY),
 #define XLAT_VAL_4 ((unsigned) (NLMSGERR_ATTR_POLICY))
 #define XLAT_STR_4 STRINGIFY(NLMSGERR_ATTR_POLICY)
};
static
const struct xlat nlmsgerr_attrs[1] = { {
 .data = nlmsgerr_attrs_xdata,
 .size = ARRAY_SIZE(nlmsgerr_attrs_xdata),
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
