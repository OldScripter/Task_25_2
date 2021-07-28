cmake_minimum_required(VERSION 3.19)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(
        Task_25_2

        main.cpp
        cpu.cpp
        ram.cpp
        disk.cpp
        gpu.cpp
        kbd.cpp

        ${MY_INCLUDE_DIR}/cpu.h
        ${MY_INCLUDE_DIR}/ram.h
        ${MY_INCLUDE_DIR}/disk.h
        ${MY_INCLUDE_DIR}/gpu.h
        ${MY_INCLUDE_DIR}/kbd.h)

TARGET_INCLUDE_DIRECTORIES(Task_25_2 PUBLIC ${MY_INCLUDE_DIR})