// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_Goal(_init);
}

void RunLegTrajectory_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_Goal *>(message_memory);
  typed_message->~RunLegTrajectory_Goal();
}

size_t size_function__RunLegTrajectory_Goal__trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::LegCommandArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunLegTrajectory_Goal__trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::LegCommandArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RunLegTrajectory_Goal__trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::LegCommandArray> *>(untyped_member);
  return &member[index];
}

void resize_function__RunLegTrajectory_Goal__trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::LegCommandArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_Goal_message_member_array[2] = {
  {
    "publish_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Goal, publish_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::LegCommandArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Goal, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunLegTrajectory_Goal__trajectory,  // size() function pointer
    get_const_function__RunLegTrajectory_Goal__trajectory,  // get_const(index) function pointer
    get_function__RunLegTrajectory_Goal__trajectory,  // get(index) function pointer
    resize_function__RunLegTrajectory_Goal__trajectory  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_Goal_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_Goal",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_Goal),
  RunLegTrajectory_Goal_message_member_array,  // message members
  RunLegTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Goal>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_Goal)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_Result(_init);
}

void RunLegTrajectory_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_Result *>(message_memory);
  typed_message->~RunLegTrajectory_Result();
}

size_t size_function__RunLegTrajectory_Result__leg_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::LegInfoArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunLegTrajectory_Result__leg_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::LegInfoArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RunLegTrajectory_Result__leg_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::LegInfoArray> *>(untyped_member);
  return &member[index];
}

void resize_function__RunLegTrajectory_Result__leg_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::LegInfoArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunLegTrajectory_Result__motor_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::ODriveInfoArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunLegTrajectory_Result__motor_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::ODriveInfoArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RunLegTrajectory_Result__motor_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::ODriveInfoArray> *>(untyped_member);
  return &member[index];
}

void resize_function__RunLegTrajectory_Result__motor_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::ODriveInfoArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_Result_message_member_array[2] = {
  {
    "leg_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::LegInfoArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Result, leg_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunLegTrajectory_Result__leg_infos,  // size() function pointer
    get_const_function__RunLegTrajectory_Result__leg_infos,  // get_const(index) function pointer
    get_function__RunLegTrajectory_Result__leg_infos,  // get(index) function pointer
    resize_function__RunLegTrajectory_Result__leg_infos  // resize(index) function pointer
  },
  {
    "motor_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::ODriveInfoArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Result, motor_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunLegTrajectory_Result__motor_infos,  // size() function pointer
    get_const_function__RunLegTrajectory_Result__motor_infos,  // get_const(index) function pointer
    get_function__RunLegTrajectory_Result__motor_infos,  // get(index) function pointer
    resize_function__RunLegTrajectory_Result__motor_infos  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_Result_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_Result),
  RunLegTrajectory_Result_message_member_array,  // message members
  RunLegTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Result>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_Result)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_Feedback(_init);
}

void RunLegTrajectory_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_Feedback *>(message_memory);
  typed_message->~RunLegTrajectory_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_Feedback_message_member_array[2] = {
  {
    "lastest_leg_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::LegInfoArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Feedback, lastest_leg_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latest_motor_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::ODriveInfoArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_Feedback, latest_motor_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_Feedback_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_Feedback",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_Feedback),
  RunLegTrajectory_Feedback_message_member_array,  // message members
  RunLegTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Feedback>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_Feedback)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_SendGoal_Request(_init);
}

void RunLegTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_SendGoal_Request *>(message_memory);
  typed_message->~RunLegTrajectory_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_SendGoal_Request_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_SendGoal_Request),
  RunLegTrajectory_SendGoal_Request_message_member_array,  // message members
  RunLegTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_SendGoal_Request)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_SendGoal_Response(_init);
}

void RunLegTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_SendGoal_Response *>(message_memory);
  typed_message->~RunLegTrajectory_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_SendGoal_Response_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_SendGoal_Response),
  RunLegTrajectory_SendGoal_Response_message_member_array,  // message members
  RunLegTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_SendGoal_Response)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RunLegTrajectory_SendGoal_service_members = {
  "starq_interfaces::action",  // service namespace
  "RunLegTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RunLegTrajectory_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::action::RunLegTrajectory_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::action::RunLegTrajectory_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_GetResult_Request(_init);
}

void RunLegTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_GetResult_Request *>(message_memory);
  typed_message->~RunLegTrajectory_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_GetResult_Request_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_GetResult_Request),
  RunLegTrajectory_GetResult_Request_message_member_array,  // message members
  RunLegTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_GetResult_Request>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_GetResult_Request)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_GetResult_Response(_init);
}

void RunLegTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_GetResult_Response *>(message_memory);
  typed_message->~RunLegTrajectory_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_GetResult_Response_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_GetResult_Response),
  RunLegTrajectory_GetResult_Response_message_member_array,  // message members
  RunLegTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_GetResult_Response>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_GetResult_Response)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RunLegTrajectory_GetResult_service_members = {
  "starq_interfaces::action",  // service namespace
  "RunLegTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RunLegTrajectory_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::action::RunLegTrajectory_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::action::RunLegTrajectory_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<starq_interfaces::action::RunLegTrajectory_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunLegTrajectory_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::action::RunLegTrajectory_FeedbackMessage(_init);
}

void RunLegTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::action::RunLegTrajectory_FeedbackMessage *>(message_memory);
  typed_message->~RunLegTrajectory_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunLegTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::action::RunLegTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunLegTrajectory_FeedbackMessage_message_members = {
  "starq_interfaces::action",  // message namespace
  "RunLegTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(starq_interfaces::action::RunLegTrajectory_FeedbackMessage),
  RunLegTrajectory_FeedbackMessage_message_member_array,  // message members
  RunLegTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RunLegTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunLegTrajectory_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunLegTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>()
{
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, action, RunLegTrajectory_FeedbackMessage)() {
  return &::starq_interfaces::action::rosidl_typesupport_introspection_cpp::RunLegTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
