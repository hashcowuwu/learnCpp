
cmake_minimum_required(VERSION 3.16)

project(treebook_starter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(treebook_starter
main.cpp
user.cpp
user.h)

include(GNUInstallDirs)
install(TARGETS treebook_starter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
