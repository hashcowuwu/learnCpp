cmake_minimum_required(VERSION 3.16)

project(TemplateFunctions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TemplateFunctions main.cpp
    Substr.hh)

include(GNUInstallDirs)
install(TARGETS TemplateFunctions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
