// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__LegInfo __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__LegInfo __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegInfo_
{
  using Type = LegInfo_<ContainerAllocator>;

  explicit LegInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LegInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pos_estimate_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _pos_estimate_type pos_estimate;
  using _vel_estimate_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _vel_estimate_type vel_estimate;
  using _acc_estimate_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _acc_estimate_type acc_estimate;

  // setters for named parameter idiom
  Type & set__pos_estimate(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->pos_estimate = _arg;
    return *this;
  }
  Type & set__vel_estimate(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->vel_estimate = _arg;
    return *this;
  }
  Type & set__acc_estimate(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->acc_estimate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::LegInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::LegInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__LegInfo
    std::shared_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__LegInfo
    std::shared_ptr<starq_interfaces::msg::LegInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegInfo_ & other) const
  {
    if (this->pos_estimate != other.pos_estimate) {
      return false;
    }
    if (this->vel_estimate != other.vel_estimate) {
      return false;
    }
    if (this->acc_estimate != other.acc_estimate) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegInfo_

// alias to use template instance with default allocator
using LegInfo =
  starq_interfaces::msg::LegInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_HPP_
