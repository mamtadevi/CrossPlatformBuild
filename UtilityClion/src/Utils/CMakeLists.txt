cmake_minimum_required (VERSION 2.6)
project (Utility)

set(Sources source/EMVUtils.cpp)

include_directories(include)
set(HEADER_FILES include/EMVUtils.h)

Add_library(LibUtils STATIC ${Sources})
