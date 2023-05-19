// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_H_
#define WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/Wp in the package waypoint_navigation_interfaces.
typedef struct waypoint_navigation_interfaces__msg__Wp
{
  rosidl_runtime_c__String id;
  geometry_msgs__msg__Pose pose;
} waypoint_navigation_interfaces__msg__Wp;

// Struct for a sequence of waypoint_navigation_interfaces__msg__Wp.
typedef struct waypoint_navigation_interfaces__msg__Wp__Sequence
{
  waypoint_navigation_interfaces__msg__Wp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation_interfaces__msg__Wp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_H_
