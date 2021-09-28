cmake_minimum_required(VERSION 3.20)
project(CExample C)

set(CMAKE_C_STANDARD 99)

add_executable(CExample main.c utils.c utils.h sort.c sort.h)
