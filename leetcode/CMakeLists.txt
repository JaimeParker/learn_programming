cmake_minimum_required(VERSION 3.21)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

# find package

# add executable
add_executable(leetcode
        main.cpp
        src/question1.cc
        include/question1.h)

# target link libraries
