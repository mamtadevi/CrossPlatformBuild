cmake_minimum_required (VERSION 2.6)
set( CMAKE_VERBOSE_MAKEFILE TRUE)

project (Utility)

add_subdirectory(APDU)

add_subdirectory(Utils)

set(Sources TestLibs.cpp)
include_directories(Utils/include)

add_library(TestLibs STATIC ${Sources})

link_libraries(TestLibs  LibUtils)

add_executable(TestLibsexecutable ${Sources}) 






 