// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_pos'
// Member 'input_vel'
// Member 'input_acc'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LegCommand in the package starq_interfaces.
typedef struct starq_interfaces__msg__LegCommand
{
  rosidl_runtime_c__float__Sequence input_pos;
  rosidl_runtime_c__float__Sequence input_vel;
  rosidl_runtime_c__float__Sequence input_acc;
} starq_interfaces__msg__LegCommand;

// Struct for a sequence of starq_interfaces__msg__LegCommand.
typedef struct starq_interfaces__msg__LegCommand__Sequence
{
  starq_interfaces__msg__LegCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__LegCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__STRUCT_H_
