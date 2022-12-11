%option c++ noyywrap nodefault debug 
%option yyclass = "Nikola::SyntaxAnalysis::NikolaLexer"
%{
    #include <istream>

    #include "NikolaLexer.hpp"

    #ifdef YY_DECL
    #undef YY_DECL
    #endif

    using Parser = Nikola::SyntaxAnalysis::NikolaParser;
    using Lexer = Nikola::SyntaxAnalysis::NikolaLexer;

    #define YY_DECL Parser::symbol_type Lexer::lex()
    
    #define YY_USER_ACTION loc_.columns(yyleng);

    #ifdef YY_NULL
    #undef YY_NULL
    #endif
    #define YY_NULL Parser::make_YYEOF(loc_)
%}

digit [0-9]
based_digit [0-9a-zA-Z]
char_char [\x20-\x90\x93-\xFF]
string_char [\x20-\x93\x96-\xFF]
escape_char \\[\x20-\xFF]
ident_start [_a-zA-Z]
ident_continue [_a-zA-Z-]

decimal_integer_literal {digit}+
based_integer_literal {digit}{1,2}\_{based_digit}+

integer_literal {decimal_integer_literal}|{based_integer_literal}
real_literal {digit}*\.{digit}+([eE][+-]?{digit}+)?
complex_literal ({decimal_integer_literal}|{based_integer_literal}_|{real_literal}[iIjJ])
%%
%{
    loc_.step();
%}
\n+ loc_.lines(yyleng); loc_.step();
[[:space:]]+ loc_.step();

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
"%" {return Parser::make_PERCENT(loc_);}
"+=" {return Parser::make_PLUS_ASSIGN(loc_);}
"-=" {return Parser::make_MINUS_ASSIGN(loc_);}
"*=" {return Parser::make_STAR_ASSIGN(loc_);}
"/=" {return Parser::make_SLASH_ASSIGN(loc_);}
"//=" {return Parser::make_DOUBLE_SLASH_ASSIGN(loc_);}
"^=" {return Parser::make_CARET_ASSIGN(loc_);}
"%=" {return Parser::make_PERCENT_ASSIGN(loc_);}

"+<" {return Parser::make_VEC_PLUS(loc_);}
"-<" {return Parser::make_VEC_MINUS(loc_);}
"*<" {return Parser::make_VEC_STAR(loc_);}
"/<" {return Parser::make_VEC_SLASH(loc_);}
"//<" {return Parser::make_VEC_DOUBLE_SLASH(loc_);}
"^<" {return Parser::make_VEC_CARET(loc_);}
"%<" {return Parser::make_VEC_PERCENT(loc_);}
"+<=" {return Parser::make_VEC_PLUS_ASSIGN(loc_);}
"-<=" {return Parser::make_VEC_MINUS_ASSIGN(loc_);}
"*<=" {return Parser::make_VEC_STAR_ASSIGN(loc_);}
"/<=" {return Parser::make_VEC_SLASH_ASSIGN(loc_);}
"//<=" {return Parser::make_VEC_DOUBLE_SLASH_ASSIGN(loc_);}
"^<=" {return Parser::make_VEC_CARET_ASSIGN(loc_);}
"%<=" {return Parser::make_VEC_PERCENT_ASSIGN(loc_);}

"&&" {return Parser::make_DOUBLE_AMP(loc_);}
"||" {return Parser::make_DOUBLE_PIPE(loc_);}
"!"  {return Parser::make_BANG(loc_);}
"<" {return Parser::make_LESS(loc_);}
"<=" {return Parser::make_LESS_EQ(loc_);}
"<=>" {return Parser::make_SPACESHIP(loc_);}
">" {return Parser::make_GREATER(loc_);}
">=" {return Parser::make_GREATER_EQ(loc_);}

"&" {return Parser::make_AMP(loc_);}
"|" {return Parser::make_PIPE(loc_);}
"^^" {return Parser::make_DOUBLE_CARET(loc_);}
"~" {return Parser::make_TILDE(loc_);}
"<<" {return Parser::make_LEFT_SHIFT(loc_);}
">>" {return Parser::make_RIGHT_SHIFT(loc_);}
"&=" {return Parser::make_AMP_ASSIGN(loc_);}
"|=" {return Parser::make_PIPE_ASSIGN(loc_);}
"^^=" {return Parser::make_DOUBLE_CARET_ASSIGN(loc_);}
"~=" {return Parser::make_TILDE_ASSIGN(loc_);}
"<<=" {return Parser::make_LEFT_SHIFT_ASSIGN(loc_);}
">>=" {return Parser::make_RIGHT_SHIFT_ASSIGN(loc_);}

"&<" {return Parser::make_VEC_AMP(loc_);}
"|<" {return Parser::make_VEC_PIPE(loc_);}
"^^<" {return Parser::make_VEC_DOUBLE_CARET(loc_);}
"~<" {return Parser::make_VEC_TILDE(loc_);}
"<<<" {return Parser::make_VEC_LEFT_SHIFT(loc_);}
">><" {return Parser::make_VEC_RIGHT_SHIFT(loc_);}
"&<=" {return Parser::make_VEC_AMP_ASSIGN(loc_);}
"|<=" {return Parser::make_VEC_PIPE_ASSIGN(loc_);}
"^^<=" {return Parser::make_VEC_DOUBLE_CARET_ASSIGN(loc_);}
"~<=" {return Parser::make_VEC_TILDE_ASSIGN(loc_);}
"<<<=" {return Parser::make_VEC_LEFT_SHIFT_ASSIGN(loc_);}
">><=" {return Parser::make_VEC_RIGHT_SHIFT_ASSIGN(loc_);}

"=" {return Parser::make_ASSIGN(loc_);}
"<-" {return Parser::make_LEFT_ARROW(loc_);}
"++" {return Parser::make_PLUS_PLUS(loc_);}
"--" {return Parser::make_MINUS_MINUS(loc_);}
"..." {return Parser::make_ELLIPSIS(loc_);}
"::" {return Parser::make_COLON_COLON(loc_);}
"." {return Parser::make_DOT(loc_);}
"?" {return Parser::make_QUESTION(loc_);}


{ident_start}{ident_continue}* {return Parser::make_IDENTIFIER(yytext, loc_);}
