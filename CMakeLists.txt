cmake_minimum_required(VERSION 3.8)
project(wg_singleton)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Singleton.h smart_pointer.cpp smart_pointer.h Prob.h)
add_executable(wg_singleton ${SOURCE_FILES})