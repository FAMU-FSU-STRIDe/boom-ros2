#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "starq_interfaces::starq_interfaces_matlab" for configuration "Release"
set_property(TARGET starq_interfaces::starq_interfaces_matlab APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(starq_interfaces::starq_interfaces_matlab PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/starq_interfaces_matlab.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/starq_interfaces_matlab.dll"
  )

list(APPEND _cmake_import_check_targets starq_interfaces::starq_interfaces_matlab )
list(APPEND _cmake_import_check_files_for_starq_interfaces::starq_interfaces_matlab "${_IMPORT_PREFIX}/lib/starq_interfaces_matlab.lib" "${_IMPORT_PREFIX}/bin/starq_interfaces_matlab.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
