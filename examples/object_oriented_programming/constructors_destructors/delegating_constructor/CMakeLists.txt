cmake_minimum_required(VERSION 3.20)

project(delegating_constructor)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} delegating_constructor.cpp)
