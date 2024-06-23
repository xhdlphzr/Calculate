cmake_minimum_required(VERSION 3.5)
project(Calculate VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_COMPILER_IMPORT_STD "clang++")
add_compile_options(-Wall -O2)

include_directories(include)
add_executable(
    Calculate 
    src/main.cpp 
    lib/calculate.cpp
)