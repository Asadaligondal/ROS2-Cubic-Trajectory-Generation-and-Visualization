// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ar_interface:msg/CubicTrajCoeffs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ar_interface/msg/detail/cubic_traj_coeffs__rosidl_typesupport_introspection_c.h"
#include "ar_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ar_interface/msg/detail/cubic_traj_coeffs__functions.h"
#include "ar_interface/msg/detail/cubic_traj_coeffs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ar_interface__msg__CubicTrajCoeffs__init(message_memory);
}

void ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_fini_function(void * message_memory)
{
  ar_interface__msg__CubicTrajCoeffs__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_member_array[6] = {
  {
    "a0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, a0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, a1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, a2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, a3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, t0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__msg__CubicTrajCoeffs, tf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_members = {
  "ar_interface__msg",  // message namespace
  "CubicTrajCoeffs",  // message name
  6,  // number of fields
  sizeof(ar_interface__msg__CubicTrajCoeffs),
  ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_member_array,  // message members
  ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_init_function,  // function to initialize message memory (memory has to be allocated)
  ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_type_support_handle = {
  0,
  &ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, msg, CubicTrajCoeffs)() {
  if (!ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_type_support_handle.typesupport_identifier) {
    ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ar_interface__msg__CubicTrajCoeffs__rosidl_typesupport_introspection_c__CubicTrajCoeffs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
