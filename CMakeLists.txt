cmake_minimum_required(VERSION 3.20)
project(HelloCMake VERSION 0.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
option(CMAKE_CXX_EXTENSIONS "set gnu++ extensions" OFF)
if(CMAKE_CXX_EXTENSIONS)
  message("Using GNU C++ extension: -std=gnu++${CMAKE_CXX_STANDARD}")
else()
  message("Using ISO C++: -std=c++${CMAKE_CXX_STANDARD}")
endif()

message("entering project root dir...")
# difference between project/cmake source dirs: 
# https://stackoverflow.com/questions/32028667/are-cmake-source-dir-and-project-source-dir-the-same-in-cmake
message("project source dir: ${PROJECT_SOURCE_DIR}")
message("project binary dir: ${PROJECT_BINARY_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
message("cmake shared/static lib output dir: ${CMAKE_BINARY_DIR}/lib")

# set some external dependency 
# set(EXTERNAL_DEPENDENCY_ROOT_DIR /path/to/external_lib/)
# include_directories(${EXTERNAL_DEPENDENCY_ROOT_DIR }/path/to/include/)
# link_directories(${EXTERNAL_DEPENDENCY_ROOT_DIR }/path/to/lib/)

# add path for headers, used when building libs; header paths for executables are added in their respective CMakeLists.txt
include_directories("${CMAKE_BINARY_DIR}")

# build shared libs by default
option(BUILD_SHARED_LIBS "build shared libs by default" ON)

# set some cmake vars, can be used to configure header files
option(FOO_ENABLE "Enable Foo" ON)
if(FOO_ENABLE)
  message("Enable Foo: ON")
  set(FOO_STRING "this_is_foo_string_value")
else()
  message("Enable Foo: OFF")
endif()

# add flags to compilation command, can be used by preprocessor as conditional compiliation
add_definitions(-DUSE_MACRO=TRUE)

add_library(foo src/foo.cc)

# all header files must be placed in top-level include folder, they must be configured by cmake
configure_file(include/hello.h.in include/hello.h @ONLY)
configure_file(include/foo.h.in include/foo.h @ONLY)

# build example targets
add_subdirectory(examples)
add_subdirectory(tests)

message("leaving project root dir...")
