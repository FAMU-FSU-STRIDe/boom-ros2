// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__BUILDER_HPP_
#define STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__BUILDER_HPP_

#include "starq_interfaces/action/detail/run_leg_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_Goal_trajectory
{
public:
  explicit Init_RunLegTrajectory_Goal_trajectory(::starq_interfaces::action::RunLegTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_Goal trajectory(::starq_interfaces::action::RunLegTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Goal msg_;
};

class Init_RunLegTrajectory_Goal_publish_rate
{
public:
  Init_RunLegTrajectory_Goal_publish_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_Goal_trajectory publish_rate(::starq_interfaces::action::RunLegTrajectory_Goal::_publish_rate_type arg)
  {
    msg_.publish_rate = std::move(arg);
    return Init_RunLegTrajectory_Goal_trajectory(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_Goal>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_Goal_publish_rate();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_Result_motor_infos
{
public:
  explicit Init_RunLegTrajectory_Result_motor_infos(::starq_interfaces::action::RunLegTrajectory_Result & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_Result motor_infos(::starq_interfaces::action::RunLegTrajectory_Result::_motor_infos_type arg)
  {
    msg_.motor_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Result msg_;
};

class Init_RunLegTrajectory_Result_leg_infos
{
public:
  Init_RunLegTrajectory_Result_leg_infos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_Result_motor_infos leg_infos(::starq_interfaces::action::RunLegTrajectory_Result::_leg_infos_type arg)
  {
    msg_.leg_infos = std::move(arg);
    return Init_RunLegTrajectory_Result_motor_infos(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_Result>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_Result_leg_infos();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_Feedback_latest_motor_info
{
public:
  explicit Init_RunLegTrajectory_Feedback_latest_motor_info(::starq_interfaces::action::RunLegTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_Feedback latest_motor_info(::starq_interfaces::action::RunLegTrajectory_Feedback::_latest_motor_info_type arg)
  {
    msg_.latest_motor_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Feedback msg_;
};

class Init_RunLegTrajectory_Feedback_lastest_leg_info
{
public:
  Init_RunLegTrajectory_Feedback_lastest_leg_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_Feedback_latest_motor_info lastest_leg_info(::starq_interfaces::action::RunLegTrajectory_Feedback::_lastest_leg_info_type arg)
  {
    msg_.lastest_leg_info = std::move(arg);
    return Init_RunLegTrajectory_Feedback_latest_motor_info(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_Feedback>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_Feedback_lastest_leg_info();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_RunLegTrajectory_SendGoal_Request_goal(::starq_interfaces::action::RunLegTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Request goal(::starq_interfaces::action::RunLegTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Request msg_;
};

class Init_RunLegTrajectory_SendGoal_Request_goal_id
{
public:
  Init_RunLegTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_SendGoal_Request_goal goal_id(::starq_interfaces::action::RunLegTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunLegTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_SendGoal_Request>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_SendGoal_Request_goal_id();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_RunLegTrajectory_SendGoal_Response_stamp(::starq_interfaces::action::RunLegTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Response stamp(::starq_interfaces::action::RunLegTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Response msg_;
};

class Init_RunLegTrajectory_SendGoal_Response_accepted
{
public:
  Init_RunLegTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_SendGoal_Response_stamp accepted(::starq_interfaces::action::RunLegTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunLegTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_SendGoal_Response>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_SendGoal_Response_accepted();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_GetResult_Request_goal_id
{
public:
  Init_RunLegTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::starq_interfaces::action::RunLegTrajectory_GetResult_Request goal_id(::starq_interfaces::action::RunLegTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_GetResult_Request>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_GetResult_Request_goal_id();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_GetResult_Response_result
{
public:
  explicit Init_RunLegTrajectory_GetResult_Response_result(::starq_interfaces::action::RunLegTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_GetResult_Response result(::starq_interfaces::action::RunLegTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_GetResult_Response msg_;
};

class Init_RunLegTrajectory_GetResult_Response_status
{
public:
  Init_RunLegTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_GetResult_Response_result status(::starq_interfaces::action::RunLegTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunLegTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_GetResult_Response>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_GetResult_Response_status();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace action
{

namespace builder
{

class Init_RunLegTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_RunLegTrajectory_FeedbackMessage_feedback(::starq_interfaces::action::RunLegTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::action::RunLegTrajectory_FeedbackMessage feedback(::starq_interfaces::action::RunLegTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_FeedbackMessage msg_;
};

class Init_RunLegTrajectory_FeedbackMessage_goal_id
{
public:
  Init_RunLegTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunLegTrajectory_FeedbackMessage_feedback goal_id(::starq_interfaces::action::RunLegTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunLegTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::starq_interfaces::action::RunLegTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::action::RunLegTrajectory_FeedbackMessage>()
{
  return starq_interfaces::action::builder::Init_RunLegTrajectory_FeedbackMessage_goal_id();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__ACTION__DETAIL__RUN_LEG_TRAJECTORY__BUILDER_HPP_
