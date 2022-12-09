set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PARSER_INCLUDE_DIR ${INCLUDE_DIR}/Parser)

set(NIKOLA_CXX_COMPILE_OPTIONS
    "-Wall"
    "-Wextra"
    "-Wshadow"
    "-Wdisabled-optimization"
    "-Werror"
    "-pedantic"
    "$<$<CONFIG:DEBUG>:-g>"
    "$<$<CONFIG:RELEASE>:-O2>"
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(src)