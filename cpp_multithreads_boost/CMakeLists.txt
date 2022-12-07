cmake_minimum_required(VERSION 3.24)
project(cpp_multithreads_boost)

set(CMAKE_CXX_STANDARD 17)
# this is needed for thread test
# refer https://stackoverflow.com/questions/45601811/undefined-reference-to-pthread-clion
# SET(CMAKE_CXX_FLAGS -pthread)
# but using a modern cmake way works either
# using find_package(Threads REQUIRED) and link libraries

# find packages
find_package(Threads REQUIRED)

# include the include file
include_directories(${PROJECT_SOURCE_DIR}/include)

# add all src file
# add_library(${PROJECT_NAME} SHARED)

add_executable(test_threads example/test_threads.cc)

add_executable(test_running example/test_running.cc)
target_link_libraries(test_threads Threads::Threads)

add_executable(test_mutex example/test_mutex.cc)
target_link_libraries(test_mutex Threads::Threads)


