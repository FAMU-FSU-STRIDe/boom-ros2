// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:msg\LegInfoArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_H_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'infos'
#include "starq_interfaces/msg/detail/leg_info__struct.h"

// Struct defined in msg/LegInfoArray in the package starq_interfaces.
typedef struct starq_interfaces__msg__LegInfoArray
{
  starq_interfaces__msg__LegInfo__Sequence infos;
} starq_interfaces__msg__LegInfoArray;

// Struct for a sequence of starq_interfaces__msg__LegInfoArray.
typedef struct starq_interfaces__msg__LegInfoArray__Sequence
{
  starq_interfaces__msg__LegInfoArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__msg__LegInfoArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO_ARRAY__STRUCT_H_
