/* Generated by ./xlat/gen.sh from ./xlat/fsconfig_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FSCONFIG_SET_FLAG) || (defined(HAVE_DECL_FSCONFIG_SET_FLAG) && HAVE_DECL_FSCONFIG_SET_FLAG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_FLAG) == (0), "FSCONFIG_SET_FLAG != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_FLAG 0
#endif
#if defined(FSCONFIG_SET_STRING) || (defined(HAVE_DECL_FSCONFIG_SET_STRING) && HAVE_DECL_FSCONFIG_SET_STRING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_STRING) == (1), "FSCONFIG_SET_STRING != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_STRING 1
#endif
#if defined(FSCONFIG_SET_BINARY) || (defined(HAVE_DECL_FSCONFIG_SET_BINARY) && HAVE_DECL_FSCONFIG_SET_BINARY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_BINARY) == (2), "FSCONFIG_SET_BINARY != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_BINARY 2
#endif
#if defined(FSCONFIG_SET_PATH) || (defined(HAVE_DECL_FSCONFIG_SET_PATH) && HAVE_DECL_FSCONFIG_SET_PATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_PATH) == (3), "FSCONFIG_SET_PATH != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_PATH 3
#endif
#if defined(FSCONFIG_SET_PATH_EMPTY) || (defined(HAVE_DECL_FSCONFIG_SET_PATH_EMPTY) && HAVE_DECL_FSCONFIG_SET_PATH_EMPTY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_PATH_EMPTY) == (4), "FSCONFIG_SET_PATH_EMPTY != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_PATH_EMPTY 4
#endif
#if defined(FSCONFIG_SET_FD) || (defined(HAVE_DECL_FSCONFIG_SET_FD) && HAVE_DECL_FSCONFIG_SET_FD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_SET_FD) == (5), "FSCONFIG_SET_FD != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_SET_FD 5
#endif
#if defined(FSCONFIG_CMD_CREATE) || (defined(HAVE_DECL_FSCONFIG_CMD_CREATE) && HAVE_DECL_FSCONFIG_CMD_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_CMD_CREATE) == (6), "FSCONFIG_CMD_CREATE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_CMD_CREATE 6
#endif
#if defined(FSCONFIG_CMD_RECONFIGURE) || (defined(HAVE_DECL_FSCONFIG_CMD_RECONFIGURE) && HAVE_DECL_FSCONFIG_CMD_RECONFIGURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSCONFIG_CMD_RECONFIGURE) == (7), "FSCONFIG_CMD_RECONFIGURE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSCONFIG_CMD_RECONFIGURE 7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fsconfig_cmds in mpers mode

# else

static const struct xlat_data fsconfig_cmds_xdata[] = {
 [FSCONFIG_SET_FLAG] = XLAT(FSCONFIG_SET_FLAG),
 #define XLAT_VAL_0 ((unsigned) (FSCONFIG_SET_FLAG))
 #define XLAT_STR_0 STRINGIFY(FSCONFIG_SET_FLAG)
 [FSCONFIG_SET_STRING] = XLAT(FSCONFIG_SET_STRING),
 #define XLAT_VAL_1 ((unsigned) (FSCONFIG_SET_STRING))
 #define XLAT_STR_1 STRINGIFY(FSCONFIG_SET_STRING)
 [FSCONFIG_SET_BINARY] = XLAT(FSCONFIG_SET_BINARY),
 #define XLAT_VAL_2 ((unsigned) (FSCONFIG_SET_BINARY))
 #define XLAT_STR_2 STRINGIFY(FSCONFIG_SET_BINARY)
 [FSCONFIG_SET_PATH] = XLAT(FSCONFIG_SET_PATH),
 #define XLAT_VAL_3 ((unsigned) (FSCONFIG_SET_PATH))
 #define XLAT_STR_3 STRINGIFY(FSCONFIG_SET_PATH)
 [FSCONFIG_SET_PATH_EMPTY] = XLAT(FSCONFIG_SET_PATH_EMPTY),
 #define XLAT_VAL_4 ((unsigned) (FSCONFIG_SET_PATH_EMPTY))
 #define XLAT_STR_4 STRINGIFY(FSCONFIG_SET_PATH_EMPTY)
 [FSCONFIG_SET_FD] = XLAT(FSCONFIG_SET_FD),
 #define XLAT_VAL_5 ((unsigned) (FSCONFIG_SET_FD))
 #define XLAT_STR_5 STRINGIFY(FSCONFIG_SET_FD)
 [FSCONFIG_CMD_CREATE] = XLAT(FSCONFIG_CMD_CREATE),
 #define XLAT_VAL_6 ((unsigned) (FSCONFIG_CMD_CREATE))
 #define XLAT_STR_6 STRINGIFY(FSCONFIG_CMD_CREATE)
 [FSCONFIG_CMD_RECONFIGURE] = XLAT(FSCONFIG_CMD_RECONFIGURE),
 #define XLAT_VAL_7 ((unsigned) (FSCONFIG_CMD_RECONFIGURE))
 #define XLAT_STR_7 STRINGIFY(FSCONFIG_CMD_RECONFIGURE)
};
static
const struct xlat fsconfig_cmds[1] = { {
 .data = fsconfig_cmds_xdata,
 .size = ARRAY_SIZE(fsconfig_cmds_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
