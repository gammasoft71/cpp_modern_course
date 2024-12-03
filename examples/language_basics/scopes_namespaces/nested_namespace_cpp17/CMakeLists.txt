cmake_minimum_required(VERSION 3.20)

project(nested_namespace_cpp17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} nested_namespace_cpp17.cpp)
