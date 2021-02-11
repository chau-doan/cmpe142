cmake_minimum_required(VERSION 3.1)

# set the project name and version
project(HTMLBuilder)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/presidents.csv
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/read.html
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(
        ReadCSV ReadCSV.cpp
)

add_executable(
        MakeTable MakeTable.cpp
)
add_executable(
        PipeMakeTable PipeMakeTable.cpp child.cpp parent.cpp globals.h
)