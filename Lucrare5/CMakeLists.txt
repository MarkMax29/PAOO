
cmake_minimum_required(VERSION 3.16)

project(Lab5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab5
    main.cpp
    Widget.cpp
    Customer.cpp
    PriorityCustomer.cpp
)

target_compile_options(Lab5 PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
