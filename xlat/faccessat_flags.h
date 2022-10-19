/* Generated by ./xlat/gen.sh from ./xlat/faccessat_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AT_SYMLINK_NOFOLLOW) || (defined(HAVE_DECL_AT_SYMLINK_NOFOLLOW) && HAVE_DECL_AT_SYMLINK_NOFOLLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_SYMLINK_NOFOLLOW) == (0x100), "AT_SYMLINK_NOFOLLOW != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_SYMLINK_NOFOLLOW 0x100
#endif
#if defined(AT_EACCESS) || (defined(HAVE_DECL_AT_EACCESS) && HAVE_DECL_AT_EACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_EACCESS) == (0x200), "AT_EACCESS != 0x200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_EACCESS 0x200
#endif
#if defined(AT_EMPTY_PATH) || (defined(HAVE_DECL_AT_EMPTY_PATH) && HAVE_DECL_AT_EMPTY_PATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AT_EMPTY_PATH) == (0x1000), "AT_EMPTY_PATH != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AT_EMPTY_PATH 0x1000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat faccessat_flags in mpers mode

# else

static const struct xlat_data faccessat_flags_xdata[] = {
 XLAT(AT_SYMLINK_NOFOLLOW),
 #define XLAT_VAL_0 ((unsigned) (AT_SYMLINK_NOFOLLOW))
 #define XLAT_STR_0 STRINGIFY(AT_SYMLINK_NOFOLLOW)
 XLAT(AT_EACCESS),
 #define XLAT_VAL_1 ((unsigned) (AT_EACCESS))
 #define XLAT_STR_1 STRINGIFY(AT_EACCESS)
 XLAT(AT_EMPTY_PATH),
 #define XLAT_VAL_2 ((unsigned) (AT_EMPTY_PATH))
 #define XLAT_STR_2 STRINGIFY(AT_EMPTY_PATH)
};
static
const struct xlat faccessat_flags[1] = { {
 .data = faccessat_flags_xdata,
 .size = ARRAY_SIZE(faccessat_flags_xdata),
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

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
