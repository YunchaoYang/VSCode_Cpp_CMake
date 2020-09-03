cmake_minimum_required(VERSION 3.0)
project(main)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)
set(SOURCE main.cpp test.h test.cpp)

add_executable(main ${SOURCE})