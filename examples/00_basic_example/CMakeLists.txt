message("entering cmake source dir: ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(00_basic_example 00_basic_example.cc)

list(APPEND INCLUDE_DIRS "${CMAKE_BINARY_DIR}")
list(APPEND LINK_LIBS foo)

target_include_directories(00_basic_example PUBLIC ${INCLUDE_DIRS})
target_link_libraries(00_basic_example PUBLIC ${LINK_LIBS})

message("leaving cmake source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
