cmake_minimum_required(VERSION 2.8)
project(bitsu CXX)

add_subdirectory(src)
include_directories(include)

add_library(
  bitsu
  STATIC
  ${bitsuSourceFiles}
)

ADD_DEFINITIONS(-std=c++11)
SET(CMAKE_EXE_LINKER_FLAGS "-pthread")

add_executable(bitsuApp src/main.cc)
target_link_libraries(bitsuApp bitsu)
