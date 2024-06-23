cmake_minimum_required(VERSION 3.5)
project(calculate VERSION 0.1.0 LANGUAGES C CXX)

include_directories(./include)

add_executable(
    calculate 
    src/main.cpp
    lib/calculate.cpp
)