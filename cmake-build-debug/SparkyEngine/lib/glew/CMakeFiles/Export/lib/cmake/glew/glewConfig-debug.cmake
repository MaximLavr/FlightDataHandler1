#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libglew_static" for configuration "Debug"
set_property(TARGET libglew_static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libglew_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libglewd.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS libglew_static )
list(APPEND _IMPORT_CHECK_FILES_FOR_libglew_static "${_IMPORT_PREFIX}/lib/libglewd.a" )

# Import target "libglew_shared" for configuration "Debug"
set_property(TARGET libglew_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libglew_shared PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libglew-sharedd.2.1.0.dylib"
  IMPORTED_SONAME_DEBUG "@rpath/libglew-sharedd.2.1.0.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS libglew_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_libglew_shared "${_IMPORT_PREFIX}/lib/libglew-sharedd.2.1.0.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
