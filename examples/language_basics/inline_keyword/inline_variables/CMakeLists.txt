cmake_minimum_required(VERSION 3.20)

project(inline_variables)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} my_struct.hpp inline_variables.cpp)
