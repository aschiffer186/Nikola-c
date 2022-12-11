cmake_minimum_required(VERSION 3.20)
project(Nikola LANGUAGES CXX VERSION 0.1.1)

set(TOP_LEVEL_DIR ${CMAKE_SOURCE_DIR}/Nikolac)
set(INCLUDE_DIR ${TOP_LEVEL_DIR}/include)
set(PARSER_INCLUDE_DIR ${INCLUDE_DIR}/Parser)

add_subdirectory(Nikolac)
add_subdirectory(unit-tests)