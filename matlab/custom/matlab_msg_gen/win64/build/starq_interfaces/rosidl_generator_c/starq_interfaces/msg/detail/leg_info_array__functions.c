// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:msg\LegInfoArray.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_info_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `infos`
#include "starq_interfaces/msg/detail/leg_info__functions.h"

bool
starq_interfaces__msg__LegInfoArray__init(starq_interfaces__msg__LegInfoArray * msg)
{
  if (!msg) {
    return false;
  }
  // infos
  if (!starq_interfaces__msg__LegInfo__Sequence__init(&msg->infos, 0)) {
    starq_interfaces__msg__LegInfoArray__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__msg__LegInfoArray__fini(starq_interfaces__msg__LegInfoArray * msg)
{
  if (!msg) {
    return;
  }
  // infos
  starq_interfaces__msg__LegInfo__Sequence__fini(&msg->infos);
}

starq_interfaces__msg__LegInfoArray *
starq_interfaces__msg__LegInfoArray__create()
{
  starq_interfaces__msg__LegInfoArray * msg = (starq_interfaces__msg__LegInfoArray *)malloc(sizeof(starq_interfaces__msg__LegInfoArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__msg__LegInfoArray));
  bool success = starq_interfaces__msg__LegInfoArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__msg__LegInfoArray__destroy(starq_interfaces__msg__LegInfoArray * msg)
{
  if (msg) {
    starq_interfaces__msg__LegInfoArray__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__msg__LegInfoArray__Sequence__init(starq_interfaces__msg__LegInfoArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__msg__LegInfoArray * data = NULL;
  if (size) {
    data = (starq_interfaces__msg__LegInfoArray *)calloc(size, sizeof(starq_interfaces__msg__LegInfoArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__msg__LegInfoArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__msg__LegInfoArray__fini(&data[i - 1]);
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
starq_interfaces__msg__LegInfoArray__Sequence__fini(starq_interfaces__msg__LegInfoArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__msg__LegInfoArray__fini(&array->data[i]);
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

starq_interfaces__msg__LegInfoArray__Sequence *
starq_interfaces__msg__LegInfoArray__Sequence__create(size_t size)
{
  starq_interfaces__msg__LegInfoArray__Sequence * array = (starq_interfaces__msg__LegInfoArray__Sequence *)malloc(sizeof(starq_interfaces__msg__LegInfoArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__msg__LegInfoArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__msg__LegInfoArray__Sequence__destroy(starq_interfaces__msg__LegInfoArray__Sequence * array)
{
  if (array) {
    starq_interfaces__msg__LegInfoArray__Sequence__fini(array);
  }
  free(array);
}
