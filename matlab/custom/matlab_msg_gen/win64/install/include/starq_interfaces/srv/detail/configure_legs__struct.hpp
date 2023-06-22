// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_HPP_
#define STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'configs'
#include "starq_interfaces/msg/detail/leg_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__starq_interfaces__srv__ConfigureLegs_Request __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__srv__ConfigureLegs_Request __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureLegs_Request_
{
  using Type = ConfigureLegs_Request_<ContainerAllocator>;

  explicit ConfigureLegs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConfigureLegs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _configs_type =
    std::vector<starq_interfaces::msg::LegConfig_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegConfig_<ContainerAllocator>>::other>;
  _configs_type configs;

  // setters for named parameter idiom
  Type & set__configs(
    const std::vector<starq_interfaces::msg::LegConfig_<ContainerAllocator>, typename ContainerAllocator::template rebind<starq_interfaces::msg::LegConfig_<ContainerAllocator>>::other> & _arg)
  {
    this->configs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__srv__ConfigureLegs_Request
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__srv__ConfigureLegs_Request
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureLegs_Request_ & other) const
  {
    if (this->configs != other.configs) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureLegs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureLegs_Request_

// alias to use template instance with default allocator
using ConfigureLegs_Request =
  starq_interfaces::srv::ConfigureLegs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace starq_interfaces


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__srv__ConfigureLegs_Response __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__srv__ConfigureLegs_Response __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureLegs_Response_
{
  using Type = ConfigureLegs_Response_<ContainerAllocator>;

  explicit ConfigureLegs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ConfigureLegs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__srv__ConfigureLegs_Response
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__srv__ConfigureLegs_Response
    std::shared_ptr<starq_interfaces::srv::ConfigureLegs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureLegs_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureLegs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureLegs_Response_

// alias to use template instance with default allocator
using ConfigureLegs_Response =
  starq_interfaces::srv::ConfigureLegs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace starq_interfaces

namespace starq_interfaces
{

namespace srv
{

struct ConfigureLegs
{
  using Request = starq_interfaces::srv::ConfigureLegs_Request;
  using Response = starq_interfaces::srv::ConfigureLegs_Response;
};

}  // namespace srv

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_HPP_
