// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice
#include "ar_interface/srv/detail/compute_cubic_traj__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ar_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ar_interface/srv/detail/compute_cubic_traj__struct.h"
#include "ar_interface/srv/detail/compute_cubic_traj__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ComputeCubicTraj_Request__ros_msg_type = ar_interface__srv__ComputeCubicTraj_Request;

static bool _ComputeCubicTraj_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputeCubicTraj_Request__ros_msg_type * ros_message = static_cast<const _ComputeCubicTraj_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: p0
  {
    cdr << ros_message->p0;
  }

  // Field name: pf
  {
    cdr << ros_message->pf;
  }

  // Field name: v0
  {
    cdr << ros_message->v0;
  }

  // Field name: vf
  {
    cdr << ros_message->vf;
  }

  // Field name: t0
  {
    cdr << ros_message->t0;
  }

  // Field name: tf
  {
    cdr << ros_message->tf;
  }

  return true;
}

static bool _ComputeCubicTraj_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputeCubicTraj_Request__ros_msg_type * ros_message = static_cast<_ComputeCubicTraj_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: p0
  {
    cdr >> ros_message->p0;
  }

  // Field name: pf
  {
    cdr >> ros_message->pf;
  }

  // Field name: v0
  {
    cdr >> ros_message->v0;
  }

  // Field name: vf
  {
    cdr >> ros_message->vf;
  }

  // Field name: t0
  {
    cdr >> ros_message->t0;
  }

  // Field name: tf
  {
    cdr >> ros_message->tf;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ar_interface
size_t get_serialized_size_ar_interface__srv__ComputeCubicTraj_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputeCubicTraj_Request__ros_msg_type * ros_message = static_cast<const _ComputeCubicTraj_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name p0
  {
    size_t item_size = sizeof(ros_message->p0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pf
  {
    size_t item_size = sizeof(ros_message->pf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v0
  {
    size_t item_size = sizeof(ros_message->v0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vf
  {
    size_t item_size = sizeof(ros_message->vf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t0
  {
    size_t item_size = sizeof(ros_message->t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf
  {
    size_t item_size = sizeof(ros_message->tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputeCubicTraj_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ar_interface__srv__ComputeCubicTraj_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ar_interface
size_t max_serialized_size_ar_interface__srv__ComputeCubicTraj_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: p0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ar_interface__srv__ComputeCubicTraj_Request;
    is_plain =
      (
      offsetof(DataType, tf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ComputeCubicTraj_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ar_interface__srv__ComputeCubicTraj_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ComputeCubicTraj_Request = {
  "ar_interface::srv",
  "ComputeCubicTraj_Request",
  _ComputeCubicTraj_Request__cdr_serialize,
  _ComputeCubicTraj_Request__cdr_deserialize,
  _ComputeCubicTraj_Request__get_serialized_size,
  _ComputeCubicTraj_Request__max_serialized_size
};

static rosidl_message_type_support_t _ComputeCubicTraj_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputeCubicTraj_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ar_interface, srv, ComputeCubicTraj_Request)() {
  return &_ComputeCubicTraj_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ar_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__struct.h"
// already included above
// #include "ar_interface/srv/detail/compute_cubic_traj__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ComputeCubicTraj_Response__ros_msg_type = ar_interface__srv__ComputeCubicTraj_Response;

static bool _ComputeCubicTraj_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputeCubicTraj_Response__ros_msg_type * ros_message = static_cast<const _ComputeCubicTraj_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: a0
  {
    cdr << ros_message->a0;
  }

  // Field name: a1
  {
    cdr << ros_message->a1;
  }

  // Field name: a2
  {
    cdr << ros_message->a2;
  }

  // Field name: a3
  {
    cdr << ros_message->a3;
  }

  return true;
}

static bool _ComputeCubicTraj_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputeCubicTraj_Response__ros_msg_type * ros_message = static_cast<_ComputeCubicTraj_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: a0
  {
    cdr >> ros_message->a0;
  }

  // Field name: a1
  {
    cdr >> ros_message->a1;
  }

  // Field name: a2
  {
    cdr >> ros_message->a2;
  }

  // Field name: a3
  {
    cdr >> ros_message->a3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ar_interface
size_t get_serialized_size_ar_interface__srv__ComputeCubicTraj_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputeCubicTraj_Response__ros_msg_type * ros_message = static_cast<const _ComputeCubicTraj_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a0
  {
    size_t item_size = sizeof(ros_message->a0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a1
  {
    size_t item_size = sizeof(ros_message->a1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a2
  {
    size_t item_size = sizeof(ros_message->a2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a3
  {
    size_t item_size = sizeof(ros_message->a3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputeCubicTraj_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ar_interface__srv__ComputeCubicTraj_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ar_interface
size_t max_serialized_size_ar_interface__srv__ComputeCubicTraj_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ar_interface__srv__ComputeCubicTraj_Response;
    is_plain =
      (
      offsetof(DataType, a3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ComputeCubicTraj_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ar_interface__srv__ComputeCubicTraj_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ComputeCubicTraj_Response = {
  "ar_interface::srv",
  "ComputeCubicTraj_Response",
  _ComputeCubicTraj_Response__cdr_serialize,
  _ComputeCubicTraj_Response__cdr_deserialize,
  _ComputeCubicTraj_Response__get_serialized_size,
  _ComputeCubicTraj_Response__max_serialized_size
};

static rosidl_message_type_support_t _ComputeCubicTraj_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputeCubicTraj_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ar_interface, srv, ComputeCubicTraj_Response)() {
  return &_ComputeCubicTraj_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ar_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ar_interface/srv/compute_cubic_traj.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ComputeCubicTraj__callbacks = {
  "ar_interface::srv",
  "ComputeCubicTraj",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ar_interface, srv, ComputeCubicTraj_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ar_interface, srv, ComputeCubicTraj_Response)(),
};

static rosidl_service_type_support_t ComputeCubicTraj__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ComputeCubicTraj__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ar_interface, srv, ComputeCubicTraj)() {
  return &ComputeCubicTraj__handle;
}

#if defined(__cplusplus)
}
#endif
