cmake_minimum_required(VERSION 3.20)

project(preprocessor_constexpr)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} preprocessor_constexpr.cpp)
