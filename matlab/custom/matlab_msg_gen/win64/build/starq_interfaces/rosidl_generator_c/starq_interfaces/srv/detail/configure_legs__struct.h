// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_H_
#define STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'configs'
#include "starq_interfaces/msg/detail/leg_config__struct.h"

// Struct defined in srv/ConfigureLegs in the package starq_interfaces.
typedef struct starq_interfaces__srv__ConfigureLegs_Request
{
  starq_interfaces__msg__LegConfig__Sequence configs;
} starq_interfaces__srv__ConfigureLegs_Request;

// Struct for a sequence of starq_interfaces__srv__ConfigureLegs_Request.
typedef struct starq_interfaces__srv__ConfigureLegs_Request__Sequence
{
  starq_interfaces__srv__ConfigureLegs_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__srv__ConfigureLegs_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConfigureLegs in the package starq_interfaces.
typedef struct starq_interfaces__srv__ConfigureLegs_Response
{
  uint8_t structure_needs_at_least_one_member;
} starq_interfaces__srv__ConfigureLegs_Response;

// Struct for a sequence of starq_interfaces__srv__ConfigureLegs_Response.
typedef struct starq_interfaces__srv__ConfigureLegs_Response__Sequence
{
  starq_interfaces__srv__ConfigureLegs_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__srv__ConfigureLegs_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__STRUCT_H_
