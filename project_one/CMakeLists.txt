cmake_minimum_required(VERSION 3.10.2)
project(hello)
add_library(obj_files first.hpp first.cpp)
add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE obj_files)
