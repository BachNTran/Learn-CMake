
set(CMAKE_C_COMPILER "C:/msys64/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/msys64/mingw64/bin/g++.exe")


cmake_minimum_required(VERSION "3.12")

project(learn_cmake VERSION "1.0" LANGUAGES "C")
add_subdirectory(Main)
add_subdirectory(Libs)