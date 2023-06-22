// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/srv/detail/configure_legs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `configs`
#include "starq_interfaces/msg/detail/leg_config__functions.h"

bool
starq_interfaces__srv__ConfigureLegs_Request__init(starq_interfaces__srv__ConfigureLegs_Request * msg)
{
  if (!msg) {
    return false;
  }
  // configs
  if (!starq_interfaces__msg__LegConfig__Sequence__init(&msg->configs, 0)) {
    starq_interfaces__srv__ConfigureLegs_Request__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__srv__ConfigureLegs_Request__fini(starq_interfaces__srv__ConfigureLegs_Request * msg)
{
  if (!msg) {
    return;
  }
  // configs
  starq_interfaces__msg__LegConfig__Sequence__fini(&msg->configs);
}

starq_interfaces__srv__ConfigureLegs_Request *
starq_interfaces__srv__ConfigureLegs_Request__create()
{
  starq_interfaces__srv__ConfigureLegs_Request * msg = (starq_interfaces__srv__ConfigureLegs_Request *)malloc(sizeof(starq_interfaces__srv__ConfigureLegs_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__srv__ConfigureLegs_Request));
  bool success = starq_interfaces__srv__ConfigureLegs_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__srv__ConfigureLegs_Request__destroy(starq_interfaces__srv__ConfigureLegs_Request * msg)
{
  if (msg) {
    starq_interfaces__srv__ConfigureLegs_Request__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__srv__ConfigureLegs_Request__Sequence__init(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__srv__ConfigureLegs_Request * data = NULL;
  if (size) {
    data = (starq_interfaces__srv__ConfigureLegs_Request *)calloc(size, sizeof(starq_interfaces__srv__ConfigureLegs_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__srv__ConfigureLegs_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__srv__ConfigureLegs_Request__fini(&data[i - 1]);
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
starq_interfaces__srv__ConfigureLegs_Request__Sequence__fini(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__srv__ConfigureLegs_Request__fini(&array->data[i]);
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

starq_interfaces__srv__ConfigureLegs_Request__Sequence *
starq_interfaces__srv__ConfigureLegs_Request__Sequence__create(size_t size)
{
  starq_interfaces__srv__ConfigureLegs_Request__Sequence * array = (starq_interfaces__srv__ConfigureLegs_Request__Sequence *)malloc(sizeof(starq_interfaces__srv__ConfigureLegs_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__srv__ConfigureLegs_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__srv__ConfigureLegs_Request__Sequence__destroy(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array)
{
  if (array) {
    starq_interfaces__srv__ConfigureLegs_Request__Sequence__fini(array);
  }
  free(array);
}


bool
starq_interfaces__srv__ConfigureLegs_Response__init(starq_interfaces__srv__ConfigureLegs_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
starq_interfaces__srv__ConfigureLegs_Response__fini(starq_interfaces__srv__ConfigureLegs_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

starq_interfaces__srv__ConfigureLegs_Response *
starq_interfaces__srv__ConfigureLegs_Response__create()
{
  starq_interfaces__srv__ConfigureLegs_Response * msg = (starq_interfaces__srv__ConfigureLegs_Response *)malloc(sizeof(starq_interfaces__srv__ConfigureLegs_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__srv__ConfigureLegs_Response));
  bool success = starq_interfaces__srv__ConfigureLegs_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__srv__ConfigureLegs_Response__destroy(starq_interfaces__srv__ConfigureLegs_Response * msg)
{
  if (msg) {
    starq_interfaces__srv__ConfigureLegs_Response__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__srv__ConfigureLegs_Response__Sequence__init(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__srv__ConfigureLegs_Response * data = NULL;
  if (size) {
    data = (starq_interfaces__srv__ConfigureLegs_Response *)calloc(size, sizeof(starq_interfaces__srv__ConfigureLegs_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__srv__ConfigureLegs_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__srv__ConfigureLegs_Response__fini(&data[i - 1]);
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
starq_interfaces__srv__ConfigureLegs_Response__Sequence__fini(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__srv__ConfigureLegs_Response__fini(&array->data[i]);
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

starq_interfaces__srv__ConfigureLegs_Response__Sequence *
starq_interfaces__srv__ConfigureLegs_Response__Sequence__create(size_t size)
{
  starq_interfaces__srv__ConfigureLegs_Response__Sequence * array = (starq_interfaces__srv__ConfigureLegs_Response__Sequence *)malloc(sizeof(starq_interfaces__srv__ConfigureLegs_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__srv__ConfigureLegs_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__srv__ConfigureLegs_Response__Sequence__destroy(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array)
{
  if (array) {
    starq_interfaces__srv__ConfigureLegs_Response__Sequence__fini(array);
  }
  free(array);
}
