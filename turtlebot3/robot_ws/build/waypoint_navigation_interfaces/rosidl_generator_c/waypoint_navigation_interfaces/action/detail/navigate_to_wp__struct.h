// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__STRUCT_H_
#define WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wp_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Goal
{
  rosidl_runtime_c__String wp_id;
} waypoint_navigation_interfaces__action__NavigateToWp_Goal;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_Goal.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Goal__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Result
{
  uint8_t structure_needs_at_least_one_member;
} waypoint_navigation_interfaces__action__NavigateToWp_Result;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_Result.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Result__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_Result__Sequence;


// Constants defined in the message

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} waypoint_navigation_interfaces__action__NavigateToWp_Feedback;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_Feedback.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_Feedback__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  waypoint_navigation_interfaces__action__NavigateToWp_Goal goal;
} waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response
{
  int8_t status;
  waypoint_navigation_interfaces__action__NavigateToWp_Result result;
} waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"

// Struct defined in action/NavigateToWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  waypoint_navigation_interfaces__action__NavigateToWp_Feedback feedback;
} waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage;

// Struct for a sequence of waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage.
typedef struct waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage__Sequence
{
  waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_WP__STRUCT_H_
