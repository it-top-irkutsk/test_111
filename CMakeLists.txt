cmake_minimum_required(VERSION 3.21)
project(test111)

set(CMAKE_CXX_STANDARD 14)

add_executable(test111 main.cpp calculate.h cli.h calculate.cpp)
