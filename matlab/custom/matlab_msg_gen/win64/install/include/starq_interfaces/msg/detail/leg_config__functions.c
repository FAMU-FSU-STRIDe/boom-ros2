// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `kinematic_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
starq_interfaces__msg__LegConfig__init(starq_interfaces__msg__LegConfig * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // kinematic_type
  if (!rosidl_runtime_c__String__init(&msg->kinematic_type)) {
    starq_interfaces__msg__LegConfig__fini(msg);
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->motor_ids, 0)) {
    starq_interfaces__msg__LegConfig__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__msg__LegConfig__fini(starq_interfaces__msg__LegConfig * msg)
{
  if (!msg) {
    return;
  }
  // id
  // kinematic_type
  rosidl_runtime_c__String__fini(&msg->kinematic_type);
  // motor_ids
  rosidl_runtime_c__uint8__Sequence__fini(&msg->motor_ids);
}

starq_interfaces__msg__LegConfig *
starq_interfaces__msg__LegConfig__create()
{
  starq_interfaces__msg__LegConfig * msg = (starq_interfaces__msg__LegConfig *)malloc(sizeof(starq_interfaces__msg__LegConfig));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__msg__LegConfig));
  bool success = starq_interfaces__msg__LegConfig__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__msg__LegConfig__destroy(starq_interfaces__msg__LegConfig * msg)
{
  if (msg) {
    starq_interfaces__msg__LegConfig__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__msg__LegConfig__Sequence__init(starq_interfaces__msg__LegConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__msg__LegConfig * data = NULL;
  if (size) {
    data = (starq_interfaces__msg__LegConfig *)calloc(size, sizeof(starq_interfaces__msg__LegConfig));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__msg__LegConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__msg__LegConfig__fini(&data[i - 1]);
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
starq_interfaces__msg__LegConfig__Sequence__fini(starq_interfaces__msg__LegConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__msg__LegConfig__fini(&array->data[i]);
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

starq_interfaces__msg__LegConfig__Sequence *
starq_interfaces__msg__LegConfig__Sequence__create(size_t size)
{
  starq_interfaces__msg__LegConfig__Sequence * array = (starq_interfaces__msg__LegConfig__Sequence *)malloc(sizeof(starq_interfaces__msg__LegConfig__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__msg__LegConfig__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__msg__LegConfig__Sequence__destroy(starq_interfaces__msg__LegConfig__Sequence * array)
{
  if (array) {
    starq_interfaces__msg__LegConfig__Sequence__fini(array);
  }
  free(array);
}
