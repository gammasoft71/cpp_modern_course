cmake_minimum_required(VERSION 3.20)

project(functions)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} "structs.hpp" "structs.cpp" "functions.cpp")

