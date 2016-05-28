cmake_minimum_required(VERSION 3.3)
project(2CPP_SupCount_Lyon_204241)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp File.cpp File.h Folder.cpp Folder.h Program.cpp Program.h)
add_executable(2CPP_SupCount_Lyon_204241 ${SOURCE_FILES})