cmake_minimum_required(VERSION 3.20)

project(fallthrough_attribute)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} fallthrough_attribute.cpp)
