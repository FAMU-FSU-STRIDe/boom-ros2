// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\ODriveConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ODriveConfig in the package starq_interfaces.
typedef struct starq_interfaces__msg__ODriveConfig
{
  uint8_t id;
  uint8_t can_id;
  uint32_t requested_state;
  uint32_t control_mode;
  uint32_t input_mode;
  float velocity_limit;
  float current_limit;
  float trap_traj_velocity_limit;
  float trap_traj_acceleration_limit;
  float trap_traj_deceleration_limit;
  float trap_traj_inertia;
  float position_gain;
  float velocity_gain;
  float velocity_integrator_gain;
  float gear_ratio;
} starq_interfaces__msg__ODriveConfig;

// Struct for a sequence of starq_interfaces__msg__ODriveConfig.
typedef struct starq_interfaces__msg__ODriveConfig__Sequence
{
  starq_interfaces__msg__ODriveConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__ODriveConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__STRUCT_H_
