// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ar_interface:msg/CubicTrajCoeffs.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__TRAITS_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ar_interface/msg/detail/cubic_traj_coeffs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ar_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CubicTrajCoeffs & msg,
  std::ostream & out)
{
  out << "{";
  // member: a0
  {
    out << "a0: ";
    rosidl_generator_traits::value_to_yaml(msg.a0, out);
    out << ", ";
  }

  // member: a1
  {
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << ", ";
  }

  // member: a2
  {
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << ", ";
  }

  // member: a3
  {
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
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
  const CubicTrajCoeffs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a0: ";
    rosidl_generator_traits::value_to_yaml(msg.a0, out);
    out << "\n";
  }

  // member: a1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << "\n";
  }

  // member: a2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << "\n";
  }

  // member: a3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
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

inline std::string to_yaml(const CubicTrajCoeffs & msg, bool use_flow_style = false)
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
  const ar_interface::msg::CubicTrajCoeffs & msg,
  std::ostream & out, size_t indentation = 0)
{
  ar_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ar_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ar_interface::msg::CubicTrajCoeffs & msg)
{
  return ar_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ar_interface::msg::CubicTrajCoeffs>()
{
  return "ar_interface::msg::CubicTrajCoeffs";
}

template<>
inline const char * name<ar_interface::msg::CubicTrajCoeffs>()
{
  return "ar_interface/msg/CubicTrajCoeffs";
}

template<>
struct has_fixed_size<ar_interface::msg::CubicTrajCoeffs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ar_interface::msg::CubicTrajCoeffs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ar_interface::msg::CubicTrajCoeffs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__TRAITS_HPP_
