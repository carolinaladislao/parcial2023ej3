cmake_minimum_required(VERSION 3.27)
project(ejercicio3 C)

set(CMAKE_C_STANDARD 11)

add_executable(ejercicio3 main.c
        hash.c
        hash.h)
