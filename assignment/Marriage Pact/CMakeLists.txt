
cmake_minimum_required(VERSION 3.16)

project(marriagepact_starter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable( marriagepact_starter main.cpp
    )

include(GNUInstallDirs)
install(TARGETS marriagepact_starter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
