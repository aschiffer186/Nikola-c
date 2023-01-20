# Overview
* This document describes the standard library of Nikola
* The standard library is split into modules; each clause of this document describes one module
    * Each clause is written as though each module is contained only in one source file. However, library implementations are free to 
      split each module into multiple source files as long as all required contents of the module can be imported using the required 
      import statement.

# Core 
* This clause describes the core library routines 
* The core module is implicitly imported in every module 

# Core.String 
\# Summary 
let class String 
{
    let public nothrow constructor();
    let public constructor(count : Integer, element : char);
    let public constructor(begin : InputIterator, end : InputIterator);
    let public constructor(range : Range<char> const&);
    let public constructor(range : Range<char><-);
    let public constructor(other : String const&);
    let public constructor(other: String<-);

    let public operator=(other : String const&) -> String&;
    let public operator<-(other : String<-) -> String&;

    let public pure size() -> Integer;
    let public pure empty() -> bool;

    let public nothrow begin() -> RandomAccessIterator;
    let public nothrow const begin() -> RandomAccessIterator;
    let public nothrow const cbegin() -> RandomAccessIterator;
    let public nothrow end() -> RandomAccessIterator;
    let public nothrow const end() -> RandomAccessIterator;

    let public pure contains(char c) -> bool;
    let public pure contains(substring : String) -> bool;
    let public pure contains(substring : Range<char>) -> bool;

    let public operator[](idx : Integer) -> char&;
    let public const operator[](idx : Integer) -> char const&;
};

\# Constructors
let public nothrow constructor()
* Pre-conditions: None
* Effect: Creates an empty String
* Post-conditions: size() == 0, empty() == true, begin() == end()
* Complexity: constant 
* Exception safety: Nothrow guarantee

let public constructor(count : Integer, element : char);
* Pre-conditions: count > 0 
* Effects: Creates a new String containing count copies of element 
* Post-conditions: size() == count, empty() == false, *begin() == element, *(begin() + 1) == element, ..., *(begin() + count - 1) == element
* Complexity: linear in count
* 