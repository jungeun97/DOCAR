// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from waypoint_navigation_interfaces:srv/GetWps.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Request __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Request __declspec(deprecated)
#endif

namespace waypoint_navigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWps_Request_
{
  using Type = GetWps_Request_<ContainerAllocator>;

  explicit GetWps_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetWps_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Request
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Request
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWps_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWps_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWps_Request_

// alias to use template instance with default allocator
using GetWps_Request =
  waypoint_navigation_interfaces::srv::GetWps_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation_interfaces


// Include directives for member types
// Member 'wps'
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Response __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Response __declspec(deprecated)
#endif

namespace waypoint_navigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWps_Response_
{
  using Type = GetWps_Response_<ContainerAllocator>;

  explicit GetWps_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetWps_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _wps_type =
    std::vector<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>, typename ContainerAllocator::template rebind<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>::other>;
  _wps_type wps;

  // setters for named parameter idiom
  Type & set__wps(
    const std::vector<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>, typename ContainerAllocator::template rebind<waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>>::other> & _arg)
  {
    this->wps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Response
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__GetWps_Response
    std::shared_ptr<waypoint_navigation_interfaces::srv::GetWps_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWps_Response_ & other) const
  {
    if (this->wps != other.wps) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWps_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWps_Response_

// alias to use template instance with default allocator
using GetWps_Response =
  waypoint_navigation_interfaces::srv::GetWps_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

namespace waypoint_navigation_interfaces
{

namespace srv
{

struct GetWps
{
  using Request = waypoint_navigation_interfaces::srv::GetWps_Request;
  using Response = waypoint_navigation_interfaces::srv::GetWps_Response;
};

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__STRUCT_HPP_
