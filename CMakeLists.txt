cmake_minimum_required(VERSION 3.24)
project(sorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorting2 part1/main.cpp )
add_executable(sorting3 selSort/main.cpp )
add_executable(sorting4 bubbleSort/main.cpp )
add_executable(sorting5 insertSort/main.cpp )
add_executable(sorting main.cpp )
