cmake_minimum_required(VERSION 3.20)

project(hello_world)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} hello_world.cpp)
