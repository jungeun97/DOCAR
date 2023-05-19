// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `wp`
#include "waypoint_navigation_interfaces/msg/detail/wp__functions.h"

bool
waypoint_navigation_interfaces__srv__AddWp_Request__init(waypoint_navigation_interfaces__srv__AddWp_Request * msg)
{
  if (!msg) {
    return false;
  }
  // wp
  if (!waypoint_navigation_interfaces__msg__Wp__init(&msg->wp)) {
    waypoint_navigation_interfaces__srv__AddWp_Request__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation_interfaces__srv__AddWp_Request__fini(waypoint_navigation_interfaces__srv__AddWp_Request * msg)
{
  if (!msg) {
    return;
  }
  // wp
  waypoint_navigation_interfaces__msg__Wp__fini(&msg->wp);
}

bool
waypoint_navigation_interfaces__srv__AddWp_Request__are_equal(const waypoint_navigation_interfaces__srv__AddWp_Request * lhs, const waypoint_navigation_interfaces__srv__AddWp_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wp
  if (!waypoint_navigation_interfaces__msg__Wp__are_equal(
      &(lhs->wp), &(rhs->wp)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation_interfaces__srv__AddWp_Request__copy(
  const waypoint_navigation_interfaces__srv__AddWp_Request * input,
  waypoint_navigation_interfaces__srv__AddWp_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // wp
  if (!waypoint_navigation_interfaces__msg__Wp__copy(
      &(input->wp), &(output->wp)))
  {
    return false;
  }
  return true;
}

waypoint_navigation_interfaces__srv__AddWp_Request *
waypoint_navigation_interfaces__srv__AddWp_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Request * msg = (waypoint_navigation_interfaces__srv__AddWp_Request *)allocator.allocate(sizeof(waypoint_navigation_interfaces__srv__AddWp_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation_interfaces__srv__AddWp_Request));
  bool success = waypoint_navigation_interfaces__srv__AddWp_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation_interfaces__srv__AddWp_Request__destroy(waypoint_navigation_interfaces__srv__AddWp_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation_interfaces__srv__AddWp_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__init(waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Request * data = NULL;

  if (size) {
    data = (waypoint_navigation_interfaces__srv__AddWp_Request *)allocator.zero_allocate(size, sizeof(waypoint_navigation_interfaces__srv__AddWp_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation_interfaces__srv__AddWp_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation_interfaces__srv__AddWp_Request__fini(&data[i - 1]);
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
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__fini(waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * array)
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
      waypoint_navigation_interfaces__srv__AddWp_Request__fini(&array->data[i]);
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

waypoint_navigation_interfaces__srv__AddWp_Request__Sequence *
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * array = (waypoint_navigation_interfaces__srv__AddWp_Request__Sequence *)allocator.allocate(sizeof(waypoint_navigation_interfaces__srv__AddWp_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__destroy(waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__are_equal(const waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * lhs, const waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation_interfaces__srv__AddWp_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation_interfaces__srv__AddWp_Request__Sequence__copy(
  const waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * input,
  waypoint_navigation_interfaces__srv__AddWp_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation_interfaces__srv__AddWp_Request);
    waypoint_navigation_interfaces__srv__AddWp_Request * data =
      (waypoint_navigation_interfaces__srv__AddWp_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation_interfaces__srv__AddWp_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          waypoint_navigation_interfaces__srv__AddWp_Request__fini(&data[i]);
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
    if (!waypoint_navigation_interfaces__srv__AddWp_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
waypoint_navigation_interfaces__srv__AddWp_Response__init(waypoint_navigation_interfaces__srv__AddWp_Response * msg)
{
  if (!msg) {
    return false;
  }
  // overwrite
  return true;
}

void
waypoint_navigation_interfaces__srv__AddWp_Response__fini(waypoint_navigation_interfaces__srv__AddWp_Response * msg)
{
  if (!msg) {
    return;
  }
  // overwrite
}

bool
waypoint_navigation_interfaces__srv__AddWp_Response__are_equal(const waypoint_navigation_interfaces__srv__AddWp_Response * lhs, const waypoint_navigation_interfaces__srv__AddWp_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // overwrite
  if (lhs->overwrite != rhs->overwrite) {
    return false;
  }
  return true;
}

bool
waypoint_navigation_interfaces__srv__AddWp_Response__copy(
  const waypoint_navigation_interfaces__srv__AddWp_Response * input,
  waypoint_navigation_interfaces__srv__AddWp_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // overwrite
  output->overwrite = input->overwrite;
  return true;
}

waypoint_navigation_interfaces__srv__AddWp_Response *
waypoint_navigation_interfaces__srv__AddWp_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Response * msg = (waypoint_navigation_interfaces__srv__AddWp_Response *)allocator.allocate(sizeof(waypoint_navigation_interfaces__srv__AddWp_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation_interfaces__srv__AddWp_Response));
  bool success = waypoint_navigation_interfaces__srv__AddWp_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation_interfaces__srv__AddWp_Response__destroy(waypoint_navigation_interfaces__srv__AddWp_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation_interfaces__srv__AddWp_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__init(waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Response * data = NULL;

  if (size) {
    data = (waypoint_navigation_interfaces__srv__AddWp_Response *)allocator.zero_allocate(size, sizeof(waypoint_navigation_interfaces__srv__AddWp_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation_interfaces__srv__AddWp_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation_interfaces__srv__AddWp_Response__fini(&data[i - 1]);
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
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__fini(waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * array)
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
      waypoint_navigation_interfaces__srv__AddWp_Response__fini(&array->data[i]);
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

waypoint_navigation_interfaces__srv__AddWp_Response__Sequence *
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * array = (waypoint_navigation_interfaces__srv__AddWp_Response__Sequence *)allocator.allocate(sizeof(waypoint_navigation_interfaces__srv__AddWp_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__destroy(waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__are_equal(const waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * lhs, const waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation_interfaces__srv__AddWp_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation_interfaces__srv__AddWp_Response__Sequence__copy(
  const waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * input,
  waypoint_navigation_interfaces__srv__AddWp_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation_interfaces__srv__AddWp_Response);
    waypoint_navigation_interfaces__srv__AddWp_Response * data =
      (waypoint_navigation_interfaces__srv__AddWp_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation_interfaces__srv__AddWp_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          waypoint_navigation_interfaces__srv__AddWp_Response__fini(&data[i]);
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
    if (!waypoint_navigation_interfaces__srv__AddWp_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
