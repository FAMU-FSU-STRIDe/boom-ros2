// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__FUNCTIONS_H_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "starq_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "starq_interfaces/msg/detail/leg_config__struct.h"

/// Initialize msg/LegConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * starq_interfaces__msg__LegConfig
 * )) before or use
 * starq_interfaces__msg__LegConfig__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__msg__LegConfig__init(starq_interfaces__msg__LegConfig * msg);

/// Finalize msg/LegConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__msg__LegConfig__fini(starq_interfaces__msg__LegConfig * msg);

/// Create msg/LegConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * starq_interfaces__msg__LegConfig__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__msg__LegConfig *
starq_interfaces__msg__LegConfig__create();

/// Destroy msg/LegConfig message.
/**
 * It calls
 * starq_interfaces__msg__LegConfig__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__msg__LegConfig__destroy(starq_interfaces__msg__LegConfig * msg);


/// Initialize array of msg/LegConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * starq_interfaces__msg__LegConfig__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__msg__LegConfig__Sequence__init(starq_interfaces__msg__LegConfig__Sequence * array, size_t size);

/// Finalize array of msg/LegConfig messages.
/**
 * It calls
 * starq_interfaces__msg__LegConfig__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__msg__LegConfig__Sequence__fini(starq_interfaces__msg__LegConfig__Sequence * array);

/// Create array of msg/LegConfig messages.
/**
 * It allocates the memory for the array and calls
 * starq_interfaces__msg__LegConfig__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__msg__LegConfig__Sequence *
starq_interfaces__msg__LegConfig__Sequence__create(size_t size);

/// Destroy array of msg/LegConfig messages.
/**
 * It calls
 * starq_interfaces__msg__LegConfig__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__msg__LegConfig__Sequence__destroy(starq_interfaces__msg__LegConfig__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__FUNCTIONS_H_
