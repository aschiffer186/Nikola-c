#include <fstream>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestLexFiles)
{
    std::fstream fin{"/home/aschiffe/Dev/Nikola-c/unit-tests/Lexer/Test Files/Test1.nik"};
    ASSERT_TRUE(fin.is_open());

    runLexerTest(fin, {
        NikolaParser::make_LET(makeLocation(1, 1, 1, 4)),
        NikolaParser::make_COMPEVAL(makeLocation(1, 5, 1, 13)),
        NikolaParser::make_PURE(makeLocation(1, 14, 1, 18)),
        NikolaParser::make_IDENTIFIER("foo", makeLocation(1, 19, 1, 22)),
        NikolaParser::make_LEFT_PARENTHESIS(makeLocation(1, 22, 1, 23)),
        NikolaParser::make_IDENTIFIER("a", makeLocation(1, 23, 1, 24)),
        NikolaParser::make_COLON(makeLocation(1, 25, 1, 26)),
        NikolaParser::make_INT16_T(makeLocation(1, 27, 1, 34)),
        NikolaParser::make_RIGHT_PARENTHESIS(makeLocation(1, 34, 1, 35)),
        NikolaParser::make_RIGHT_ARROW(makeLocation(1, 36, 1, 38)),
        NikolaParser::make_REAL(makeLocation(1, 39, 1, 43)),
        NikolaParser::make_ASSIGN(makeLocation(1, 44, 1, 45)),
        NikolaParser::make_LEFT_BRACE(makeLocation(1, 46, 1, 47)),
        NikolaParser::make_RETURN(makeLocation(2, 5, 2, 11)),
        NikolaParser::make_IDENTIFIER("a", makeLocation(2, 12, 2, 13)),
        NikolaParser::make_STAR(makeLocation(2, 14, 2, 15)),
        NikolaParser::make_REAL_LITERAL("2.0", makeLocation(2, 16, 2, 19)),
        NikolaParser::make_SEMI_COLON(makeLocation(2, 19, 2, 20)),
        NikolaParser::make_RIGHT_BRACE(makeLocation(3, 1, 3, 2)),
        NikolaParser::make_YYEOF(makeLocation(3, 2, 3, 2))
    });
}


TEST(TestLexer, TestLexEmptyFile)
{
    std::fstream fin{"/home/aschiffe/Dev/Nikola-c/unit-tests/Lexer/Test Files/TestEmpty.nik"};

    NikolaLexer lexer{fin};
    auto token = lexer.lex();

    EXPECT_EQ(token.kind(), NikolaParser::symbol_kind::S_YYEOF);
}