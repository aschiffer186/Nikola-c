%require "3.7"
%skeleton "lalr1.cc"
%defines 
%locations

%define api.location.file "../../include/Parser/Location.hpp"
%define api.namespace {Nikola::SyntaxAnalysis}
%define api.parser.class {NikolaParser}
%define api.token.constructor 
%define api.token.raw
%define api.value.type variant 

%define parse.assert 
%define parse.error detailed 
%define parse.lac full 
%define parse.trace

%code requires {
    #include <string>
}

//Literals
%token <std::string> INTEGER_LITERAL <std::string> REAL_LITERAL <std::string> COMPLEX_LITERAL <std::string> CHAR_LITERAL <std::string> STRING_LITERAL ;
//Identifiers
%token <std::string> IDENTIFIERS
//Punctuators 
%token LEFT_BRACKET "[" RIGHT_BRACKET "]" LEFT_PARENTHESIS "(" RIGHT_PARENTHESIS ")" LEFT_BRACE "{" RIGHT_BRACE "}" SEMI_COLON ";" COLON ":" RIGHT_ARROW "=>" ;
// Arithemtic Operators 
%token PLUS "+" MINUS "-" STAR "*" SLASH "/" DOUBLE_SLASH "//" CARET "^" PERCENT "%" ;
%token PLUS_ASIGN "+=" MINUS_ASSIGN "-=" STAR_ASSIGN "*=" SLASH_ASSIGN "/=" DOUBLE_SLASH_ASSIGN "//=" CARET_ASSIGN "^=" PERCENT_ASSIGN "%=" ;
//Element-wise Arithmetic Operators 
%token VEC_PLUS "+<" VEC_MINUS "-<" VEC_STAR "*<" VEC_SLASH "/<" VEC_DOUBLE_SLASH "//<" VEC_CARET "^<" VEC_PERCENT "%<" ;
%token VEC_PLUS_ASSIGN "+<=" VEC_MINUS_ASSIGN "-<=" VEC_STAR_ASSIGN "*<=" VEC_SLASH_ASSIGN "/<=" VEC_DOUBLE_SLASH_ASSIGN "//<=" VEC_CARET_ASSIGN "^<=" ;
%token VEC_PERCENT_ASSIGN "%<=" ;
//Logical Operators
%token DOUBLE_AMP "&&" DOUBLE_PIPE "||" BANG "!" LESS "<" LESS_EQ "<=" SPACESHIP "<=>" GREATER_EQ ">=" GREATER ">" EQ "==" NEQ "!=" ;
//Bitwise Operators 
%token AMP "&" PIPE "|" DOUBLE_CARET "^^" TILDE "~" LEFT_SHIFT "<<" RIGHT_SHIFT ">>" ;
%token AMP_ASSIGN "&=" PIPE_ASSIGN "|=" DOUBLE_CARET_ASSIGN "^^=" TILDE_ASSIGN "~=" LEFT_SHIFT_ASSIGN "<<=" RIGHT_SHIFT_ASSIGN ">>=" ;
//Element-wise Bitwise Operators
%token VEC_AMP "&<" VEC_PIPE "|<" VEC_DOUBLE_CARET "^^<" VEC_TILDE "~<" VEC_LEFT_SHIFT "<<<" VEC_RIGHT_SHIFT ">><" ;
%token VEC_AMP_ASSIGN "&<=" VEC_PIPE_ASSIGN "|<=" VEC_DOUBLE_CARET_ASSIGN "^^<=" VEC_TILDE_ASSIGN "~<=" VEC_LEFT_SHIFT_ASSIGN "<<<=" ;
%token VEC_RIGHT_SHIFT_ASSIGN ">><=" ;
// Miscellaneous Operators 
%token ASSIGN "=" LEFT_ARROW "<-" PLUS_PLUS "++" MINUS_MINUS "--" ELLIPSIS "..." COLON_COLON "::" DOT "." QUESTION "?" ;

%%
%start nikola;
nikola: "&" ;