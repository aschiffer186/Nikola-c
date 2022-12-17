enable_testing()

find_package(GTest REQUIRED)

macro(create_unit_test TEST_NAME TEST_FILE)
    add_executable(${TEST_NAME} EXCLUDE_FROM_ALL ${TEST_FILE})
    target_compile_features(${TEST_NAME} PRIVATE cxx_std_20)
    target_compile_options(${TEST_NAME} PRIVATE ${NIKOLA_CXX_COMPILE_OPTIONS})
    target_link_libraries(${TEST_NAME} PRIVATE GTest::gtest_main)
    add_dependencies(build_tests ${TEST_NAME})
    gtest_discover_tests(${TEST_NAME})
endmacro()

add_custom_target(build_tests)
add_custom_target(run_tests DEPENDS build_tests)
add_custom_command(TARGET run_tests 
    COMMENT "Run unit-tests" 
    POST_BUILD 
    COMMAND "ctest" 
    ARGS "--output-on-failure"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/unit-tests)

find_program(VALGRIND "valgrind")
add_custom_target(run_valgrind DEPENDS build_tests)
add_custom_command(TARGET run_valgrind 
COMMENT "Run Valgrind" 
POST_BUILD COMMAND "valgrind" 
ARGS "-v" "--leak-check=full" "ctest"
WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/unit-tests)

add_subdirectory(Lexer)
