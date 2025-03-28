// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice
#include "ar_interface/srv/detail/compute_cubic_traj__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ar_interface/srv/detail/compute_cubic_traj__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ar_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_serialize(
  const ar_interface::srv::ComputeCubicTraj_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: p0
  cdr << ros_message.p0;
  // Member: pf
  cdr << ros_message.pf;
  // Member: v0
  cdr << ros_message.v0;
  // Member: vf
  cdr << ros_message.vf;
  // Member: t0
  cdr << ros_message.t0;
  // Member: tf
  cdr << ros_message.tf;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ar_interface::srv::ComputeCubicTraj_Request & ros_message)
{
  // Member: p0
  cdr >> ros_message.p0;

  // Member: pf
  cdr >> ros_message.pf;

  // Member: v0
  cdr >> ros_message.v0;

  // Member: vf
  cdr >> ros_message.vf;

  // Member: t0
  cdr >> ros_message.t0;

  // Member: tf
  cdr >> ros_message.tf;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
get_serialized_size(
  const ar_interface::srv::ComputeCubicTraj_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: p0
  {
    size_t item_size = sizeof(ros_message.p0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pf
  {
    size_t item_size = sizeof(ros_message.pf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v0
  {
    size_t item_size = sizeof(ros_message.v0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vf
  {
    size_t item_size = sizeof(ros_message.vf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t0
  {
    size_t item_size = sizeof(ros_message.t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf
  {
    size_t item_size = sizeof(ros_message.tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
max_serialized_size_ComputeCubicTraj_Request(
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


  // Member: p0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: v0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tf
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
    using DataType = ar_interface::srv::ComputeCubicTraj_Request;
    is_plain =
      (
      offsetof(DataType, tf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ComputeCubicTraj_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ar_interface::srv::ComputeCubicTraj_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ComputeCubicTraj_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ar_interface::srv::ComputeCubicTraj_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ComputeCubicTraj_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ar_interface::srv::ComputeCubicTraj_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ComputeCubicTraj_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ComputeCubicTraj_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ComputeCubicTraj_Request__callbacks = {
  "ar_interface::srv",
  "ComputeCubicTraj_Request",
  _ComputeCubicTraj_Request__cdr_serialize,
  _ComputeCubicTraj_Request__cdr_deserialize,
  _ComputeCubicTraj_Request__get_serialized_size,
  _ComputeCubicTraj_Request__max_serialized_size
};

static rosidl_message_type_support_t _ComputeCubicTraj_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComputeCubicTraj_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ar_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ar_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ar_interface::srv::ComputeCubicTraj_Request>()
{
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, srv, ComputeCubicTraj_Request)() {
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ar_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_serialize(
  const ar_interface::srv::ComputeCubicTraj_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a0
  cdr << ros_message.a0;
  // Member: a1
  cdr << ros_message.a1;
  // Member: a2
  cdr << ros_message.a2;
  // Member: a3
  cdr << ros_message.a3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ar_interface::srv::ComputeCubicTraj_Response & ros_message)
{
  // Member: a0
  cdr >> ros_message.a0;

  // Member: a1
  cdr >> ros_message.a1;

  // Member: a2
  cdr >> ros_message.a2;

  // Member: a3
  cdr >> ros_message.a3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
get_serialized_size(
  const ar_interface::srv::ComputeCubicTraj_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a0
  {
    size_t item_size = sizeof(ros_message.a0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a1
  {
    size_t item_size = sizeof(ros_message.a1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a2
  {
    size_t item_size = sizeof(ros_message.a2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a3
  {
    size_t item_size = sizeof(ros_message.a3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
max_serialized_size_ComputeCubicTraj_Response(
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


  // Member: a0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a3
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
    using DataType = ar_interface::srv::ComputeCubicTraj_Response;
    is_plain =
      (
      offsetof(DataType, a3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ComputeCubicTraj_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ar_interface::srv::ComputeCubicTraj_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ComputeCubicTraj_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ar_interface::srv::ComputeCubicTraj_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ComputeCubicTraj_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ar_interface::srv::ComputeCubicTraj_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ComputeCubicTraj_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ComputeCubicTraj_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ComputeCubicTraj_Response__callbacks = {
  "ar_interface::srv",
  "ComputeCubicTraj_Response",
  _ComputeCubicTraj_Response__cdr_serialize,
  _ComputeCubicTraj_Response__cdr_deserialize,
  _ComputeCubicTraj_Response__get_serialized_size,
  _ComputeCubicTraj_Response__max_serialized_size
};

static rosidl_message_type_support_t _ComputeCubicTraj_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComputeCubicTraj_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ar_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ar_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ar_interface::srv::ComputeCubicTraj_Response>()
{
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, srv, ComputeCubicTraj_Response)() {
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ar_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ComputeCubicTraj__callbacks = {
  "ar_interface::srv",
  "ComputeCubicTraj",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, srv, ComputeCubicTraj_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, srv, ComputeCubicTraj_Response)(),
};

static rosidl_service_type_support_t _ComputeCubicTraj__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComputeCubicTraj__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ar_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ar_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<ar_interface::srv::ComputeCubicTraj>()
{
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, srv, ComputeCubicTraj)() {
  return &ar_interface::srv::typesupport_fastrtps_cpp::_ComputeCubicTraj__handle;
}

#ifdef __cplusplus
}
#endif
