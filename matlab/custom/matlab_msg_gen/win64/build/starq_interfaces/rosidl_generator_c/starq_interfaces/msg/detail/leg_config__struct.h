// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kinematic_type'
#include "rosidl_runtime_c/string.h"
// Member 'motor_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LegConfig in the package starq_interfaces.
typedef struct starq_interfaces__msg__LegConfig
{
  uint8_t id;
  rosidl_runtime_c__String kinematic_type;
  rosidl_runtime_c__uint8__Sequence motor_ids;
} starq_interfaces__msg__LegConfig;

// Struct for a sequence of starq_interfaces__msg__LegConfig.
typedef struct starq_interfaces__msg__LegConfig__Sequence
{
  starq_interfaces__msg__LegConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__LegConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__STRUCT_H_
