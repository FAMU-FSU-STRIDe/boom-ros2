// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__LegConfig __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__LegConfig __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegConfig_
{
  using Type = LegConfig_<ContainerAllocator>;

  explicit LegConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->kinematic_type = "";
    }
  }

  explicit LegConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kinematic_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->kinematic_type = "";
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _kinematic_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _kinematic_type_type kinematic_type;
  using _motor_ids_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _motor_ids_type motor_ids;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__kinematic_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->kinematic_type = _arg;
    return *this;
  }
  Type & set__motor_ids(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->motor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::LegConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::LegConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__LegConfig
    std::shared_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__LegConfig
    std::shared_ptr<starq_interfaces::msg::LegConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegConfig_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->kinematic_type != other.kinematic_type) {
      return false;
    }
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegConfig_

// alias to use template instance with default allocator
using LegConfig =
  starq_interfaces::msg::LegConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_HPP_
