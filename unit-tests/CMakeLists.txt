enable_testing()

find_package(GTest REQUIRED)

macro(create_unit_test TEST_NAME TEST_FILE)
    add_executable(${TEST_NAME} EXCLUDE_FROM_ALL ${TEST_FILE})
    target_compile_features(${TEST_NAME} PRIVATE cxx_std_23)
    target_compile_options(${TEST_NAME} PRIVATE ${NIKOLA_CXX_COMPILE_OPTIONS})
    target_link_libraries(${TEST_NAME} PRIVATE gtest::gtest_main)
    add_dependencies(build_test ${TEST_NAME})
    gtest_discover_tests(${TEST_NAME})
endmacro()

add_custom_target(build_test)
add_custom_target(run_tests COMMAND ${CMAKE_CTEST_COMMAND} DEPENDS build_test)

add_subdirectory(Lexer)