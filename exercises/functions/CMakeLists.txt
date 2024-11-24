cmake_minimum_required(VERSION 3.20)

project(functions)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (MSVC)
   set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4" )
   target_compile_definitions(${PROJECT_NAME} PRIVATE _CRT_SECURE_NO_WARNINGS)
else()
   set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra" )
endif()
add_executable(${PROJECT_NAME} "structs.hpp" "structs.cpp" "functions.cpp")

