macro(link_unit_tests TEST_NAME)
    target_link_libraries(${TEST_NAME} PRIVATE Parser)
    target_include_directories(${TEST_NAME} PRIVATE ${PARSER_INCLUDE_DIR})
endmacro()

create_unit_test(TestLexLiterals TestLexLiterals.cpp)
link_unit_tests(TestLexLiterals)

create_unit_test(TestLexIdentifiers TestLexIdentifiers.cpp)
link_unit_tests(TestLexIdentifiers)

create_unit_test(TestLexPunctuators TestLexPunctuators.cpp)
link_unit_tests(TestLexPunctuators)

create_unit_test(TestLexOperators TestLexOperators.cpp)
link_unit_tests(TestLexOperators)

create_unit_test(TestLexKeywords TestLexKeywords.cpp)
link_unit_tests(TestLexKeywords)

create_unit_test(TestLexMultiTokens TestLexMultiTokens.cpp)
link_unit_tests(TestLexMultiTokens)

create_unit_test(TestLexFiles TestLexFiles.cpp)
link_unit_tests(TestLexFiles)