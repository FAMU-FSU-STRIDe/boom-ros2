// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\LegInfoArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'infos'
#include "starq_interfaces/msg/detail/leg_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__LegInfoArray __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__LegInfoArray __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegInfoArray_
{
  using Type = LegInfoArray_<ContainerAllocator>;

  explicit LegInfoArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LegInfoArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _infos_type =
    std::vector<starq_interfaces::msg::LegInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegInfo_<ContainerAllocator>>::other>;
  _infos_type infos;

  // setters for named parameter idiom
  Type & set__infos(
    const std::vector<starq_interfaces::msg::LegInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::LegInfoArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::LegInfoArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegInfoArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::LegInfoArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__LegInfoArray
    std::shared_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__LegInfoArray
    std::shared_ptr<starq_interfaces::msg::LegInfoArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegInfoArray_ & other) const
  {
    if (this->infos != other.infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegInfoArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegInfoArray_

// alias to use template instance with default allocator
using LegInfoArray =
  starq_interfaces::msg::LegInfoArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_HPP_
