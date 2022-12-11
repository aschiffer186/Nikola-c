macro(link_unit_tests TEST_NAME)
    target_link_libraries(${TEST_NAME} PRIVATE Parser)
    target_include_directories(${TEST_NAME} PRIVATE ${PARSER_INCLUDE_DIR})
endmacro()

create_unit_test(TestLexLiterals TestLexLiterals.cpp)
link_unit_tests(TestLexLiterals)