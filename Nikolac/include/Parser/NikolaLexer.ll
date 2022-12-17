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
ident_continue [_0-9a-zA-Z-]
ident_end [a-zA-Z_0-9]

decimal_integer_literal {digit}+
based_integer_literal {digit}{1,2}\_{based_digit}+

integer_literal {decimal_integer_literal}|{based_integer_literal}
real_literal {digit}*\.{digit}+([eE][+-]?{digit}+)?
complex_literal ({decimal_integer_literal}|{based_integer_literal}_|{real_literal})[iIjJ]
%%
%{
    loc_.step();
%}
\n+ loc_.lines(yyleng); loc_.step();
[[:space:]]+ loc_.step();
#[^\n]+\n loc_.step();

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
"==" {return Parser::make_EQ(loc_);}
"!=" {return Parser::make_NEQ(loc_);}

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

"int8_t" {return Parser::make_INT8_T(loc_);}
"int16_t" {return Parser::make_INT16_T(loc_);}
"int32_t" {return Parser::make_INT32_T(loc_);}
"int64_t" {return Parser::make_INT64_T(loc_);}
"int" {return Parser::make_INT(loc_);}
"real32_t" {return Parser::make_REAL32_T(loc_);}
"real64_t" {return Parser::make_REAL64_T(loc_);}
"real" {return Parser::make_REAL(loc_);}
"bool" {return Parser::make_BOOL(loc_);}
"char" {return Parser::make_CHAR(loc_);}
"mod" {return Parser::make_MOD(loc_);}
"void" {return Parser::make_VOID(loc_);}

"true" {return Parser::make_TRUE(loc_);}
"false" {return Parser::make_FALSE(loc_);}
"this" {return Parser::make_THIS(loc_);}
"nptr" {return Parser::make_NPTR(loc_);}

"let" {return Parser::make_LET(loc_);}
"const" {return Parser::make_CONST(loc_);}
"compeval" {return Parser::make_COMPEVAL(loc_);}

"pure" {return Parser::make_PURE(loc_);}
"static" {return Parser::make_STATIC(loc_);}
"nothrow" {return Parser::make_NOTHROW(loc_);}
"in" {return Parser::make_IN(loc_);}
"inout" {return Parser::make_INOUT(loc_);}
"out" {return Parser::make_OUT(loc_);}
"move" {return Parser::make_MOVE(loc_);}
"operator" {return Parser::make_OPERATOR(loc_);}
"delete" {return Parser::make_DELETE(loc_);}
"default" {return Parser::make_DEFAULT(loc_);}

"class" {return Parser::make_CLASS(loc_);}
"public" {return Parser::make_PUBLIC(loc_);}
"protected" {return Parser::make_PROTECTED(loc_);}
"private" {return Parser::make_PRIVATE(loc_);}
"enum" {return Parser::make_ENUM(loc_);}
"constructor" {return Parser::make_CONSTRUCTOR(loc_);}
"destructor" {return Parser::make_DESTRUCTOR(loc_);}
"default" {return Parser::make_DEFAULT(loc_);}

"define" {return Parser::make_DEFINE(loc_);}

"if" {return Parser::make_IF(loc_);}
"else" {return Parser::make_ELSE(loc_);}
"else if" {return Parser::make_ELSE_IF(loc_);}
"for" {return Parser::make_FOR(loc_);}
"do" {return Parser::make_DO(loc_);}
"while" {return Parser::make_WHILE(loc_);}
"try" {return Parser::make_TRY(loc_);}
"catch" {return Parser::make_CATCH(loc_);}
"throw" {return Parser::make_THROW(loc_);}
"break" {return Parser::make_BREAK(loc_);}
"return" {return Parser::make_RETURN(loc_);}
"continue" {return Parser::make_CONTINUE(loc_);}
"match" {return Parser::make_MATCH(loc_);}
"when" {return Parser::make_WHEN(loc_);}

"typeset" {return Parser::make_TYPESET(loc_);}
"template" {return Parser::make_TEMPLATE(loc_);}
"where" {return Parser::make_WHERE(loc_);}
"type" {return Parser::make_TYPE(loc_);}

"module" {return Parser::make_MODULE(loc_);}
"namespace" {return Parser::make_NAMESPACE(loc_);}
"import" {return Parser::make_IMPORT(loc_);}
"from" {return Parser::make_FROM(loc_);}
"as" {return Parser::make_AS(loc_);}
"with" {return Parser::make_WITH(loc_);}

"is" {return Parser::make_IS(loc_);}
"sizeof" {return Parser::make_SIZEOF(loc_);}
"typeof" {return Parser::make_TYPEOF(loc_);}
"static_assert" {return Parser::make_STATIC_ASSERT(loc_);}
"assert" {return Parser::make_ASSERT(loc_);}
"new" {return Parser::make_NEW(loc_);}
"dynamic" {return Parser::make_DYNAMIC(loc_);}

{ident_start}{ident_continue}*{ident_end}? {return Parser::make_IDENTIFIER(yytext, loc_);}

<<EOF>> {return Parser::make_YYEOF(loc_);}

. {
    throw 1;
}

%%
namespace Nikola::SyntaxAnalysis
{
    NikolaLexer::NikolaLexer(std::istream& in)
    : yyFlexLexer{&in}, loc_{}
    {

    }
}