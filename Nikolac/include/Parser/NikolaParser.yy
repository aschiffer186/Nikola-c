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
    namespace Nikola::SyntaxAnalysis
    {
        class NikolaLexer;
    }
    #include <string>
}

%parse-param {Nikola::SyntaxAnalysis::NikolaLexer& lexer}

%code {
    #include "NikolaLexer.hpp"

    #define yylex lexer.lex
}

//Literals
%token <std::string> INTEGER_LITERAL <std::string> REAL_LITERAL <std::string> COMPLEX_LITERAL <std::string> CHAR_LITERAL <std::string> STRING_LITERAL ;
//Identifiers
%token <std::string> IDENTIFIER
//Punctuators 
%token LEFT_BRACKET "[" RIGHT_BRACKET "]" LEFT_PARENTHESIS "(" RIGHT_PARENTHESIS ")" LEFT_BRACE "{" RIGHT_BRACE "}" SEMI_COLON ";" COLON ":" RIGHT_ARROW "=>" COMMA ",";
// Arithemtic Operators 
%token PLUS "+" MINUS "-" STAR "*" SLASH "/" DOUBLE_SLASH "//" CARET "^" PERCENT "%" ;
%token PLUS_ASSIGN "+=" MINUS_ASSIGN "-=" STAR_ASSIGN "*=" SLASH_ASSIGN "/=" DOUBLE_SLASH_ASSIGN "//=" CARET_ASSIGN "^=" PERCENT_ASSIGN "%=" ;
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

//Operator precedence

//Keywords 
//Built-in-types 
%token INT8_T "int8_t" INT16_T "int16_t" INT32_T "int32_t" INT64_T "int64_t" INT "int" REAL32_T "real32_t" REAL64_T "real64_t" REAL "real" BOOL "bool" ;
%token CHAR "char" MOD "mod" VOID "void" ;
//Literals 
%token TRUE "true" FALSE "false" THIS "this" NPTR "nptr" ;
//Declarations 
//General 
%token LET "let" CONST "const" COMPEVAL "compeval"
//Function
%token PURE "pure" STATIC "static" NOTHROW "nothrow" IN "in" INOUT "inout" OUT "out" MOVE "move" OPERATOR "operator" DELETE "delete" ;
//Class 
%token CLASS "class" PUBLIC "public" PROTECTED "protected" PRIVATE "private" ENUM "enum" CONSTRUCTOR "constructor" DESTRUCTOR "destructor" ;
%token DEFAULT "default" ;
//Type-alias 
%token DEFINE "define" ;
//Control Flow
%token IF "if" ELSE "else" ELSE_IF "else if" FOR "for" DO "do" WHILE "while" TRY "try" CATCH "catch" THROW "throw" BREAK "break" RETURN "return" ;
%token CONTINUE "continue" MATCH "match" WHEN "when" ;
//Generic Programming 
%token TYPESET "typeset" TEMPLATE "template" WHERE "where" TYPE "type";
//Modules 
%token MODULE "module" NAMESPACE "namespace" IMPORT "import" FROM "from" AS "as" WITH "with" ;
//Expressions 
%token IS "is" SIZEOF "sizeof" TYPEOF "typeof" STATIC_ASSERT "static_assert" ASSERT "assert" NEW "new" DYNAMIC "dynamic" ;


%left "is"
%right "=" "<-" "+=" "-=" "*=" "/=" "//=" "^=" "%=" "+<=" "-<=" "*<=" "/<=" "//<=" "^<=" "%<=" "&=" "|=" "^^=" "<<=" ">>=" "&<=" "|<=" "^^<=" "<<<=" ">><=" "?" ":"
%left "..."
%left "||"
%left "&&"
%left "|" "|<"
%left "^^" "^^<"
%left "&" "&<"
%left "==" "!=" "in"
%left "<" "<=" ">=" ">"
%left "<=>"
%left "<<" ">>" "<<<" ">><"
%left "+" "-" "+<" "-<"
%left "*" "/" "//" "%" "*<" "/<" "//<" "%<"
%right "^" "^<"
%right "~" "!" "++" "--" "~<"
%left "."
%%
%start nikola;
nikola: statements;

statements: statement statements 
| %empty; 


statement: 
    expression ";"
    | assignment-statement
    ;
