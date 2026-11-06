
cmake_minimum_required(VERSION 3.20)

project(SHEMS VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(raylib 6.2 REQUIRED)

add_executable(SHEMS
    main.c
)

target_link_libraries(SHEMS PRIVATE raylib)