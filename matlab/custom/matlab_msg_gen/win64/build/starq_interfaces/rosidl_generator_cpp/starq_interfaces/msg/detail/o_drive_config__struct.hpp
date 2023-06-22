// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\ODriveConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__ODriveConfig __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__ODriveConfig __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODriveConfig_
{
  using Type = ODriveConfig_<ContainerAllocator>;

  explicit ODriveConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->can_id = 0;
      this->requested_state = 0ul;
      this->control_mode = 0ul;
      this->input_mode = 0ul;
      this->velocity_limit = 0.0f;
      this->current_limit = 0.0f;
      this->trap_traj_velocity_limit = 0.0f;
      this->trap_traj_acceleration_limit = 0.0f;
      this->trap_traj_deceleration_limit = 0.0f;
      this->trap_traj_inertia = 0.0f;
      this->position_gain = 0.0f;
      this->velocity_gain = 0.0f;
      this->velocity_integrator_gain = 0.0f;
      this->gear_ratio = 0.0f;
    }
  }

  explicit ODriveConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->can_id = 0;
      this->requested_state = 0ul;
      this->control_mode = 0ul;
      this->input_mode = 0ul;
      this->velocity_limit = 0.0f;
      this->current_limit = 0.0f;
      this->trap_traj_velocity_limit = 0.0f;
      this->trap_traj_acceleration_limit = 0.0f;
      this->trap_traj_deceleration_limit = 0.0f;
      this->trap_traj_inertia = 0.0f;
      this->position_gain = 0.0f;
      this->velocity_gain = 0.0f;
      this->velocity_integrator_gain = 0.0f;
      this->gear_ratio = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _can_id_type =
    uint8_t;
  _can_id_type can_id;
  using _requested_state_type =
    uint32_t;
  _requested_state_type requested_state;
  using _control_mode_type =
    uint32_t;
  _control_mode_type control_mode;
  using _input_mode_type =
    uint32_t;
  _input_mode_type input_mode;
  using _velocity_limit_type =
    float;
  _velocity_limit_type velocity_limit;
  using _current_limit_type =
    float;
  _current_limit_type current_limit;
  using _trap_traj_velocity_limit_type =
    float;
  _trap_traj_velocity_limit_type trap_traj_velocity_limit;
  using _trap_traj_acceleration_limit_type =
    float;
  _trap_traj_acceleration_limit_type trap_traj_acceleration_limit;
  using _trap_traj_deceleration_limit_type =
    float;
  _trap_traj_deceleration_limit_type trap_traj_deceleration_limit;
  using _trap_traj_inertia_type =
    float;
  _trap_traj_inertia_type trap_traj_inertia;
  using _position_gain_type =
    float;
  _position_gain_type position_gain;
  using _velocity_gain_type =
    float;
  _velocity_gain_type velocity_gain;
  using _velocity_integrator_gain_type =
    float;
  _velocity_integrator_gain_type velocity_integrator_gain;
  using _gear_ratio_type =
    float;
  _gear_ratio_type gear_ratio;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__can_id(
    const uint8_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__requested_state(
    const uint32_t & _arg)
  {
    this->requested_state = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint32_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__input_mode(
    const uint32_t & _arg)
  {
    this->input_mode = _arg;
    return *this;
  }
  Type & set__velocity_limit(
    const float & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__current_limit(
    const float & _arg)
  {
    this->current_limit = _arg;
    return *this;
  }
  Type & set__trap_traj_velocity_limit(
    const float & _arg)
  {
    this->trap_traj_velocity_limit = _arg;
    return *this;
  }
  Type & set__trap_traj_acceleration_limit(
    const float & _arg)
  {
    this->trap_traj_acceleration_limit = _arg;
    return *this;
  }
  Type & set__trap_traj_deceleration_limit(
    const float & _arg)
  {
    this->trap_traj_deceleration_limit = _arg;
    return *this;
  }
  Type & set__trap_traj_inertia(
    const float & _arg)
  {
    this->trap_traj_inertia = _arg;
    return *this;
  }
  Type & set__position_gain(
    const float & _arg)
  {
    this->position_gain = _arg;
    return *this;
  }
  Type & set__velocity_gain(
    const float & _arg)
  {
    this->velocity_gain = _arg;
    return *this;
  }
  Type & set__velocity_integrator_gain(
    const float & _arg)
  {
    this->velocity_integrator_gain = _arg;
    return *this;
  }
  Type & set__gear_ratio(
    const float & _arg)
  {
    this->gear_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::ODriveConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::ODriveConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__ODriveConfig
    std::shared_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__ODriveConfig
    std::shared_ptr<starq_interfaces::msg::ODriveConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODriveConfig_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->requested_state != other.requested_state) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->input_mode != other.input_mode) {
      return false;
    }
    if (this->velocity_limit != other.velocity_limit) {
      return false;
    }
    if (this->current_limit != other.current_limit) {
      return false;
    }
    if (this->trap_traj_velocity_limit != other.trap_traj_velocity_limit) {
      return false;
    }
    if (this->trap_traj_acceleration_limit != other.trap_traj_acceleration_limit) {
      return false;
    }
    if (this->trap_traj_deceleration_limit != other.trap_traj_deceleration_limit) {
      return false;
    }
    if (this->trap_traj_inertia != other.trap_traj_inertia) {
      return false;
    }
    if (this->position_gain != other.position_gain) {
      return false;
    }
    if (this->velocity_gain != other.velocity_gain) {
      return false;
    }
    if (this->velocity_integrator_gain != other.velocity_integrator_gain) {
      return false;
    }
    if (this->gear_ratio != other.gear_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODriveConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODriveConfig_

// alias to use template instance with default allocator
using ODriveConfig =
  starq_interfaces::msg::ODriveConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_HPP_
