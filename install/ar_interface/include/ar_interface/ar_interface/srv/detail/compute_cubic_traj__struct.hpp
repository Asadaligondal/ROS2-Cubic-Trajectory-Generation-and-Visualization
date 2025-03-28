// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ar_interface:srv/ComputeCubicTraj.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_HPP_
#define AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ar_interface__srv__ComputeCubicTraj_Request __attribute__((deprecated))
#else
# define DEPRECATED__ar_interface__srv__ComputeCubicTraj_Request __declspec(deprecated)
#endif

namespace ar_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeCubicTraj_Request_
{
  using Type = ComputeCubicTraj_Request_<ContainerAllocator>;

  explicit ComputeCubicTraj_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p0 = 0.0;
      this->pf = 0.0;
      this->v0 = 0.0;
      this->vf = 0.0;
      this->t0 = 0.0;
      this->tf = 0.0;
    }
  }

  explicit ComputeCubicTraj_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p0 = 0.0;
      this->pf = 0.0;
      this->v0 = 0.0;
      this->vf = 0.0;
      this->t0 = 0.0;
      this->tf = 0.0;
    }
  }

  // field types and members
  using _p0_type =
    double;
  _p0_type p0;
  using _pf_type =
    double;
  _pf_type pf;
  using _v0_type =
    double;
  _v0_type v0;
  using _vf_type =
    double;
  _vf_type vf;
  using _t0_type =
    double;
  _t0_type t0;
  using _tf_type =
    double;
  _tf_type tf;

  // setters for named parameter idiom
  Type & set__p0(
    const double & _arg)
  {
    this->p0 = _arg;
    return *this;
  }
  Type & set__pf(
    const double & _arg)
  {
    this->pf = _arg;
    return *this;
  }
  Type & set__v0(
    const double & _arg)
  {
    this->v0 = _arg;
    return *this;
  }
  Type & set__vf(
    const double & _arg)
  {
    this->vf = _arg;
    return *this;
  }
  Type & set__t0(
    const double & _arg)
  {
    this->t0 = _arg;
    return *this;
  }
  Type & set__tf(
    const double & _arg)
  {
    this->tf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_interface__srv__ComputeCubicTraj_Request
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_interface__srv__ComputeCubicTraj_Request
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeCubicTraj_Request_ & other) const
  {
    if (this->p0 != other.p0) {
      return false;
    }
    if (this->pf != other.pf) {
      return false;
    }
    if (this->v0 != other.v0) {
      return false;
    }
    if (this->vf != other.vf) {
      return false;
    }
    if (this->t0 != other.t0) {
      return false;
    }
    if (this->tf != other.tf) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeCubicTraj_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeCubicTraj_Request_

// alias to use template instance with default allocator
using ComputeCubicTraj_Request =
  ar_interface::srv::ComputeCubicTraj_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ar_interface


#ifndef _WIN32
# define DEPRECATED__ar_interface__srv__ComputeCubicTraj_Response __attribute__((deprecated))
#else
# define DEPRECATED__ar_interface__srv__ComputeCubicTraj_Response __declspec(deprecated)
#endif

namespace ar_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeCubicTraj_Response_
{
  using Type = ComputeCubicTraj_Response_<ContainerAllocator>;

  explicit ComputeCubicTraj_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a0 = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
    }
  }

  explicit ComputeCubicTraj_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a0 = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
    }
  }

  // field types and members
  using _a0_type =
    double;
  _a0_type a0;
  using _a1_type =
    double;
  _a1_type a1;
  using _a2_type =
    double;
  _a2_type a2;
  using _a3_type =
    double;
  _a3_type a3;

  // setters for named parameter idiom
  Type & set__a0(
    const double & _arg)
  {
    this->a0 = _arg;
    return *this;
  }
  Type & set__a1(
    const double & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a2(
    const double & _arg)
  {
    this->a2 = _arg;
    return *this;
  }
  Type & set__a3(
    const double & _arg)
  {
    this->a3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_interface__srv__ComputeCubicTraj_Response
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_interface__srv__ComputeCubicTraj_Response
    std::shared_ptr<ar_interface::srv::ComputeCubicTraj_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeCubicTraj_Response_ & other) const
  {
    if (this->a0 != other.a0) {
      return false;
    }
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->a3 != other.a3) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeCubicTraj_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeCubicTraj_Response_

// alias to use template instance with default allocator
using ComputeCubicTraj_Response =
  ar_interface::srv::ComputeCubicTraj_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ar_interface

namespace ar_interface
{

namespace srv
{

struct ComputeCubicTraj
{
  using Request = ar_interface::srv::ComputeCubicTraj_Request;
  using Response = ar_interface::srv::ComputeCubicTraj_Response;
};

}  // namespace srv

}  // namespace ar_interface

#endif  // AR_INTERFACE__SRV__DETAIL__COMPUTE_CUBIC_TRAJ__STRUCT_HPP_
