cmake_minimum_required(VERSION 3.17)
enable_language(CXX)
project(C)
find_package(Threads REQUIRED)
set(CMAKE_CXX_STANDARD 17)

add_executable(C main.cpp)

target_link_libraries(C ${CMAKE_THREAD_LIBS_INIT})