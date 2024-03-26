cmake_minimum_required(VERSION 3.27)
project(kata_train C)

set(CMAKE_C_STANDARD 11)

add_executable(kata_train main.c
        wagon.c
        wagon.h
        train.c
        train.h
)
