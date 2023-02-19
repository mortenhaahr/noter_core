cmake_minimum_required(VERSION 3.24)
project(noter_core)
set(CMAKE_CXX_STANDARD 20)

# FunctionalPlus library
include(FetchContent)
FetchContent_Declare(
        functional_plus
        GIT_REPOSITORY https://github.com/Dobiasd/FunctionalPlus.git
        GIT_TAG v0.2.18-p0
)
FetchContent_MakeAvailable(functional_plus)

add_executable(noter_core main.cpp Filesystem/Filesystem.cpp Filesystem/Filesystem.h Filesystem/ExpandStrategies/ExpandStrategy.h Filesystem/ExpandStrategies/DepthFirst.cpp Filesystem/ExpandStrategies/DepthFirst.h Filesystem/TreeNode.h)

# immer library
target_include_directories(noter_core PRIVATE 3rdParties/immer/)

target_link_libraries(noter_core PRIVATE FunctionalPlus::fplus)