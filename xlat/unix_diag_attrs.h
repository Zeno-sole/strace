/* Generated by ./xlat/gen.sh from ./xlat/unix_diag_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat unix_diag_attrs in mpers mode

# else

static const struct xlat_data unix_diag_attrs_xdata[] = {
 [UNIX_DIAG_NAME] = XLAT(UNIX_DIAG_NAME),
 #define XLAT_VAL_0 ((unsigned) (UNIX_DIAG_NAME))
 #define XLAT_STR_0 STRINGIFY(UNIX_DIAG_NAME)
 [UNIX_DIAG_VFS] = XLAT(UNIX_DIAG_VFS),
 #define XLAT_VAL_1 ((unsigned) (UNIX_DIAG_VFS))
 #define XLAT_STR_1 STRINGIFY(UNIX_DIAG_VFS)
 [UNIX_DIAG_PEER] = XLAT(UNIX_DIAG_PEER),
 #define XLAT_VAL_2 ((unsigned) (UNIX_DIAG_PEER))
 #define XLAT_STR_2 STRINGIFY(UNIX_DIAG_PEER)
 [UNIX_DIAG_ICONS] = XLAT(UNIX_DIAG_ICONS),
 #define XLAT_VAL_3 ((unsigned) (UNIX_DIAG_ICONS))
 #define XLAT_STR_3 STRINGIFY(UNIX_DIAG_ICONS)
 [UNIX_DIAG_RQLEN] = XLAT(UNIX_DIAG_RQLEN),
 #define XLAT_VAL_4 ((unsigned) (UNIX_DIAG_RQLEN))
 #define XLAT_STR_4 STRINGIFY(UNIX_DIAG_RQLEN)
 [UNIX_DIAG_MEMINFO] = XLAT(UNIX_DIAG_MEMINFO),
 #define XLAT_VAL_5 ((unsigned) (UNIX_DIAG_MEMINFO))
 #define XLAT_STR_5 STRINGIFY(UNIX_DIAG_MEMINFO)
 [UNIX_DIAG_SHUTDOWN] = XLAT(UNIX_DIAG_SHUTDOWN),
 #define XLAT_VAL_6 ((unsigned) (UNIX_DIAG_SHUTDOWN))
 #define XLAT_STR_6 STRINGIFY(UNIX_DIAG_SHUTDOWN)
 [UNIX_DIAG_UID] = XLAT(UNIX_DIAG_UID),
 #define XLAT_VAL_7 ((unsigned) (UNIX_DIAG_UID))
 #define XLAT_STR_7 STRINGIFY(UNIX_DIAG_UID)
};
static
const struct xlat unix_diag_attrs[1] = { {
 .data = unix_diag_attrs_xdata,
 .size = ARRAY_SIZE(unix_diag_attrs_xdata),
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
