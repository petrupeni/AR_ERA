// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:msg/FlatTarget.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/msg/detail/flat_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `acceleration`
// Member `jerk`
// Member `snap`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
crazyflie_interfaces__msg__FlatTarget__init(crazyflie_interfaces__msg__FlatTarget * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__init(&msg->jerk)) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__init(&msg->snap)) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
    return false;
  }
  // yaw
  // yaw_rate
  // yaw_accel
  return true;
}

void
crazyflie_interfaces__msg__FlatTarget__fini(crazyflie_interfaces__msg__FlatTarget * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // jerk
  geometry_msgs__msg__Vector3__fini(&msg->jerk);
  // snap
  geometry_msgs__msg__Vector3__fini(&msg->snap);
  // yaw
  // yaw_rate
  // yaw_accel
}

bool
crazyflie_interfaces__msg__FlatTarget__are_equal(const crazyflie_interfaces__msg__FlatTarget * lhs, const crazyflie_interfaces__msg__FlatTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->jerk), &(rhs->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->snap), &(rhs->snap)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // yaw_accel
  if (lhs->yaw_accel != rhs->yaw_accel) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__msg__FlatTarget__copy(
  const crazyflie_interfaces__msg__FlatTarget * input,
  crazyflie_interfaces__msg__FlatTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->jerk), &(output->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->snap), &(output->snap)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // yaw_accel
  output->yaw_accel = input->yaw_accel;
  return true;
}

crazyflie_interfaces__msg__FlatTarget *
crazyflie_interfaces__msg__FlatTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__msg__FlatTarget * msg = (crazyflie_interfaces__msg__FlatTarget *)allocator.allocate(sizeof(crazyflie_interfaces__msg__FlatTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__msg__FlatTarget));
  bool success = crazyflie_interfaces__msg__FlatTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__msg__FlatTarget__destroy(crazyflie_interfaces__msg__FlatTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazyflie_interfaces__msg__FlatTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazyflie_interfaces__msg__FlatTarget__Sequence__init(crazyflie_interfaces__msg__FlatTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__msg__FlatTarget * data = NULL;

  if (size) {
    data = (crazyflie_interfaces__msg__FlatTarget *)allocator.zero_allocate(size, sizeof(crazyflie_interfaces__msg__FlatTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__msg__FlatTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__msg__FlatTarget__fini(&data[i - 1]);
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
crazyflie_interfaces__msg__FlatTarget__Sequence__fini(crazyflie_interfaces__msg__FlatTarget__Sequence * array)
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
      crazyflie_interfaces__msg__FlatTarget__fini(&array->data[i]);
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

crazyflie_interfaces__msg__FlatTarget__Sequence *
crazyflie_interfaces__msg__FlatTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__msg__FlatTarget__Sequence * array = (crazyflie_interfaces__msg__FlatTarget__Sequence *)allocator.allocate(sizeof(crazyflie_interfaces__msg__FlatTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__msg__FlatTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__msg__FlatTarget__Sequence__destroy(crazyflie_interfaces__msg__FlatTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazyflie_interfaces__msg__FlatTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazyflie_interfaces__msg__FlatTarget__Sequence__are_equal(const crazyflie_interfaces__msg__FlatTarget__Sequence * lhs, const crazyflie_interfaces__msg__FlatTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__msg__FlatTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__msg__FlatTarget__Sequence__copy(
  const crazyflie_interfaces__msg__FlatTarget__Sequence * input,
  crazyflie_interfaces__msg__FlatTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__msg__FlatTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazyflie_interfaces__msg__FlatTarget * data =
      (crazyflie_interfaces__msg__FlatTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__msg__FlatTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__msg__FlatTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazyflie_interfaces__msg__FlatTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
