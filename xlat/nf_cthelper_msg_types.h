/* Generated by ./xlat/gen.sh from ./xlat/nf_cthelper_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFNL_MSG_CTHELPER_NEW) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_NEW) && HAVE_DECL_NFNL_MSG_CTHELPER_NEW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFNL_MSG_CTHELPER_NEW) == (0), "NFNL_MSG_CTHELPER_NEW != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFNL_MSG_CTHELPER_NEW 0
#endif
#if defined(NFNL_MSG_CTHELPER_GET) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_GET) && HAVE_DECL_NFNL_MSG_CTHELPER_GET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFNL_MSG_CTHELPER_GET) == (1), "NFNL_MSG_CTHELPER_GET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFNL_MSG_CTHELPER_GET 1
#endif
#if defined(NFNL_MSG_CTHELPER_DEL) || (defined(HAVE_DECL_NFNL_MSG_CTHELPER_DEL) && HAVE_DECL_NFNL_MSG_CTHELPER_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFNL_MSG_CTHELPER_DEL) == (2), "NFNL_MSG_CTHELPER_DEL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFNL_MSG_CTHELPER_DEL 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_cthelper_msg_types in mpers mode

# else

static const struct xlat_data nf_cthelper_msg_types_xdata[] = {
 [NFNL_MSG_CTHELPER_NEW] = XLAT(NFNL_MSG_CTHELPER_NEW),
 #define XLAT_VAL_0 ((unsigned) (NFNL_MSG_CTHELPER_NEW))
 #define XLAT_STR_0 STRINGIFY(NFNL_MSG_CTHELPER_NEW)
 [NFNL_MSG_CTHELPER_GET] = XLAT(NFNL_MSG_CTHELPER_GET),
 #define XLAT_VAL_1 ((unsigned) (NFNL_MSG_CTHELPER_GET))
 #define XLAT_STR_1 STRINGIFY(NFNL_MSG_CTHELPER_GET)
 [NFNL_MSG_CTHELPER_DEL] = XLAT(NFNL_MSG_CTHELPER_DEL),
 #define XLAT_VAL_2 ((unsigned) (NFNL_MSG_CTHELPER_DEL))
 #define XLAT_STR_2 STRINGIFY(NFNL_MSG_CTHELPER_DEL)
};
static
const struct xlat nf_cthelper_msg_types[1] = { {
 .data = nf_cthelper_msg_types_xdata,
 .size = ARRAY_SIZE(nf_cthelper_msg_types_xdata),
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

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
