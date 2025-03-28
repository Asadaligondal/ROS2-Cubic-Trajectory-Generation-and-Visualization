// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__FUNCTIONS_H_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ar_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ar_interface/msg/detail/cubic_traj_params__struct.h"

/// Initialize msg/CubicTrajParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ar_interface__msg__CubicTrajParams
 * )) before or use
 * ar_interface__msg__CubicTrajParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__msg__CubicTrajParams__init(ar_interface__msg__CubicTrajParams * msg);

/// Finalize msg/CubicTrajParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__msg__CubicTrajParams__fini(ar_interface__msg__CubicTrajParams * msg);

/// Create msg/CubicTrajParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ar_interface__msg__CubicTrajParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__msg__CubicTrajParams *
ar_interface__msg__CubicTrajParams__create();

/// Destroy msg/CubicTrajParams message.
/**
 * It calls
 * ar_interface__msg__CubicTrajParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__msg__CubicTrajParams__destroy(ar_interface__msg__CubicTrajParams * msg);

/// Check for msg/CubicTrajParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__msg__CubicTrajParams__are_equal(const ar_interface__msg__CubicTrajParams * lhs, const ar_interface__msg__CubicTrajParams * rhs);

/// Copy a msg/CubicTrajParams message.
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
ar_interface__msg__CubicTrajParams__copy(
  const ar_interface__msg__CubicTrajParams * input,
  ar_interface__msg__CubicTrajParams * output);

/// Initialize array of msg/CubicTrajParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * ar_interface__msg__CubicTrajParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__msg__CubicTrajParams__Sequence__init(ar_interface__msg__CubicTrajParams__Sequence * array, size_t size);

/// Finalize array of msg/CubicTrajParams messages.
/**
 * It calls
 * ar_interface__msg__CubicTrajParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__msg__CubicTrajParams__Sequence__fini(ar_interface__msg__CubicTrajParams__Sequence * array);

/// Create array of msg/CubicTrajParams messages.
/**
 * It allocates the memory for the array and calls
 * ar_interface__msg__CubicTrajParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
ar_interface__msg__CubicTrajParams__Sequence *
ar_interface__msg__CubicTrajParams__Sequence__create(size_t size);

/// Destroy array of msg/CubicTrajParams messages.
/**
 * It calls
 * ar_interface__msg__CubicTrajParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
void
ar_interface__msg__CubicTrajParams__Sequence__destroy(ar_interface__msg__CubicTrajParams__Sequence * array);

/// Check for msg/CubicTrajParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ar_interface
bool
ar_interface__msg__CubicTrajParams__Sequence__are_equal(const ar_interface__msg__CubicTrajParams__Sequence * lhs, const ar_interface__msg__CubicTrajParams__Sequence * rhs);

/// Copy an array of msg/CubicTrajParams messages.
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
ar_interface__msg__CubicTrajParams__Sequence__copy(
  const ar_interface__msg__CubicTrajParams__Sequence * input,
  ar_interface__msg__CubicTrajParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__FUNCTIONS_H_
