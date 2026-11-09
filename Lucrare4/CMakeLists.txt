
cmake_minimum_required(VERSION 3.16)

project(Lab4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab4
    main.cpp
    Student.cpp
)

target_compile_options(Lab4 PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
