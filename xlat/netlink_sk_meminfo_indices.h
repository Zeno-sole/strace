/* Generated by ./xlat/gen.sh from ./xlat/netlink_sk_meminfo_indices.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SK_MEMINFO_RMEM_ALLOC) || (defined(HAVE_DECL_SK_MEMINFO_RMEM_ALLOC) && HAVE_DECL_SK_MEMINFO_RMEM_ALLOC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_RMEM_ALLOC) == (0), "SK_MEMINFO_RMEM_ALLOC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_RMEM_ALLOC 0
#endif
#if defined(SK_MEMINFO_RCVBUF) || (defined(HAVE_DECL_SK_MEMINFO_RCVBUF) && HAVE_DECL_SK_MEMINFO_RCVBUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_RCVBUF) == (1), "SK_MEMINFO_RCVBUF != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_RCVBUF 1
#endif
#if defined(SK_MEMINFO_WMEM_ALLOC) || (defined(HAVE_DECL_SK_MEMINFO_WMEM_ALLOC) && HAVE_DECL_SK_MEMINFO_WMEM_ALLOC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_WMEM_ALLOC) == (2), "SK_MEMINFO_WMEM_ALLOC != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_WMEM_ALLOC 2
#endif
#if defined(SK_MEMINFO_SNDBUF) || (defined(HAVE_DECL_SK_MEMINFO_SNDBUF) && HAVE_DECL_SK_MEMINFO_SNDBUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_SNDBUF) == (3), "SK_MEMINFO_SNDBUF != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_SNDBUF 3
#endif
#if defined(SK_MEMINFO_FWD_ALLOC) || (defined(HAVE_DECL_SK_MEMINFO_FWD_ALLOC) && HAVE_DECL_SK_MEMINFO_FWD_ALLOC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_FWD_ALLOC) == (4), "SK_MEMINFO_FWD_ALLOC != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_FWD_ALLOC 4
#endif
#if defined(SK_MEMINFO_WMEM_QUEUED) || (defined(HAVE_DECL_SK_MEMINFO_WMEM_QUEUED) && HAVE_DECL_SK_MEMINFO_WMEM_QUEUED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_WMEM_QUEUED) == (5), "SK_MEMINFO_WMEM_QUEUED != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_WMEM_QUEUED 5
#endif
#if defined(SK_MEMINFO_OPTMEM) || (defined(HAVE_DECL_SK_MEMINFO_OPTMEM) && HAVE_DECL_SK_MEMINFO_OPTMEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_OPTMEM) == (6), "SK_MEMINFO_OPTMEM != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_OPTMEM 6
#endif
#if defined(SK_MEMINFO_BACKLOG) || (defined(HAVE_DECL_SK_MEMINFO_BACKLOG) && HAVE_DECL_SK_MEMINFO_BACKLOG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_BACKLOG) == (7), "SK_MEMINFO_BACKLOG != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_BACKLOG 7
#endif
#if defined(SK_MEMINFO_DROPS) || (defined(HAVE_DECL_SK_MEMINFO_DROPS) && HAVE_DECL_SK_MEMINFO_DROPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SK_MEMINFO_DROPS) == (8), "SK_MEMINFO_DROPS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SK_MEMINFO_DROPS 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_sk_meminfo_indices in mpers mode

# else

static const struct xlat_data netlink_sk_meminfo_indices_xdata[] = {
 [SK_MEMINFO_RMEM_ALLOC] = XLAT(SK_MEMINFO_RMEM_ALLOC),
 #define XLAT_VAL_0 ((unsigned) (SK_MEMINFO_RMEM_ALLOC))
 #define XLAT_STR_0 STRINGIFY(SK_MEMINFO_RMEM_ALLOC)
 [SK_MEMINFO_RCVBUF] = XLAT(SK_MEMINFO_RCVBUF),
 #define XLAT_VAL_1 ((unsigned) (SK_MEMINFO_RCVBUF))
 #define XLAT_STR_1 STRINGIFY(SK_MEMINFO_RCVBUF)
 [SK_MEMINFO_WMEM_ALLOC] = XLAT(SK_MEMINFO_WMEM_ALLOC),
 #define XLAT_VAL_2 ((unsigned) (SK_MEMINFO_WMEM_ALLOC))
 #define XLAT_STR_2 STRINGIFY(SK_MEMINFO_WMEM_ALLOC)
 [SK_MEMINFO_SNDBUF] = XLAT(SK_MEMINFO_SNDBUF),
 #define XLAT_VAL_3 ((unsigned) (SK_MEMINFO_SNDBUF))
 #define XLAT_STR_3 STRINGIFY(SK_MEMINFO_SNDBUF)
 [SK_MEMINFO_FWD_ALLOC] = XLAT(SK_MEMINFO_FWD_ALLOC),
 #define XLAT_VAL_4 ((unsigned) (SK_MEMINFO_FWD_ALLOC))
 #define XLAT_STR_4 STRINGIFY(SK_MEMINFO_FWD_ALLOC)
 [SK_MEMINFO_WMEM_QUEUED] = XLAT(SK_MEMINFO_WMEM_QUEUED),
 #define XLAT_VAL_5 ((unsigned) (SK_MEMINFO_WMEM_QUEUED))
 #define XLAT_STR_5 STRINGIFY(SK_MEMINFO_WMEM_QUEUED)
 [SK_MEMINFO_OPTMEM] = XLAT(SK_MEMINFO_OPTMEM),
 #define XLAT_VAL_6 ((unsigned) (SK_MEMINFO_OPTMEM))
 #define XLAT_STR_6 STRINGIFY(SK_MEMINFO_OPTMEM)
 [SK_MEMINFO_BACKLOG] = XLAT(SK_MEMINFO_BACKLOG),
 #define XLAT_VAL_7 ((unsigned) (SK_MEMINFO_BACKLOG))
 #define XLAT_STR_7 STRINGIFY(SK_MEMINFO_BACKLOG)
 [SK_MEMINFO_DROPS] = XLAT(SK_MEMINFO_DROPS),
 #define XLAT_VAL_8 ((unsigned) (SK_MEMINFO_DROPS))
 #define XLAT_STR_8 STRINGIFY(SK_MEMINFO_DROPS)
};
static
const struct xlat netlink_sk_meminfo_indices[1] = { {
 .data = netlink_sk_meminfo_indices_xdata,
 .size = ARRAY_SIZE(netlink_sk_meminfo_indices_xdata),
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
