// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__STRUCT_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ar_interface__msg__CubicTrajParams __attribute__((deprecated))
#else
# define DEPRECATED__ar_interface__msg__CubicTrajParams __declspec(deprecated)
#endif

namespace ar_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CubicTrajParams_
{
  using Type = CubicTrajParams_<ContainerAllocator>;

  explicit CubicTrajParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit CubicTrajParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ar_interface::msg::CubicTrajParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_interface::msg::CubicTrajParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_interface::msg::CubicTrajParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_interface::msg::CubicTrajParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_interface__msg__CubicTrajParams
    std::shared_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_interface__msg__CubicTrajParams
    std::shared_ptr<ar_interface::msg::CubicTrajParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CubicTrajParams_ & other) const
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
  bool operator!=(const CubicTrajParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CubicTrajParams_

// alias to use template instance with default allocator
using CubicTrajParams =
  ar_interface::msg::CubicTrajParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ar_interface

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_PARAMS__STRUCT_HPP_
