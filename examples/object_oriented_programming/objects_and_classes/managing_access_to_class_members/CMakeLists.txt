cmake_minimum_required(VERSION 3.20)

project(managing_access_to_class_members)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} main.cpp my_first_class.cpp my_first_class.hpp)
