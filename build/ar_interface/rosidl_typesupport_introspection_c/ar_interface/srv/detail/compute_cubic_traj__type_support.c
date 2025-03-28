// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ar_interface/srv/detail/compute_cubic_traj__rosidl_typesupport_introspection_c.h"
#include "ar_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ar_interface/srv/detail/compute_cubic_traj__functions.h"
#include "ar_interface/srv/detail/compute_cubic_traj__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ar_interface__srv__ComputeCubicTraj_Request__init(message_memory);
}

void ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_fini_function(void * message_memory)
{
  ar_interface__srv__ComputeCubicTraj_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_member_array[6] = {
  {
    "p0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, p0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, pf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, v0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, vf),  // bytes offset in struct
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
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, t0),  // bytes offset in struct
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
    offsetof(ar_interface__srv__ComputeCubicTraj_Request, tf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_members = {
  "ar_interface__srv",  // message namespace
  "ComputeCubicTraj_Request",  // message name
  6,  // number of fields
  sizeof(ar_interface__srv__ComputeCubicTraj_Request),
  ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_member_array,  // message members
  ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_type_support_handle = {
  0,
  &ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Request)() {
  if (!ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_type_support_handle.typesupport_identifier) {
    ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ar_interface__srv__ComputeCubicTraj_Request__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ar_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__functions.h"
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ar_interface__srv__ComputeCubicTraj_Response__init(message_memory);
}

void ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_fini_function(void * message_memory)
{
  ar_interface__srv__ComputeCubicTraj_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_member_array[4] = {
  {
    "a0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ar_interface__srv__ComputeCubicTraj_Response, a0),  // bytes offset in struct
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
    offsetof(ar_interface__srv__ComputeCubicTraj_Response, a1),  // bytes offset in struct
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
    offsetof(ar_interface__srv__ComputeCubicTraj_Response, a2),  // bytes offset in struct
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
    offsetof(ar_interface__srv__ComputeCubicTraj_Response, a3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_members = {
  "ar_interface__srv",  // message namespace
  "ComputeCubicTraj_Response",  // message name
  4,  // number of fields
  sizeof(ar_interface__srv__ComputeCubicTraj_Response),
  ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_member_array,  // message members
  ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_type_support_handle = {
  0,
  &ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Response)() {
  if (!ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_type_support_handle.typesupport_identifier) {
    ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ar_interface__srv__ComputeCubicTraj_Response__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ar_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_members = {
  "ar_interface__srv",  // service namespace
  "ComputeCubicTraj",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_Request_message_type_support_handle,
  NULL  // response message
  // ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_Response_message_type_support_handle
};

static rosidl_service_type_support_t ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_type_support_handle = {
  0,
  &ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ar_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj)() {
  if (!ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_type_support_handle.typesupport_identifier) {
    ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ar_interface, srv, ComputeCubicTraj_Response)()->data;
  }

  return &ar_interface__srv__detail__compute_cubic_traj__rosidl_typesupport_introspection_c__ComputeCubicTraj_service_type_support_handle;
}
