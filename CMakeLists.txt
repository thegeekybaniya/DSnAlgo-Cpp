cmake_minimum_required(VERSION 3.8)
project(DSnAlgo_Cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES StackLinkedList.cpp QueueLinkedList.cpp)
add_executable(DSnAlgo_Cpp ${SOURCE_FILES})