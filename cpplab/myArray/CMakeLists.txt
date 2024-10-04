cmake_minimum_required(VERSION 3.16)

project(myArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(
    myArray 
    main.cpp
    )
include(GNUInstallDirs)

