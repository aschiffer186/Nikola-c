%require "3.7"
%skeleton "lalr1.cc"

%locations
%defines "NikolaParser.hxx"

%output "../NikolaParser.cpp"

%define api.location.file "include/Location.hxx"
%define api.namespace {Nikola::SyntaxAnalysis}
%define api.parser.class {NikolaParser}
%define api.token.constructor 
%define api.token.raw
%define api.value.type variant

%define parse.assert
%define parse.error detailed
%define parse.lac full 
%define parse.trace

%code requires 
{
    #include <string>
}

//Define tokens 
%token <std::string> INTEGER_LITERAL <std::string> REAL_LITERAL <std::string> COMPLEX_LITERAL ;
%token <std::string> STRING_LITERAL <std::string> CHARACTER_LITERAL <std::string> IDENTIFIER ;

//Operators 
%token PLUS "+" MINUS "-" STAR "*" SLASH "/" DOUBLE_SLASH "//" CARET "^" PERCENT "%" PLUS_ASSIGN "+=" ;
%token MINUS_ASSIGN "-=" STAR_ASSIGN "*=" SLASH_ASSIGN "/=" DOUBLE_SLASH_ASSIGN "//=" CARET_ASSIGN "^=" ;
%token PERCENT_ASSIGN "%=" VEC_PLUS "+<" VEC_MINUS "-<" VEC_STAR "*<" VEC_SLASH "/<" VEC_DOUBLE_SLASH "//<" ;
%token VEC_CARET "^<" VEC_PERCENT "%<" VEC_PLUS_ASSIGN "+<=" VEC_MINUS_ASSIGN "-<=" VEC_STAR_ASSIGN "*<=" ;
%token VEC_SLASH_ASSIGN "/<=" VEC_DOUBLE_SLASH_ASSIGN "//<=" VEC_CARET_ASSIGN "^<=" VEC_PERCENT_ASSIGN "%<=" ;
%token DOUBLE_AMP "&&" DOUBLE_PIPE "||" DOUBLE_EQ "==" BANG_EQ "!=" LESS "<" LEQ "<=" GREATER ">" GEQ ">=" ;
%token SPACESHIP "<=>" BANG "!" AMP "&" PIPE "|" DOUBLE_CARET "^^" TILDE "~" LEFT_SHIFT "<<" RIGHT_SHIFT ">>" ;
%token AMP_ASSIGN "&=" PIPE_ASSIGN "|=" DOUBLE_CARET_ASSIGN "^^=" TILDE_ASSIGN "~=" LEFT_SHIFT_ASSIGN "<<=" ;
%token RIGHT_SHIFT_ASSIGN ">>=" ASSIGN "=" LEFT_ARROW "<-" RIGHT_ARROW "->" DOUBLE_COLON "::" DOUBLE_PLUS "++" ;
%token DOUBLE_MINUS "--" ;

%nonassoc "is" "in"
%right "=" "+=" "-=" "*=" "/=" "//=" "^=" "%=" "<<=" ">>=" "&=" "^==" "|=" "+<=" "-<=" "*<=" "/<=" "//<=" "%<=" "^<=" "<-"
%left "||"
%left "&&"
%left "|"
%left "^^"
%left "&"
%left "==" "!="
%left "<" "<=" ">" ">="
%left "<=>"
%left "<<" ">>"
%left "+" "-" "+<" "-<" FACTORIAL
%left "*" "/" "//" "%" "*<" "/<" "//<" "%<"
%right "^" "^<"
%right "!" "~"
%left "++" "--"
%left "::"

//Punctuators
%token LEFT_BRACKET "[" RIGHT_BRACKET "]" COMMA "," LEFT_BRACE "{" RIGHT_BRACE "}" COLON ":" ;
%token LEFT_PARENTHESIS "(" RIGHT_PARENTHEIS ")" SEMICOLON ";" ELLIPSIS "..."  DOUBLE_ARROW "=>" ;
%token MROW_START MROW_END ;

//Keywords
%token AS "as" BOOL "bool" BREAK "break" CATCH "catch" CHAR "char" CLASS "class" COMPEVAL "compeval" ;
%token COMPLEX "complex" CONST "const" CONTINUE "continue" DO "do" DYNAMIC "dynamic" ENUM "enum" ELSE "else" ELSE_IF "else if" ;
%token FALSE "false" FOR "for" IF "if" IN "in" IS "is" INT8_T "int8_t" INT16_T "int16_t" INT32_T "int32_t" INT64_T "int64_t" ;
%token LET "let" MATCH "match" NEW "new" NOOP "noop" NOTHROW "nothrow" PRIVATE "private" PUBLIC "public" ;
%token PURE "pure" REAL "real" RETURN "return" SIZEOF "sizeof" STATIC "static" THROW "throw" TRUE "true" TRY "try";
%token TYPE "type" TYPEDEF "typedef" WHEN "when" WHERE "where" WHILE "while" ;
%%
%start nikola;
nikola: statements;

