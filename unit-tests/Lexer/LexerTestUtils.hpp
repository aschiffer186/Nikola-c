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

void compareTokens(const NikolaParser::symbol_type&, const NikolaParser::symbol_type&);

inline void runLexerTest(const std::string& testStr, 
    const std::vector<NikolaParser::symbol_type>& expectedTokens)
{
    std::stringstream testStream{testStr};
    NikolaLexer lexer{testStream};

    auto tokenVec = std::vector<NikolaParser::symbol_type>{};
    while (true)
    {
        auto token = lexer.lex();
        tokenVec.push_back(token);
        if (token.kind() == NikolaParser::symbol_kind_type::S_YYEOF)
            break;
    }

    ASSERT_EQ(tokenVec.size(), expectedTokens.size());
    for(auto it1 = tokenVec.cbegin(), it2 = expectedTokens.cbegin(); it1 != tokenVec.end(); ++it1, ++it2)
    {
        compareTokens(*it1, *it2);
    }
}

void compareTokens(const NikolaParser::symbol_type& actual, const NikolaParser::symbol_type& expected)
{
    EXPECT_EQ(actual.kind(), expected.kind());
    EXPECT_EQ(actual.location.begin.column, expected.location.begin.column);
    EXPECT_EQ(actual.location.end.column, expected.location.end.column);
    EXPECT_EQ(actual.location.begin.line, expected.location.begin.line);
    EXPECT_EQ(actual.location.end.line, expected.location.end.line);
    if (actual.kind() == NikolaParser::symbol_kind::S_INTEGER_LITERAL
        || actual.kind() == NikolaParser::symbol_kind::S_REAL_LITERAL
        || actual.kind() == NikolaParser::symbol_kind::S_COMPLEX_LITERAL
        || actual.kind() == NikolaParser::symbol_kind::S_CHAR_LITERAL
        || actual.kind() == NikolaParser::symbol_kind::S_STRING_LITERAL
        || actual.kind() == NikolaParser::symbol_kind::S_IDENTIFIER)
    {
        EXPECT_STREQ(actual.value.as<std::string>().c_str(), expected.value.as<std::string>().c_str());
    }
}

inline void runLexerTestValueless(const std::string& testStr, NikolaParser::symbol_kind_type expectedSymbolKind)
{
    std::stringstream testStream{testStr};
    NikolaLexer lexer{testStream};

    NikolaParser::symbol_type token = lexer.lex();

    EXPECT_EQ(token.kind(), expectedSymbolKind);
    EXPECT_EQ(token.location.begin.column, 1);
    EXPECT_EQ(token.location.begin.line, 1);
    EXPECT_EQ(token.location.end.column, testStr.length() + 1);
    EXPECT_EQ(token.location.end.line, 1);
}


#endif