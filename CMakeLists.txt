# Build file for MacOS & Linux OS

cmake_minimum_required(VERSION 3.3)
project(hello_world)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD main)
set(SOURCE Schikkeljaren3.cpp)
add_executable(${BUILD} ${SOURCE})