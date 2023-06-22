// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from starq_interfaces:action\RunLegTrajectory.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "starq_interfaces/msg/detail/leg_command_array__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_Goal__init(starq_interfaces__action__RunLegTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // publish_rate
  // trajectory
  if (!starq_interfaces__msg__LegCommandArray__Sequence__init(&msg->trajectory, 0)) {
    starq_interfaces__action__RunLegTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_Goal__fini(starq_interfaces__action__RunLegTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // publish_rate
  // trajectory
  starq_interfaces__msg__LegCommandArray__Sequence__fini(&msg->trajectory);
}

starq_interfaces__action__RunLegTrajectory_Goal *
starq_interfaces__action__RunLegTrajectory_Goal__create()
{
  starq_interfaces__action__RunLegTrajectory_Goal * msg = (starq_interfaces__action__RunLegTrajectory_Goal *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_Goal));
  bool success = starq_interfaces__action__RunLegTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_Goal__destroy(starq_interfaces__action__RunLegTrajectory_Goal * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_Goal__Sequence__init(starq_interfaces__action__RunLegTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_Goal * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_Goal *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_Goal__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_Goal__Sequence__fini(starq_interfaces__action__RunLegTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_Goal__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_Goal__Sequence *
starq_interfaces__action__RunLegTrajectory_Goal__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_Goal__Sequence * array = (starq_interfaces__action__RunLegTrajectory_Goal__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_Goal__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_Goal__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `leg_infos`
#include "starq_interfaces/msg/detail/leg_info_array__functions.h"
// Member `motor_infos`
#include "starq_interfaces/msg/detail/o_drive_info_array__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_Result__init(starq_interfaces__action__RunLegTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // leg_infos
  if (!starq_interfaces__msg__LegInfoArray__Sequence__init(&msg->leg_infos, 0)) {
    starq_interfaces__action__RunLegTrajectory_Result__fini(msg);
    return false;
  }
  // motor_infos
  if (!starq_interfaces__msg__ODriveInfoArray__Sequence__init(&msg->motor_infos, 0)) {
    starq_interfaces__action__RunLegTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_Result__fini(starq_interfaces__action__RunLegTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // leg_infos
  starq_interfaces__msg__LegInfoArray__Sequence__fini(&msg->leg_infos);
  // motor_infos
  starq_interfaces__msg__ODriveInfoArray__Sequence__fini(&msg->motor_infos);
}

starq_interfaces__action__RunLegTrajectory_Result *
starq_interfaces__action__RunLegTrajectory_Result__create()
{
  starq_interfaces__action__RunLegTrajectory_Result * msg = (starq_interfaces__action__RunLegTrajectory_Result *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_Result));
  bool success = starq_interfaces__action__RunLegTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_Result__destroy(starq_interfaces__action__RunLegTrajectory_Result * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_Result__Sequence__init(starq_interfaces__action__RunLegTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_Result * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_Result *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_Result__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_Result__Sequence__fini(starq_interfaces__action__RunLegTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_Result__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_Result__Sequence *
starq_interfaces__action__RunLegTrajectory_Result__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_Result__Sequence * array = (starq_interfaces__action__RunLegTrajectory_Result__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_Result__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_Result__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `lastest_leg_info`
// already included above
// #include "starq_interfaces/msg/detail/leg_info_array__functions.h"
// Member `latest_motor_info`
// already included above
// #include "starq_interfaces/msg/detail/o_drive_info_array__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_Feedback__init(starq_interfaces__action__RunLegTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // lastest_leg_info
  if (!starq_interfaces__msg__LegInfoArray__init(&msg->lastest_leg_info)) {
    starq_interfaces__action__RunLegTrajectory_Feedback__fini(msg);
    return false;
  }
  // latest_motor_info
  if (!starq_interfaces__msg__ODriveInfoArray__init(&msg->latest_motor_info)) {
    starq_interfaces__action__RunLegTrajectory_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_Feedback__fini(starq_interfaces__action__RunLegTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // lastest_leg_info
  starq_interfaces__msg__LegInfoArray__fini(&msg->lastest_leg_info);
  // latest_motor_info
  starq_interfaces__msg__ODriveInfoArray__fini(&msg->latest_motor_info);
}

starq_interfaces__action__RunLegTrajectory_Feedback *
starq_interfaces__action__RunLegTrajectory_Feedback__create()
{
  starq_interfaces__action__RunLegTrajectory_Feedback * msg = (starq_interfaces__action__RunLegTrajectory_Feedback *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_Feedback));
  bool success = starq_interfaces__action__RunLegTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_Feedback__destroy(starq_interfaces__action__RunLegTrajectory_Feedback * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__init(starq_interfaces__action__RunLegTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_Feedback * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_Feedback *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_Feedback__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__fini(starq_interfaces__action__RunLegTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_Feedback__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_Feedback__Sequence *
starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_Feedback__Sequence * array = (starq_interfaces__action__RunLegTrajectory_Feedback__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_Feedback__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__init(starq_interfaces__action__RunLegTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!starq_interfaces__action__RunLegTrajectory_Goal__init(&msg->goal)) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(starq_interfaces__action__RunLegTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  starq_interfaces__action__RunLegTrajectory_Goal__fini(&msg->goal);
}

starq_interfaces__action__RunLegTrajectory_SendGoal_Request *
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__create()
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request * msg = (starq_interfaces__action__RunLegTrajectory_SendGoal_Request *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request));
  bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__destroy(starq_interfaces__action__RunLegTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__init(starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_SendGoal_Request *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__fini(starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_SendGoal_Request__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence *
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence * array = (starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__init(starq_interfaces__action__RunLegTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(starq_interfaces__action__RunLegTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

starq_interfaces__action__RunLegTrajectory_SendGoal_Response *
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__create()
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response * msg = (starq_interfaces__action__RunLegTrajectory_SendGoal_Response *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response));
  bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__destroy(starq_interfaces__action__RunLegTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__init(starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_SendGoal_Response *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__fini(starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_SendGoal_Response__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence *
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence * array = (starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_GetResult_Request__init(starq_interfaces__action__RunLegTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(starq_interfaces__action__RunLegTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

starq_interfaces__action__RunLegTrajectory_GetResult_Request *
starq_interfaces__action__RunLegTrajectory_GetResult_Request__create()
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Request * msg = (starq_interfaces__action__RunLegTrajectory_GetResult_Request *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Request));
  bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Request__destroy(starq_interfaces__action__RunLegTrajectory_GetResult_Request * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__init(starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_GetResult_Request *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__fini(starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_GetResult_Request__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence *
starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence * array = (starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_GetResult_Response__init(starq_interfaces__action__RunLegTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!starq_interfaces__action__RunLegTrajectory_Result__init(&msg->result)) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(starq_interfaces__action__RunLegTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  starq_interfaces__action__RunLegTrajectory_Result__fini(&msg->result);
}

starq_interfaces__action__RunLegTrajectory_GetResult_Response *
starq_interfaces__action__RunLegTrajectory_GetResult_Response__create()
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Response * msg = (starq_interfaces__action__RunLegTrajectory_GetResult_Response *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Response));
  bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Response__destroy(starq_interfaces__action__RunLegTrajectory_GetResult_Response * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__init(starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_GetResult_Response *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__fini(starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_GetResult_Response__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence *
starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence * array = (starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "starq_interfaces/action/detail/run_leg_trajectory__functions.h"

bool
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__init(starq_interfaces__action__RunLegTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!starq_interfaces__action__RunLegTrajectory_Feedback__init(&msg->feedback)) {
    starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(starq_interfaces__action__RunLegTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  starq_interfaces__action__RunLegTrajectory_Feedback__fini(&msg->feedback);
}

starq_interfaces__action__RunLegTrajectory_FeedbackMessage *
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__create()
{
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage * msg = (starq_interfaces__action__RunLegTrajectory_FeedbackMessage *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage));
  bool success = starq_interfaces__action__RunLegTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__destroy(starq_interfaces__action__RunLegTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__init(starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (starq_interfaces__action__RunLegTrajectory_FeedbackMessage *)calloc(size, sizeof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = starq_interfaces__action__RunLegTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__fini(starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      starq_interfaces__action__RunLegTrajectory_FeedbackMessage__fini(&array->data[i]);
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

starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence *
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence * array = (starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__destroy(starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    starq_interfaces__action__RunLegTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
