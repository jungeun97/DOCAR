// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__TRAITS_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__TRAITS_HPP_

#include "waypoint_navigation_interfaces/msg/detail/wp__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::msg::Wp>()
{
  return "waypoint_navigation_interfaces::msg::Wp";
}

template<>
inline const char * name<waypoint_navigation_interfaces::msg::Wp>()
{
  return "waypoint_navigation_interfaces/msg/Wp";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::msg::Wp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::msg::Wp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<waypoint_navigation_interfaces::msg::Wp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__TRAITS_HPP_
