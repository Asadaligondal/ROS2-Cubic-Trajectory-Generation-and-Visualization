// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__TRAITS_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ar_interface/msg/detail/cubic_traj_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ar_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CubicTrajParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: p0
  {
    out << "p0: ";
    rosidl_generator_traits::value_to_yaml(msg.p0, out);
    out << ", ";
  }

  // member: pf
  {
    out << "pf: ";
    rosidl_generator_traits::value_to_yaml(msg.pf, out);
    out << ", ";
  }

  // member: v0
  {
    out << "v0: ";
    rosidl_generator_traits::value_to_yaml(msg.v0, out);
    out << ", ";
  }

  // member: vf
  {
    out << "vf: ";
    rosidl_generator_traits::value_to_yaml(msg.vf, out);
    out << ", ";
  }

  // member: t0
  {
    out << "t0: ";
    rosidl_generator_traits::value_to_yaml(msg.t0, out);
    out << ", ";
  }

  // member: tf
  {
    out << "tf: ";
    rosidl_generator_traits::value_to_yaml(msg.tf, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CubicTrajParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: p0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p0: ";
    rosidl_generator_traits::value_to_yaml(msg.p0, out);
    out << "\n";
  }

  // member: pf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pf: ";
    rosidl_generator_traits::value_to_yaml(msg.pf, out);
    out << "\n";
  }

  // member: v0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v0: ";
    rosidl_generator_traits::value_to_yaml(msg.v0, out);
    out << "\n";
  }

  // member: vf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vf: ";
    rosidl_generator_traits::value_to_yaml(msg.vf, out);
    out << "\n";
  }

  // member: t0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t0: ";
    rosidl_generator_traits::value_to_yaml(msg.t0, out);
    out << "\n";
  }

  // member: tf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tf: ";
    rosidl_generator_traits::value_to_yaml(msg.tf, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CubicTrajParams & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ar_interface

namespace rosidl_generator_traits
{

[[deprecated("use ar_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ar_interface::msg::CubicTrajParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  ar_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ar_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ar_interface::msg::CubicTrajParams & msg)
{
  return ar_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ar_interface::msg::CubicTrajParams>()
{
  return "ar_interface::msg::CubicTrajParams";
}

template<>
inline const char * name<ar_interface::msg::CubicTrajParams>()
{
  return "ar_interface/msg/CubicTrajParams";
}

template<>
struct has_fixed_size<ar_interface::msg::CubicTrajParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ar_interface::msg::CubicTrajParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ar_interface::msg::CubicTrajParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__TRAITS_HPP_
