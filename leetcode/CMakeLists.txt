cmake_minimum_required(VERSION 3.21)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

# find package


# include directories
include_directories(
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} SHARED
        src/Question1.cc
        include/Question1.h
        src/Question2.cc
        include/Question2.h)

# target link libraries
target_link_libraries(
        ${PROJECT_NAME}
)

# add executable
add_executable(Answer
        main.cpp)
target_link_libraries(Answer ${PROJECT_NAME})
