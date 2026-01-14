cmake_minimum_required(VERSION 4.1)
project(wordleFilterCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(wordleFilterCpp main.cpp
        Word.cpp
        Word.h)
