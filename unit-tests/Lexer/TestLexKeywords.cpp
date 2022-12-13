#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestTypeKeywords)
{
    runLexerTestValueless("int8_t", NikolaParser::symbol_kind::S_INT8_T);
    runLexerTestValueless("int16_t", NikolaParser::symbol_kind::S_INT16_T);
    runLexerTestValueless("int32_t", NikolaParser::symbol_kind::S_INT32_T);
    runLexerTestValueless("int64_t", NikolaParser::symbol_kind::S_INT64_T);
    runLexerTestValueless("int", NikolaParser::symbol_kind::S_INT);
    runLexerTestValueless("real32_t", NikolaParser::symbol_kind::S_REAL32_T);
    runLexerTestValueless("real64_t", NikolaParser::symbol_kind::S_REAL64_T);
    runLexerTestValueless("real", NikolaParser::symbol_kind::S_REAL);
    runLexerTestValueless("bool", NikolaParser::symbol_kind::S_BOOL);
    runLexerTestValueless("char", NikolaParser::symbol_kind::S_CHAR);
    runLexerTestValueless("mod", NikolaParser::symbol_kind::S_MOD);
    runLexerTestValueless("void", NikolaParser::symbol_kind::S_VOID);
}

TEST(TestLexer, TestLiteralKeywords)
{
    runLexerTestValueless("true", NikolaParser::symbol_kind::S_TRUE);
    runLexerTestValueless("false", NikolaParser::symbol_kind::S_FALSE);
    runLexerTestValueless("this", NikolaParser::symbol_kind::S_THIS);
    runLexerTestValueless("nptr", NikolaParser::symbol_kind::S_NPTR);
}