cmake_minimum_required(VERSION 3.16)

project(TemplateClasses LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TemplateClasses main.cpp
    Point.h
    Container.hh
    Container.cpp
    Student.h
    IntArray.h)

include(GNUInstallDirs)
install(TARGETS TemplateClasses
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
