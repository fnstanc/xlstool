project(xlstool-cpp-example)

cmake_minimum_required(VERSION 2.8)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

file (GLOB SRCS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" src/*.cc src/*.cpp)

message(STATUS "lib ${Protobuf_LIBRARIES}")
add_executable(xlstool-cpp-example ${SRCS})
target_link_libraries(xlstool-cpp-example ${Protobuf_LIBRARIES}) #protobuf protobuf-lite)
