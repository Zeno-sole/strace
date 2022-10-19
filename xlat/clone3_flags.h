/* Generated by ./xlat/gen.sh from ./xlat/clone3_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CLONE_NEWTIME) || (defined(HAVE_DECL_CLONE_NEWTIME) && HAVE_DECL_CLONE_NEWTIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWTIME) == (0x80), "CLONE_NEWTIME != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWTIME 0x80
#endif
#if defined(CLONE_CLEAR_SIGHAND) || (defined(HAVE_DECL_CLONE_CLEAR_SIGHAND) && HAVE_DECL_CLONE_CLEAR_SIGHAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_CLEAR_SIGHAND) == (0x100000000ULL), "CLONE_CLEAR_SIGHAND != 0x100000000ULL");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_CLEAR_SIGHAND 0x100000000ULL
#endif
#if defined(CLONE_INTO_CGROUP) || (defined(HAVE_DECL_CLONE_INTO_CGROUP) && HAVE_DECL_CLONE_INTO_CGROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_INTO_CGROUP) == (0x200000000ULL), "CLONE_INTO_CGROUP != 0x200000000ULL");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_INTO_CGROUP 0x200000000ULL
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat clone3_flags in mpers mode

# else

static const struct xlat_data clone3_flags_xdata[] = {
 XLAT_TYPE(uint64_t, CLONE_NEWTIME),
 #define XLAT_VAL_0 ((uint64_t) (CLONE_NEWTIME))
 #define XLAT_STR_0 STRINGIFY(CLONE_NEWTIME)
 XLAT_TYPE(uint64_t, CLONE_CLEAR_SIGHAND),
 #define XLAT_VAL_1 ((uint64_t) (CLONE_CLEAR_SIGHAND))
 #define XLAT_STR_1 STRINGIFY(CLONE_CLEAR_SIGHAND)
 XLAT_TYPE(uint64_t, CLONE_INTO_CGROUP),
 #define XLAT_VAL_2 ((uint64_t) (CLONE_INTO_CGROUP))
 #define XLAT_STR_2 STRINGIFY(CLONE_INTO_CGROUP)
};
static
const struct xlat clone3_flags[1] = { {
 .data = clone3_flags_xdata,
 .size = ARRAY_SIZE(clone3_flags_xdata),
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
