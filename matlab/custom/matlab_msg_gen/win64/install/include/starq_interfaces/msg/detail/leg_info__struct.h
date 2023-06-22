// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos_estimate'
// Member 'vel_estimate'
// Member 'acc_estimate'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LegInfo in the package starq_interfaces.
typedef struct starq_interfaces__msg__LegInfo
{
  rosidl_runtime_c__float__Sequence pos_estimate;
  rosidl_runtime_c__float__Sequence vel_estimate;
  rosidl_runtime_c__float__Sequence acc_estimate;
} starq_interfaces__msg__LegInfo;

// Struct for a sequence of starq_interfaces__msg__LegInfo.
typedef struct starq_interfaces__msg__LegInfo__Sequence
{
  starq_interfaces__msg__LegInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__LegInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__STRUCT_H_
