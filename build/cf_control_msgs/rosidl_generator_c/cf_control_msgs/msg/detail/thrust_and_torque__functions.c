// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice
#include "cf_control_msgs/msg/detail/thrust_and_torque__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `torque`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
cf_control_msgs__msg__ThrustAndTorque__init(cf_control_msgs__msg__ThrustAndTorque * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // collective_thrust
  // torque
  if (!geometry_msgs__msg__Vector3__init(&msg->torque)) {
    cf_control_msgs__msg__ThrustAndTorque__fini(msg);
    return false;
  }
  return true;
}

void
cf_control_msgs__msg__ThrustAndTorque__fini(cf_control_msgs__msg__ThrustAndTorque * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // collective_thrust
  // torque
  geometry_msgs__msg__Vector3__fini(&msg->torque);
}

bool
cf_control_msgs__msg__ThrustAndTorque__are_equal(const cf_control_msgs__msg__ThrustAndTorque * lhs, const cf_control_msgs__msg__ThrustAndTorque * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // collective_thrust
  if (lhs->collective_thrust != rhs->collective_thrust) {
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  return true;
}

bool
cf_control_msgs__msg__ThrustAndTorque__copy(
  const cf_control_msgs__msg__ThrustAndTorque * input,
  cf_control_msgs__msg__ThrustAndTorque * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // collective_thrust
  output->collective_thrust = input->collective_thrust;
  // torque
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  return true;
}

cf_control_msgs__msg__ThrustAndTorque *
cf_control_msgs__msg__ThrustAndTorque__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cf_control_msgs__msg__ThrustAndTorque * msg = (cf_control_msgs__msg__ThrustAndTorque *)allocator.allocate(sizeof(cf_control_msgs__msg__ThrustAndTorque), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_control_msgs__msg__ThrustAndTorque));
  bool success = cf_control_msgs__msg__ThrustAndTorque__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cf_control_msgs__msg__ThrustAndTorque__destroy(cf_control_msgs__msg__ThrustAndTorque * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cf_control_msgs__msg__ThrustAndTorque__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__init(cf_control_msgs__msg__ThrustAndTorque__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cf_control_msgs__msg__ThrustAndTorque * data = NULL;

  if (size) {
    data = (cf_control_msgs__msg__ThrustAndTorque *)allocator.zero_allocate(size, sizeof(cf_control_msgs__msg__ThrustAndTorque), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_control_msgs__msg__ThrustAndTorque__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_control_msgs__msg__ThrustAndTorque__fini(&data[i - 1]);
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
cf_control_msgs__msg__ThrustAndTorque__Sequence__fini(cf_control_msgs__msg__ThrustAndTorque__Sequence * array)
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
      cf_control_msgs__msg__ThrustAndTorque__fini(&array->data[i]);
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

cf_control_msgs__msg__ThrustAndTorque__Sequence *
cf_control_msgs__msg__ThrustAndTorque__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cf_control_msgs__msg__ThrustAndTorque__Sequence * array = (cf_control_msgs__msg__ThrustAndTorque__Sequence *)allocator.allocate(sizeof(cf_control_msgs__msg__ThrustAndTorque__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cf_control_msgs__msg__ThrustAndTorque__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cf_control_msgs__msg__ThrustAndTorque__Sequence__destroy(cf_control_msgs__msg__ThrustAndTorque__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cf_control_msgs__msg__ThrustAndTorque__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__are_equal(const cf_control_msgs__msg__ThrustAndTorque__Sequence * lhs, const cf_control_msgs__msg__ThrustAndTorque__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cf_control_msgs__msg__ThrustAndTorque__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__copy(
  const cf_control_msgs__msg__ThrustAndTorque__Sequence * input,
  cf_control_msgs__msg__ThrustAndTorque__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cf_control_msgs__msg__ThrustAndTorque);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cf_control_msgs__msg__ThrustAndTorque * data =
      (cf_control_msgs__msg__ThrustAndTorque *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cf_control_msgs__msg__ThrustAndTorque__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cf_control_msgs__msg__ThrustAndTorque__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cf_control_msgs__msg__ThrustAndTorque__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
