cmake_minimum_required(VERSION 3.17)
project(chip_8)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        chip_8
        source/main.cpp
        source/chip8.cpp
)

target_compile_options(chip_8 PRIVATE -Wall)
