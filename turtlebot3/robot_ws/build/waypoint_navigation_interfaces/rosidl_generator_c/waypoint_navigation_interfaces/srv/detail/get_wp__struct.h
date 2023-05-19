// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation_interfaces:srv/GetWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__STRUCT_H_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__STRUCT_H_

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

// Struct defined in srv/GetWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__GetWp_Request
{
  rosidl_runtime_c__String wp_id;
} waypoint_navigation_interfaces__srv__GetWp_Request;

// Struct for a sequence of waypoint_navigation_interfaces__srv__GetWp_Request.
typedef struct waypoint_navigation_interfaces__srv__GetWp_Request__Sequence
{
  waypoint_navigation_interfaces__srv__GetWp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__GetWp_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'wp'
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.h"

// Struct defined in srv/GetWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__GetWp_Response
{
  waypoint_navigation_interfaces__msg__Wp wp;
} waypoint_navigation_interfaces__srv__GetWp_Response;

// Struct for a sequence of waypoint_navigation_interfaces__srv__GetWp_Response.
typedef struct waypoint_navigation_interfaces__srv__GetWp_Response__Sequence
{
  waypoint_navigation_interfaces__srv__GetWp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__GetWp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__STRUCT_H_
