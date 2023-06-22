// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `input_pos`
// Member `input_vel`
// Member `input_acc`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
starq_interfaces__msg__LegCommand__init(starq_interfaces__msg__LegCommand * msg)
{
  if (!msg) {
    return false;
  }
  // input_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->input_pos, 0)) {
    starq_interfaces__msg__LegCommand__fini(msg);
    return false;
  }
  // input_vel
  if (!rosidl_runtime_c__float__Sequence__init(&msg->input_vel, 0)) {
    starq_interfaces__msg__LegCommand__fini(msg);
    return false;
  }
  // input_acc
  if (!rosidl_runtime_c__float__Sequence__init(&msg->input_acc, 0)) {
    starq_interfaces__msg__LegCommand__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__msg__LegCommand__fini(starq_interfaces__msg__LegCommand * msg)
{
  if (!msg) {
    return;
  }
  // input_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->input_pos);
  // input_vel
  rosidl_runtime_c__float__Sequence__fini(&msg->input_vel);
  // input_acc
  rosidl_runtime_c__float__Sequence__fini(&msg->input_acc);
}

starq_interfaces__msg__LegCommand *
starq_interfaces__msg__LegCommand__create()
{
  starq_interfaces__msg__LegCommand * msg = (starq_interfaces__msg__LegCommand *)malloc(sizeof(starq_interfaces__msg__LegCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__msg__LegCommand));
  bool success = starq_interfaces__msg__LegCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__msg__LegCommand__destroy(starq_interfaces__msg__LegCommand * msg)
{
  if (msg) {
    starq_interfaces__msg__LegCommand__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__msg__LegCommand__Sequence__init(starq_interfaces__msg__LegCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__msg__LegCommand * data = NULL;
  if (size) {
    data = (starq_interfaces__msg__LegCommand *)calloc(size, sizeof(starq_interfaces__msg__LegCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__msg__LegCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__msg__LegCommand__fini(&data[i - 1]);
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
starq_interfaces__msg__LegCommand__Sequence__fini(starq_interfaces__msg__LegCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__msg__LegCommand__fini(&array->data[i]);
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

starq_interfaces__msg__LegCommand__Sequence *
starq_interfaces__msg__LegCommand__Sequence__create(size_t size)
{
  starq_interfaces__msg__LegCommand__Sequence * array = (starq_interfaces__msg__LegCommand__Sequence *)malloc(sizeof(starq_interfaces__msg__LegCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__msg__LegCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__msg__LegCommand__Sequence__destroy(starq_interfaces__msg__LegCommand__Sequence * array)
{
  if (array) {
    starq_interfaces__msg__LegCommand__Sequence__fini(array);
  }
  free(array);
}
