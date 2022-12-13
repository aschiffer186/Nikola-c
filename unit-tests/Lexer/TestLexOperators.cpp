#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"


TEST(TestLexer, TestLexArithmeticOperators)
{
    runLexerTestValueless("+", NikolaParser::symbol_kind::S_PLUS);
    runLexerTestValueless("-", NikolaParser::symbol_kind::S_MINUS);
    runLexerTestValueless("*", NikolaParser::symbol_kind::S_STAR);
    runLexerTestValueless("/", NikolaParser::symbol_kind::S_SLASH);
    runLexerTestValueless("//", NikolaParser::symbol_kind::S_DOUBLE_SLASH);
    runLexerTestValueless("^", NikolaParser::symbol_kind::S_CARET);
    runLexerTestValueless("%", NikolaParser::symbol_kind::S_PERCENT);
    runLexerTestValueless("+=", NikolaParser::symbol_kind::S_PLUS_ASSIGN);
    runLexerTestValueless("-=", NikolaParser::symbol_kind::S_MINUS_ASSIGN);
    runLexerTestValueless("*=", NikolaParser::symbol_kind::S_STAR_ASSIGN);
    runLexerTestValueless("/=", NikolaParser::symbol_kind::S_SLASH_ASSIGN);
    runLexerTestValueless("//=", NikolaParser::symbol_kind::S_DOUBLE_SLASH_ASSIGN);
    runLexerTestValueless("^=", NikolaParser::symbol_kind::S_CARET_ASSIGN);
    runLexerTestValueless("%=", NikolaParser::symbol_kind::S_PERCENT_ASSIGN);
}

TEST(TestLexer, TestLexElementwiseArithmeticOperators)
{
    runLexerTestValueless("+<", NikolaParser::symbol_kind::S_VEC_PLUS);
    runLexerTestValueless("-<", NikolaParser::symbol_kind::S_VEC_MINUS);
    runLexerTestValueless("*<", NikolaParser::symbol_kind::S_VEC_STAR);
    runLexerTestValueless("/<", NikolaParser::symbol_kind::S_VEC_SLASH);
    runLexerTestValueless("//<", NikolaParser::symbol_kind::S_VEC_DOUBLE_SLASH);
    runLexerTestValueless("^<", NikolaParser::symbol_kind::S_VEC_CARET);
    runLexerTestValueless("%<", NikolaParser::symbol_kind::S_VEC_PERCENT);
    runLexerTestValueless("+<=", NikolaParser::symbol_kind::S_VEC_PLUS_ASSIGN);
    runLexerTestValueless("-<=", NikolaParser::symbol_kind::S_VEC_MINUS_ASSIGN);
    runLexerTestValueless("*<=", NikolaParser::symbol_kind::S_VEC_STAR_ASSIGN);
    runLexerTestValueless("/<=", NikolaParser::symbol_kind::S_VEC_SLASH_ASSIGN);
    runLexerTestValueless("//<=", NikolaParser::symbol_kind::S_VEC_DOUBLE_SLASH_ASSIGN);
    runLexerTestValueless("^<=", NikolaParser::symbol_kind::S_VEC_CARET_ASSIGN);
    runLexerTestValueless("%<=", NikolaParser::symbol_kind::S_VEC_PERCENT_ASSIGN);
}

TEST(TestLexer, TestLexLogicalOperators)
{
    runLexerTestValueless("&&", NikolaParser::symbol_kind::S_DOUBLE_AMP);
    runLexerTestValueless("||", NikolaParser::symbol_kind::S_DOUBLE_PIPE);
    runLexerTestValueless("!", NikolaParser::symbol_kind::S_BANG);
    runLexerTestValueless("<", NikolaParser::symbol_kind::S_LESS);
    runLexerTestValueless("<=", NikolaParser::symbol_kind::S_LESS_EQ);
    runLexerTestValueless("<=>", NikolaParser::symbol_kind::S_SPACESHIP);
    runLexerTestValueless(">=", NikolaParser::symbol_kind::S_GREATER_EQ);
    runLexerTestValueless(">", NikolaParser::symbol_kind::S_GREATER);
    runLexerTestValueless("==", NikolaParser::symbol_kind::S_EQ);
    runLexerTestValueless("!=", NikolaParser::symbol_kind::S_NEQ);
}

