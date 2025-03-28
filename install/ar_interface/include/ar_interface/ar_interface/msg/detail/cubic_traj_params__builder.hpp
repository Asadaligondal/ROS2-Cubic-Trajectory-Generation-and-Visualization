// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__BUILDER_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ar_interface/msg/detail/cubic_traj_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ar_interface
{

namespace msg
{

namespace builder
{

class Init_CubicTrajParams_tf
{
public:
  explicit Init_CubicTrajParams_tf(::ar_interface::msg::CubicTrajParams & msg)
  : msg_(msg)
  {}
  ::ar_interface::msg::CubicTrajParams tf(::ar_interface::msg::CubicTrajParams::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

class Init_CubicTrajParams_t0
{
public:
  explicit Init_CubicTrajParams_t0(::ar_interface::msg::CubicTrajParams & msg)
  : msg_(msg)
  {}
  Init_CubicTrajParams_tf t0(::ar_interface::msg::CubicTrajParams::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_CubicTrajParams_tf(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

class Init_CubicTrajParams_vf
{
public:
  explicit Init_CubicTrajParams_vf(::ar_interface::msg::CubicTrajParams & msg)
  : msg_(msg)
  {}
  Init_CubicTrajParams_t0 vf(::ar_interface::msg::CubicTrajParams::_vf_type arg)
  {
    msg_.vf = std::move(arg);
    return Init_CubicTrajParams_t0(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

class Init_CubicTrajParams_v0
{
public:
  explicit Init_CubicTrajParams_v0(::ar_interface::msg::CubicTrajParams & msg)
  : msg_(msg)
  {}
  Init_CubicTrajParams_vf v0(::ar_interface::msg::CubicTrajParams::_v0_type arg)
  {
    msg_.v0 = std::move(arg);
    return Init_CubicTrajParams_vf(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

class Init_CubicTrajParams_pf
{
public:
  explicit Init_CubicTrajParams_pf(::ar_interface::msg::CubicTrajParams & msg)
  : msg_(msg)
  {}
  Init_CubicTrajParams_v0 pf(::ar_interface::msg::CubicTrajParams::_pf_type arg)
  {
    msg_.pf = std::move(arg);
    return Init_CubicTrajParams_v0(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

class Init_CubicTrajParams_p0
{
public:
  Init_CubicTrajParams_p0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CubicTrajParams_pf p0(::ar_interface::msg::CubicTrajParams::_p0_type arg)
  {
    msg_.p0 = std::move(arg);
    return Init_CubicTrajParams_pf(msg_);
  }

private:
  ::ar_interface::msg::CubicTrajParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_interface::msg::CubicTrajParams>()
{
  return ar_interface::msg::builder::Init_CubicTrajParams_p0();
}

}  // namespace ar_interface

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__BUILDER_HPP_
