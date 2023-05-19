// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__waypoint_navigation_interfaces__msg__Wp __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation_interfaces__msg__Wp __declspec(deprecated)
#endif

namespace waypoint_navigation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wp_
{
  using Type = Wp_<ContainerAllocator>;

  explicit Wp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit Wp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation_interfaces__msg__Wp
    std::shared_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation_interfaces__msg__Wp
    std::shared_ptr<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wp_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wp_

// alias to use template instance with default allocator
using Wp =
  waypoint_navigation_interfaces::msg::Wp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__STRUCT_HPP_
