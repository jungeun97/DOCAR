// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/msg/detail/wp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
waypoint_navigation_interfaces__msg__Wp__init(waypoint_navigation_interfaces__msg__Wp * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    waypoint_navigation_interfaces__msg__Wp__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    waypoint_navigation_interfaces__msg__Wp__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation_interfaces__msg__Wp__fini(waypoint_navigation_interfaces__msg__Wp * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
waypoint_navigation_interfaces__msg__Wp__are_equal(const waypoint_navigation_interfaces__msg__Wp * lhs, const waypoint_navigation_interfaces__msg__Wp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation_interfaces__msg__Wp__copy(
  const waypoint_navigation_interfaces__msg__Wp * input,
  waypoint_navigation_interfaces__msg__Wp * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

waypoint_navigation_interfaces__msg__Wp *
waypoint_navigation_interfaces__msg__Wp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__msg__Wp * msg = (waypoint_navigation_interfaces__msg__Wp *)allocator.allocate(sizeof(waypoint_navigation_interfaces__msg__Wp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation_interfaces__msg__Wp));
  bool success = waypoint_navigation_interfaces__msg__Wp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation_interfaces__msg__Wp__destroy(waypoint_navigation_interfaces__msg__Wp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation_interfaces__msg__Wp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation_interfaces__msg__Wp__Sequence__init(waypoint_navigation_interfaces__msg__Wp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__msg__Wp * data = NULL;

  if (size) {
    data = (waypoint_navigation_interfaces__msg__Wp *)allocator.zero_allocate(size, sizeof(waypoint_navigation_interfaces__msg__Wp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation_interfaces__msg__Wp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation_interfaces__msg__Wp__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
waypoint_navigation_interfaces__msg__Wp__Sequence__fini(waypoint_navigation_interfaces__msg__Wp__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      waypoint_navigation_interfaces__msg__Wp__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

waypoint_navigation_interfaces__msg__Wp__Sequence *
waypoint_navigation_interfaces__msg__Wp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__msg__Wp__Sequence * array = (waypoint_navigation_interfaces__msg__Wp__Sequence *)allocator.allocate(sizeof(waypoint_navigation_interfaces__msg__Wp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation_interfaces__msg__Wp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation_interfaces__msg__Wp__Sequence__destroy(waypoint_navigation_interfaces__msg__Wp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation_interfaces__msg__Wp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation_interfaces__msg__Wp__Sequence__are_equal(const waypoint_navigation_interfaces__msg__Wp__Sequence * lhs, const waypoint_navigation_interfaces__msg__Wp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation_interfaces__msg__Wp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation_interfaces__msg__Wp__Sequence__copy(
  const waypoint_navigation_interfaces__msg__Wp__Sequence * input,
  waypoint_navigation_interfaces__msg__Wp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation_interfaces__msg__Wp);
    waypoint_navigation_interfaces__msg__Wp * data =
      (waypoint_navigation_interfaces__msg__Wp *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation_interfaces__msg__Wp__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          waypoint_navigation_interfaces__msg__Wp__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation_interfaces__msg__Wp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
