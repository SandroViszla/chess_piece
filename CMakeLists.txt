cmake_minimum_required(VERSION 3.21)
project(chess)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chess
        chess.cpp
        chesslib.cpp
        chesslib.hpp
        figure.cpp
        figure.hpp)
