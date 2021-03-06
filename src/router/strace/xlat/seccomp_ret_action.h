/* Generated by ./xlat/gen.sh from ./xlat/seccomp_ret_action.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SECCOMP_RET_KILL_PROCESS) || (defined(HAVE_DECL_SECCOMP_RET_KILL_PROCESS) && HAVE_DECL_SECCOMP_RET_KILL_PROCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_KILL_PROCESS) == (0x80000000U), "SECCOMP_RET_KILL_PROCESS != 0x80000000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_KILL_PROCESS 0x80000000U
#endif
#if defined(SECCOMP_RET_KILL_THREAD) || (defined(HAVE_DECL_SECCOMP_RET_KILL_THREAD) && HAVE_DECL_SECCOMP_RET_KILL_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_KILL_THREAD) == (0), "SECCOMP_RET_KILL_THREAD != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_KILL_THREAD 0
#endif
#if defined(SECCOMP_RET_TRAP) || (defined(HAVE_DECL_SECCOMP_RET_TRAP) && HAVE_DECL_SECCOMP_RET_TRAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_TRAP) == (0x00030000U), "SECCOMP_RET_TRAP != 0x00030000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_TRAP 0x00030000U
#endif
#if defined(SECCOMP_RET_ERRNO) || (defined(HAVE_DECL_SECCOMP_RET_ERRNO) && HAVE_DECL_SECCOMP_RET_ERRNO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_ERRNO) == (0x00050000U), "SECCOMP_RET_ERRNO != 0x00050000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_ERRNO 0x00050000U
#endif
#if defined(SECCOMP_RET_USER_NOTIF) || (defined(HAVE_DECL_SECCOMP_RET_USER_NOTIF) && HAVE_DECL_SECCOMP_RET_USER_NOTIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_USER_NOTIF) == (0x7fc00000U), "SECCOMP_RET_USER_NOTIF != 0x7fc00000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_USER_NOTIF 0x7fc00000U
#endif
#if defined(SECCOMP_RET_TRACE) || (defined(HAVE_DECL_SECCOMP_RET_TRACE) && HAVE_DECL_SECCOMP_RET_TRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_TRACE) == (0x7ff00000U), "SECCOMP_RET_TRACE != 0x7ff00000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_TRACE 0x7ff00000U
#endif
#if defined(SECCOMP_RET_LOG) || (defined(HAVE_DECL_SECCOMP_RET_LOG) && HAVE_DECL_SECCOMP_RET_LOG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_LOG) == (0x7ffc0000U), "SECCOMP_RET_LOG != 0x7ffc0000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_LOG 0x7ffc0000U
#endif
#if defined(SECCOMP_RET_ALLOW) || (defined(HAVE_DECL_SECCOMP_RET_ALLOW) && HAVE_DECL_SECCOMP_RET_ALLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SECCOMP_RET_ALLOW) == (0x7fff0000U), "SECCOMP_RET_ALLOW != 0x7fff0000U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SECCOMP_RET_ALLOW 0x7fff0000U
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data seccomp_ret_action_xdata[] = {
 XLAT(SECCOMP_RET_KILL_PROCESS),
 #define XLAT_VAL_0 ((unsigned) (SECCOMP_RET_KILL_PROCESS))
 #define XLAT_STR_0 STRINGIFY(SECCOMP_RET_KILL_PROCESS)
 XLAT(SECCOMP_RET_KILL_THREAD),
 #define XLAT_VAL_1 ((unsigned) (SECCOMP_RET_KILL_THREAD))
 #define XLAT_STR_1 STRINGIFY(SECCOMP_RET_KILL_THREAD)
 XLAT(SECCOMP_RET_TRAP),
 #define XLAT_VAL_2 ((unsigned) (SECCOMP_RET_TRAP))
 #define XLAT_STR_2 STRINGIFY(SECCOMP_RET_TRAP)
 XLAT(SECCOMP_RET_ERRNO),
 #define XLAT_VAL_3 ((unsigned) (SECCOMP_RET_ERRNO))
 #define XLAT_STR_3 STRINGIFY(SECCOMP_RET_ERRNO)
 XLAT(SECCOMP_RET_USER_NOTIF),
 #define XLAT_VAL_4 ((unsigned) (SECCOMP_RET_USER_NOTIF))
 #define XLAT_STR_4 STRINGIFY(SECCOMP_RET_USER_NOTIF)
 XLAT(SECCOMP_RET_TRACE),
 #define XLAT_VAL_5 ((unsigned) (SECCOMP_RET_TRACE))
 #define XLAT_STR_5 STRINGIFY(SECCOMP_RET_TRACE)
 XLAT(SECCOMP_RET_LOG),
 #define XLAT_VAL_6 ((unsigned) (SECCOMP_RET_LOG))
 #define XLAT_STR_6 STRINGIFY(SECCOMP_RET_LOG)
 XLAT(SECCOMP_RET_ALLOW),
 #define XLAT_VAL_7 ((unsigned) (SECCOMP_RET_ALLOW))
 #define XLAT_STR_7 STRINGIFY(SECCOMP_RET_ALLOW)
};
const struct xlat seccomp_ret_action[1] = { {
 .data = seccomp_ret_action_xdata,
 .size = ARRAY_SIZE(seccomp_ret_action_xdata),
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
