// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__BUILDER_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__BUILDER_HPP_

#include "waypoint_navigation_interfaces/msg/detail/wp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace waypoint_navigation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Wp_pose
{
public:
  explicit Init_Wp_pose(::waypoint_navigation_interfaces::msg::Wp & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation_interfaces::msg::Wp pose(::waypoint_navigation_interfaces::msg::Wp::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::msg::Wp msg_;
};

class Init_Wp_id
{
public:
  Init_Wp_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wp_pose id(::waypoint_navigation_interfaces::msg::Wp::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Wp_pose(msg_);
  }

private:
  ::waypoint_navigation_interfaces::msg::Wp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::msg::Wp>()
{
  return waypoint_navigation_interfaces::msg::builder::Init_Wp_id();
}

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__BUILDER_HPP_
