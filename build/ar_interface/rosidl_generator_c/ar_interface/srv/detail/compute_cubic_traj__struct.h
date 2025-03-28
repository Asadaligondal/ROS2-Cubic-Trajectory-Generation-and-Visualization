// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_H_
#define AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ComputeCubicTraj in the package ar_interface.
typedef struct ar_interface__srv__ComputeCubicTraj_Request
{
  /// Initial position
  double p0;
  /// Final position
  double pf;
  /// Initial velocity
  double v0;
  /// Final velocity
  double vf;
  /// Initial time
  double t0;
  /// Final time
  double tf;
} ar_interface__srv__ComputeCubicTraj_Request;

// Struct for a sequence of ar_interface__srv__ComputeCubicTraj_Request.
typedef struct ar_interface__srv__ComputeCubicTraj_Request__Sequence
{
  ar_interface__srv__ComputeCubicTraj_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ar_interface__srv__ComputeCubicTraj_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ComputeCubicTraj in the package ar_interface.
typedef struct ar_interface__srv__ComputeCubicTraj_Response
{
  /// Coefficient for t^0
  double a0;
  /// Coefficient for t^1
  double a1;
  /// Coefficient for t^2
  double a2;
  /// Coefficient for t^3
  double a3;
} ar_interface__srv__ComputeCubicTraj_Response;

// Struct for a sequence of ar_interface__srv__ComputeCubicTraj_Response.
typedef struct ar_interface__srv__ComputeCubicTraj_Response__Sequence
{
  ar_interface__srv__ComputeCubicTraj_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ar_interface__srv__ComputeCubicTraj_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_H_
