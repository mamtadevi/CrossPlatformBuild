cmake_minimum_required (VERSION 2.6)
project (Utility)

set(Sources source/CAPDU.cpp)

include_directories(include)
set(HEADER_FILES include/CAPDU.h)

Add_library(LibAPDU STATIC ${Sources})
