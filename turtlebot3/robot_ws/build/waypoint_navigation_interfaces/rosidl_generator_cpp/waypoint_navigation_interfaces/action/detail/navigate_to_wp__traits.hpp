// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__TRAITS_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__TRAITS_HPP_

#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_Goal>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_Goal";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_Goal>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_Goal";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_Result>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_Result";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_Result>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_Result";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_Feedback";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_Feedback";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_SendGoal_Request";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Goal>::value> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Goal>::value> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_SendGoal_Response";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_SendGoal";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_SendGoal";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>::value &&
    has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>::value &&
    has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>
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
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_GetResult_Request";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_GetResult_Response";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Result>::value> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Result>::value> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_GetResult";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_GetResult";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>::value &&
    has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>::value &&
    has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>::value
  >
{
};

template<>
struct is_service<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>()
{
  return "waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage";
}

template<>
inline const char * name<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>()
{
  return "waypoint_navigation_interfaces/action/NavigateToWp_FeedbackMessage";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>::value> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>::value> {};

template<>
struct is_message<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<waypoint_navigation_interfaces::action::NavigateToWp>
  : std::true_type
{
};

template<>
struct is_action_goal<waypoint_navigation_interfaces::action::NavigateToWp_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<waypoint_navigation_interfaces::action::NavigateToWp_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__TRAITS_HPP_
