// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__BUILDER_HPP_
#define AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ar_interface/srv/detail/compute_cubic_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ar_interface
{

namespace srv
{

namespace builder
{

class Init_ComputeCubicTraj_Request_tf
{
public:
  explicit Init_ComputeCubicTraj_Request_tf(::ar_interface::srv::ComputeCubicTraj_Request & msg)
  : msg_(msg)
  {}
  ::ar_interface::srv::ComputeCubicTraj_Request tf(::ar_interface::srv::ComputeCubicTraj_Request::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

class Init_ComputeCubicTraj_Request_t0
{
public:
  explicit Init_ComputeCubicTraj_Request_t0(::ar_interface::srv::ComputeCubicTraj_Request & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Request_tf t0(::ar_interface::srv::ComputeCubicTraj_Request::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_ComputeCubicTraj_Request_tf(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

class Init_ComputeCubicTraj_Request_vf
{
public:
  explicit Init_ComputeCubicTraj_Request_vf(::ar_interface::srv::ComputeCubicTraj_Request & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Request_t0 vf(::ar_interface::srv::ComputeCubicTraj_Request::_vf_type arg)
  {
    msg_.vf = std::move(arg);
    return Init_ComputeCubicTraj_Request_t0(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

class Init_ComputeCubicTraj_Request_v0
{
public:
  explicit Init_ComputeCubicTraj_Request_v0(::ar_interface::srv::ComputeCubicTraj_Request & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Request_vf v0(::ar_interface::srv::ComputeCubicTraj_Request::_v0_type arg)
  {
    msg_.v0 = std::move(arg);
    return Init_ComputeCubicTraj_Request_vf(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

class Init_ComputeCubicTraj_Request_pf
{
public:
  explicit Init_ComputeCubicTraj_Request_pf(::ar_interface::srv::ComputeCubicTraj_Request & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Request_v0 pf(::ar_interface::srv::ComputeCubicTraj_Request::_pf_type arg)
  {
    msg_.pf = std::move(arg);
    return Init_ComputeCubicTraj_Request_v0(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

class Init_ComputeCubicTraj_Request_p0
{
public:
  Init_ComputeCubicTraj_Request_p0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeCubicTraj_Request_pf p0(::ar_interface::srv::ComputeCubicTraj_Request::_p0_type arg)
  {
    msg_.p0 = std::move(arg);
    return Init_ComputeCubicTraj_Request_pf(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_interface::srv::ComputeCubicTraj_Request>()
{
  return ar_interface::srv::builder::Init_ComputeCubicTraj_Request_p0();
}

}  // namespace ar_interface


namespace ar_interface
{

namespace srv
{

namespace builder
{

class Init_ComputeCubicTraj_Response_a3
{
public:
  explicit Init_ComputeCubicTraj_Response_a3(::ar_interface::srv::ComputeCubicTraj_Response & msg)
  : msg_(msg)
  {}
  ::ar_interface::srv::ComputeCubicTraj_Response a3(::ar_interface::srv::ComputeCubicTraj_Response::_a3_type arg)
  {
    msg_.a3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Response msg_;
};

class Init_ComputeCubicTraj_Response_a2
{
public:
  explicit Init_ComputeCubicTraj_Response_a2(::ar_interface::srv::ComputeCubicTraj_Response & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Response_a3 a2(::ar_interface::srv::ComputeCubicTraj_Response::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_ComputeCubicTraj_Response_a3(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Response msg_;
};

class Init_ComputeCubicTraj_Response_a1
{
public:
  explicit Init_ComputeCubicTraj_Response_a1(::ar_interface::srv::ComputeCubicTraj_Response & msg)
  : msg_(msg)
  {}
  Init_ComputeCubicTraj_Response_a2 a1(::ar_interface::srv::ComputeCubicTraj_Response::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_ComputeCubicTraj_Response_a2(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Response msg_;
};

class Init_ComputeCubicTraj_Response_a0
{
public:
  Init_ComputeCubicTraj_Response_a0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeCubicTraj_Response_a1 a0(::ar_interface::srv::ComputeCubicTraj_Response::_a0_type arg)
  {
    msg_.a0 = std::move(arg);
    return Init_ComputeCubicTraj_Response_a1(msg_);
  }

private:
  ::ar_interface::srv::ComputeCubicTraj_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ar_interface::srv::ComputeCubicTraj_Response>()
{
  return ar_interface::srv::builder::Init_ComputeCubicTraj_Response_a0();
}

}  // namespace ar_interface

#endif  // AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__BUILDER_HPP_
