#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "starq_interfaces::starq_interfaces__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET starq_interfaces::starq_interfaces__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(starq_interfaces::starq_interfaces__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/starq_interfaces__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/starq_interfaces__rosidl_typesupport_c.dll"
  )

list(APPEND _cmake_import_check_targets starq_interfaces::starq_interfaces__rosidl_typesupport_c )
list(APPEND _cmake_import_check_files_for_starq_interfaces::starq_interfaces__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/starq_interfaces__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/starq_interfaces__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
