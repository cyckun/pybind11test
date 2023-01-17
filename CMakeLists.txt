cmake_minimum_required(VERSION 3.2)
project(pybind_test VERSION 0.1.0)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(pybind11)

add_library(psimock mock.cpp)

pybind11_add_module(mymodule mymodule.cpp)
target_link_libraries(mymodule PRIVATE psimock)
target_link_directories(mymodule PRIVATE mock.hpp)