#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestLexPunctuators)
{
    runLexerTestValueless("[", NikolaParser::symbol_kind_type::S_LEFT_BRACKET);
    runLexerTestValueless("]", NikolaParser::symbol_kind_type::S_RIGHT_BRACKET);
    runLexerTestValueless("(", NikolaParser::symbol_kind_type::S_LEFT_PARENTHESIS);
    runLexerTestValueless(")", NikolaParser::symbol_kind_type::S_RIGHT_PARENTHESIS);
    runLexerTestValueless("{", NikolaParser::symbol_kind_type::S_LEFT_BRACE);
    runLexerTestValueless("}", NikolaParser::symbol_kind_type::S_RIGHT_BRACE);
    runLexerTestValueless(";", NikolaParser::symbol_kind_type::S_SEMI_COLON);
    runLexerTestValueless(":", NikolaParser::symbol_kind_type::S_COLON);
    runLexerTestValueless("=>", NikolaParser::symbol_kind_type::S_RIGHT_ARROW);
}