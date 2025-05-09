cmake_minimum_required(VERSION 3.31)
project(RandomMath)

set(CMAKE_CXX_STANDARD 23)

add_executable(RandomMath main.cpp
        Calculations.h
        Functions.h
        Operators.h
        NumbersIndex.cpp)
