// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice
#include "ar_interface/msg/detail/cubic_traj_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ar_interface/msg/detail/cubic_traj_params__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_serialize(
  const ar_interface::msg::CubicTrajParams & ros_message,
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
  ar_interface::msg::CubicTrajParams & ros_message)
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
  const ar_interface::msg::CubicTrajParams & ros_message,
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
max_serialized_size_CubicTrajParams(
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
    using DataType = ar_interface::msg::CubicTrajParams;
    is_plain =
      (
      offsetof(DataType, tf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CubicTrajParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ar_interface::msg::CubicTrajParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CubicTrajParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ar_interface::msg::CubicTrajParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CubicTrajParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ar_interface::msg::CubicTrajParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CubicTrajParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CubicTrajParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CubicTrajParams__callbacks = {
  "ar_interface::msg",
  "CubicTrajParams",
  _CubicTrajParams__cdr_serialize,
  _CubicTrajParams__cdr_deserialize,
  _CubicTrajParams__get_serialized_size,
  _CubicTrajParams__max_serialized_size
};

static rosidl_message_type_support_t _CubicTrajParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CubicTrajParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ar_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ar_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ar_interface::msg::CubicTrajParams>()
{
  return &ar_interface::msg::typesupport_fastrtps_cpp::_CubicTrajParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, msg, CubicTrajParams)() {
  return &ar_interface::msg::typesupport_fastrtps_cpp::_CubicTrajParams__handle;
}

#ifdef __cplusplus
}
#endif
