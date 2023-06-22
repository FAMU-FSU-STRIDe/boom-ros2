// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__STRUCT_H_
#define STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "starq_interfaces/msg/detail/leg_command_array__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_Goal
{
  float publish_rate;
  starq_interfaces__msg__LegCommandArray__Sequence trajectory;
} starq_interfaces__action__RunLegTrajectory_Goal;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_Goal.
typedef struct starq_interfaces__action__RunLegTrajectory_Goal__Sequence
{
  starq_interfaces__action__RunLegTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'leg_infos'
#include "starq_interfaces/msg/detail/leg_info_array__struct.h"
// Member 'motor_infos'
#include "starq_interfaces/msg/detail/o_drive_info_array__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_Result
{
  starq_interfaces__msg__LegInfoArray__Sequence leg_infos;
  starq_interfaces__msg__ODriveInfoArray__Sequence motor_infos;
} starq_interfaces__action__RunLegTrajectory_Result;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_Result.
typedef struct starq_interfaces__action__RunLegTrajectory_Result__Sequence
{
  starq_interfaces__action__RunLegTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lastest_leg_info'
// already included above
// #include "starq_interfaces/msg/detail/leg_info_array__struct.h"
// Member 'latest_motor_info'
// already included above
// #include "starq_interfaces/msg/detail/o_drive_info_array__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_Feedback
{
  starq_interfaces__msg__LegInfoArray lastest_leg_info;
  starq_interfaces__msg__ODriveInfoArray latest_motor_info;
} starq_interfaces__action__RunLegTrajectory_Feedback;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_Feedback.
typedef struct starq_interfaces__action__RunLegTrajectory_Feedback__Sequence
{
  starq_interfaces__action__RunLegTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  starq_interfaces__action__RunLegTrajectory_Goal goal;
} starq_interfaces__action__RunLegTrajectory_SendGoal_Request;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_SendGoal_Request.
typedef struct starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} starq_interfaces__action__RunLegTrajectory_SendGoal_Response;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_SendGoal_Response.
typedef struct starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} starq_interfaces__action__RunLegTrajectory_GetResult_Request;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_GetResult_Request.
typedef struct starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_GetResult_Response
{
  int8_t status;
  starq_interfaces__action__RunLegTrajectory_Result result;
} starq_interfaces__action__RunLegTrajectory_GetResult_Response;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_GetResult_Response.
typedef struct starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__struct.h"

// Struct defined in action/RunLegTrajectory in the package starq_interfaces.
typedef struct starq_interfaces__action__RunLegTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  starq_interfaces__action__RunLegTrajectory_Feedback feedback;
} starq_interfaces__action__RunLegTrajectory_FeedbackMessage;

// Struct for a sequence of starq_interfaces__action__RunLegTrajectory_FeedbackMessage.
typedef struct starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence
{
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__STRUCT_H_
