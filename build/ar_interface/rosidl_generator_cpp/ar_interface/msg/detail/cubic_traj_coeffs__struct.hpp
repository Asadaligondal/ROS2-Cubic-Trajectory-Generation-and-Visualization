// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ar_interface:msg/CubicTrajCoeffs.idl
// generated code does not contain a copyright notice

#ifndef AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__STRUCT_HPP_
#define AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ar_interface__msg__CubicTrajCoeffs __attribute__((deprecated))
#else
# define DEPRECATED__ar_interface__msg__CubicTrajCoeffs __declspec(deprecated)
#endif

namespace ar_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CubicTrajCoeffs_
{
  using Type = CubicTrajCoeffs_<ContainerAllocator>;

  explicit CubicTrajCoeffs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a0 = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
      this->t0 = 0.0;
      this->tf = 0.0;
    }
  }

  explicit CubicTrajCoeffs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a0 = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
      this->t0 = 0.0;
      this->tf = 0.0;
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
  using _t0_type =
    double;
  _t0_type t0;
  using _tf_type =
    double;
  _tf_type tf;

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
    ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> *;
  using ConstRawPtr =
    const ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ar_interface__msg__CubicTrajCoeffs
    std::shared_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ar_interface__msg__CubicTrajCoeffs
    std::shared_ptr<ar_interface::msg::CubicTrajCoeffs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CubicTrajCoeffs_ & other) const
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
    if (this->t0 != other.t0) {
      return false;
    }
    if (this->tf != other.tf) {
      return false;
    }
    return true;
  }
  bool operator!=(const CubicTrajCoeffs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CubicTrajCoeffs_

// alias to use template instance with default allocator
using CubicTrajCoeffs =
  ar_interface::msg::CubicTrajCoeffs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ar_interface

#endif  // AR_INTERFACE__MSG__DETAIL__CUBIC_TRAJ_COEFFS__STRUCT_HPP_
