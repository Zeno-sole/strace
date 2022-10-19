/* Generated by ./xlat/gen.sh from ./xlat/bpf_map_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_MAP_TYPE_UNSPEC) || (defined(HAVE_DECL_BPF_MAP_TYPE_UNSPEC) && HAVE_DECL_BPF_MAP_TYPE_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_UNSPEC) == (0), "BPF_MAP_TYPE_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_UNSPEC 0
#endif
#if defined(BPF_MAP_TYPE_HASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_HASH) && HAVE_DECL_BPF_MAP_TYPE_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_HASH) == (1), "BPF_MAP_TYPE_HASH != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_HASH 1
#endif
#if defined(BPF_MAP_TYPE_ARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_ARRAY) && HAVE_DECL_BPF_MAP_TYPE_ARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_ARRAY) == (2), "BPF_MAP_TYPE_ARRAY != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_ARRAY 2
#endif
#if defined(BPF_MAP_TYPE_PROG_ARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_PROG_ARRAY) && HAVE_DECL_BPF_MAP_TYPE_PROG_ARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_PROG_ARRAY) == (3), "BPF_MAP_TYPE_PROG_ARRAY != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_PROG_ARRAY 3
#endif
#if defined(BPF_MAP_TYPE_PERF_EVENT_ARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_PERF_EVENT_ARRAY) && HAVE_DECL_BPF_MAP_TYPE_PERF_EVENT_ARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_PERF_EVENT_ARRAY) == (4), "BPF_MAP_TYPE_PERF_EVENT_ARRAY != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_PERF_EVENT_ARRAY 4
#endif
#if defined(BPF_MAP_TYPE_PERCPU_HASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_PERCPU_HASH) && HAVE_DECL_BPF_MAP_TYPE_PERCPU_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_PERCPU_HASH) == (5), "BPF_MAP_TYPE_PERCPU_HASH != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_PERCPU_HASH 5
#endif
#if defined(BPF_MAP_TYPE_PERCPU_ARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_PERCPU_ARRAY) && HAVE_DECL_BPF_MAP_TYPE_PERCPU_ARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_PERCPU_ARRAY) == (6), "BPF_MAP_TYPE_PERCPU_ARRAY != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_PERCPU_ARRAY 6
#endif
#if defined(BPF_MAP_TYPE_STACK_TRACE) || (defined(HAVE_DECL_BPF_MAP_TYPE_STACK_TRACE) && HAVE_DECL_BPF_MAP_TYPE_STACK_TRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_STACK_TRACE) == (7), "BPF_MAP_TYPE_STACK_TRACE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_STACK_TRACE 7
#endif
#if defined(BPF_MAP_TYPE_CGROUP_ARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_CGROUP_ARRAY) && HAVE_DECL_BPF_MAP_TYPE_CGROUP_ARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_CGROUP_ARRAY) == (8), "BPF_MAP_TYPE_CGROUP_ARRAY != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_CGROUP_ARRAY 8
#endif
#if defined(BPF_MAP_TYPE_LRU_HASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_LRU_HASH) && HAVE_DECL_BPF_MAP_TYPE_LRU_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_LRU_HASH) == (9), "BPF_MAP_TYPE_LRU_HASH != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_LRU_HASH 9
#endif
#if defined(BPF_MAP_TYPE_LRU_PERCPU_HASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_LRU_PERCPU_HASH) && HAVE_DECL_BPF_MAP_TYPE_LRU_PERCPU_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_LRU_PERCPU_HASH) == (10), "BPF_MAP_TYPE_LRU_PERCPU_HASH != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_LRU_PERCPU_HASH 10
#endif
#if defined(BPF_MAP_TYPE_LPM_TRIE) || (defined(HAVE_DECL_BPF_MAP_TYPE_LPM_TRIE) && HAVE_DECL_BPF_MAP_TYPE_LPM_TRIE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_LPM_TRIE) == (11), "BPF_MAP_TYPE_LPM_TRIE != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_LPM_TRIE 11
#endif
#if defined(BPF_MAP_TYPE_ARRAY_OF_MAPS) || (defined(HAVE_DECL_BPF_MAP_TYPE_ARRAY_OF_MAPS) && HAVE_DECL_BPF_MAP_TYPE_ARRAY_OF_MAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_ARRAY_OF_MAPS) == (12), "BPF_MAP_TYPE_ARRAY_OF_MAPS != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_ARRAY_OF_MAPS 12
#endif
#if defined(BPF_MAP_TYPE_HASH_OF_MAPS) || (defined(HAVE_DECL_BPF_MAP_TYPE_HASH_OF_MAPS) && HAVE_DECL_BPF_MAP_TYPE_HASH_OF_MAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_HASH_OF_MAPS) == (13), "BPF_MAP_TYPE_HASH_OF_MAPS != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_HASH_OF_MAPS 13
#endif
#if defined(BPF_MAP_TYPE_DEVMAP) || (defined(HAVE_DECL_BPF_MAP_TYPE_DEVMAP) && HAVE_DECL_BPF_MAP_TYPE_DEVMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_DEVMAP) == (14), "BPF_MAP_TYPE_DEVMAP != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_DEVMAP 14
#endif
#if defined(BPF_MAP_TYPE_SOCKMAP) || (defined(HAVE_DECL_BPF_MAP_TYPE_SOCKMAP) && HAVE_DECL_BPF_MAP_TYPE_SOCKMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_SOCKMAP) == (15), "BPF_MAP_TYPE_SOCKMAP != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_SOCKMAP 15
#endif
#if defined(BPF_MAP_TYPE_CPUMAP) || (defined(HAVE_DECL_BPF_MAP_TYPE_CPUMAP) && HAVE_DECL_BPF_MAP_TYPE_CPUMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_CPUMAP) == (16), "BPF_MAP_TYPE_CPUMAP != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_CPUMAP 16
#endif
#if defined(BPF_MAP_TYPE_XSKMAP) || (defined(HAVE_DECL_BPF_MAP_TYPE_XSKMAP) && HAVE_DECL_BPF_MAP_TYPE_XSKMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_XSKMAP) == (17), "BPF_MAP_TYPE_XSKMAP != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_XSKMAP 17
#endif
#if defined(BPF_MAP_TYPE_SOCKHASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_SOCKHASH) && HAVE_DECL_BPF_MAP_TYPE_SOCKHASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_SOCKHASH) == (18), "BPF_MAP_TYPE_SOCKHASH != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_SOCKHASH 18
#endif
#if defined(BPF_MAP_TYPE_CGROUP_STORAGE) || (defined(HAVE_DECL_BPF_MAP_TYPE_CGROUP_STORAGE) && HAVE_DECL_BPF_MAP_TYPE_CGROUP_STORAGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_CGROUP_STORAGE) == (19), "BPF_MAP_TYPE_CGROUP_STORAGE != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_CGROUP_STORAGE 19
#endif
#if defined(BPF_MAP_TYPE_REUSEPORT_SOCKARRAY) || (defined(HAVE_DECL_BPF_MAP_TYPE_REUSEPORT_SOCKARRAY) && HAVE_DECL_BPF_MAP_TYPE_REUSEPORT_SOCKARRAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_REUSEPORT_SOCKARRAY) == (20), "BPF_MAP_TYPE_REUSEPORT_SOCKARRAY != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_REUSEPORT_SOCKARRAY 20
#endif
#if defined(BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE) || (defined(HAVE_DECL_BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE) && HAVE_DECL_BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE) == (21), "BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE 21
#endif
#if defined(BPF_MAP_TYPE_QUEUE) || (defined(HAVE_DECL_BPF_MAP_TYPE_QUEUE) && HAVE_DECL_BPF_MAP_TYPE_QUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_QUEUE) == (22), "BPF_MAP_TYPE_QUEUE != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_QUEUE 22
#endif
#if defined(BPF_MAP_TYPE_STACK) || (defined(HAVE_DECL_BPF_MAP_TYPE_STACK) && HAVE_DECL_BPF_MAP_TYPE_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_STACK) == (23), "BPF_MAP_TYPE_STACK != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_STACK 23
#endif
#if defined(BPF_MAP_TYPE_SK_STORAGE) || (defined(HAVE_DECL_BPF_MAP_TYPE_SK_STORAGE) && HAVE_DECL_BPF_MAP_TYPE_SK_STORAGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_SK_STORAGE) == (24), "BPF_MAP_TYPE_SK_STORAGE != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_SK_STORAGE 24
#endif
#if defined(BPF_MAP_TYPE_DEVMAP_HASH) || (defined(HAVE_DECL_BPF_MAP_TYPE_DEVMAP_HASH) && HAVE_DECL_BPF_MAP_TYPE_DEVMAP_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_DEVMAP_HASH) == (25), "BPF_MAP_TYPE_DEVMAP_HASH != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_DEVMAP_HASH 25
#endif
#if defined(BPF_MAP_TYPE_STRUCT_OPS) || (defined(HAVE_DECL_BPF_MAP_TYPE_STRUCT_OPS) && HAVE_DECL_BPF_MAP_TYPE_STRUCT_OPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_STRUCT_OPS) == (26), "BPF_MAP_TYPE_STRUCT_OPS != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_STRUCT_OPS 26
#endif
#if defined(BPF_MAP_TYPE_RINGBUF) || (defined(HAVE_DECL_BPF_MAP_TYPE_RINGBUF) && HAVE_DECL_BPF_MAP_TYPE_RINGBUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_RINGBUF) == (27), "BPF_MAP_TYPE_RINGBUF != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_RINGBUF 27
#endif
#if defined(BPF_MAP_TYPE_INODE_STORAGE) || (defined(HAVE_DECL_BPF_MAP_TYPE_INODE_STORAGE) && HAVE_DECL_BPF_MAP_TYPE_INODE_STORAGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MAP_TYPE_INODE_STORAGE) == (28), "BPF_MAP_TYPE_INODE_STORAGE != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MAP_TYPE_INODE_STORAGE 28
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_map_types in mpers mode

# else

static const struct xlat_data bpf_map_types_xdata[] = {
 [BPF_MAP_TYPE_UNSPEC] = XLAT(BPF_MAP_TYPE_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (BPF_MAP_TYPE_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(BPF_MAP_TYPE_UNSPEC)
 [BPF_MAP_TYPE_HASH] = XLAT(BPF_MAP_TYPE_HASH),
 #define XLAT_VAL_1 ((unsigned) (BPF_MAP_TYPE_HASH))
 #define XLAT_STR_1 STRINGIFY(BPF_MAP_TYPE_HASH)
 [BPF_MAP_TYPE_ARRAY] = XLAT(BPF_MAP_TYPE_ARRAY),
 #define XLAT_VAL_2 ((unsigned) (BPF_MAP_TYPE_ARRAY))
 #define XLAT_STR_2 STRINGIFY(BPF_MAP_TYPE_ARRAY)
 [BPF_MAP_TYPE_PROG_ARRAY] = XLAT(BPF_MAP_TYPE_PROG_ARRAY),
 #define XLAT_VAL_3 ((unsigned) (BPF_MAP_TYPE_PROG_ARRAY))
 #define XLAT_STR_3 STRINGIFY(BPF_MAP_TYPE_PROG_ARRAY)
 [BPF_MAP_TYPE_PERF_EVENT_ARRAY] = XLAT(BPF_MAP_TYPE_PERF_EVENT_ARRAY),
 #define XLAT_VAL_4 ((unsigned) (BPF_MAP_TYPE_PERF_EVENT_ARRAY))
 #define XLAT_STR_4 STRINGIFY(BPF_MAP_TYPE_PERF_EVENT_ARRAY)
 [BPF_MAP_TYPE_PERCPU_HASH] = XLAT(BPF_MAP_TYPE_PERCPU_HASH),
 #define XLAT_VAL_5 ((unsigned) (BPF_MAP_TYPE_PERCPU_HASH))
 #define XLAT_STR_5 STRINGIFY(BPF_MAP_TYPE_PERCPU_HASH)
 [BPF_MAP_TYPE_PERCPU_ARRAY] = XLAT(BPF_MAP_TYPE_PERCPU_ARRAY),
 #define XLAT_VAL_6 ((unsigned) (BPF_MAP_TYPE_PERCPU_ARRAY))
 #define XLAT_STR_6 STRINGIFY(BPF_MAP_TYPE_PERCPU_ARRAY)
 [BPF_MAP_TYPE_STACK_TRACE] = XLAT(BPF_MAP_TYPE_STACK_TRACE),
 #define XLAT_VAL_7 ((unsigned) (BPF_MAP_TYPE_STACK_TRACE))
 #define XLAT_STR_7 STRINGIFY(BPF_MAP_TYPE_STACK_TRACE)
 [BPF_MAP_TYPE_CGROUP_ARRAY] = XLAT(BPF_MAP_TYPE_CGROUP_ARRAY),
 #define XLAT_VAL_8 ((unsigned) (BPF_MAP_TYPE_CGROUP_ARRAY))
 #define XLAT_STR_8 STRINGIFY(BPF_MAP_TYPE_CGROUP_ARRAY)
 [BPF_MAP_TYPE_LRU_HASH] = XLAT(BPF_MAP_TYPE_LRU_HASH),
 #define XLAT_VAL_9 ((unsigned) (BPF_MAP_TYPE_LRU_HASH))
 #define XLAT_STR_9 STRINGIFY(BPF_MAP_TYPE_LRU_HASH)
 [BPF_MAP_TYPE_LRU_PERCPU_HASH] = XLAT(BPF_MAP_TYPE_LRU_PERCPU_HASH),
 #define XLAT_VAL_10 ((unsigned) (BPF_MAP_TYPE_LRU_PERCPU_HASH))
 #define XLAT_STR_10 STRINGIFY(BPF_MAP_TYPE_LRU_PERCPU_HASH)
 [BPF_MAP_TYPE_LPM_TRIE] = XLAT(BPF_MAP_TYPE_LPM_TRIE),
 #define XLAT_VAL_11 ((unsigned) (BPF_MAP_TYPE_LPM_TRIE))
 #define XLAT_STR_11 STRINGIFY(BPF_MAP_TYPE_LPM_TRIE)
 [BPF_MAP_TYPE_ARRAY_OF_MAPS] = XLAT(BPF_MAP_TYPE_ARRAY_OF_MAPS),
 #define XLAT_VAL_12 ((unsigned) (BPF_MAP_TYPE_ARRAY_OF_MAPS))
 #define XLAT_STR_12 STRINGIFY(BPF_MAP_TYPE_ARRAY_OF_MAPS)
 [BPF_MAP_TYPE_HASH_OF_MAPS] = XLAT(BPF_MAP_TYPE_HASH_OF_MAPS),
 #define XLAT_VAL_13 ((unsigned) (BPF_MAP_TYPE_HASH_OF_MAPS))
 #define XLAT_STR_13 STRINGIFY(BPF_MAP_TYPE_HASH_OF_MAPS)
 [BPF_MAP_TYPE_DEVMAP] = XLAT(BPF_MAP_TYPE_DEVMAP),
 #define XLAT_VAL_14 ((unsigned) (BPF_MAP_TYPE_DEVMAP))
 #define XLAT_STR_14 STRINGIFY(BPF_MAP_TYPE_DEVMAP)
 [BPF_MAP_TYPE_SOCKMAP] = XLAT(BPF_MAP_TYPE_SOCKMAP),
 #define XLAT_VAL_15 ((unsigned) (BPF_MAP_TYPE_SOCKMAP))
 #define XLAT_STR_15 STRINGIFY(BPF_MAP_TYPE_SOCKMAP)
 [BPF_MAP_TYPE_CPUMAP] = XLAT(BPF_MAP_TYPE_CPUMAP),
 #define XLAT_VAL_16 ((unsigned) (BPF_MAP_TYPE_CPUMAP))
 #define XLAT_STR_16 STRINGIFY(BPF_MAP_TYPE_CPUMAP)
 [BPF_MAP_TYPE_XSKMAP] = XLAT(BPF_MAP_TYPE_XSKMAP),
 #define XLAT_VAL_17 ((unsigned) (BPF_MAP_TYPE_XSKMAP))
 #define XLAT_STR_17 STRINGIFY(BPF_MAP_TYPE_XSKMAP)
 [BPF_MAP_TYPE_SOCKHASH] = XLAT(BPF_MAP_TYPE_SOCKHASH),
 #define XLAT_VAL_18 ((unsigned) (BPF_MAP_TYPE_SOCKHASH))
 #define XLAT_STR_18 STRINGIFY(BPF_MAP_TYPE_SOCKHASH)
 [BPF_MAP_TYPE_CGROUP_STORAGE] = XLAT(BPF_MAP_TYPE_CGROUP_STORAGE),
 #define XLAT_VAL_19 ((unsigned) (BPF_MAP_TYPE_CGROUP_STORAGE))
 #define XLAT_STR_19 STRINGIFY(BPF_MAP_TYPE_CGROUP_STORAGE)
 [BPF_MAP_TYPE_REUSEPORT_SOCKARRAY] = XLAT(BPF_MAP_TYPE_REUSEPORT_SOCKARRAY),
 #define XLAT_VAL_20 ((unsigned) (BPF_MAP_TYPE_REUSEPORT_SOCKARRAY))
 #define XLAT_STR_20 STRINGIFY(BPF_MAP_TYPE_REUSEPORT_SOCKARRAY)
 [BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE] = XLAT(BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE),
 #define XLAT_VAL_21 ((unsigned) (BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE))
 #define XLAT_STR_21 STRINGIFY(BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE)
 [BPF_MAP_TYPE_QUEUE] = XLAT(BPF_MAP_TYPE_QUEUE),
 #define XLAT_VAL_22 ((unsigned) (BPF_MAP_TYPE_QUEUE))
 #define XLAT_STR_22 STRINGIFY(BPF_MAP_TYPE_QUEUE)
 [BPF_MAP_TYPE_STACK] = XLAT(BPF_MAP_TYPE_STACK),
 #define XLAT_VAL_23 ((unsigned) (BPF_MAP_TYPE_STACK))
 #define XLAT_STR_23 STRINGIFY(BPF_MAP_TYPE_STACK)
 [BPF_MAP_TYPE_SK_STORAGE] = XLAT(BPF_MAP_TYPE_SK_STORAGE),
 #define XLAT_VAL_24 ((unsigned) (BPF_MAP_TYPE_SK_STORAGE))
 #define XLAT_STR_24 STRINGIFY(BPF_MAP_TYPE_SK_STORAGE)
 [BPF_MAP_TYPE_DEVMAP_HASH] = XLAT(BPF_MAP_TYPE_DEVMAP_HASH),
 #define XLAT_VAL_25 ((unsigned) (BPF_MAP_TYPE_DEVMAP_HASH))
 #define XLAT_STR_25 STRINGIFY(BPF_MAP_TYPE_DEVMAP_HASH)
 [BPF_MAP_TYPE_STRUCT_OPS] = XLAT(BPF_MAP_TYPE_STRUCT_OPS),
 #define XLAT_VAL_26 ((unsigned) (BPF_MAP_TYPE_STRUCT_OPS))
 #define XLAT_STR_26 STRINGIFY(BPF_MAP_TYPE_STRUCT_OPS)
 [BPF_MAP_TYPE_RINGBUF] = XLAT(BPF_MAP_TYPE_RINGBUF),
 #define XLAT_VAL_27 ((unsigned) (BPF_MAP_TYPE_RINGBUF))
 #define XLAT_STR_27 STRINGIFY(BPF_MAP_TYPE_RINGBUF)
 [BPF_MAP_TYPE_INODE_STORAGE] = XLAT(BPF_MAP_TYPE_INODE_STORAGE),
 #define XLAT_VAL_28 ((unsigned) (BPF_MAP_TYPE_INODE_STORAGE))
 #define XLAT_STR_28 STRINGIFY(BPF_MAP_TYPE_INODE_STORAGE)
};
static
const struct xlat bpf_map_types[1] = { {
 .data = bpf_map_types_xdata,
 .size = ARRAY_SIZE(bpf_map_types_xdata),
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
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
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
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
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
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
