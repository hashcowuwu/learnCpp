cmake_minimum_required(VERSION 3.16)

project(RAIIAndSmartPointers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RAIIAndSmartPointers main.cpp)

include(GNUInstallDirs)
install(TARGETS RAIIAndSmartPointers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
