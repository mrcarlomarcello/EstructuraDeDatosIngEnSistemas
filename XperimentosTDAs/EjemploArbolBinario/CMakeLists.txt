cmake_minimum_required(VERSION 3.22)
project(EjemploArbolBinario)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_SOURCES
        main.cpp
        NodeTree.h
        NodeTree.cpp
        Tree.h
        Tree.cpp
        )

add_executable(treeApp main.cpp)
