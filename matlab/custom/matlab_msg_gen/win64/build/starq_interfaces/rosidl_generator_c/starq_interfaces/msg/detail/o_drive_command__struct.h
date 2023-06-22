// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\ODriveCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ODriveCommand in the package starq_interfaces.
typedef struct starq_interfaces__msg__ODriveCommand
{
  float input_position;
  float input_velocity;
  float input_torque;
} starq_interfaces__msg__ODriveCommand;

// Struct for a sequence of starq_interfaces__msg__ODriveCommand.
typedef struct starq_interfaces__msg__ODriveCommand__Sequence
{
  starq_interfaces__msg__ODriveCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__ODriveCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__STRUCT_H_
