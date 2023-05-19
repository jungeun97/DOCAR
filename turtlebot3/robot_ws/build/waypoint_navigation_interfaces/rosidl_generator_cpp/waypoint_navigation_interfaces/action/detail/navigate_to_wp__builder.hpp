// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__BUILDER_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__BUILDER_HPP_

#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_Goal_wp_id
{
public:
  Init_NavigateToWp_Goal_wp_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_Goal wp_id(::waypoint_navigation_interfaces::action::NavigateToWp_Goal::_wp_id_type arg)
  {
    msg_.wp_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_Goal>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_Goal_wp_id();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_Result>()
{
  return ::waypoint_navigation_interfaces::action::NavigateToWp_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_Feedback>()
{
  return ::waypoint_navigation_interfaces::action::NavigateToWp_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToWp_SendGoal_Request_goal(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request goal(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request msg_;
};

class Init_NavigateToWp_SendGoal_Request_goal_id
{
public:
  Init_NavigateToWp_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToWp_SendGoal_Request_goal goal_id(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToWp_SendGoal_Request_goal(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_SendGoal_Request_goal_id();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToWp_SendGoal_Response_stamp(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response stamp(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response msg_;
};

class Init_NavigateToWp_SendGoal_Response_accepted
{
public:
  Init_NavigateToWp_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToWp_SendGoal_Response_stamp accepted(::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToWp_SendGoal_Response_stamp(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_SendGoal_Response_accepted();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_GetResult_Request_goal_id
{
public:
  Init_NavigateToWp_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request goal_id(::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_GetResult_Request_goal_id();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_GetResult_Response_result
{
public:
  explicit Init_NavigateToWp_GetResult_Response_result(::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response result(::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response msg_;
};

class Init_NavigateToWp_GetResult_Response_status
{
public:
  Init_NavigateToWp_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToWp_GetResult_Response_result status(::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToWp_GetResult_Response_result(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_GetResult_Response_status();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToWp_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToWp_FeedbackMessage_feedback(::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage feedback(::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage msg_;
};

class Init_NavigateToWp_FeedbackMessage_goal_id
{
public:
  Init_NavigateToWp_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToWp_FeedbackMessage_feedback goal_id(::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToWp_FeedbackMessage_feedback(msg_);
  }

private:
  ::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>()
{
  return waypoint_navigation_interfaces::action::builder::Init_NavigateToWp_FeedbackMessage_goal_id();
}

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__BUILDER_HPP_
