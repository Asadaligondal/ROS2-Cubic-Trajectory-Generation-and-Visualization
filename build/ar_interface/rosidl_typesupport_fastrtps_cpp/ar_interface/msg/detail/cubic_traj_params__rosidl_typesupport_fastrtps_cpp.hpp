// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ar_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ar_interface/msg/detail/cubic_traj_params__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ar_interface::msg::CubicTrajParams & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
get_serialized_size(
  const ar_interface::msg::CubicTrajParams & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
max_serialized_size_CubicTrajParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ar_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ar_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ar_interface, msg, CubicTrajParams)();

#ifdef __cplusplus
}
#endif

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
