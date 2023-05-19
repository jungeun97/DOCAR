// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation_interfaces:srv/GetWps.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_H_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetWps in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__GetWps_Request
{
  uint8_t structure_needs_at_least_one_member;
} waypoint_navigation_interfaces__srv__GetWps_Request;

// Struct for a sequence of waypoint_navigation_interfaces__srv__GetWps_Request.
typedef struct waypoint_navigation_interfaces__srv__GetWps_Request__Sequence
{
  waypoint_navigation_interfaces__srv__GetWps_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__GetWps_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'wps'
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.h"

// Struct defined in srv/GetWps in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__srv__GetWps_Response
{
  waypoint_navigation_interfaces__msg__Wp__Sequence wps;
} waypoint_navigation_interfaces__srv__GetWps_Response;

// Struct for a sequence of waypoint_navigation_interfaces__srv__GetWps_Response.
typedef struct waypoint_navigation_interfaces__srv__GetWps_Response__Sequence
{
  waypoint_navigation_interfaces__srv__GetWps_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__srv__GetWps_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_H_
