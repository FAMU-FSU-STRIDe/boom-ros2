// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:msg\ODriveInfo.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
starq_interfaces__msg__ODriveInfo__init(starq_interfaces__msg__ODriveInfo * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // fault
  // pos_estimate
  // vel_estimate
  // torque_estimate
  // torque_target
  // iq_setpoint
  // iq_measured
  // motor_temperature
  // bus_voltage
  // bus_current
  // pos_error
  // vel_error
  // torque_error
  return true;
}

void
starq_interfaces__msg__ODriveInfo__fini(starq_interfaces__msg__ODriveInfo * msg)
{
  if (!msg) {
    return;
  }
  // state
  // fault
  // pos_estimate
  // vel_estimate
  // torque_estimate
  // torque_target
  // iq_setpoint
  // iq_measured
  // motor_temperature
  // bus_voltage
  // bus_current
  // pos_error
  // vel_error
  // torque_error
}

starq_interfaces__msg__ODriveInfo *
starq_interfaces__msg__ODriveInfo__create()
{
  starq_interfaces__msg__ODriveInfo * msg = (starq_interfaces__msg__ODriveInfo *)malloc(sizeof(starq_interfaces__msg__ODriveInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__msg__ODriveInfo));
  bool success = starq_interfaces__msg__ODriveInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__msg__ODriveInfo__destroy(starq_interfaces__msg__ODriveInfo * msg)
{
  if (msg) {
    starq_interfaces__msg__ODriveInfo__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__msg__ODriveInfo__Sequence__init(starq_interfaces__msg__ODriveInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__msg__ODriveInfo * data = NULL;
  if (size) {
    data = (starq_interfaces__msg__ODriveInfo *)calloc(size, sizeof(starq_interfaces__msg__ODriveInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__msg__ODriveInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__msg__ODriveInfo__fini(&data[i - 1]);
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
starq_interfaces__msg__ODriveInfo__Sequence__fini(starq_interfaces__msg__ODriveInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__msg__ODriveInfo__fini(&array->data[i]);
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

starq_interfaces__msg__ODriveInfo__Sequence *
starq_interfaces__msg__ODriveInfo__Sequence__create(size_t size)
{
  starq_interfaces__msg__ODriveInfo__Sequence * array = (starq_interfaces__msg__ODriveInfo__Sequence *)malloc(sizeof(starq_interfaces__msg__ODriveInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__msg__ODriveInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__msg__ODriveInfo__Sequence__destroy(starq_interfaces__msg__ODriveInfo__Sequence * array)
{
  if (array) {
    starq_interfaces__msg__ODriveInfo__Sequence__fini(array);
  }
  free(array);
}
