#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestLexIdentifiers)
{
    runLexerTest("e", NikolaParser::symbol_kind_type::S_IDENTIFIER);
    runLexerTest("_", NikolaParser::symbol_kind_type::S_IDENTIFIER);
    runLexerTest("Z", NikolaParser::symbol_kind_type::S_IDENTIFIER);
    runLexerTest("_abcdefghijklmnopqrstuvwxyz-ABCDEFGHIJKLMOPQRSTUVWXYZ0123456789_", NikolaParser::symbol_kind_type::S_IDENTIFIER);
}