statements: statement statements 
| %empty
;
compound_statement: "{" statements "}" ;
if_statement: "if" "(" expression ")" compound_statement ;
else_if_statement: "else if" "(" expression ")" compound_statement ;
else_if_statements: else_if_statement else_if_statements 
    | else_if_statement 
    ;
else_statement: "else" conditional_statement ;
else_statement_opt: else_statement | %empty;
conditional_statement: 
    if_statement else_if_statements else_statement_opt
    | if_statement else_statement_opt
    ;
for_loop: "for" "(" expression_opt ";" expression_opt ";" expression_opt ")" compound_statement ;
while_loop: "while" "(" expression ")" compound_statement;
do_while_loop: "do" compound_statement "while" "(" expression ")" compound_statement;
loop_statement: 
    for_loop
    | while_loop
    | do_while_loop
    ;
match_clauses: match_clause match_clauses
| match_clause 
;
match_clause: "when" expression "=>" compound_statement ;
match_statement: "match" "(" expression ")" "{" match_clauses else_statement_opt "}"
exception_statement: "try" compound_statement catch_statement catch_statements ;
catch_statements: catch_statement catch_statements
| %empty
;
catch_statement: "catch" "(" expression ")" compound_statement ;
jump_statement: 
    "return" ";"
    | "return" expression ";"
    | "throw" ";"
    | "throw" expression ";"
    | "break" ";"
    | "continue" ";"
    ;
statement: 
    compound_statement
    | "noop" ";"
    | expression ";" 
    | conditional_statement
    | loop_statement
    | match_statement
    | exception_statement
    | jump_statement
    ;

literal: INTEGER_LITERAL | REAL_LITERAL | COMPLEX_LITERAL | STRING_LITERAL | CHARACTER_LITERAL ;
expression_list: expression "," expression_list 
| expression 
;
matrix-rows: MROW_START expression_list MROW_END matrix-rows
| MROW_START expression_list MROW_END ;
expression_opt: expression | %empty ;
expression: 
    // Primary expressions
    literal
    | IDENTIFIER
    | "(" expression ")"
    | "|" expression "|"
    // Begin Arithmetic expressions
    | expression "+" expression
    | expression "-" expression
    | expression "*" expression
    | expression "/" expression
    | expression "//" expression
    | expression "^" expression
    | expression "%" expression
    | expression "!" %prec FACTORIAL
    // Arithmetic assigment expressions 
    | expression "+=" expression
    | expression "-=" expression
    | expression "*=" expression
    | expression "/=" expression
    | expression "//=" expression
    | expression "^=" expression
    | expression "%=" expression
    // Element-wise arithmetic expressions
    | expression "+<" expression
    | expression "-<" expression
    | expression "*<" expression
    | expression "/<" expression
    | expression "//<" expression
    | expression "^<" expression 
    | expression "%<" expression
    // Element-wise arithmetic assignment expression 
    | expression "+<=" expression
    | expression "-<=" expression
    | expression "*<=" expression 
    | expression "/<=" expression 
    | expression "//<=" expression 
    | expression "^<=" expression
    | expression "%<=" expression
    // Logical expressions 
    | expression "&&" expression
    | expression "||" expression
    | "!" expression
    | expression "==" expression 
    | expression "!=" expression 
    | expression "<" expression
    | expression "<=" expression
    | expression ">" expression
    | expression ">=" expression
    | expression "<=>" expression
    //Miscellaneous operators 
    | expression "=" expression
    | expression "<-" expression
    | "&" expression %prec "!"
    | "++" expression
    | expression "++"
    | "--" expression 
    | expression "--"
    // Initialization Literals
    | "[" expression_list "]" //Vector
    | "[" matrix-rows "]" //Matrix
    | "{" expression_list "}" //Initializer list
    | "{" expression "|" expression "}" //Set-builder/list comprehension
    // Pattern matching aids
    | expression "in" expression
    | expression "is" expression
    // Querying expressions 
    | "nothrow" "(" expression ")"
    | "pure" "(" expression ")"
    | "sizeof" "(" expression ")"
    | "type" "(" expression ")"
    ;
%%