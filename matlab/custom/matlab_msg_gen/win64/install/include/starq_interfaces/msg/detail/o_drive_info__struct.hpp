// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from starq_interfaces:msg\ODriveInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__starq_interfaces__msg__ODriveInfo __attribute__((deprecated))
#else
# define DEPRECATED__starq_interfaces__msg__ODriveInfo __declspec(deprecated)
#endif

namespace starq_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODriveInfo_
{
  using Type = ODriveInfo_<ContainerAllocator>;

  explicit ODriveInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->fault = 0ul;
      this->pos_estimate = 0.0f;
      this->vel_estimate = 0.0f;
      this->torque_estimate = 0.0f;
      this->torque_target = 0.0f;
      this->iq_setpoint = 0.0f;
      this->iq_measured = 0.0f;
      this->motor_temperature = 0.0f;
      this->bus_voltage = 0.0f;
      this->bus_current = 0.0f;
      this->pos_error = 0.0f;
      this->vel_error = 0.0f;
      this->torque_error = 0.0f;
    }
  }

  explicit ODriveInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->fault = 0ul;
      this->pos_estimate = 0.0f;
      this->vel_estimate = 0.0f;
      this->torque_estimate = 0.0f;
      this->torque_target = 0.0f;
      this->iq_setpoint = 0.0f;
      this->iq_measured = 0.0f;
      this->motor_temperature = 0.0f;
      this->bus_voltage = 0.0f;
      this->bus_current = 0.0f;
      this->pos_error = 0.0f;
      this->vel_error = 0.0f;
      this->torque_error = 0.0f;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _fault_type =
    uint32_t;
  _fault_type fault;
  using _pos_estimate_type =
    float;
  _pos_estimate_type pos_estimate;
  using _vel_estimate_type =
    float;
  _vel_estimate_type vel_estimate;
  using _torque_estimate_type =
    float;
  _torque_estimate_type torque_estimate;
  using _torque_target_type =
    float;
  _torque_target_type torque_target;
  using _iq_setpoint_type =
    float;
  _iq_setpoint_type iq_setpoint;
  using _iq_measured_type =
    float;
  _iq_measured_type iq_measured;
  using _motor_temperature_type =
    float;
  _motor_temperature_type motor_temperature;
  using _bus_voltage_type =
    float;
  _bus_voltage_type bus_voltage;
  using _bus_current_type =
    float;
  _bus_current_type bus_current;
  using _pos_error_type =
    float;
  _pos_error_type pos_error;
  using _vel_error_type =
    float;
  _vel_error_type vel_error;
  using _torque_error_type =
    float;
  _torque_error_type torque_error;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__fault(
    const uint32_t & _arg)
  {
    this->fault = _arg;
    return *this;
  }
  Type & set__pos_estimate(
    const float & _arg)
  {
    this->pos_estimate = _arg;
    return *this;
  }
  Type & set__vel_estimate(
    const float & _arg)
  {
    this->vel_estimate = _arg;
    return *this;
  }
  Type & set__torque_estimate(
    const float & _arg)
  {
    this->torque_estimate = _arg;
    return *this;
  }
  Type & set__torque_target(
    const float & _arg)
  {
    this->torque_target = _arg;
    return *this;
  }
  Type & set__iq_setpoint(
    const float & _arg)
  {
    this->iq_setpoint = _arg;
    return *this;
  }
  Type & set__iq_measured(
    const float & _arg)
  {
    this->iq_measured = _arg;
    return *this;
  }
  Type & set__motor_temperature(
    const float & _arg)
  {
    this->motor_temperature = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const float & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__bus_current(
    const float & _arg)
  {
    this->bus_current = _arg;
    return *this;
  }
  Type & set__pos_error(
    const float & _arg)
  {
    this->pos_error = _arg;
    return *this;
  }
  Type & set__vel_error(
    const float & _arg)
  {
    this->vel_error = _arg;
    return *this;
  }
  Type & set__torque_error(
    const float & _arg)
  {
    this->torque_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    starq_interfaces::msg::ODriveInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const starq_interfaces::msg::ODriveInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      starq_interfaces::msg::ODriveInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__starq_interfaces__msg__ODriveInfo
    std::shared_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__starq_interfaces__msg__ODriveInfo
    std::shared_ptr<starq_interfaces::msg::ODriveInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODriveInfo_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    if (this->pos_estimate != other.pos_estimate) {
      return false;
    }
    if (this->vel_estimate != other.vel_estimate) {
      return false;
    }
    if (this->torque_estimate != other.torque_estimate) {
      return false;
    }
    if (this->torque_target != other.torque_target) {
      return false;
    }
    if (this->iq_setpoint != other.iq_setpoint) {
      return false;
    }
    if (this->iq_measured != other.iq_measured) {
      return false;
    }
    if (this->motor_temperature != other.motor_temperature) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->bus_current != other.bus_current) {
      return false;
    }
    if (this->pos_error != other.pos_error) {
      return false;
    }
    if (this->vel_error != other.vel_error) {
      return false;
    }
    if (this->torque_error != other.torque_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODriveInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODriveInfo_

// alias to use template instance with default allocator
using ODriveInfo =
  starq_interfaces::msg::ODriveInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_HPP_
