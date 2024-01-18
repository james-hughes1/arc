cmake_minimum_required(VERSION 3.15...3.26)

project(
    HelloWorld
    VERSION 1.0
    LANGUAGES CXX
)

SET( CMAKE_BUILD_TYPE Release)

add_executable(hello main.cpp)   
