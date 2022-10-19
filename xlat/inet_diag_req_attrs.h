/* Generated by ./xlat/gen.sh from ./xlat/inet_diag_req_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat inet_diag_req_attrs in mpers mode

# else

static const struct xlat_data inet_diag_req_attrs_xdata[] = {
 [INET_DIAG_REQ_NONE] = XLAT(INET_DIAG_REQ_NONE),
 #define XLAT_VAL_0 ((unsigned) (INET_DIAG_REQ_NONE))
 #define XLAT_STR_0 STRINGIFY(INET_DIAG_REQ_NONE)
 [INET_DIAG_REQ_BYTECODE] = XLAT(INET_DIAG_REQ_BYTECODE),
 #define XLAT_VAL_1 ((unsigned) (INET_DIAG_REQ_BYTECODE))
 #define XLAT_STR_1 STRINGIFY(INET_DIAG_REQ_BYTECODE)
 [INET_DIAG_REQ_SK_BPF_STORAGES] = XLAT(INET_DIAG_REQ_SK_BPF_STORAGES),
 #define XLAT_VAL_2 ((unsigned) (INET_DIAG_REQ_SK_BPF_STORAGES))
 #define XLAT_STR_2 STRINGIFY(INET_DIAG_REQ_SK_BPF_STORAGES)
 [INET_DIAG_REQ_PROTOCOL] = XLAT(INET_DIAG_REQ_PROTOCOL),
 #define XLAT_VAL_3 ((unsigned) (INET_DIAG_REQ_PROTOCOL))
 #define XLAT_STR_3 STRINGIFY(INET_DIAG_REQ_PROTOCOL)
};
static
const struct xlat inet_diag_req_attrs[1] = { {
 .data = inet_diag_req_attrs_xdata,
 .size = ARRAY_SIZE(inet_diag_req_attrs_xdata),
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