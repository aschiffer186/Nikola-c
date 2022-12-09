find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

FLEX_TARGET(NikolaLexer 
    ${PARSER_INCLUDE_DIR}/NikolaLexer.ll
    ${CMAKE_CURRENT_SOURCE_DIR}/NikolaLexer.cpp
    )
BISON_TARGET(NikolaParser 
    ${PARSER_INCLUDE_DIR}/NikolaParser.yy 
    ${CMAKE_CURRENT_SOURCE_DIR}/NikolaParser.cpp
    COMPILE_FLAGS "-Wcex --color"
    DEFINES_FILE ${PARSER_INCLUDE_DIR}/NikolaParser.hpp
    VERBOSE ${PARSER_INCLUDE_DIR}/NikolaParserReport.txt
    )
ADD_FLEX_BISON_DEPENDENCY(NikolaLexer NikolaParser)

add_library(Parser ${FLEX_NikolaLexer_OUTPUTS} ${BISON_NikolaParser_OUTPUTS})
target_include_directories(Parser PUBLIC ${PARSER_INCLUDE_DIR})
target_compile_features(Parser PRIVATE cxx_std_20)
target_compile_options(Parser PRIVATE ${NIKOLA_CXX_COMPILER_OPTIONS})