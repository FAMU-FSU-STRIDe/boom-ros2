// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\ODriveInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ODriveInfo in the package starq_interfaces.
typedef struct starq_interfaces__msg__ODriveInfo
{
  uint8_t state;
  uint32_t fault;
  float pos_estimate;
  float vel_estimate;
  float torque_estimate;
  float torque_target;
  float iq_setpoint;
  float iq_measured;
  float motor_temperature;
  float bus_voltage;
  float bus_current;
  float pos_error;
  float vel_error;
  float torque_error;
} starq_interfaces__msg__ODriveInfo;

// Struct for a sequence of starq_interfaces__msg__ODriveInfo.
typedef struct starq_interfaces__msg__ODriveInfo__Sequence
{
  starq_interfaces__msg__ODriveInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__ODriveInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__STRUCT_H_
