// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__FUNCTIONS_H_
#define STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "starq_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "starq_interfaces/srv/detail/configure_legs__struct.h"

/// Initialize srv/ConfigureLegs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * starq_interfaces__srv__ConfigureLegs_Request
 * )) before or use
 * starq_interfaces__srv__ConfigureLegs_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__srv__ConfigureLegs_Request__init(starq_interfaces__srv__ConfigureLegs_Request * msg);

/// Finalize srv/ConfigureLegs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Request__fini(starq_interfaces__srv__ConfigureLegs_Request * msg);

/// Create srv/ConfigureLegs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * starq_interfaces__srv__ConfigureLegs_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__srv__ConfigureLegs_Request *
starq_interfaces__srv__ConfigureLegs_Request__create();

/// Destroy srv/ConfigureLegs message.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Request__destroy(starq_interfaces__srv__ConfigureLegs_Request * msg);


/// Initialize array of srv/ConfigureLegs messages.
/**
 * It allocates the memory for the number of elements and calls
 * starq_interfaces__srv__ConfigureLegs_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__srv__ConfigureLegs_Request__Sequence__init(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConfigureLegs messages.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Request__Sequence__fini(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array);

/// Create array of srv/ConfigureLegs messages.
/**
 * It allocates the memory for the array and calls
 * starq_interfaces__srv__ConfigureLegs_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__srv__ConfigureLegs_Request__Sequence *
starq_interfaces__srv__ConfigureLegs_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConfigureLegs messages.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Request__Sequence__destroy(starq_interfaces__srv__ConfigureLegs_Request__Sequence * array);

/// Initialize srv/ConfigureLegs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * starq_interfaces__srv__ConfigureLegs_Response
 * )) before or use
 * starq_interfaces__srv__ConfigureLegs_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__srv__ConfigureLegs_Response__init(starq_interfaces__srv__ConfigureLegs_Response * msg);

/// Finalize srv/ConfigureLegs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Response__fini(starq_interfaces__srv__ConfigureLegs_Response * msg);

/// Create srv/ConfigureLegs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * starq_interfaces__srv__ConfigureLegs_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__srv__ConfigureLegs_Response *
starq_interfaces__srv__ConfigureLegs_Response__create();

/// Destroy srv/ConfigureLegs message.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Response__destroy(starq_interfaces__srv__ConfigureLegs_Response * msg);


/// Initialize array of srv/ConfigureLegs messages.
/**
 * It allocates the memory for the number of elements and calls
 * starq_interfaces__srv__ConfigureLegs_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
bool
starq_interfaces__srv__ConfigureLegs_Response__Sequence__init(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConfigureLegs messages.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Response__Sequence__fini(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array);

/// Create array of srv/ConfigureLegs messages.
/**
 * It allocates the memory for the array and calls
 * starq_interfaces__srv__ConfigureLegs_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
starq_interfaces__srv__ConfigureLegs_Response__Sequence *
starq_interfaces__srv__ConfigureLegs_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConfigureLegs messages.
/**
 * It calls
 * starq_interfaces__srv__ConfigureLegs_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_starq_interfaces
void
starq_interfaces__srv__ConfigureLegs_Response__Sequence__destroy(starq_interfaces__srv__ConfigureLegs_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_LEGS__FUNCTIONS_H_
