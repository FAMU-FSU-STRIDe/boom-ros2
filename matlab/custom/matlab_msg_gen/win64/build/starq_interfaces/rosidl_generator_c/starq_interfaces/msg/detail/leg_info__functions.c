// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pos_estimate`
// Member `vel_estimate`
// Member `acc_estimate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
starq_interfaces__msg__LegInfo__init(starq_interfaces__msg__LegInfo * msg)
{
  if (!msg) {
    return false;
  }
  // pos_estimate
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pos_estimate, 0)) {
    starq_interfaces__msg__LegInfo__fini(msg);
    return false;
  }
  // vel_estimate
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel_estimate, 0)) {
    starq_interfaces__msg__LegInfo__fini(msg);
    return false;
  }
  // acc_estimate
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_estimate, 0)) {
    starq_interfaces__msg__LegInfo__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__msg__LegInfo__fini(starq_interfaces__msg__LegInfo * msg)
{
  if (!msg) {
    return;
  }
  // pos_estimate
  rosidl_runtime_c__float__Sequence__fini(&msg->pos_estimate);
  // vel_estimate
  rosidl_runtime_c__float__Sequence__fini(&msg->vel_estimate);
  // acc_estimate
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_estimate);
}

starq_interfaces__msg__LegInfo *
starq_interfaces__msg__LegInfo__create()
{
  starq_interfaces__msg__LegInfo * msg = (starq_interfaces__msg__LegInfo *)malloc(sizeof(starq_interfaces__msg__LegInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__msg__LegInfo));
  bool success = starq_interfaces__msg__LegInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__msg__LegInfo__destroy(starq_interfaces__msg__LegInfo * msg)
{
  if (msg) {
    starq_interfaces__msg__LegInfo__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__msg__LegInfo__Sequence__init(starq_interfaces__msg__LegInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__msg__LegInfo * data = NULL;
  if (size) {
    data = (starq_interfaces__msg__LegInfo *)calloc(size, sizeof(starq_interfaces__msg__LegInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__msg__LegInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__msg__LegInfo__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
starq_interfaces__msg__LegInfo__Sequence__fini(starq_interfaces__msg__LegInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__msg__LegInfo__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

starq_interfaces__msg__LegInfo__Sequence *
starq_interfaces__msg__LegInfo__Sequence__create(size_t size)
{
  starq_interfaces__msg__LegInfo__Sequence * array = (starq_interfaces__msg__LegInfo__Sequence *)malloc(sizeof(starq_interfaces__msg__LegInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__msg__LegInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__msg__LegInfo__Sequence__destroy(starq_interfaces__msg__LegInfo__Sequence * array)
{
  if (array) {
    starq_interfaces__msg__LegInfo__Sequence__fini(array);
  }
  free(array);
}
