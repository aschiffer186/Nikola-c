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
    #define YY_NULL Parser::make_YYEOF(loc_)
%}

digit [0-9]
char_char [\x20-\x90\x93-\xFF]
string_char [\x20-\x93\x96-\xFF]
escape_char \\[\x20-\xFF]
ident_start [_a-zA-Z]
ident_continue [_a-zA-Z-]

decimal_integer_literal {digit}+
based_integer_literal {digit}{1,2}\_{digit}+

integer_literal {decimal_integer_literal}|{based_integer_literal}
real_literal {digit}*\.{digit}+([eE][+-]?{digit}+)?
complex_literal ({integer_literal}|{real_literal}[iIjJ])
%%
{integer_literal} {return Parser::make_INTEGER_LITERAL(yytext, loc_);}
{real_literal} {return Parser::make_REAL_LITERAL(yytext, loc_);}
{complex_literal} {return Parser::make_COMPLEX_LITERAL(yytext, loc_);}
\'({char_char}|{escape_char})\' {return Parser::make_CHAR_LITERAL(yytext, loc_);}
\"({string_char}|{escape_char})*\" {return Parser::make_STRING_LITERAL(yytext, loc_);}

"[" {return Parser::make_LEFT_BRACKET(loc_);}
"]" {return Parser::make_RIGHT_BRACKET(loc_);}
"(" {return Parser::make_LEFT_PARENTHESIS(loc_);}
")" {return Parser::make_RIGHT_PARENTHESIS(loc_);}
"{" {return Parser::make_LEFT_BRACE(loc_);}
"}" {return Parser::make_RIGHT_BRACE(loc_);}
";" {return Parser::make_SEMI_COLON(loc_);}
":" {return Parser::make_COLON(loc_);}
"=>" {return Parser::make_RIGHT_ARROW(loc_);}

"+" {return Parser::make_PLUS(loc_);}
"-" {return Parser::make_MINUS(loc_);}
"*" {return Parser::make_STAR(loc_);}
"/" {return Parser::make_SLASH(loc_);}
"//" {return Parser::make_DOUBLE_SLASH(loc_);}
"^" {return Parser::make_CARET(loc_);}

{ident_start}{ident_continue}* {return Parser::make_IDENTIFIER(yytext, loc_);}
