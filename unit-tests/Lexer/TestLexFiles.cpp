#include <fstream>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestLexFiles)
{
    std::fstream fin{"/home/aschiffe/Dev/Nikola-c/unit-tests/Lexer/Test Files/Test1.nik"};

    NikolaLexer lexer{fin};


}


TEST(TestLexer, TestLexEmptyFile)
{
    std::fstream fin{"/home/aschiffe/Dev/Nikola-c/unit-tests/Lexer/Test Files/TestEmpty.nik"};

    NikolaLexer lexer{fin};
    auto token = lexer.lex();

    EXPECT_EQ(token.kind(), NikolaParser::symbol_kind::S_YYEOF);
}