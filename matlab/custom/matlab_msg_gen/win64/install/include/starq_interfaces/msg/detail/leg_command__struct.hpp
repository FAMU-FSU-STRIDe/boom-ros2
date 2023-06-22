// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__LegCommand __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__LegCommand __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegCommand_
{
  using Type = LegCommand_<ContainerAllocator>;

  explicit LegCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LegCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _input_pos_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _input_pos_type input_pos;
  using _input_vel_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _input_vel_type input_vel;
  using _input_acc_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _input_acc_type input_acc;

  // setters for named parameter idiom
  Type & set__input_pos(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->input_pos = _arg;
    return *this;
  }
  Type & set__input_vel(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->input_vel = _arg;
    return *this;
  }
  Type & set__input_acc(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->input_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::LegCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::LegCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__LegCommand
    std::shared_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__LegCommand
    std::shared_ptr<starq_interfaces::msg::LegCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegCommand_ & other) const
  {
    if (this->input_pos != other.input_pos) {
      return false;
    }
    if (this->input_vel != other.input_vel) {
      return false;
    }
    if (this->input_acc != other.input_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegCommand_

// alias to use template instance with default allocator
using LegCommand =
  starq_interfaces::msg::LegCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_HPP_
