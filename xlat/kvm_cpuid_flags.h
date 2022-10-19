/* Generated by ./xlat/gen.sh from ./xlat/kvm_cpuid_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#ifndef BIT
# define BIT(nr_)	(1UL << (nr_))
#endif
#if defined(KVM_CPUID_FLAG_SIGNIFCANT_INDEX) || (defined(HAVE_DECL_KVM_CPUID_FLAG_SIGNIFCANT_INDEX) && HAVE_DECL_KVM_CPUID_FLAG_SIGNIFCANT_INDEX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KVM_CPUID_FLAG_SIGNIFCANT_INDEX) == ((1 << 0)), "KVM_CPUID_FLAG_SIGNIFCANT_INDEX != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KVM_CPUID_FLAG_SIGNIFCANT_INDEX (1 << 0)
#endif
#if defined(KVM_CPUID_FLAG_STATEFUL_FUNC) || (defined(HAVE_DECL_KVM_CPUID_FLAG_STATEFUL_FUNC) && HAVE_DECL_KVM_CPUID_FLAG_STATEFUL_FUNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KVM_CPUID_FLAG_STATEFUL_FUNC) == ((1 << 1)), "KVM_CPUID_FLAG_STATEFUL_FUNC != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KVM_CPUID_FLAG_STATEFUL_FUNC (1 << 1)
#endif
#if defined(KVM_CPUID_FLAG_STATE_READ_NEXT) || (defined(HAVE_DECL_KVM_CPUID_FLAG_STATE_READ_NEXT) && HAVE_DECL_KVM_CPUID_FLAG_STATE_READ_NEXT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KVM_CPUID_FLAG_STATE_READ_NEXT) == ((1 << 2)), "KVM_CPUID_FLAG_STATE_READ_NEXT != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KVM_CPUID_FLAG_STATE_READ_NEXT (1 << 2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kvm_cpuid_flags in mpers mode

# else

static const struct xlat_data kvm_cpuid_flags_xdata[] = {
#ifndef BIT
/*
* Workaround a bug in kernel headers fixed by linux commit v4.7-rc1~32^2~42.
*/
# define BIT(nr_)	(1UL << (nr_))
#endif

 XLAT(KVM_CPUID_FLAG_SIGNIFCANT_INDEX),
 #define XLAT_VAL_0 ((unsigned) (KVM_CPUID_FLAG_SIGNIFCANT_INDEX))
 #define XLAT_STR_0 STRINGIFY(KVM_CPUID_FLAG_SIGNIFCANT_INDEX)
 XLAT(KVM_CPUID_FLAG_STATEFUL_FUNC),
 #define XLAT_VAL_1 ((unsigned) (KVM_CPUID_FLAG_STATEFUL_FUNC))
 #define XLAT_STR_1 STRINGIFY(KVM_CPUID_FLAG_STATEFUL_FUNC)
 XLAT(KVM_CPUID_FLAG_STATE_READ_NEXT),
 #define XLAT_VAL_2 ((unsigned) (KVM_CPUID_FLAG_STATE_READ_NEXT))
 #define XLAT_STR_2 STRINGIFY(KVM_CPUID_FLAG_STATE_READ_NEXT)
};
static
const struct xlat kvm_cpuid_flags[1] = { {
 .data = kvm_cpuid_flags_xdata,
 .size = ARRAY_SIZE(kvm_cpuid_flags_xdata),
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
