cmake_minimum_required(VERSION 3.20)

project(managing_inheritance_privacy_protected)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} ext_func.hpp ext_func.cpp main.cpp my_first_class.hpp my_second_class.cpp my_second_class.hpp my_third_class.cpp my_third_class.hpp)
