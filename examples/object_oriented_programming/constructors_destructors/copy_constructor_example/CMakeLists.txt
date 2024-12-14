cmake_minimum_required(VERSION 3.20)

project(copy_constructor_example)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} main.cpp print.hpp print.cpp vector.hpp vector.cpp)
