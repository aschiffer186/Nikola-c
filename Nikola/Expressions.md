# Overview
- An expression is defined by a type and a value 
    - The type is inferred at compile-time 

# Binary Expressions 
- Consist of a binary operator and two operands 
    - The operands are also expressions 
- The expression is evaluated by performing function overload resolution on the operator with the two operands 
    - The type of the expression is the return type of the resolved function
- All binary expressions are syntactic sugar 
    - The expression `a _ b` is equivalent to `::operator_(a, b)`
- Built-in binary operators in Nikola:
    - \+: Addition 
    - \-: Subtraction 
    - \*: Multiplication 
    - \\: Division 
    - \\\\: Integer Division
    - ^: Exponentiation 
    - %: Modulo 
    - \+<: Element-wise Addition 
    - \-<: Element-wise Subtraction 
    - \-*: Element-wise Multiplication 
    - \\<: Element-wise Division 
    - \\\\<: Element-wise Integer Division
    - ^<: Element-wise Exponentiation 
    - %<: Element-wise Modulo
    - &&: Logical And 
    - ||: Logical Or
    - ==: Equals 
    - !=: Not Equals 
    - <: Less Than 
    - <= Less Than or Equal To
    - <=>: Three Way Comparison 
    - \>=: Greater Than or Equal To
    - \>: Greater Than 
    - &: Binary And/Concatenation 
    - |: Binary Or
    - ^^: Binary XOR 
    - <<: Left Shift 
    - \>\>: Right Shift
    - &<: Element-wise Binary And/Concatenation 
    - |<: Element-wise Binary Or
    - ^^<: Element-wise Binary XOR 
    - <<<: Element-wise Left Shift 
    - \>\><: Element-wise Right Shift
    - .: Member function invocation
    - is: Type checking 
        - Must return bool
    - in: Collection membership
        - Must return bool 

# Unary expressions
- Consist of a unary operator and an operator 
- There are two types of operators: symbolic operators and function-like operators 
    - Function-like operators look like function calls but are treated as operators 
- Symbolic unary operators are syntactic sugar 
    - The expression `_ a` and is equivalent to `::operator_(a)`
    - The expression `a _` is equivalent to `::operator_(a, Nik::postfix)`
- The built in unary symbolic operators are 
    - !_ : Logical NOT
    - _!: Factorial 
    - _~: Bitwise NOT
    - _++: Pre-increment
    - _--: Pre-decrement
    - ++_: Post-increment
    - --_: Post-Decrement 
    - &_: View-creation 
    - *_: Dereference
    - \-: Unary minus
    - ...: Pack expansion operator 
- The built-in function-like operators are 
    - typeof(): Return type of expression
    - sizeof(): Return size of object in bytes 
    - nothrow(): Check if expression is marked as nothrow
    - pure(): Check if expression is marked as pure 
    - compeval(): Check if expression can be evaluated at compile-time 
- Function-like operators cannot be overloaded 

# Ternary Operators
- Allows for inline evaluation of a conditional statement 

# Function call operator 
- Invokes a function with the specified arguments 
- Two types arguments: position arguments an named arguments 
    - Positional arguments are 



