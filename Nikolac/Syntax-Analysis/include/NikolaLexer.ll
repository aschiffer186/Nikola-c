
decimal_literal [0-9]+
based_literal [0-9]{1,2}_[a-zA-Z0-9]+
integer_literal {decimal_literal} | {based_literal}
real_literal [0-9]*\.[0-9]+([eE][+-][0-9]+)?
complex_literal ({integer_literal} | {real_literal})

C_ESCAPE_SEQUENCE \r|\t|\n|\a|\b|\f|\v|\'
S_ESCAPE_SEQUENCE \r|\t|\n|\a|\n|\f|\v|\"

c_char [^\n']
s_char [^\n"]
%%
{integer_literal} return make_INTEGER_LITERAL(loc, yytext);
{real_literal} return make_REAL_LITERAL(loc, yytext);
{complex_literal} return make_COMPLEX_LITERAL(loc, yytext);

\'{c_char}|{C_ESCAPE_SEQUENCE}\' return make_CHARACTER_LITERAL(loc, yytext);
\"{s_char}|{S_ESCAPE_SEQUENCE}\" return make_STRING_LITERAL(loc, yytext);
%%