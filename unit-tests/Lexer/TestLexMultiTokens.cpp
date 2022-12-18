#include <vector>

#include "LexerTestUtils.hpp"

using TokenType = NikolaParser::symbol_type;

location makeLocation(int startLine, int startCol, int endLine, int endCol)
{
    position start;
    start.column = startCol;
    start.line = startLine;
    
    position end;
    end.column = endCol;
    end.line = endLine;

    return location{start, end};
}

TEST(TestLexer, TestMultipleTokensNoWhitespace)
{
    auto testStr = std::string{"1+2.3456-x23"};
    auto expectedTokens = std::vector{
        NikolaParser::make_INTEGER_LITERAL("1", makeLocation(1, 1, 1, 2)),
        NikolaParser::make_PLUS(makeLocation(1, 2, 1, 3)),
        NikolaParser::make_REAL_LITERAL("2.3456", makeLocation(1, 3, 1, 9)),
        NikolaParser::make_MINUS(makeLocation(1,9,1,10)),
        NikolaParser::make_IDENTIFIER("x23", makeLocation(1,10,1,13)),
        NikolaParser::make_YYEOF(makeLocation(1, 13, 1, 13))
    };

    runLexerTest(testStr, expectedTokens);
}

TEST(TestLexer, TestMultipleTokensWhitespace)
{
    auto testStr = std::string{" 1+ 2.3456-   x23 "};
    auto expectedTokens = {
        NikolaParser::make_INTEGER_LITERAL("1", makeLocation(1, 2, 1, 3)),
        NikolaParser::make_PLUS(makeLocation(1, 3, 1, 4)),
        NikolaParser::make_REAL_LITERAL("2.3456", makeLocation(1, 5, 1, 11)),
        NikolaParser::make_MINUS(makeLocation(1,11 ,1, 12)),
        NikolaParser::make_IDENTIFIER("x23", makeLocation(1, 15 , 1, 18)),
        NikolaParser::make_YYEOF(makeLocation(1, 19, 1, 19))
    };

    runLexerTest(testStr, expectedTokens);
}

TEST(TestLexer, TestMultipleTokensNewLine)
{
    auto testStr = std::string{"1+2.3456\n-x23"};
    auto expectedTokens = std::vector{
        NikolaParser::make_INTEGER_LITERAL("1", makeLocation(1, 1, 1, 2)),
        NikolaParser::make_PLUS(makeLocation(1, 2, 1, 3)),
        NikolaParser::make_REAL_LITERAL("2.3456", makeLocation(1, 3, 1, 9)),
        NikolaParser::make_MINUS(makeLocation(2, 1, 2, 2)),
        NikolaParser::make_IDENTIFIER("x23", makeLocation(2, 2, 2, 5)),
        NikolaParser::make_YYEOF(makeLocation(2,5, 2, 5))
    };
}