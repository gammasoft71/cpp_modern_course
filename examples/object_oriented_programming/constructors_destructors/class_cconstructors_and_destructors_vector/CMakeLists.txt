cmake_minimum_required(VERSION 3.20)

project(class_cconstructors_and_destructors_vector)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} main.cpp vector.cpp vector.hpp)
