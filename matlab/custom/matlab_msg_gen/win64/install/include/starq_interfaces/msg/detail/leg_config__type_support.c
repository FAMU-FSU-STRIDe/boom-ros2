// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/msg/detail/leg_config__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/msg/detail/leg_config__functions.h"
#include "starq_interfaces/msg/detail/leg_config__struct.h"


// Include directives for member types
// Member `kinematic_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LegConfig__rosidl_typesupport_introspection_c__LegConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__msg__LegConfig__init(message_memory);
}

void LegConfig__rosidl_typesupport_introspection_c__LegConfig_fini_function(void * message_memory)
{
  starq_interfaces__msg__LegConfig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__msg__LegConfig, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinematic_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__msg__LegConfig, kinematic_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__msg__LegConfig, motor_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_members = {
  "starq_interfaces__msg",  // message namespace
  "LegConfig",  // message name
  3,  // number of fields
  sizeof(starq_interfaces__msg__LegConfig),
  LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_member_array,  // message members
  LegConfig__rosidl_typesupport_introspection_c__LegConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  LegConfig__rosidl_typesupport_introspection_c__LegConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_type_support_handle = {
  0,
  &LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegConfig)() {
  if (!LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_type_support_handle.typesupport_identifier) {
    LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LegConfig__rosidl_typesupport_introspection_c__LegConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
