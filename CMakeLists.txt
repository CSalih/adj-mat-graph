cmake_minimum_required(VERSION 3.17)
project(adj_mat_graph)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        adj_mat_graph
        main.cpp
        graph.cpp
        graph.h
        user_io.cpp
        user_io.h
)