/* Generated by ./types/gen.sh from ./types/tee.h; do not edit. */
#include "defs.h"
#include "static_assert.h"
#include "types/tee.h"

#ifdef HAVE_STRUCT_TEE_IOCTL_BUF_DATA
# ifdef HAVE_STRUCT_TEE_IOCTL_BUF_DATA_BUF_LEN
static_assert(sizeof(struct tee_ioctl_buf_data) == sizeof(struct_tee_ioctl_buf_data),
      "struct tee_ioctl_buf_data size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_buf_data) <= offsetof(struct_tee_ioctl_buf_data, buf_len),
"struct tee_ioctl_buf_data size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_BUF_DATA_BUF_LEN */
#endif /* HAVE_STRUCT_TEE_IOCTL_BUF_DATA */

#ifdef HAVE_STRUCT_TEE_IOCTL_CANCEL_ARG
# ifdef HAVE_STRUCT_TEE_IOCTL_CANCEL_ARG_SESSION
static_assert(sizeof(struct tee_ioctl_cancel_arg) == sizeof(struct_tee_ioctl_cancel_arg),
      "struct tee_ioctl_cancel_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_cancel_arg) <= offsetof(struct_tee_ioctl_cancel_arg, session),
"struct tee_ioctl_cancel_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_CANCEL_ARG_SESSION */
#endif /* HAVE_STRUCT_TEE_IOCTL_CANCEL_ARG */

#ifdef HAVE_STRUCT_TEE_IOCTL_CLOSE_SESSION_ARG
# ifdef HAVE_STRUCT_TEE_IOCTL_CLOSE_SESSION_ARG_SESSION
static_assert(sizeof(struct tee_ioctl_close_session_arg) == sizeof(struct_tee_ioctl_close_session_arg),
      "struct tee_ioctl_close_session_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_close_session_arg) <= offsetof(struct_tee_ioctl_close_session_arg, session),
"struct tee_ioctl_close_session_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_CLOSE_SESSION_ARG_SESSION */
#endif /* HAVE_STRUCT_TEE_IOCTL_CLOSE_SESSION_ARG */

#ifdef HAVE_STRUCT_TEE_IOCTL_SHM_ALLOC_DATA
# ifdef HAVE_STRUCT_TEE_IOCTL_SHM_ALLOC_DATA_ID
static_assert(sizeof(struct tee_ioctl_shm_alloc_data) == sizeof(struct_tee_ioctl_shm_alloc_data),
      "struct tee_ioctl_shm_alloc_data size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_shm_alloc_data) <= offsetof(struct_tee_ioctl_shm_alloc_data, id),
"struct tee_ioctl_shm_alloc_data size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_SHM_ALLOC_DATA_ID */
#endif /* HAVE_STRUCT_TEE_IOCTL_SHM_ALLOC_DATA */

#ifdef HAVE_STRUCT_TEE_IOCTL_SHM_REGISTER_DATA
# ifdef HAVE_STRUCT_TEE_IOCTL_SHM_REGISTER_DATA_ID
static_assert(sizeof(struct tee_ioctl_shm_register_data) == sizeof(struct_tee_ioctl_shm_register_data),
      "struct tee_ioctl_shm_register_data size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_shm_register_data) <= offsetof(struct_tee_ioctl_shm_register_data, id),
"struct tee_ioctl_shm_register_data size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_SHM_REGISTER_DATA_ID */
#endif /* HAVE_STRUCT_TEE_IOCTL_SHM_REGISTER_DATA */

#ifdef HAVE_STRUCT_TEE_IOCTL_VERSION_DATA
# ifdef HAVE_STRUCT_TEE_IOCTL_VERSION_DATA_GEN_CAPS
static_assert(sizeof(struct tee_ioctl_version_data) == sizeof(struct_tee_ioctl_version_data),
      "struct tee_ioctl_version_data size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_version_data) <= offsetof(struct_tee_ioctl_version_data, gen_caps),
"struct tee_ioctl_version_data size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_VERSION_DATA_GEN_CAPS */
#endif /* HAVE_STRUCT_TEE_IOCTL_VERSION_DATA */

#ifdef HAVE_STRUCT_TEE_IOCTL_PARAM
# ifdef HAVE_STRUCT_TEE_IOCTL_PARAM_C
static_assert(sizeof(struct tee_ioctl_param) == sizeof(struct_tee_ioctl_param),
      "struct tee_ioctl_param size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_param) <= offsetof(struct_tee_ioctl_param, c),
"struct tee_ioctl_param size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_PARAM_C */
#endif /* HAVE_STRUCT_TEE_IOCTL_PARAM */

#ifdef HAVE_STRUCT_TEE_IOCTL_INVOKE_ARG
# ifdef HAVE_STRUCT_TEE_IOCTL_INVOKE_ARG_PARAMS
static_assert(sizeof(struct tee_ioctl_invoke_arg) == sizeof(struct_tee_ioctl_invoke_arg),
      "struct tee_ioctl_invoke_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_invoke_arg) <= offsetof(struct_tee_ioctl_invoke_arg, params),
"struct tee_ioctl_invoke_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_INVOKE_ARG_PARAMS */
#endif /* HAVE_STRUCT_TEE_IOCTL_INVOKE_ARG */

#ifdef HAVE_STRUCT_TEE_IOCL_SUPP_RECV_ARG
# ifdef HAVE_STRUCT_TEE_IOCL_SUPP_RECV_ARG_PARAMS
static_assert(sizeof(struct tee_iocl_supp_recv_arg) == sizeof(struct_tee_iocl_supp_recv_arg),
      "struct tee_iocl_supp_recv_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_iocl_supp_recv_arg) <= offsetof(struct_tee_iocl_supp_recv_arg, params),
"struct tee_iocl_supp_recv_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCL_SUPP_RECV_ARG_PARAMS */
#endif /* HAVE_STRUCT_TEE_IOCL_SUPP_RECV_ARG */

#ifdef HAVE_STRUCT_TEE_IOCL_SUPP_SEND_ARG
# ifdef HAVE_STRUCT_TEE_IOCL_SUPP_SEND_ARG_PARAMS
static_assert(sizeof(struct tee_iocl_supp_send_arg) == sizeof(struct_tee_iocl_supp_send_arg),
      "struct tee_iocl_supp_send_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_iocl_supp_send_arg) <= offsetof(struct_tee_iocl_supp_send_arg, params),
"struct tee_iocl_supp_send_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCL_SUPP_SEND_ARG_PARAMS */
#endif /* HAVE_STRUCT_TEE_IOCL_SUPP_SEND_ARG */

#ifdef HAVE_STRUCT_TEE_IOCTL_OPEN_SESSION_ARG
# ifdef HAVE_STRUCT_TEE_IOCTL_OPEN_SESSION_ARG_PARAMS
static_assert(sizeof(struct tee_ioctl_open_session_arg) == sizeof(struct_tee_ioctl_open_session_arg),
      "struct tee_ioctl_open_session_arg size mismatch, please update the decoder or fix the kernel");
# else
static_assert(sizeof(struct tee_ioctl_open_session_arg) <= offsetof(struct_tee_ioctl_open_session_arg, params),
"struct tee_ioctl_open_session_arg size mismatch, please update the decoder or fix the kernel");
# endif /* HAVE_STRUCT_TEE_IOCTL_OPEN_SESSION_ARG_PARAMS */
#endif /* HAVE_STRUCT_TEE_IOCTL_OPEN_SESSION_ARG */