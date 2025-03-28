// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ar_interface:msg/CubicTrajCoeffs.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__BUILDER_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ar_interface/msg/detail/cubic_traj_coeffs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ar_interface
{

namespace msg
{

namespace builder
{

class Init_CubicTrajCoeffs_tf
{
public:
  explicit Init_CubicTrajCoeffs_tf(::ar_interface::msg::CubicTrajCoeffs & msg)
  : msg_(msg)
  {}
  ::ar_interface::msg::CubicTrajCoeffs tf(::ar_interface::msg::CubicTrajCoeffs::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

class Init_CubicTrajCoeffs_t0
{
public:
  explicit Init_CubicTrajCoeffs_t0(::ar_interface::msg::CubicTrajCoeffs & msg)
  : msg_(msg)
  {}
  Init_CubicTrajCoeffs_tf t0(::ar_interface::msg::CubicTrajCoeffs::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_CubicTrajCoeffs_tf(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

class Init_CubicTrajCoeffs_a3
{
public:
  explicit Init_CubicTrajCoeffs_a3(::ar_interface::msg::CubicTrajCoeffs & msg)
  : msg_(msg)
  {}
  Init_CubicTrajCoeffs_t0 a3(::ar_interface::msg::CubicTrajCoeffs::_a3_type arg)
  {
    msg_.a3 = std::move(arg);
    return Init_CubicTrajCoeffs_t0(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

class Init_CubicTrajCoeffs_a2
{
public:
  explicit Init_CubicTrajCoeffs_a2(::ar_interface::msg::CubicTrajCoeffs & msg)
  : msg_(msg)
  {}
  Init_CubicTrajCoeffs_a3 a2(::ar_interface::msg::CubicTrajCoeffs::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_CubicTrajCoeffs_a3(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

class Init_CubicTrajCoeffs_a1
{
public:
  explicit Init_CubicTrajCoeffs_a1(::ar_interface::msg::CubicTrajCoeffs & msg)
  : msg_(msg)
  {}
  Init_CubicTrajCoeffs_a2 a1(::ar_interface::msg::CubicTrajCoeffs::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_CubicTrajCoeffs_a2(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

class Init_CubicTrajCoeffs_a0
{
public:
  Init_CubicTrajCoeffs_a0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CubicTrajCoeffs_a1 a0(::ar_interface::msg::CubicTrajCoeffs::_a0_type arg)
  {
    msg_.a0 = std::move(arg);
    return Init_CubicTrajCoeffs_a1(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajCoeffs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_interface::msg::CubicTrajCoeffs>()
{
  return ar_interface::msg::builder::Init_CubicTrajCoeffs_a0();
}

}  // namespace ar_interface

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__BUILDER_HPP_
