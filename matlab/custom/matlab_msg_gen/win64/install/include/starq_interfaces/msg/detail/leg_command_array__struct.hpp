// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\LegCommandArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND_ARRAY__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'commands'
#include "starq_interfaces/msg/detail/leg_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__LegCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__LegCommandArray __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegCommandArray_
{
  using Type = LegCommandArray_<ContainerAllocator>;

  explicit LegCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LegCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _commands_type =
    std::vector<starq_interfaces::msg::LegCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegCommand_<ContainerAllocator>>::other>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__commands(
    const std::vector<starq_interfaces::msg::LegCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::LegCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::LegCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__LegCommandArray
    std::shared_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__LegCommandArray
    std::shared_ptr<starq_interfaces::msg::LegCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegCommandArray_ & other) const
  {
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegCommandArray_

// alias to use template instance with default allocator
using LegCommandArray =
  starq_interfaces::msg::LegCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND_ARRAY__STRUCT_HPP_
