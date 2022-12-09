%option c++ noyywrap nodefault debug 

%{
    #include <istream>

    #include "NikolaLexer.hpp"

    #ifdef YY_DECL
    #undef YY_DECL
    #endif

    using Parser = Nikola::SyntaxAnalysis::NikolaParser;
    using Lexer = Nikola::SyntaxAnalysis::NikolaLexer;

    #define YY_DECL Parser::symbol_type Lexer::lex()

    #ifdef YY_NULL
    #undef YY_NULL
    #endif
%}

digit [0-9]
decimal_literal {digit}+
integer_literal {decimal_literal}
%%
{integer_literal} return Parser::make_INTEGER_LITERAL(yytext, loc_);
