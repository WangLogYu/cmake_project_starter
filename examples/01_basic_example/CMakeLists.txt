message("entering cmake source dir: ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(01_basic_example 01_basic_example.cc)

list(APPEND INCLUDE_DIRS "${CMAKE_BINARY_DIR}")
list(APPEND LINK_LIBS foo)

target_include_directories(01_basic_example PUBLIC ${INCLUDE_DIRS})
target_link_libraries(01_basic_example PUBLIC ${LINK_LIBS})

message("leaving cmake source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
