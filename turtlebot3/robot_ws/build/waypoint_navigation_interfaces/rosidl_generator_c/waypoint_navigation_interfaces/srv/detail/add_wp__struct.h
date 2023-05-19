// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_H_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wp'
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.h"

// Struct defined in srv/AddWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__AddWp_Request
{
  waypoint_navigation_interfaces__msg__Wp wp;
} waypoint_navigation_interfaces__srv__AddWp_Request;

// Struct for a sequence of waypoint_navigation_interfaces__srv__AddWp_Request.
typedef struct waypoint_navigation_interfaces__srv__AddWp_Request__Sequence
{
  waypoint_navigation_interfaces__srv__AddWp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__AddWp_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddWp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__AddWp_Response
{
  bool overwrite;
} waypoint_navigation_interfaces__srv__AddWp_Response;

// Struct for a sequence of waypoint_navigation_interfaces__srv__AddWp_Response.
typedef struct waypoint_navigation_interfaces__srv__AddWp_Response__Sequence
{
  waypoint_navigation_interfaces__srv__AddWp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__AddWp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_H_
