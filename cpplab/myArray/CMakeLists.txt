cmake_minimum_required(VERSION 3.16)

project(myArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    myArray 
    main.cpp
    Array.cpp
    Array.hh
    )

include(GNUInstallDirs)
install(TARGETS myArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
