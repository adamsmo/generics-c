cmake_minimum_required(VERSION 3.5)
project(arm_i2c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c std_map.h std_reduce.h generic_defs.h std_foreach.h std_f.h)
add_executable(arm_i2c ${SOURCE_FILES})