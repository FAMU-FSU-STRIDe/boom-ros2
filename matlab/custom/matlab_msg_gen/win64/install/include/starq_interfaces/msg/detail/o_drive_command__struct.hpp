// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\ODriveCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__ODriveCommand __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__ODriveCommand __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODriveCommand_
{
  using Type = ODriveCommand_<ContainerAllocator>;

  explicit ODriveCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_position = 0.0f;
      this->input_velocity = 0.0f;
      this->input_torque = 0.0f;
    }
  }

  explicit ODriveCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_position = 0.0f;
      this->input_velocity = 0.0f;
      this->input_torque = 0.0f;
    }
  }

  // field types and members
  using _input_position_type =
    float;
  _input_position_type input_position;
  using _input_velocity_type =
    float;
  _input_velocity_type input_velocity;
  using _input_torque_type =
    float;
  _input_torque_type input_torque;

  // setters for named parameter idiom
  Type & set__input_position(
    const float & _arg)
  {
    this->input_position = _arg;
    return *this;
  }
  Type & set__input_velocity(
    const float & _arg)
  {
    this->input_velocity = _arg;
    return *this;
  }
  Type & set__input_torque(
    const float & _arg)
  {
    this->input_torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::ODriveCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::ODriveCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__ODriveCommand
    std::shared_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__ODriveCommand
    std::shared_ptr<starq_interfaces::msg::ODriveCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODriveCommand_ & other) const
  {
    if (this->input_position != other.input_position) {
      return false;
    }
    if (this->input_velocity != other.input_velocity) {
      return false;
    }
    if (this->input_torque != other.input_torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODriveCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODriveCommand_

// alias to use template instance with default allocator
using ODriveCommand =
  starq_interfaces::msg::ODriveCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_HPP_
