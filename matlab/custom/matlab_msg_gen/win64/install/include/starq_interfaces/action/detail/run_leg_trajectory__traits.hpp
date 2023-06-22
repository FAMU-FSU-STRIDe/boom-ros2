// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__TRAITS_HPP_
#define STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__TRAITS_HPP_

#include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_Goal>()
{
  return "starq_interfaces::action::RunLegTrajectory_Goal";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_Goal>()
{
  return "starq_interfaces/action/RunLegTrajectory_Goal";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_Result>()
{
  return "starq_interfaces::action::RunLegTrajectory_Result";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_Result>()
{
  return "starq_interfaces/action/RunLegTrajectory_Result";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'lastest_leg_info'
#include "starq_interfaces/msg/detail/leg_info_array__traits.hpp"
// Member 'latest_motor_info'
#include "starq_interfaces/msg/detail/o_drive_info_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_Feedback>()
{
  return "starq_interfaces::action::RunLegTrajectory_Feedback";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_Feedback>()
{
  return "starq_interfaces/action/RunLegTrajectory_Feedback";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_Feedback>
  : std::integral_constant<bool, has_fixed_size<starq_interfaces::msg::LegInfoArray>::value && has_fixed_size<starq_interfaces::msg::ODriveInfoArray>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_Feedback>
  : std::integral_constant<bool, has_bounded_size<starq_interfaces::msg::LegInfoArray>::value && has_bounded_size<starq_interfaces::msg::ODriveInfoArray>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "starq_interfaces/action/detail/run_leg_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>()
{
  return "starq_interfaces::action::RunLegTrajectory_SendGoal_Request";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>()
{
  return "starq_interfaces/action/RunLegTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<starq_interfaces::action::RunLegTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<starq_interfaces::action::RunLegTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>()
{
  return "starq_interfaces::action::RunLegTrajectory_SendGoal_Response";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>()
{
  return "starq_interfaces/action/RunLegTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_SendGoal>()
{
  return "starq_interfaces::action::RunLegTrajectory_SendGoal";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_SendGoal>()
{
  return "starq_interfaces/action/RunLegTrajectory_SendGoal";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>::value &&
    has_fixed_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>::value &&
    has_bounded_size<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<starq_interfaces::action::RunLegTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<starq_interfaces::action::RunLegTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<starq_interfaces::action::RunLegTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_GetResult_Request>()
{
  return "starq_interfaces::action::RunLegTrajectory_GetResult_Request";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_GetResult_Request>()
{
  return "starq_interfaces/action/RunLegTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_GetResult_Response>()
{
  return "starq_interfaces::action::RunLegTrajectory_GetResult_Response";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_GetResult_Response>()
{
  return "starq_interfaces/action/RunLegTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<starq_interfaces::action::RunLegTrajectory_Result>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<starq_interfaces::action::RunLegTrajectory_Result>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_GetResult>()
{
  return "starq_interfaces::action::RunLegTrajectory_GetResult";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_GetResult>()
{
  return "starq_interfaces/action/RunLegTrajectory_GetResult";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<starq_interfaces::action::RunLegTrajectory_GetResult_Request>::value &&
    has_fixed_size<starq_interfaces::action::RunLegTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<starq_interfaces::action::RunLegTrajectory_GetResult_Request>::value &&
    has_bounded_size<starq_interfaces::action::RunLegTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<starq_interfaces::action::RunLegTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<starq_interfaces::action::RunLegTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<starq_interfaces::action::RunLegTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>()
{
  return "starq_interfaces::action::RunLegTrajectory_FeedbackMessage";
}

template<>
inline const char * name<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>()
{
  return "starq_interfaces/action/RunLegTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<starq_interfaces::action::RunLegTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<starq_interfaces::action::RunLegTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<starq_interfaces::action::RunLegTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<starq_interfaces::action::RunLegTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<starq_interfaces::action::RunLegTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<starq_interfaces::action::RunLegTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<starq_interfaces::action::RunLegTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__TRAITS_HPP_
