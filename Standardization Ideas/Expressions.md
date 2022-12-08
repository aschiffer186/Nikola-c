-Syntax:
    expr ::=
    ### Primary expressions
    | INTEGER_LITERAL 
    | REAL_LITERAL 
    | COMPLEX_LITERAL 
    | CHAR_LITERAL 
    | STRING_LITERAL
    | IDENTIFIER 
    | "(" expr ")"
    | "|" expr "|"
    ### Arithmetic expressions
    | expr + expr
    | expr - expr
    | expr * expr
    | expr / expr
    | expr // expr
    | expr ^ expr
    | expr % expr
    | expr "!" 
    # Arithmetic-assignment expressions
    | expr += expr
    | expr -= expr
    | expr *= expr
    | expr /= expr
    | expr //= expr
    | expr ^= expr
    | expr %= expr
    ### Element-wise arithmetic expressions 
    | expr +< expr 
    | expr -< expr 
    | expr *< expr 
    | expr /< expr 
    | expr //< expr 
    | expr ^< expr 
    | expr %< expr 
    ### Element-wise arithmetic-assignent expressions
    | expr +<= expr 
    | expr -<= expr 
    | expr *<= expr 
    | expr /<= expr 
    | expr //<= expr 
    | expr ^<= expr 
    | expr %<= expr 
    ### Logical expressions 
    | expr && expr
    | expr || expr 
    | ! expr 
    | expr == expr 
    | expr != expr 
    | expr < expr 
    | expr <= expr 
    | expr > expr 
    | expr >= expr 
    | expr <=> expr 
    ### Bitwise expressions 
    | expr & expr 
    | expr | expr # Also used to pipe functions together
    | expr ^^ expr 
    | ~ expr 
    | expr << expr 
    | expr >> expr 
    | expr &= expr 
    | expr |= expr 
    | expr ^^= expr 
    | expr ~= expr 
    | expr <<= expr 
    | expr >>= expr 
    ### Misc. operators 
    | expr "=" expr # Assignment operator
    | expr "<-" expr # Move operator (C++ equiv. expr = std::move(expr))
    | "&" expr # View creation 
    | "++" expr 
    | expr "++"
    | "--" expr 
    | expr "--"
    ### Initialization literals
    # Vector literal
    | "<" expr {"," expr} ">"
    # Matrix literal 
    | "[" { "[" expr {"," expr} "]" } "]"
    # Initializer literal
    | "{" expr {"," expr} "}"
    # Set builder expression 
    | "{" expression "|" expression "}" # Equivalent to matheatical set-builder notation 
    ### Array indexing
    | expr "[" array_slice {, array_slice} "]"
    ### Initialization expression 
    | "new" ["dynamic"] IDENTIFIER "{" [function_argument_list] "}"
    | "new" ["dynamic"] IDENTIFIER {"[" INTEGER_LITERAL "]"} # Dynamic array
    ### Function call 
    | expr "(" function_argument_list ")"
    ### Pattern maching/casting aids 
    | expr "is" expr 
    | "as" template-instantiation "(" expr ")"
    ### Querying expressions 
    | "type" "(" expr ")"
    | "sizeof" "(" expr ")"

array-slice ::= array-slice-elt [":" array-slice-elt] [":" array-slice-elt]
array-slice_elt ::= (INTEGER_LITERAL | IDENTIFIER)
function-argment-list ::= [IDENTIFIER "="] expression ["->"] {"," [IDENTIFIER "="] expression ["->"]}

-Semantics 
- An expression is a unit of code that has a value and a type 
    - The type of an expression may be obtained using the type() operator
    - The type may be obtained at compile-time or run-time 
- The type of an expression is evaluated at compile-time and is deduced using the following rules
    - If the expression is a name of an entity
         - If the name is a class, function, or variable template, the identifier instantiated according to template instantiation rules 
        - After instantiation, if applicable, the type of expression is the type of of the entity represented by the name 
    - If the expression is an integer literal, the type of the expression is
        - If the literal has a type suffix, the type of the expression indicated by the type suffix 
        - If the literal has no type suffix, the type of the expression is the smallest integral type that can represent the literal 
    - If the expression is a real literal, the of the expression is real 
    - If the expression is a complex literal 
         - If both the real and imagiary parts are integer literals, the type is complex<integer-type> where integer-type is 
           the type deduced by the larger of the two literals 
        - If one or both of the real and imaginary parts are real literals, the type is complex<real>
    - If the expression is a char literal, the type of the expression is char 
    - If the expression is a string literal, the type of the expression is Nik::string;
    - If the expression is a parenthesized expression "(" expr "); the type of the expression is the expression contained in the parenthesis
    - If the expression is a function call, the type of the expression is the return type of the function
    - If the expression contains a binary or unary operator, expression is first converted a function call and then the expression is treated like a function call
    - If the expression is a vector literal, then the type is Nik::StaticVector<T, N> where T is the common type, as defined by Nik::CommonType, of the elements of 
      the vector and N is the size of the vector 
    - If the expression is a matrix literal, then the type is Nik::StaticMatrix<T, M, N, RowMajorTag> where T is the common type, as defined by CommonType, of the    elements of 
      the matrix, M is the number of rows in the matrix, N is the number of clumns in the matrix
    
