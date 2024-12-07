cmake_minimum_required(VERSION 3.20)

project(my_first_class)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} my_first_class.cpp)
