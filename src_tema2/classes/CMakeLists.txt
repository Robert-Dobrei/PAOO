cmake_minimum_required(VERSION 3.0)

project(myApp VERSION 1.0)

add_library(myArray STATIC myArray.cpp)
add_library(myInterface STATIC myInterface.cpp)
add_library(utils STATIC utils.cpp)