# Function Declarations
## Overview 
`function-declaration ::= function-interface (function-definition | ";")`
`function-interface ::= "let [function-interface-modifier] IDENTIFIER "(" [function-argument-list] ")" [return-types] [template-declaration]`
`function-interface-modifier ::= ["static"] ["compeval"] [pure-expression | nothrow-expression]`
`function-argument-list ::= function-argument {"," function-argument}`
`function-argument ::= IDENTIFIER [type-declaration] ["...]`
`return-types ::= => type-list`
`type-list ::= type-declaration {"," type-declaration}`

A function declaration introduces a function. Each function declaration introduces a variable whose identifier is the IDENTIFIER in the 
`function-interface`; all variables introduced by a function declaration are instantiations of the `Callable<type...(type...)>` class template.
The types used to instantiation the `Callable` template are deduced from the argument and return types of the function declaration. 

## Function Overload 
When a function call is encountered, its name is looked up in the declared enclosing namespace. If no matching function declaration is found, the 
lookup proceeds to the subsequent enclosing namespace. This process continues until one or more names are found or the global namespace is reached 
and no matching name is found. In the latter case, the program is ill-formed. Otherwise, the set of function declarations discovered in the 
look-up process forms the initial candidate set. 