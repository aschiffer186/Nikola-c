#ifndef LEXER_TEST_UTILS_HPP
#define LEXER_TEST_UTILS_HPP

#include <sstream>
#include <string_view>

#include <gtest/gtest.h>

#include "NikolaLexer.hpp"
#include "NikolaParser.hpp"

using namespace Nikola::SyntaxAnalysis;

inline void runLexerTest(const std::string& testStr, NikolaParser::symbol_kind_type expectedSymbolKind)
{
    std::stringstream testStream{testStr};
    NikolaLexer lexer{testStream};

    NikolaParser::symbol_type token = lexer.lex();

    EXPECT_EQ(token.kind(), expectedSymbolKind);
    EXPECT_STREQ(token.value.as<std::string>().c_str(), testStr.c_str());
    EXPECT_EQ(token.location.begin.column, 1);
    EXPECT_EQ(token.location.begin.line, 1);
    EXPECT_EQ(token.location.end.column, testStr.length() + 1);
    EXPECT_EQ(token.location.end.line, 1);
}

#endif