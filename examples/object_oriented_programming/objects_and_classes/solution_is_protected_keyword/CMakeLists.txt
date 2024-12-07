cmake_minimum_required(VERSION 3.20)

project(solution_is_protected_keyword)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} main.cpp my_first_class.cpp my_first_class.hpp my_second_class.cpp my_second_class.hpp)
