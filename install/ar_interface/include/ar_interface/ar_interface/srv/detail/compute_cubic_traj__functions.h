// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__FUNCTIONS_H_
#define AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ar_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ar_interface/srv/detail/compute_cubic_traj__struct.h"

/// Initialize srv/ComputeCubicTraj message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ar_interface__srv__ComputeCubicTraj_Request
 * )) before or use
 * ar_interface__srv__ComputeCubicTraj_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__init(ar_interface__srv__ComputeCubicTraj_Request * msg);

/// Finalize srv/ComputeCubicTraj message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Request__fini(ar_interface__srv__ComputeCubicTraj_Request * msg);

/// Create srv/ComputeCubicTraj message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ar_interface__srv__ComputeCubicTraj_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__srv__ComputeCubicTraj_Request *
ar_interface__srv__ComputeCubicTraj_Request__create();

/// Destroy srv/ComputeCubicTraj message.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Request__destroy(ar_interface__srv__ComputeCubicTraj_Request * msg);

/// Check for srv/ComputeCubicTraj message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__are_equal(const ar_interface__srv__ComputeCubicTraj_Request * lhs, const ar_interface__srv__ComputeCubicTraj_Request * rhs);

/// Copy a srv/ComputeCubicTraj message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__copy(
  const ar_interface__srv__ComputeCubicTraj_Request * input,
  ar_interface__srv__ComputeCubicTraj_Request * output);

/// Initialize array of srv/ComputeCubicTraj messages.
/**
 * It allocates the memory for the number of elements and calls
 * ar_interface__srv__ComputeCubicTraj_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__Sequence__init(ar_interface__srv__ComputeCubicTraj_Request__Sequence * array, size_t size);

/// Finalize array of srv/ComputeCubicTraj messages.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Request__Sequence__fini(ar_interface__srv__ComputeCubicTraj_Request__Sequence * array);

/// Create array of srv/ComputeCubicTraj messages.
/**
 * It allocates the memory for the array and calls
 * ar_interface__srv__ComputeCubicTraj_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__srv__ComputeCubicTraj_Request__Sequence *
ar_interface__srv__ComputeCubicTraj_Request__Sequence__create(size_t size);

/// Destroy array of srv/ComputeCubicTraj messages.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Request__Sequence__destroy(ar_interface__srv__ComputeCubicTraj_Request__Sequence * array);

/// Check for srv/ComputeCubicTraj message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__Sequence__are_equal(const ar_interface__srv__ComputeCubicTraj_Request__Sequence * lhs, const ar_interface__srv__ComputeCubicTraj_Request__Sequence * rhs);

/// Copy an array of srv/ComputeCubicTraj messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Request__Sequence__copy(
  const ar_interface__srv__ComputeCubicTraj_Request__Sequence * input,
  ar_interface__srv__ComputeCubicTraj_Request__Sequence * output);

/// Initialize srv/ComputeCubicTraj message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ar_interface__srv__ComputeCubicTraj_Response
 * )) before or use
 * ar_interface__srv__ComputeCubicTraj_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__init(ar_interface__srv__ComputeCubicTraj_Response * msg);

/// Finalize srv/ComputeCubicTraj message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Response__fini(ar_interface__srv__ComputeCubicTraj_Response * msg);

/// Create srv/ComputeCubicTraj message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ar_interface__srv__ComputeCubicTraj_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__srv__ComputeCubicTraj_Response *
ar_interface__srv__ComputeCubicTraj_Response__create();

/// Destroy srv/ComputeCubicTraj message.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Response__destroy(ar_interface__srv__ComputeCubicTraj_Response * msg);

/// Check for srv/ComputeCubicTraj message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__are_equal(const ar_interface__srv__ComputeCubicTraj_Response * lhs, const ar_interface__srv__ComputeCubicTraj_Response * rhs);

/// Copy a srv/ComputeCubicTraj message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__copy(
  const ar_interface__srv__ComputeCubicTraj_Response * input,
  ar_interface__srv__ComputeCubicTraj_Response * output);

/// Initialize array of srv/ComputeCubicTraj messages.
/**
 * It allocates the memory for the number of elements and calls
 * ar_interface__srv__ComputeCubicTraj_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__Sequence__init(ar_interface__srv__ComputeCubicTraj_Response__Sequence * array, size_t size);

/// Finalize array of srv/ComputeCubicTraj messages.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Response__Sequence__fini(ar_interface__srv__ComputeCubicTraj_Response__Sequence * array);

/// Create array of srv/ComputeCubicTraj messages.
/**
 * It allocates the memory for the array and calls
 * ar_interface__srv__ComputeCubicTraj_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__srv__ComputeCubicTraj_Response__Sequence *
ar_interface__srv__ComputeCubicTraj_Response__Sequence__create(size_t size);

/// Destroy array of srv/ComputeCubicTraj messages.
/**
 * It calls
 * ar_interface__srv__ComputeCubicTraj_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__srv__ComputeCubicTraj_Response__Sequence__destroy(ar_interface__srv__ComputeCubicTraj_Response__Sequence * array);

/// Check for srv/ComputeCubicTraj message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__Sequence__are_equal(const ar_interface__srv__ComputeCubicTraj_Response__Sequence * lhs, const ar_interface__srv__ComputeCubicTraj_Response__Sequence * rhs);

/// Copy an array of srv/ComputeCubicTraj messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__srv__ComputeCubicTraj_Response__Sequence__copy(
  const ar_interface__srv__ComputeCubicTraj_Response__Sequence * input,
  ar_interface__srv__ComputeCubicTraj_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__FUNCTIONS_H_
