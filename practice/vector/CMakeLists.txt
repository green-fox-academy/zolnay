cmake_minimum_required(VERSION 3.14)
project(vector C)

set(CMAKE_C_STANDARD 11)

add_executable(vector main.c my_vector.h my_vector.c)