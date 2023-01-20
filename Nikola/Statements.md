# Conditional Statement 
## Grammar
`conditional-statement: if-statement { else-if-statement } [ else-statement-opt ]`
`if-statement: "compeval"-opt "if" "(" expression ")" compound-statement`
`else-if-statement: "else if" "(" expression ")" compound-statement`
`else-statement: "else" compound-statement`

## Description 
* The conditional statement allows for the conditional execution of code at run-time 
    * If the conditional statement is prefixed with "compeval," the conditional execution is determined at compile-time 
* The conditional statement consists of an if-statement followed by 0 or more else-if statements followed optionally by an else 
  statement.
    * The type of the expressions in the if- and else-if- statements must be convertible to `bool`.
* When an if-statement is encountered, the expression comprising the if-statement's condition is evaluated. 
    * If the expression evaluates to a value that converts to bool, the corresponding compound statement is executed.
* If the expression evaluates to a value that coverts to false, one of the following happens:
    * If there are one or more else-if statements, the condition for each else-if statement is executed sequentially until 
      one condition evaluates true. If there is an else-if statement whose condition evaluates to true, its corresponding 
      statement is executed. No further else-if statements are evaluated. If there is an else-statement, the else statement is 
      not executed
    * If there are no else-if statements and there is an else-statement; the else-statement is executed. 
    * Otherwise execution continues. 
* If the conditional-statement is prefixed with "compeval," all conditions are evaluated at compile-time 
    * In addition to the requirements imposed by non-compeval conditional-statements, the conditions in a compeval conditional-statement must be static expressions.
* Only the statement whose conditional evaluates to true is compiled; all other branches are discarded and are not required 
  to be well-formed. However; they must be syntactically valid. 