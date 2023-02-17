cmake_minimum_required(VERSION 3.24)
project(noter_core)

set(CMAKE_CXX_STANDARD 20)

add_executable(noter_core main.cpp Filesystem/Filesystem.cpp Filesystem/Filesystem.h Filesystem/ExpandStrategies/ExpandStrategy.h Filesystem/ExpandStrategies/DepthFirst.cpp Filesystem/ExpandStrategies/DepthFirst.h Filesystem/TreeNode.h)
