cmake_minimum_required(VERSION 3.10)

project(AplicatieCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(aplicatie main.cpp)

target_include_directories(aplicatie PRIVATE
    ../Proiect1-biblio
)

target_link_libraries(aplicatie PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../Proiect1-biblio/build/libcalculator.a
)