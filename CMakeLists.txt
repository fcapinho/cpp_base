cmake_minimum_required(VERSION 3.10)

# Project name
project(Base VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Executable name
add_executable(base library main.cpp)