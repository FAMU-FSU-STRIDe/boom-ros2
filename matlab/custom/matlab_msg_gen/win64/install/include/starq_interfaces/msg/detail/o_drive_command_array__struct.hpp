// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\ODriveCommandArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'commands'
#include "starq_interfaces/msg/detail/o_drive_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__ODriveCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__ODriveCommandArray __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODriveCommandArray_
{
  using Type = ODriveCommandArray_<ContainerAllocator>;

  explicit ODriveCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ODriveCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _commands_type =
    std::vector<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>::other>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__commands(
    const std::vector<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__ODriveCommandArray
    std::shared_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__ODriveCommandArray
    std::shared_ptr<starq_interfaces::msg::ODriveCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODriveCommandArray_ & other) const
  {
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODriveCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODriveCommandArray_

// alias to use template instance with default allocator
using ODriveCommandArray =
  starq_interfaces::msg::ODriveCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_HPP_
