cmake_minimum_required (VERSION 2.6)
set( CMAKE_VERBOSE_MAKEFILE TRUE)

#message("################################################################")
#message(" Building for Android ")
#message("################################################################")

#set(CMAKE_CLANG_CXX_LIBRARY -std=libc++ )
#set(CMAKE_SYSTEM_NAME Android)
#set(CMAKE_SYSTEM_VERSION 26)
#set(CMAKE_ANDROID_NDK "C:/android-ndk-r19c-windows-x86_64/android-ndk-r19c")
#set(CMAKE_ANDROID_NDK_TOOLCHAIN_VERSION clang)
#set(CMAKE_ANDROID_STL_TYPE c++_static)
#set(CMAKE_ANDROID_ARCH_ABI arm64-v8a ) #x86_64 x86_64 armeabi-v7a arm64-v8a

project (Utility)

add_subdirectory(APDU)

add_subdirectory(Utils)

set(Sources TestLibs.cpp)
include_directories(Utils/include)

add_library(TestLibs STATIC ${Sources})

link_libraries(TestLibs  LibUtils)

add_executable(TestLibsexecutable ${Sources}) 






 