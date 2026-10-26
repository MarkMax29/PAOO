cmake_minimum_required(VERSION 3.10)

project(Lucrare3_PAOO)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lucrare3
    src/main.cpp
    src/Book.cpp
)

target_include_directories(Lucrare3 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)