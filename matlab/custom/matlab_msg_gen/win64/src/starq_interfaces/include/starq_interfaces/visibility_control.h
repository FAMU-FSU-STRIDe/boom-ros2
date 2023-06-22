#ifndef STARQ_INTERFACES__VISIBILITY_CONTROL_H_
#define STARQ_INTERFACES__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define STARQ_INTERFACES_EXPORT __attribute__ ((dllexport))
    #define STARQ_INTERFACES_IMPORT __attribute__ ((dllimport))
  #else
    #define STARQ_INTERFACES_EXPORT __declspec(dllexport)
    #define STARQ_INTERFACES_IMPORT __declspec(dllimport)
  #endif
  #ifdef STARQ_INTERFACES_BUILDING_LIBRARY
    #define STARQ_INTERFACES_PUBLIC STARQ_INTERFACES_EXPORT
  #else
    #define STARQ_INTERFACES_PUBLIC STARQ_INTERFACES_IMPORT
  #endif
  #define STARQ_INTERFACES_PUBLIC_TYPE STARQ_INTERFACES_PUBLIC
  #define STARQ_INTERFACES_LOCAL
#else
  #define STARQ_INTERFACES_EXPORT __attribute__ ((visibility("default")))
  #define STARQ_INTERFACES_IMPORT
  #if __GNUC__ >= 4
    #define STARQ_INTERFACES_PUBLIC __attribute__ ((visibility("default")))
    #define STARQ_INTERFACES_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define STARQ_INTERFACES_PUBLIC
    #define STARQ_INTERFACES_LOCAL
  #endif
  #define STARQ_INTERFACES_PUBLIC_TYPE
#endif
#endif  // STARQ_INTERFACES__VISIBILITY_CONTROL_H_
// Generated 21-Jun-2023 21:32:50
 