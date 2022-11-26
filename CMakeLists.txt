cmake_minimum_required(VERSION 3.10)

project(CodeMouseEditor)

set(CMAKE_CXX_STANDARD 11)

add_executable(cme
    src/CME/main.cpp
    src/CME/Terminal.hpp
    src/CME/Terminal.cpp
    src/CME/String.hpp
)