cmake_minimum_required(VERSION 3.20)
project(HelloCMake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set some external dependency 
# set(EXTERNAL_LIB_ROOT_DIR /path/to/external_lib/)
# include_directories(${EXTERNAL_LIB_ROOT_DIR}/path/to/include/)
# link_directories(${EXTERNAL_LIB_ROOT_DIR}/path/to/lib/)

# set cmake output dirs 
message("cmake source dir: ${CMAKE_SOURCE_DIR}")
message("cmake bin dir: ${CMAKE_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
message("cmake shared lib output dir: ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")
message("cmake static lib output dir: ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
message("cmake executable output dir: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

# build shared or static libs
set(BUILD_SHARED_LIB TRUE)

# add flags to compilation, to be used by preprocessor as conditional compiliation
# set(USE_MACRO TRUE)
# add_definitions(-DUSE_MACRO=TRUE)
# # for logging purposes
# if(DEFINED USE_MACRO)
#   message("USE_MACRO = ${USE_MACRO}")
# endif()

# add include search path, include current dir so that all .cc files could include top-level include directive 
include_directories(.)

# add additional linking search path
# link_directories()

# add library target
if(BUILD_SHARED_LIB)
  message("build shared lib: hello.so")
  add_library(hello SHARED src/hello.cc)
else()
  message("build static lib: hello.a")
  add_library(hello STATIC src/hello.cc)
endif()

# add subdir CMakeLists.txt
add_subdirectory(examples)
# add_subdirectory(tests)

# add_executable(hello hello.cc)
# target_link_libraries(hello dependency_obj1 dependency_ob2 ...)