TEST(TestLexer, TestBitwiseOperators)
{
    runLexerTestValueless("&", NikolaParser::symbol_kind::S_AMP);
    runLexerTestValueless("|", NikolaParser::symbol_kind::S_PIPE);
    runLexerTestValueless("^^", NikolaParser::symbol_kind::S_DOUBLE_CARET);
    runLexerTestValueless("~", NikolaParser::symbol_kind::S_TILDE);
    runLexerTestValueless("<<", NikolaParser::symbol_kind::S_LEFT_SHIFT);
    runLexerTestValueless(">>", NikolaParser::symbol_kind::S_RIGHT_SHIFT);
    runLexerTestValueless("&=", NikolaParser::symbol_kind::S_AMP_ASSIGN);
    runLexerTestValueless("|=", NikolaParser::symbol_kind::S_PIPE_ASSIGN);
    runLexerTestValueless("^^=", NikolaParser::symbol_kind::S_DOUBLE_CARET_ASSIGN);
    runLexerTestValueless("~=", NikolaParser::symbol_kind::S_TILDE_ASSIGN);
    runLexerTestValueless("<<=", NikolaParser::symbol_kind::S_LEFT_SHIFT_ASSIGN);
    runLexerTestValueless(">>=", NikolaParser::symbol_kind::S_RIGHT_SHIFT_ASSIGN);
}

TEST(TestLexer, TestElementwiseBitwiseOperators)
{
    runLexerTestValueless("&<", NikolaParser::symbol_kind::S_VEC_AMP);
    runLexerTestValueless("|<", NikolaParser::symbol_kind::S_VEC_PIPE);
    runLexerTestValueless("^^<", NikolaParser::symbol_kind::S_VEC_DOUBLE_CARET);
    runLexerTestValueless("~<", NikolaParser::symbol_kind::S_VEC_TILDE);
    runLexerTestValueless("<<<", NikolaParser::symbol_kind::S_VEC_LEFT_SHIFT);
    runLexerTestValueless(">><", NikolaParser::symbol_kind::S_VEC_RIGHT_SHIFT);
    runLexerTestValueless("&<=", NikolaParser::symbol_kind::S_VEC_AMP_ASSIGN);
    runLexerTestValueless("|<=", NikolaParser::symbol_kind::S_VEC_PIPE_ASSIGN);
    runLexerTestValueless("^^<=", NikolaParser::symbol_kind::S_VEC_DOUBLE_CARET_ASSIGN);
    runLexerTestValueless("~<=", NikolaParser::symbol_kind::S_VEC_TILDE_ASSIGN);
    runLexerTestValueless("<<<=", NikolaParser::symbol_kind::S_VEC_LEFT_SHIFT_ASSIGN);
    runLexerTestValueless(">><=", NikolaParser::symbol_kind::S_VEC_RIGHT_SHIFT_ASSIGN);
}

TEST(TestLexer, TestMiscellaneousOperators)
{
    runLexerTestValueless("=", NikolaParser::symbol_kind::S_ASSIGN);
    runLexerTestValueless("<-", NikolaParser::symbol_kind::S_LEFT_ARROW);
    runLexerTestValueless("++", NikolaParser::symbol_kind::S_PLUS_PLUS);
    runLexerTestValueless("--", NikolaParser::symbol_kind::S_MINUS_MINUS);
    runLexerTestValueless("...", NikolaParser::symbol_kind::S_ELLIPSIS);
    runLexerTestValueless("::", NikolaParser::symbol_kind::S_COLON_COLON);
    runLexerTestValueless(".", NikolaParser::symbol_kind::S_DOT);
    runLexerTestValueless("?", NikolaParser::symbol_kind::S_QUESTION);
}