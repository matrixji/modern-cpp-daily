cmake_minimum_required(VERSION 3.20)
project(modern-cpp-weekly-2021w44)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable(test-2021w44-jthread main.cpp)
target_link_libraries(test-2021w44-jthread PRIVATE pthread)
