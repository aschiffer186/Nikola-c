#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"

#include "NikolaLexer.hpp"
#include "NikolaParser.hpp"

TEST(TestLexer, TestIntegerLiterals)
{
    runLexerTest("123456789", NikolaParser::symbol_kind_type::S_INTEGER_LITERAL);
    runLexerTest("5_1234",  NikolaParser::symbol_kind_type::S_INTEGER_LITERAL);
    runLexerTest("36_123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", NikolaParser::symbol_kind_type::S_INTEGER_LITERAL);
}

TEST(TestLexer, TestRealLiteral)
{
    runLexerTest("123456789.123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
    runLexerTest(".123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
    runLexerTest("0.123456789e123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
    runLexerTest("0.123456789E123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
    runLexerTest("0.123456789e+123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
    runLexerTest("0.123456789e-123456789", NikolaParser::symbol_kind_type::S_REAL_LITERAL);
}

TEST(TestLexer, TestComplexLiteral)
{
    runLexerTest("123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("123456789I", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("123456789j", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("123456789J", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("5_12345_i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("36_123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("123456789.123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest(".123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("0.123456789e123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("0.123456789E123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("0.123456789e+123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
    runLexerTest("0.123456789e-123456789i", NikolaParser::symbol_kind_type::S_COMPLEX_LITERAL);
}

TEST(TestLexer, TestCharLiteral)
{
    runLexerTest("'\x45'", NikolaParser::symbol_kind_type::S_CHAR_LITERAL);
    runLexerTest("'\xA2'", NikolaParser::symbol_kind_type::S_CHAR_LITERAL);
    runLexerTest("'\\\x91'", NikolaParser::symbol_kind_type::S_CHAR_LITERAL);
    runLexerTest("'\\\x92'", NikolaParser::symbol_kind_type::S_CHAR_LITERAL);
}

TEST(TestLexer, TestStringLiteral)
{
    runLexerTest("\"\"", NikolaParser::symbol_kind_type::S_STRING_LITERAL);
    runLexerTest("\"\x34\x67\xB5\xF3\"", NikolaParser::symbol_kind_type::S_STRING_LITERAL);
    runLexerTest("\"\\\"\\n\x45\xC3\"", NikolaParser::symbol_kind_type::S_STRING_LITERAL);
}