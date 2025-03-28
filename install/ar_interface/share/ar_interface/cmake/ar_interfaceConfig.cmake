# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ar_interface_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ar_interface_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ar_interface_FOUND FALSE)
  elseif(NOT ar_interface_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ar_interface_FOUND FALSE)
  endif()
  return()
endif()
set(_ar_interface_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ar_interface_FIND_QUIETLY)
  message(STATUS "Found ar_interface: 0.0.0 (${ar_interface_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ar_interface' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ar_interface_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ar_interface_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ar_interface_DIR}/${_extra}")
endforeach()
