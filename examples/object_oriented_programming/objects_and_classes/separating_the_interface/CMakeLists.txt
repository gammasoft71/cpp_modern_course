cmake_minimum_required(VERSION 3.20)

project(separating_the_interface)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} my_class.hpp my_class.cpp fun.cpp main.cpp)
