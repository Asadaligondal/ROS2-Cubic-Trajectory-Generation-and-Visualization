// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__TRAITS_HPP_
#define AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ar_interface/srv/detail/compute_cubic_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ar_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeCubicTraj_Request & msg,
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
  const ComputeCubicTraj_Request & msg,
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

inline std::string to_yaml(const ComputeCubicTraj_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ar_interface

namespace rosidl_generator_traits
{

[[deprecated("use ar_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ar_interface::srv::ComputeCubicTraj_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ar_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ar_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ar_interface::srv::ComputeCubicTraj_Request & msg)
{
  return ar_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ar_interface::srv::ComputeCubicTraj_Request>()
{
  return "ar_interface::srv::ComputeCubicTraj_Request";
}

template<>
inline const char * name<ar_interface::srv::ComputeCubicTraj_Request>()
{
  return "ar_interface/srv/ComputeCubicTraj_Request";
}

template<>
struct has_fixed_size<ar_interface::srv::ComputeCubicTraj_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ar_interface::srv::ComputeCubicTraj_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ar_interface::srv::ComputeCubicTraj_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ar_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeCubicTraj_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeCubicTraj_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeCubicTraj_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ar_interface

namespace rosidl_generator_traits
{

[[deprecated("use ar_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ar_interface::srv::ComputeCubicTraj_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ar_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ar_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ar_interface::srv::ComputeCubicTraj_Response & msg)
{
  return ar_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ar_interface::srv::ComputeCubicTraj_Response>()
{
  return "ar_interface::srv::ComputeCubicTraj_Response";
}

template<>
inline const char * name<ar_interface::srv::ComputeCubicTraj_Response>()
{
  return "ar_interface/srv/ComputeCubicTraj_Response";
}

template<>
struct has_fixed_size<ar_interface::srv::ComputeCubicTraj_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ar_interface::srv::ComputeCubicTraj_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ar_interface::srv::ComputeCubicTraj_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ar_interface::srv::ComputeCubicTraj>()
{
  return "ar_interface::srv::ComputeCubicTraj";
}

template<>
inline const char * name<ar_interface::srv::ComputeCubicTraj>()
{
  return "ar_interface/srv/ComputeCubicTraj";
}

template<>
struct has_fixed_size<ar_interface::srv::ComputeCubicTraj>
  : std::integral_constant<
    bool,
    has_fixed_size<ar_interface::srv::ComputeCubicTraj_Request>::value &&
    has_fixed_size<ar_interface::srv::ComputeCubicTraj_Response>::value
  >
{
};

template<>
struct has_bounded_size<ar_interface::srv::ComputeCubicTraj>
  : std::integral_constant<
    bool,
    has_bounded_size<ar_interface::srv::ComputeCubicTraj_Request>::value &&
    has_bounded_size<ar_interface::srv::ComputeCubicTraj_Response>::value
  >
{
};

template<>
struct is_service<ar_interface::srv::ComputeCubicTraj>
  : std::true_type
{
};

template<>
struct is_service_request<ar_interface::srv::ComputeCubicTraj_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ar_interface::srv::ComputeCubicTraj_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__TRAITS_HPP_
