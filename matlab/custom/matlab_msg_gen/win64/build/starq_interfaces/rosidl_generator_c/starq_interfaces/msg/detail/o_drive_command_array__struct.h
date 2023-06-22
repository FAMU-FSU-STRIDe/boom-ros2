// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\ODriveCommandArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'commands'
#include "starq_interfaces/msg/detail/o_drive_command__struct.h"

// Struct defined in msg/ODriveCommandArray in the package starq_interfaces.
typedef struct starq_interfaces__msg__ODriveCommandArray
{
  starq_interfaces__msg__ODriveCommand__Sequence commands;
} starq_interfaces__msg__ODriveCommandArray;

// Struct for a sequence of starq_interfaces__msg__ODriveCommandArray.
typedef struct starq_interfaces__msg__ODriveCommandArray__Sequence
{
  starq_interfaces__msg__ODriveCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__ODriveCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND_ARRAY__STRUCT_H_
