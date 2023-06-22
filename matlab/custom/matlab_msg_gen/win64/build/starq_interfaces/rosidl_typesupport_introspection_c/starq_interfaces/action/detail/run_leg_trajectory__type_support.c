// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
#include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "starq_interfaces/msg/leg_command_array.h"
// Member `trajectory`
#include "starq_interfaces/msg/detail/leg_command_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_Goal__init(message_memory);
}

void RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_Goal__fini(message_memory);
}

size_t RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__LegCommandArray__trajectory(
  const void * untyped_member)
{
  const starq_interfaces__msg__LegCommandArray__Sequence * member =
    (const starq_interfaces__msg__LegCommandArray__Sequence *)(untyped_member);
  return member->size;
}

const void * RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__LegCommandArray__trajectory(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__LegCommandArray__Sequence * member =
    (const starq_interfaces__msg__LegCommandArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__LegCommandArray__trajectory(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__LegCommandArray__Sequence * member =
    (starq_interfaces__msg__LegCommandArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__LegCommandArray__trajectory(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__LegCommandArray__Sequence * member =
    (starq_interfaces__msg__LegCommandArray__Sequence *)(untyped_member);
  starq_interfaces__msg__LegCommandArray__Sequence__fini(member);
  return starq_interfaces__msg__LegCommandArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_member_array[2] = {
  {
    "publish_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Goal, publish_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__LegCommandArray__trajectory,  // size() function pointer
    RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__LegCommandArray__trajectory,  // get_const(index) function pointer
    RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__LegCommandArray__trajectory,  // get(index) function pointer
    RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__LegCommandArray__trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_Goal",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_Goal),
  RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_member_array,  // message members
  RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_type_support_handle = {
  0,
  &RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Goal)() {
  RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegCommandArray)();
  if (!RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_Goal__rosidl_typesupport_introspection_c__RunLegTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `leg_infos`
#include "starq_interfaces/msg/leg_info_array.h"
// Member `leg_infos`
#include "starq_interfaces/msg/detail/leg_info_array__rosidl_typesupport_introspection_c.h"
// Member `motor_infos`
#include "starq_interfaces/msg/o_drive_info_array.h"
// Member `motor_infos`
#include "starq_interfaces/msg/detail/o_drive_info_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_Result__init(message_memory);
}

void RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_Result__fini(message_memory);
}

size_t RunLegTrajectory_Result__rosidl_typesupport_introspection_c__size_function__LegInfoArray__leg_infos(
  const void * untyped_member)
{
  const starq_interfaces__msg__LegInfoArray__Sequence * member =
    (const starq_interfaces__msg__LegInfoArray__Sequence *)(untyped_member);
  return member->size;
}

const void * RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_const_function__LegInfoArray__leg_infos(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__LegInfoArray__Sequence * member =
    (const starq_interfaces__msg__LegInfoArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_function__LegInfoArray__leg_infos(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__LegInfoArray__Sequence * member =
    (starq_interfaces__msg__LegInfoArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RunLegTrajectory_Result__rosidl_typesupport_introspection_c__resize_function__LegInfoArray__leg_infos(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__LegInfoArray__Sequence * member =
    (starq_interfaces__msg__LegInfoArray__Sequence *)(untyped_member);
  starq_interfaces__msg__LegInfoArray__Sequence__fini(member);
  return starq_interfaces__msg__LegInfoArray__Sequence__init(member, size);
}

size_t RunLegTrajectory_Result__rosidl_typesupport_introspection_c__size_function__ODriveInfoArray__motor_infos(
  const void * untyped_member)
{
  const starq_interfaces__msg__ODriveInfoArray__Sequence * member =
    (const starq_interfaces__msg__ODriveInfoArray__Sequence *)(untyped_member);
  return member->size;
}

const void * RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_const_function__ODriveInfoArray__motor_infos(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__ODriveInfoArray__Sequence * member =
    (const starq_interfaces__msg__ODriveInfoArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_function__ODriveInfoArray__motor_infos(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__ODriveInfoArray__Sequence * member =
    (starq_interfaces__msg__ODriveInfoArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RunLegTrajectory_Result__rosidl_typesupport_introspection_c__resize_function__ODriveInfoArray__motor_infos(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__ODriveInfoArray__Sequence * member =
    (starq_interfaces__msg__ODriveInfoArray__Sequence *)(untyped_member);
  starq_interfaces__msg__ODriveInfoArray__Sequence__fini(member);
  return starq_interfaces__msg__ODriveInfoArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_member_array[2] = {
  {
    "leg_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Result, leg_infos),  // bytes offset in struct
    NULL,  // default value
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__size_function__LegInfoArray__leg_infos,  // size() function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_const_function__LegInfoArray__leg_infos,  // get_const(index) function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_function__LegInfoArray__leg_infos,  // get(index) function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__resize_function__LegInfoArray__leg_infos  // resize(index) function pointer
  },
  {
    "motor_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Result, motor_infos),  // bytes offset in struct
    NULL,  // default value
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__size_function__ODriveInfoArray__motor_infos,  // size() function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_const_function__ODriveInfoArray__motor_infos,  // get_const(index) function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__get_function__ODriveInfoArray__motor_infos,  // get(index) function pointer
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__resize_function__ODriveInfoArray__motor_infos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_Result),
  RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_member_array,  // message members
  RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_type_support_handle = {
  0,
  &RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Result)() {
  RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegInfoArray)();
  RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, ODriveInfoArray)();
  if (!RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_Result__rosidl_typesupport_introspection_c__RunLegTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `lastest_leg_info`
// already included above
// #include "starq_interfaces/msg/leg_info_array.h"
// Member `lastest_leg_info`
// already included above
// #include "starq_interfaces/msg/detail/leg_info_array__rosidl_typesupport_introspection_c.h"
// Member `latest_motor_info`
// already included above
// #include "starq_interfaces/msg/o_drive_info_array.h"
// Member `latest_motor_info`
// already included above
// #include "starq_interfaces/msg/detail/o_drive_info_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_Feedback__init(message_memory);
}

void RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_member_array[2] = {
  {
    "lastest_leg_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Feedback, lastest_leg_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_motor_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_Feedback, latest_motor_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_Feedback",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_Feedback),
  RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_member_array,  // message members
  RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_type_support_handle = {
  0,
  &RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Feedback)() {
  RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegInfoArray)();
  RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, ODriveInfoArray)();
  if (!RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_Feedback__rosidl_typesupport_introspection_c__RunLegTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "starq_interfaces/action/run_leg_trajectory.h"
// Member `goal`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request__init(message_memory);
}

void RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request),
  RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_member_array,  // message members
  RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Request)() {
  RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Goal)();
  if (!RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response__init(message_memory);
}

void RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response),
  RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_member_array,  // message members
  RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Response)() {
  RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_members = {
  "starq_interfaces__action",  // service namespace
  "RunLegTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_type_support_handle = {
  0,
  &starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal)() {
  if (!starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_SendGoal_Response)()->data;
  }

  return &starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_GetResult_Request__init(message_memory);
}

void RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Request),
  RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_member_array,  // message members
  RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Request)() {
  RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "starq_interfaces/action/run_leg_trajectory.h"
// Member `result`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_GetResult_Response__init(message_memory);
}

void RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Response),
  RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_member_array,  // message members
  RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Response)() {
  RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Result)();
  if (!RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_members = {
  "starq_interfaces__action",  // service namespace
  "RunLegTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_type_support_handle = {
  0,
  &starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult)() {
  if (!starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_GetResult_Response)()->data;
  }

  return &starq_interfaces__action__detail__run_leg_trajectory__rosidl_typesupport_introspection_c__RunLegTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "starq_interfaces/action/run_leg_trajectory.h"
// Member `feedback`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage__init(message_memory);
}

void RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_members = {
  "starq_interfaces__action",  // message namespace
  "RunLegTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage),
  RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_member_array,  // message members
  RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_FeedbackMessage)() {
  RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, action, RunLegTrajectory_Feedback)();
  if (!RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunLegTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__RunLegTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