assignment-statement:
    expression "=" expression ";"
    | expression "<-" expression ";"
    | expression "+=" expression ";"
    | expression "-=" expression ";"
    | expression "*=" expression ";"
    | expression "/=" expression ";"
    | expression "//=" expression ";"
    | expression "^=" expression ";"
    | expression "%=" expression ";"
    | expression "+<=" expression ";"
    | expression "-<=" expression ";"
    | expression "*<=" expression ";"
    | expression "/<=" expression ";"
    | expression "//<=" expression ";"
    | expression "^<=" expression ";"
    | expression "%<=" expression ";"
    | expression "&=" expression ";"
    | expression "|=" expression ";"
    | expression "^^=" expression ";"
    | expression "~=" expression ";"
    | expression "<<=" expression ";"
    | expression ">>=" expression ";"
    | expression "&<=" expression ";"
    | expression "|<=" expression ";"
    | expression "^^<=" expression ";"
    | expression "~<=" expression ";"
    | expression "<<<=" expression ";"
    | expression ">><=" expression ";"
    ;
expression:
    literal
    | name
    | "(" expression ")"
    | expression "+" expression 
    | expression "-" expression
    | expression "*" expression
    | expression "/" expression
    | expression "//" expression
    | expression "%" expression
    | expression "^" expression
    | expression "+<" expression 
    | expression "-<" expression 
    | expression "*<" expression 
    | expression "/<" expression 
    | expression "//<" expression 
    | expression "^<" expression 
    | expression "%<" expression 
    | expression "&&" expression 
    | expression "||" expression 
    | expression "<" expression 
    | expression "<=" expression 
    | expression "<=>" expression 
    | expression ">=" expression 
    | expression ">" expression 
    | expression "==" expression 
    | expression "!=" expression 
    | "!" expression
    | expression "&" expression 
    | expression "|" expression
    | expression "^^" expression 
    | "~" expression 
    | expression "<<" expression 
    | expression ">>" expression 
    | expression "&<" expression 
    | expression "|<" expression
    | expression "^^<" expression 
    | expression "~<" expression 
    | expression "<<<" expression 
    | expression ">><" expression 
    | expression "." IDENTIFIER
    | "++" expression 
    | "--" expression 
    | expression "++"
    | expression "--"
    | "*" expression %prec "~"
    | "&" expression %prec "~"
    | "-" expression %prec "~"
    | expression "?" expression ":"
    | expression "is" expression
    | expression "in" expression
    | expression "..."
    // Function like operators 
    | "typeof" "(" expression ")"
    | "sizeof" "(" expression ")"
    | "as" "<" name ">" "(" expression ")"
    | "static_assert" "(" expression ")"
    | "pure" "(" expression ")"
    | "nothrow" "(" expression ")"
    //New expressions 
    | "new" name "{" function_argument_list "}"
    | "new" "dynamic" name "{" function_argument_list "}"
    // Function call and array subscript 
    | name "(" function_argument_list ")"
    | "(" expression ")" "(" function_argument_list ")"
    | expression "." IDENTIFIER "(" function_argument_list ")"
    | array_index
    | array_index "(" function_argument_list ")"
    ;
literal: 
    INTEGER_LITERAL
    | REAL_LITERAL 
    | COMPLEX_LITERAL
    | STRING_LITERAL
    | CHAR_LITERAL
    | "true"
    | "false"
    | "nptr"
    ;
function_argument_list: function_argument_list0 
    | %empty 
    ;
function_argument_list0: function_argument "," function_argument_list0
    | function_argument
    ;
function_argument: expression 
    | IDENTIFIER "=" expression
    ;
array_index:
    name "[" array_slice_list "]"
    | expression "." IDENTIFIER "[" array_slice_list "]"
    | "(" expression ")" "[" array_slice_list "]"
    ;
array_slice_list: array_slice "," array_slice_list
    | array_slice
    ;
array_slice: 
    expression 
    | expression ":"
    | ":" expression 
    | expression ":" expression ":" expression 
    | expression ":" expression ":"
    | ":" expression ":" expression
    ;
name: 
    IDENTIFIER
    | module_name 
    ;
module_name: IDENTIFIER "::" module_name
    | IDENTIFIER "::" IDENTIFIER
    ;