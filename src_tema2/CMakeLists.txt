cmake_minimum_required(VERSION 3.0)

project(myApp VERSION 1.0)

add_subdirectory(classes)

add_executable(myApp main.cpp)

target_link_libraries(myApp PUBLIC myArray)
target_link_libraries(myApp PUBLIC myInterface)
target_link_libraries(myApp PUBLIC utils)

target_include_directories(myApp PUBLIC classes)