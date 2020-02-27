cmake_minimum_required(VERSION 3.10.2)
project(Main)
add_library(obj_files first.hpp first.cpp)
add_executable(Main main.cpp)

target_link_libraries(Main PRIVATE obj_files)
