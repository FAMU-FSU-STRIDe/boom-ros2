// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/srv/detail/configure_legs__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/srv/detail/configure_legs__functions.h"
#include "starq_interfaces/srv/detail/configure_legs__struct.h"


// Include directives for member types
// Member `configs`
#include "starq_interfaces/msg/leg_config.h"
// Member `configs`
#include "starq_interfaces/msg/detail/leg_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__srv__ConfigureLegs_Request__init(message_memory);
}

void ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_fini_function(void * message_memory)
{
  starq_interfaces__srv__ConfigureLegs_Request__fini(message_memory);
}

size_t ConfigureLegs_Request__rosidl_typesupport_introspection_c__size_function__LegConfig__configs(
  const void * untyped_member)
{
  const starq_interfaces__msg__LegConfig__Sequence * member =
    (const starq_interfaces__msg__LegConfig__Sequence *)(untyped_member);
  return member->size;
}

const void * ConfigureLegs_Request__rosidl_typesupport_introspection_c__get_const_function__LegConfig__configs(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__LegConfig__Sequence * member =
    (const starq_interfaces__msg__LegConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ConfigureLegs_Request__rosidl_typesupport_introspection_c__get_function__LegConfig__configs(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__LegConfig__Sequence * member =
    (starq_interfaces__msg__LegConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ConfigureLegs_Request__rosidl_typesupport_introspection_c__resize_function__LegConfig__configs(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__LegConfig__Sequence * member =
    (starq_interfaces__msg__LegConfig__Sequence *)(untyped_member);
  starq_interfaces__msg__LegConfig__Sequence__fini(member);
  return starq_interfaces__msg__LegConfig__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_member_array[1] = {
  {
    "configs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__srv__ConfigureLegs_Request, configs),  // bytes offset in struct
    NULL,  // default value
    ConfigureLegs_Request__rosidl_typesupport_introspection_c__size_function__LegConfig__configs,  // size() function pointer
    ConfigureLegs_Request__rosidl_typesupport_introspection_c__get_const_function__LegConfig__configs,  // get_const(index) function pointer
    ConfigureLegs_Request__rosidl_typesupport_introspection_c__get_function__LegConfig__configs,  // get(index) function pointer
    ConfigureLegs_Request__rosidl_typesupport_introspection_c__resize_function__LegConfig__configs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_members = {
  "starq_interfaces__srv",  // message namespace
  "ConfigureLegs_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__srv__ConfigureLegs_Request),
  ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_member_array,  // message members
  ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_type_support_handle = {
  0,
  &ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Request)() {
  ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegConfig)();
  if (!ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_type_support_handle.typesupport_identifier) {
    ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureLegs_Request__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/srv/detail/configure_legs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_legs__functions.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_legs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__srv__ConfigureLegs_Response__init(message_memory);
}

void ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_fini_function(void * message_memory)
{
  starq_interfaces__srv__ConfigureLegs_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__srv__ConfigureLegs_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_members = {
  "starq_interfaces__srv",  // message namespace
  "ConfigureLegs_Response",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__srv__ConfigureLegs_Response),
  ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_member_array,  // message members
  ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_type_support_handle = {
  0,
  &ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Response)() {
  if (!ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_type_support_handle.typesupport_identifier) {
    ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureLegs_Response__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_legs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_members = {
  "starq_interfaces__srv",  // service namespace
  "ConfigureLegs",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_Request_message_type_support_handle,
  NULL  // response message
  // starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_Response_message_type_support_handle
};

static rosidl_service_type_support_t starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_type_support_handle = {
  0,
  &starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs)() {
  if (!starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_type_support_handle.typesupport_identifier) {
    starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureLegs_Response)()->data;
  }

  return &starq_interfaces__srv__detail__configure_legs__rosidl_typesupport_introspection_c__ConfigureLegs_service_type_support_handle;
}
