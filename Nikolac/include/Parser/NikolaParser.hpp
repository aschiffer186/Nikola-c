// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file /home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.hpp
 ** Define the Nikola::SyntaxAnalysis::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_HOME_ASCHIFFE_DEV_NIKOLA_C_NIKOLAC_INCLUDE_PARSER_NIKOLAPARSER_HPP_INCLUDED
# define YY_YY_HOME_ASCHIFFE_DEV_NIKOLA_C_NIKOLAC_INCLUDE_PARSER_NIKOLAPARSER_HPP_INCLUDED
// "%code requires" blocks.
#line 18 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"

    namespace Nikola::SyntaxAnalysis
    {
        class NikolaLexer;
    }
    #include <string>

#line 57 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.hpp"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "../../include/Parser/Location.hpp"
#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 7 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"
namespace Nikola { namespace SyntaxAnalysis {
#line 198 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.hpp"




  /// A Bison parser.
  class NikolaParser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // INTEGER_LITERAL
      // REAL_LITERAL
      // COMPLEX_LITERAL
      // CHAR_LITERAL
      // STRING_LITERAL
      // IDENTIFIER
      char dummy1[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 1,                   // error
    YYUNDEF = 2,                   // "invalid token"
    INTEGER_LITERAL = 3,           // INTEGER_LITERAL
    REAL_LITERAL = 4,              // REAL_LITERAL
    COMPLEX_LITERAL = 5,           // COMPLEX_LITERAL
    CHAR_LITERAL = 6,              // CHAR_LITERAL
    STRING_LITERAL = 7,            // STRING_LITERAL
    IDENTIFIER = 8,                // IDENTIFIER
    LEFT_BRACKET = 9,              // "["
    RIGHT_BRACKET = 10,            // "]"
    LEFT_PARENTHESIS = 11,         // "("
    RIGHT_PARENTHESIS = 12,        // ")"
    LEFT_BRACE = 13,               // "{"
    RIGHT_BRACE = 14,              // "}"
    SEMI_COLON = 15,               // ";"
    COLON = 16,                    // ":"
    RIGHT_ARROW = 17,              // "=>"
    PLUS = 18,                     // "+"
    MINUS = 19,                    // "-"
    STAR = 20,                     // "*"
    SLASH = 21,                    // "/"
    DOUBLE_SLASH = 22,             // "//"
    CARET = 23,                    // "^"
    PERCENT = 24,                  // "%"
    PLUS_ASSIGN = 25,              // "+="
    MINUS_ASSIGN = 26,             // "-="
    STAR_ASSIGN = 27,              // "*="
    SLASH_ASSIGN = 28,             // "/="
    DOUBLE_SLASH_ASSIGN = 29,      // "//="
    CARET_ASSIGN = 30,             // "^="
    PERCENT_ASSIGN = 31,           // "%="
    VEC_PLUS = 32,                 // "+<"
    VEC_MINUS = 33,                // "-<"
    VEC_STAR = 34,                 // "*<"
    VEC_SLASH = 35,                // "/<"
    VEC_DOUBLE_SLASH = 36,         // "//<"
    VEC_CARET = 37,                // "^<"
    VEC_PERCENT = 38,              // "%<"
    VEC_PLUS_ASSIGN = 39,          // "+<="
    VEC_MINUS_ASSIGN = 40,         // "-<="
    VEC_STAR_ASSIGN = 41,          // "*<="
    VEC_SLASH_ASSIGN = 42,         // "/<="
    VEC_DOUBLE_SLASH_ASSIGN = 43,  // "//<="
    VEC_CARET_ASSIGN = 44,         // "^<="
    VEC_PERCENT_ASSIGN = 45,       // "%<="
    DOUBLE_AMP = 46,               // "&&"
    DOUBLE_PIPE = 47,              // "||"
    BANG = 48,                     // "!"
    LESS = 49,                     // "<"
    LESS_EQ = 50,                  // "<="
    SPACESHIP = 51,                // "<=>"
    GREATER_EQ = 52,               // ">="
    GREATER = 53,                  // ">"
    EQ = 54,                       // "=="
    NEQ = 55,                      // "!="
    AMP = 56,                      // "&"
    PIPE = 57,                     // "|"
    DOUBLE_CARET = 58,             // "^^"
    TILDE = 59,                    // "~"
    LEFT_SHIFT = 60,               // "<<"
    RIGHT_SHIFT = 61,              // ">>"
    AMP_ASSIGN = 62,               // "&="
    PIPE_ASSIGN = 63,              // "|="
    DOUBLE_CARET_ASSIGN = 64,      // "^^="
    TILDE_ASSIGN = 65,             // "~="
    LEFT_SHIFT_ASSIGN = 66,        // "<<="
    RIGHT_SHIFT_ASSIGN = 67,       // ">>="
    VEC_AMP = 68,                  // "&<"
    VEC_PIPE = 69,                 // "|<"
    VEC_DOUBLE_CARET = 70,         // "^^<"
    VEC_TILDE = 71,                // "~<"
    VEC_LEFT_SHIFT = 72,           // "<<<"
    VEC_RIGHT_SHIFT = 73,          // ">><"
    VEC_AMP_ASSIGN = 74,           // "&<="
    VEC_PIPE_ASSIGN = 75,          // "|<="
    VEC_DOUBLE_CARET_ASSIGN = 76,  // "^^<="
    VEC_TILDE_ASSIGN = 77,         // "~<="
    VEC_LEFT_SHIFT_ASSIGN = 78,    // "<<<="
    VEC_RIGHT_SHIFT_ASSIGN = 79,   // ">><="
    ASSIGN = 80,                   // "="
    LEFT_ARROW = 81,               // "<-"
    PLUS_PLUS = 82,                // "++"
    MINUS_MINUS = 83,              // "--"
    ELLIPSIS = 84,                 // "..."
    COLON_COLON = 85,              // "::"
    DOT = 86,                      // "."
    QUESTION = 87,                 // "?"
    INT8_T = 88,                   // "int8_t"
    INT16_T = 89,                  // "int16_t"
    INT32_T = 90,                  // "int32_t"
    INT64_T = 91,                  // "int64_t"
    INT = 92,                      // "int"
    REAL32_T = 93,                 // "real32_t"
    REAL64_T = 94,                 // "real64_t"
    REAL = 95,                     // "real"
    BOOL = 96,                     // "bool"
    CHAR = 97,                     // "char"
    MOD = 98,                      // "mod"
    VOID = 99,                     // "void"
    TRUE = 100,                    // "true"
    FALSE = 101,                   // "false"
    THIS = 102,                    // "this"
    NPTR = 103,                    // "nptr"
    LET = 104,                     // "let"
    CONST = 105,                   // "const"
    COMPEVAL = 106,                // "compeval"
    PURE = 107,                    // "pure"
    STATIC = 108,                  // "static"
    NOTHROW = 109,                 // "nothrow"
    IN = 110,                      // "in"
    INOUT = 111,                   // "inout"
    OUT = 112,                     // "out"
    MOVE = 113,                    // "move"
    OPERATOR = 114,                // "operator"
    DELETE = 115,                  // "delete"
    CLASS = 116,                   // "class"
    PUBLIC = 117,                  // "public"
    PROTECTED = 118,               // "protected"
    PRIVATE = 119,                 // "private"
    ENUM = 120,                    // "enum"
    CONSTRUCTOR = 121,             // "constructor"
    DESTRUCTOR = 122,              // "destructor"
    DEFAULT = 123,                 // "default"
    DEFINE = 124,                  // "define"
    IF = 125,                      // "if"
    ELSE = 126,                    // "else"
    ELSE_IF = 127,                 // "else if"
    FOR = 128,                     // "for"
    DO = 129,                      // "do"
    WHILE = 130,                   // "while"
    TRY = 131,                     // "try"
    CATCH = 132,                   // "catch"
    THROW = 133,                   // "throw"
    BREAK = 134,                   // "break"
    RETURN = 135,                  // "return"
    CONTINUE = 136,                // "continue"
    MATCH = 137,                   // "match"
    WHEN = 138,                    // "when"
    TYPESET = 139,                 // "typeset"
    TEMPLATE = 140,                // "template"
    WHERE = 141,                   // "where"
    TYPE = 142,                    // "type"
    MODULE = 143,                  // "module"
    NAMESPACE = 144,               // "namespace"
    IMPORT = 145,                  // "import"
    FROM = 146,                    // "from"
    AS = 147,                      // "as"
    WITH = 148,                    // "with"
    IS = 149,                      // "is"
    SIZEOF = 150,                  // "sizeof"
    TYPEOF = 151,                  // "typeof"
    STATIC_ASSERT = 152,           // "static_assert"
    ASSERT = 153,                  // "assert"
    NEW = 154,                     // "new"
    DYNAMIC = 155                  // "dynamic"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 156, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_INTEGER_LITERAL = 3,                   // INTEGER_LITERAL
        S_REAL_LITERAL = 4,                      // REAL_LITERAL
        S_COMPLEX_LITERAL = 5,                   // COMPLEX_LITERAL
        S_CHAR_LITERAL = 6,                      // CHAR_LITERAL
        S_STRING_LITERAL = 7,                    // STRING_LITERAL
        S_IDENTIFIER = 8,                        // IDENTIFIER
        S_LEFT_BRACKET = 9,                      // "["
        S_RIGHT_BRACKET = 10,                    // "]"
        S_LEFT_PARENTHESIS = 11,                 // "("
        S_RIGHT_PARENTHESIS = 12,                // ")"
        S_LEFT_BRACE = 13,                       // "{"
        S_RIGHT_BRACE = 14,                      // "}"
        S_SEMI_COLON = 15,                       // ";"
        S_COLON = 16,                            // ":"
        S_RIGHT_ARROW = 17,                      // "=>"
        S_PLUS = 18,                             // "+"
        S_MINUS = 19,                            // "-"
        S_STAR = 20,                             // "*"
        S_SLASH = 21,                            // "/"
        S_DOUBLE_SLASH = 22,                     // "//"
        S_CARET = 23,                            // "^"
        S_PERCENT = 24,                          // "%"
        S_PLUS_ASSIGN = 25,                      // "+="
        S_MINUS_ASSIGN = 26,                     // "-="
        S_STAR_ASSIGN = 27,                      // "*="
        S_SLASH_ASSIGN = 28,                     // "/="
        S_DOUBLE_SLASH_ASSIGN = 29,              // "//="
        S_CARET_ASSIGN = 30,                     // "^="
        S_PERCENT_ASSIGN = 31,                   // "%="
        S_VEC_PLUS = 32,                         // "+<"
        S_VEC_MINUS = 33,                        // "-<"
        S_VEC_STAR = 34,                         // "*<"
        S_VEC_SLASH = 35,                        // "/<"
        S_VEC_DOUBLE_SLASH = 36,                 // "//<"
        S_VEC_CARET = 37,                        // "^<"
        S_VEC_PERCENT = 38,                      // "%<"
        S_VEC_PLUS_ASSIGN = 39,                  // "+<="
        S_VEC_MINUS_ASSIGN = 40,                 // "-<="
        S_VEC_STAR_ASSIGN = 41,                  // "*<="
        S_VEC_SLASH_ASSIGN = 42,                 // "/<="
        S_VEC_DOUBLE_SLASH_ASSIGN = 43,          // "//<="
        S_VEC_CARET_ASSIGN = 44,                 // "^<="
        S_VEC_PERCENT_ASSIGN = 45,               // "%<="
        S_DOUBLE_AMP = 46,                       // "&&"
        S_DOUBLE_PIPE = 47,                      // "||"
        S_BANG = 48,                             // "!"
        S_LESS = 49,                             // "<"
        S_LESS_EQ = 50,                          // "<="
        S_SPACESHIP = 51,                        // "<=>"
        S_GREATER_EQ = 52,                       // ">="
        S_GREATER = 53,                          // ">"
        S_EQ = 54,                               // "=="
        S_NEQ = 55,                              // "!="
        S_AMP = 56,                              // "&"
        S_PIPE = 57,                             // "|"
        S_DOUBLE_CARET = 58,                     // "^^"
        S_TILDE = 59,                            // "~"
        S_LEFT_SHIFT = 60,                       // "<<"
        S_RIGHT_SHIFT = 61,                      // ">>"
        S_AMP_ASSIGN = 62,                       // "&="
        S_PIPE_ASSIGN = 63,                      // "|="
        S_DOUBLE_CARET_ASSIGN = 64,              // "^^="
        S_TILDE_ASSIGN = 65,                     // "~="
        S_LEFT_SHIFT_ASSIGN = 66,                // "<<="
        S_RIGHT_SHIFT_ASSIGN = 67,               // ">>="
        S_VEC_AMP = 68,                          // "&<"
        S_VEC_PIPE = 69,                         // "|<"
        S_VEC_DOUBLE_CARET = 70,                 // "^^<"
        S_VEC_TILDE = 71,                        // "~<"
        S_VEC_LEFT_SHIFT = 72,                   // "<<<"
        S_VEC_RIGHT_SHIFT = 73,                  // ">><"
        S_VEC_AMP_ASSIGN = 74,                   // "&<="
        S_VEC_PIPE_ASSIGN = 75,                  // "|<="
        S_VEC_DOUBLE_CARET_ASSIGN = 76,          // "^^<="
        S_VEC_TILDE_ASSIGN = 77,                 // "~<="
        S_VEC_LEFT_SHIFT_ASSIGN = 78,            // "<<<="
        S_VEC_RIGHT_SHIFT_ASSIGN = 79,           // ">><="
        S_ASSIGN = 80,                           // "="
        S_LEFT_ARROW = 81,                       // "<-"
        S_PLUS_PLUS = 82,                        // "++"
        S_MINUS_MINUS = 83,                      // "--"
        S_ELLIPSIS = 84,                         // "..."
        S_COLON_COLON = 85,                      // "::"
        S_DOT = 86,                              // "."
        S_QUESTION = 87,                         // "?"
        S_INT8_T = 88,                           // "int8_t"
        S_INT16_T = 89,                          // "int16_t"
        S_INT32_T = 90,                          // "int32_t"
        S_INT64_T = 91,                          // "int64_t"
        S_INT = 92,                              // "int"
        S_REAL32_T = 93,                         // "real32_t"
        S_REAL64_T = 94,                         // "real64_t"
        S_REAL = 95,                             // "real"
        S_BOOL = 96,                             // "bool"
        S_CHAR = 97,                             // "char"
        S_MOD = 98,                              // "mod"
        S_VOID = 99,                             // "void"
        S_TRUE = 100,                            // "true"
        S_FALSE = 101,                           // "false"
        S_THIS = 102,                            // "this"
        S_NPTR = 103,                            // "nptr"
        S_LET = 104,                             // "let"
        S_CONST = 105,                           // "const"
        S_COMPEVAL = 106,                        // "compeval"
        S_PURE = 107,                            // "pure"
        S_STATIC = 108,                          // "static"
        S_NOTHROW = 109,                         // "nothrow"
        S_IN = 110,                              // "in"
        S_INOUT = 111,                           // "inout"
        S_OUT = 112,                             // "out"
        S_MOVE = 113,                            // "move"
        S_OPERATOR = 114,                        // "operator"
        S_DELETE = 115,                          // "delete"
        S_CLASS = 116,                           // "class"
        S_PUBLIC = 117,                          // "public"
        S_PROTECTED = 118,                       // "protected"
        S_PRIVATE = 119,                         // "private"
        S_ENUM = 120,                            // "enum"
        S_CONSTRUCTOR = 121,                     // "constructor"
        S_DESTRUCTOR = 122,                      // "destructor"
        S_DEFAULT = 123,                         // "default"
        S_DEFINE = 124,                          // "define"
        S_IF = 125,                              // "if"
        S_ELSE = 126,                            // "else"
        S_ELSE_IF = 127,                         // "else if"
        S_FOR = 128,                             // "for"
        S_DO = 129,                              // "do"
        S_WHILE = 130,                           // "while"
        S_TRY = 131,                             // "try"
        S_CATCH = 132,                           // "catch"
        S_THROW = 133,                           // "throw"
        S_BREAK = 134,                           // "break"
        S_RETURN = 135,                          // "return"
        S_CONTINUE = 136,                        // "continue"
        S_MATCH = 137,                           // "match"
        S_WHEN = 138,                            // "when"
        S_TYPESET = 139,                         // "typeset"
        S_TEMPLATE = 140,                        // "template"
        S_WHERE = 141,                           // "where"
        S_TYPE = 142,                            // "type"
        S_MODULE = 143,                          // "module"
        S_NAMESPACE = 144,                       // "namespace"
        S_IMPORT = 145,                          // "import"
        S_FROM = 146,                            // "from"
        S_AS = 147,                              // "as"
        S_WITH = 148,                            // "with"
        S_IS = 149,                              // "is"
        S_SIZEOF = 150,                          // "sizeof"
        S_TYPEOF = 151,                          // "typeof"
        S_STATIC_ASSERT = 152,                   // "static_assert"
        S_ASSERT = 153,                          // "assert"
        S_NEW = 154,                             // "new"
        S_DYNAMIC = 155,                         // "dynamic"
        S_YYACCEPT = 156,                        // $accept
        S_nikola = 157                           // nikola
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return NikolaParser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type (token_kind_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type (token_kind_type (tok), l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::YYEOF
                   || (token::YYerror <= tok && tok <= token::YYUNDEF)
                   || (token::LEFT_BRACKET <= tok && tok <= token::DYNAMIC));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT ((token::INTEGER_LITERAL <= tok && tok <= token::IDENTIFIER));
#endif
      }
    };

    /// Build a parser object.
    NikolaParser (Nikola::SyntaxAnalysis::NikolaLexer& lexer_yyarg);
    virtual ~NikolaParser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    NikolaParser (const NikolaParser&) = delete;
    /// Non copyable.
    NikolaParser& operator= (const NikolaParser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF (location_type l)
      {
        return symbol_type (token::YYEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYEOF (const location_type& l)
      {
        return symbol_type (token::YYEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTEGER_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::INTEGER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INTEGER_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INTEGER_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REAL_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::REAL_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_REAL_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::REAL_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMPLEX_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::COMPLEX_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_COMPLEX_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::COMPLEX_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::CHAR_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CHAR_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CHAR_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::STRING_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::STRING_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (std::string v, location_type l)
      {
        return symbol_type (token::IDENTIFIER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::IDENTIFIER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_BRACKET (location_type l)
      {
        return symbol_type (token::LEFT_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_BRACKET (const location_type& l)
      {
        return symbol_type (token::LEFT_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_BRACKET (location_type l)
      {
        return symbol_type (token::RIGHT_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_BRACKET (const location_type& l)
      {
        return symbol_type (token::RIGHT_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_PARENTHESIS (location_type l)
      {
        return symbol_type (token::LEFT_PARENTHESIS, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_PARENTHESIS (const location_type& l)
      {
        return symbol_type (token::LEFT_PARENTHESIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_PARENTHESIS (location_type l)
      {
        return symbol_type (token::RIGHT_PARENTHESIS, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_PARENTHESIS (const location_type& l)
      {
        return symbol_type (token::RIGHT_PARENTHESIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_BRACE (location_type l)
      {
        return symbol_type (token::LEFT_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_BRACE (const location_type& l)
      {
        return symbol_type (token::LEFT_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_BRACE (location_type l)
      {
        return symbol_type (token::RIGHT_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_BRACE (const location_type& l)
      {
        return symbol_type (token::RIGHT_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMI_COLON (location_type l)
      {
        return symbol_type (token::SEMI_COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMI_COLON (const location_type& l)
      {
        return symbol_type (token::SEMI_COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON (location_type l)
      {
        return symbol_type (token::COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON (const location_type& l)
      {
        return symbol_type (token::COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_ARROW (location_type l)
      {
        return symbol_type (token::RIGHT_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_ARROW (const location_type& l)
      {
        return symbol_type (token::RIGHT_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (location_type l)
      {
        return symbol_type (token::PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const location_type& l)
      {
        return symbol_type (token::PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (location_type l)
      {
        return symbol_type (token::MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const location_type& l)
      {
        return symbol_type (token::MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STAR (location_type l)
      {
        return symbol_type (token::STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_STAR (const location_type& l)
      {
        return symbol_type (token::STAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SLASH (location_type l)
      {
        return symbol_type (token::SLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_SLASH (const location_type& l)
      {
        return symbol_type (token::SLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_SLASH (location_type l)
      {
        return symbol_type (token::DOUBLE_SLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_SLASH (const location_type& l)
      {
        return symbol_type (token::DOUBLE_SLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARET (location_type l)
      {
        return symbol_type (token::CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_CARET (const location_type& l)
      {
        return symbol_type (token::CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT (location_type l)
      {
        return symbol_type (token::PERCENT, std::move (l));
      }
#else
      static
      symbol_type
      make_PERCENT (const location_type& l)
      {
        return symbol_type (token::PERCENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_ASSIGN (location_type l)
      {
        return symbol_type (token::PLUS_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS_ASSIGN (const location_type& l)
      {
        return symbol_type (token::PLUS_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_ASSIGN (location_type l)
      {
        return symbol_type (token::MINUS_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS_ASSIGN (const location_type& l)
      {
        return symbol_type (token::MINUS_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STAR_ASSIGN (location_type l)
      {
        return symbol_type (token::STAR_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_STAR_ASSIGN (const location_type& l)
      {
        return symbol_type (token::STAR_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SLASH_ASSIGN (location_type l)
      {
        return symbol_type (token::SLASH_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_SLASH_ASSIGN (const location_type& l)
      {
        return symbol_type (token::SLASH_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_SLASH_ASSIGN (location_type l)
      {
        return symbol_type (token::DOUBLE_SLASH_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_SLASH_ASSIGN (const location_type& l)
      {
        return symbol_type (token::DOUBLE_SLASH_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARET_ASSIGN (location_type l)
      {
        return symbol_type (token::CARET_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_CARET_ASSIGN (const location_type& l)
      {
        return symbol_type (token::CARET_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT_ASSIGN (location_type l)
      {
        return symbol_type (token::PERCENT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_PERCENT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::PERCENT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PLUS (location_type l)
      {
        return symbol_type (token::VEC_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PLUS (const location_type& l)
      {
        return symbol_type (token::VEC_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_MINUS (location_type l)
      {
        return symbol_type (token::VEC_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_MINUS (const location_type& l)
      {
        return symbol_type (token::VEC_MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_STAR (location_type l)
      {
        return symbol_type (token::VEC_STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_STAR (const location_type& l)
      {
        return symbol_type (token::VEC_STAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_SLASH (location_type l)
      {
        return symbol_type (token::VEC_SLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_SLASH (const location_type& l)
      {
        return symbol_type (token::VEC_SLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_DOUBLE_SLASH (location_type l)
      {
        return symbol_type (token::VEC_DOUBLE_SLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_DOUBLE_SLASH (const location_type& l)
      {
        return symbol_type (token::VEC_DOUBLE_SLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_CARET (location_type l)
      {
        return symbol_type (token::VEC_CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_CARET (const location_type& l)
      {
        return symbol_type (token::VEC_CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PERCENT (location_type l)
      {
        return symbol_type (token::VEC_PERCENT, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PERCENT (const location_type& l)
      {
        return symbol_type (token::VEC_PERCENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PLUS_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_PLUS_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PLUS_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_PLUS_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_MINUS_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_MINUS_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_MINUS_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_MINUS_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_STAR_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_STAR_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_STAR_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_STAR_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_SLASH_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_SLASH_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_SLASH_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_SLASH_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_DOUBLE_SLASH_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_DOUBLE_SLASH_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_DOUBLE_SLASH_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_DOUBLE_SLASH_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_CARET_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_CARET_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_CARET_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_CARET_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PERCENT_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_PERCENT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PERCENT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_PERCENT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_AMP (location_type l)
      {
        return symbol_type (token::DOUBLE_AMP, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_AMP (const location_type& l)
      {
        return symbol_type (token::DOUBLE_AMP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_PIPE (location_type l)
      {
        return symbol_type (token::DOUBLE_PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_PIPE (const location_type& l)
      {
        return symbol_type (token::DOUBLE_PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BANG (location_type l)
      {
        return symbol_type (token::BANG, std::move (l));
      }
#else
      static
      symbol_type
      make_BANG (const location_type& l)
      {
        return symbol_type (token::BANG, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS (location_type l)
      {
        return symbol_type (token::LESS, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS (const location_type& l)
      {
        return symbol_type (token::LESS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS_EQ (location_type l)
      {
        return symbol_type (token::LESS_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS_EQ (const location_type& l)
      {
        return symbol_type (token::LESS_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SPACESHIP (location_type l)
      {
        return symbol_type (token::SPACESHIP, std::move (l));
      }
#else
      static
      symbol_type
      make_SPACESHIP (const location_type& l)
      {
        return symbol_type (token::SPACESHIP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER_EQ (location_type l)
      {
        return symbol_type (token::GREATER_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER_EQ (const location_type& l)
      {
        return symbol_type (token::GREATER_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER (location_type l)
      {
        return symbol_type (token::GREATER, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER (const location_type& l)
      {
        return symbol_type (token::GREATER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ (location_type l)
      {
        return symbol_type (token::EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EQ (const location_type& l)
      {
        return symbol_type (token::EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEQ (location_type l)
      {
        return symbol_type (token::NEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_NEQ (const location_type& l)
      {
        return symbol_type (token::NEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMP (location_type l)
      {
        return symbol_type (token::AMP, std::move (l));
      }
#else
      static
      symbol_type
      make_AMP (const location_type& l)
      {
        return symbol_type (token::AMP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE (location_type l)
      {
        return symbol_type (token::PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE (const location_type& l)
      {
        return symbol_type (token::PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_CARET (location_type l)
      {
        return symbol_type (token::DOUBLE_CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_CARET (const location_type& l)
      {
        return symbol_type (token::DOUBLE_CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TILDE (location_type l)
      {
        return symbol_type (token::TILDE, std::move (l));
      }
#else
      static
      symbol_type
      make_TILDE (const location_type& l)
      {
        return symbol_type (token::TILDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_SHIFT (location_type l)
      {
        return symbol_type (token::LEFT_SHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_SHIFT (const location_type& l)
      {
        return symbol_type (token::LEFT_SHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_SHIFT (location_type l)
      {
        return symbol_type (token::RIGHT_SHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_SHIFT (const location_type& l)
      {
        return symbol_type (token::RIGHT_SHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMP_ASSIGN (location_type l)
      {
        return symbol_type (token::AMP_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_AMP_ASSIGN (const location_type& l)
      {
        return symbol_type (token::AMP_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE_ASSIGN (location_type l)
      {
        return symbol_type (token::PIPE_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE_ASSIGN (const location_type& l)
      {
        return symbol_type (token::PIPE_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_CARET_ASSIGN (location_type l)
      {
        return symbol_type (token::DOUBLE_CARET_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_CARET_ASSIGN (const location_type& l)
      {
        return symbol_type (token::DOUBLE_CARET_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TILDE_ASSIGN (location_type l)
      {
        return symbol_type (token::TILDE_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_TILDE_ASSIGN (const location_type& l)
      {
        return symbol_type (token::TILDE_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_SHIFT_ASSIGN (location_type l)
      {
        return symbol_type (token::LEFT_SHIFT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_SHIFT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::LEFT_SHIFT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_SHIFT_ASSIGN (location_type l)
      {
        return symbol_type (token::RIGHT_SHIFT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_SHIFT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::RIGHT_SHIFT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_AMP (location_type l)
      {
        return symbol_type (token::VEC_AMP, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_AMP (const location_type& l)
      {
        return symbol_type (token::VEC_AMP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PIPE (location_type l)
      {
        return symbol_type (token::VEC_PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PIPE (const location_type& l)
      {
        return symbol_type (token::VEC_PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_DOUBLE_CARET (location_type l)
      {
        return symbol_type (token::VEC_DOUBLE_CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_DOUBLE_CARET (const location_type& l)
      {
        return symbol_type (token::VEC_DOUBLE_CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_TILDE (location_type l)
      {
        return symbol_type (token::VEC_TILDE, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_TILDE (const location_type& l)
      {
        return symbol_type (token::VEC_TILDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_LEFT_SHIFT (location_type l)
      {
        return symbol_type (token::VEC_LEFT_SHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_LEFT_SHIFT (const location_type& l)
      {
        return symbol_type (token::VEC_LEFT_SHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_RIGHT_SHIFT (location_type l)
      {
        return symbol_type (token::VEC_RIGHT_SHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_RIGHT_SHIFT (const location_type& l)
      {
        return symbol_type (token::VEC_RIGHT_SHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_AMP_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_AMP_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_AMP_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_AMP_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_PIPE_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_PIPE_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_PIPE_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_PIPE_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_DOUBLE_CARET_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_DOUBLE_CARET_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_DOUBLE_CARET_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_DOUBLE_CARET_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_TILDE_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_TILDE_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_TILDE_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_TILDE_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_LEFT_SHIFT_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_LEFT_SHIFT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_LEFT_SHIFT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_LEFT_SHIFT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VEC_RIGHT_SHIFT_ASSIGN (location_type l)
      {
        return symbol_type (token::VEC_RIGHT_SHIFT_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_VEC_RIGHT_SHIFT_ASSIGN (const location_type& l)
      {
        return symbol_type (token::VEC_RIGHT_SHIFT_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (location_type l)
      {
        return symbol_type (token::ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const location_type& l)
      {
        return symbol_type (token::ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_ARROW (location_type l)
      {
        return symbol_type (token::LEFT_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_ARROW (const location_type& l)
      {
        return symbol_type (token::LEFT_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_PLUS (location_type l)
      {
        return symbol_type (token::PLUS_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS_PLUS (const location_type& l)
      {
        return symbol_type (token::PLUS_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_MINUS (location_type l)
      {
        return symbol_type (token::MINUS_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS_MINUS (const location_type& l)
      {
        return symbol_type (token::MINUS_MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELLIPSIS (location_type l)
      {
        return symbol_type (token::ELLIPSIS, std::move (l));
      }
#else
      static
      symbol_type
      make_ELLIPSIS (const location_type& l)
      {
        return symbol_type (token::ELLIPSIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON_COLON (location_type l)
      {
        return symbol_type (token::COLON_COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON_COLON (const location_type& l)
      {
        return symbol_type (token::COLON_COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT (location_type l)
      {
        return symbol_type (token::DOT, std::move (l));
      }
#else
      static
      symbol_type
      make_DOT (const location_type& l)
      {
        return symbol_type (token::DOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_QUESTION (location_type l)
      {
        return symbol_type (token::QUESTION, std::move (l));
      }
#else
      static
      symbol_type
      make_QUESTION (const location_type& l)
      {
        return symbol_type (token::QUESTION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT8_T (location_type l)
      {
        return symbol_type (token::INT8_T, std::move (l));
      }
#else
      static
      symbol_type
      make_INT8_T (const location_type& l)
      {
        return symbol_type (token::INT8_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT16_T (location_type l)
      {
        return symbol_type (token::INT16_T, std::move (l));
      }
#else
      static
      symbol_type
      make_INT16_T (const location_type& l)
      {
        return symbol_type (token::INT16_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT32_T (location_type l)
      {
        return symbol_type (token::INT32_T, std::move (l));
      }
#else
      static
      symbol_type
      make_INT32_T (const location_type& l)
      {
        return symbol_type (token::INT32_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT64_T (location_type l)
      {
        return symbol_type (token::INT64_T, std::move (l));
      }
#else
      static
      symbol_type
      make_INT64_T (const location_type& l)
      {
        return symbol_type (token::INT64_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (location_type l)
      {
        return symbol_type (token::INT, std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const location_type& l)
      {
        return symbol_type (token::INT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REAL32_T (location_type l)
      {
        return symbol_type (token::REAL32_T, std::move (l));
      }
#else
      static
      symbol_type
      make_REAL32_T (const location_type& l)
      {
        return symbol_type (token::REAL32_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REAL64_T (location_type l)
      {
        return symbol_type (token::REAL64_T, std::move (l));
      }
#else
      static
      symbol_type
      make_REAL64_T (const location_type& l)
      {
        return symbol_type (token::REAL64_T, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REAL (location_type l)
      {
        return symbol_type (token::REAL, std::move (l));
      }
#else
      static
      symbol_type
      make_REAL (const location_type& l)
      {
        return symbol_type (token::REAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOL (location_type l)
      {
        return symbol_type (token::BOOL, std::move (l));
      }
#else
      static
      symbol_type
      make_BOOL (const location_type& l)
      {
        return symbol_type (token::BOOL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR (location_type l)
      {
        return symbol_type (token::CHAR, std::move (l));
      }
#else
      static
      symbol_type
      make_CHAR (const location_type& l)
      {
        return symbol_type (token::CHAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD (location_type l)
      {
        return symbol_type (token::MOD, std::move (l));
      }
#else
      static
      symbol_type
      make_MOD (const location_type& l)
      {
        return symbol_type (token::MOD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID (location_type l)
      {
        return symbol_type (token::VOID, std::move (l));
      }
#else
      static
      symbol_type
      make_VOID (const location_type& l)
      {
        return symbol_type (token::VOID, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRUE (location_type l)
      {
        return symbol_type (token::TRUE, std::move (l));
      }
#else
      static
      symbol_type
      make_TRUE (const location_type& l)
      {
        return symbol_type (token::TRUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FALSE (location_type l)
      {
        return symbol_type (token::FALSE, std::move (l));
      }
#else
      static
      symbol_type
      make_FALSE (const location_type& l)
      {
        return symbol_type (token::FALSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THIS (location_type l)
      {
        return symbol_type (token::THIS, std::move (l));
      }
#else
      static
      symbol_type
      make_THIS (const location_type& l)
      {
        return symbol_type (token::THIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NPTR (location_type l)
      {
        return symbol_type (token::NPTR, std::move (l));
      }
#else
      static
      symbol_type
      make_NPTR (const location_type& l)
      {
        return symbol_type (token::NPTR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LET (location_type l)
      {
        return symbol_type (token::LET, std::move (l));
      }
#else
      static
      symbol_type
      make_LET (const location_type& l)
      {
        return symbol_type (token::LET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST (location_type l)
      {
        return symbol_type (token::CONST, std::move (l));
      }
#else
      static
      symbol_type
      make_CONST (const location_type& l)
      {
        return symbol_type (token::CONST, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMPEVAL (location_type l)
      {
        return symbol_type (token::COMPEVAL, std::move (l));
      }
#else
      static
      symbol_type
      make_COMPEVAL (const location_type& l)
      {
        return symbol_type (token::COMPEVAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PURE (location_type l)
      {
        return symbol_type (token::PURE, std::move (l));
      }
#else
      static
      symbol_type
      make_PURE (const location_type& l)
      {
        return symbol_type (token::PURE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC (location_type l)
      {
        return symbol_type (token::STATIC, std::move (l));
      }
#else
      static
      symbol_type
      make_STATIC (const location_type& l)
      {
        return symbol_type (token::STATIC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTHROW (location_type l)
      {
        return symbol_type (token::NOTHROW, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTHROW (const location_type& l)
      {
        return symbol_type (token::NOTHROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IN (location_type l)
      {
        return symbol_type (token::IN, std::move (l));
      }
#else
      static
      symbol_type
      make_IN (const location_type& l)
      {
        return symbol_type (token::IN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INOUT (location_type l)
      {
        return symbol_type (token::INOUT, std::move (l));
      }
#else
      static
      symbol_type
      make_INOUT (const location_type& l)
      {
        return symbol_type (token::INOUT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OUT (location_type l)
      {
        return symbol_type (token::OUT, std::move (l));
      }
#else
      static
      symbol_type
      make_OUT (const location_type& l)
      {
        return symbol_type (token::OUT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOVE (location_type l)
      {
        return symbol_type (token::MOVE, std::move (l));
      }
#else
      static
      symbol_type
      make_MOVE (const location_type& l)
      {
        return symbol_type (token::MOVE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPERATOR (location_type l)
      {
        return symbol_type (token::OPERATOR, std::move (l));
      }
#else
      static
      symbol_type
      make_OPERATOR (const location_type& l)
      {
        return symbol_type (token::OPERATOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DELETE (location_type l)
      {
        return symbol_type (token::DELETE, std::move (l));
      }
#else
      static
      symbol_type
      make_DELETE (const location_type& l)
      {
        return symbol_type (token::DELETE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLASS (location_type l)
      {
        return symbol_type (token::CLASS, std::move (l));
      }
#else
      static
      symbol_type
      make_CLASS (const location_type& l)
      {
        return symbol_type (token::CLASS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PUBLIC (location_type l)
      {
        return symbol_type (token::PUBLIC, std::move (l));
      }
#else
      static
      symbol_type
      make_PUBLIC (const location_type& l)
      {
        return symbol_type (token::PUBLIC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROTECTED (location_type l)
      {
        return symbol_type (token::PROTECTED, std::move (l));
      }
#else
      static
      symbol_type
      make_PROTECTED (const location_type& l)
      {
        return symbol_type (token::PROTECTED, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRIVATE (location_type l)
      {
        return symbol_type (token::PRIVATE, std::move (l));
      }
#else
      static
      symbol_type
      make_PRIVATE (const location_type& l)
      {
        return symbol_type (token::PRIVATE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ENUM (location_type l)
      {
        return symbol_type (token::ENUM, std::move (l));
      }
#else
      static
      symbol_type
      make_ENUM (const location_type& l)
      {
        return symbol_type (token::ENUM, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTRUCTOR (location_type l)
      {
        return symbol_type (token::CONSTRUCTOR, std::move (l));
      }
#else
      static
      symbol_type
      make_CONSTRUCTOR (const location_type& l)
      {
        return symbol_type (token::CONSTRUCTOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DESTRUCTOR (location_type l)
      {
        return symbol_type (token::DESTRUCTOR, std::move (l));
      }
#else
      static
      symbol_type
      make_DESTRUCTOR (const location_type& l)
      {
        return symbol_type (token::DESTRUCTOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT (location_type l)
      {
        return symbol_type (token::DEFAULT, std::move (l));
      }
#else
      static
      symbol_type
      make_DEFAULT (const location_type& l)
      {
        return symbol_type (token::DEFAULT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFINE (location_type l)
      {
        return symbol_type (token::DEFINE, std::move (l));
      }
#else
      static
      symbol_type
      make_DEFINE (const location_type& l)
      {
        return symbol_type (token::DEFINE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (location_type l)
      {
        return symbol_type (token::IF, std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const location_type& l)
      {
        return symbol_type (token::IF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE_IF (location_type l)
      {
        return symbol_type (token::ELSE_IF, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE_IF (const location_type& l)
      {
        return symbol_type (token::ELSE_IF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR (location_type l)
      {
        return symbol_type (token::FOR, std::move (l));
      }
#else
      static
      symbol_type
      make_FOR (const location_type& l)
      {
        return symbol_type (token::FOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DO (location_type l)
      {
        return symbol_type (token::DO, std::move (l));
      }
#else
      static
      symbol_type
      make_DO (const location_type& l)
      {
        return symbol_type (token::DO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE (location_type l)
      {
        return symbol_type (token::WHILE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHILE (const location_type& l)
      {
        return symbol_type (token::WHILE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRY (location_type l)
      {
        return symbol_type (token::TRY, std::move (l));
      }
#else
      static
      symbol_type
      make_TRY (const location_type& l)
      {
        return symbol_type (token::TRY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CATCH (location_type l)
      {
        return symbol_type (token::CATCH, std::move (l));
      }
#else
      static
      symbol_type
      make_CATCH (const location_type& l)
      {
        return symbol_type (token::CATCH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THROW (location_type l)
      {
        return symbol_type (token::THROW, std::move (l));
      }
#else
      static
      symbol_type
      make_THROW (const location_type& l)
      {
        return symbol_type (token::THROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK (location_type l)
      {
        return symbol_type (token::BREAK, std::move (l));
      }
#else
      static
      symbol_type
      make_BREAK (const location_type& l)
      {
        return symbol_type (token::BREAK, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (location_type l)
      {
        return symbol_type (token::RETURN, std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const location_type& l)
      {
        return symbol_type (token::RETURN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE (location_type l)
      {
        return symbol_type (token::CONTINUE, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUE (const location_type& l)
      {
        return symbol_type (token::CONTINUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MATCH (location_type l)
      {
        return symbol_type (token::MATCH, std::move (l));
      }
#else
      static
      symbol_type
      make_MATCH (const location_type& l)
      {
        return symbol_type (token::MATCH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHEN (location_type l)
      {
        return symbol_type (token::WHEN, std::move (l));
      }
#else
      static
      symbol_type
      make_WHEN (const location_type& l)
      {
        return symbol_type (token::WHEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPESET (location_type l)
      {
        return symbol_type (token::TYPESET, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPESET (const location_type& l)
      {
        return symbol_type (token::TYPESET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TEMPLATE (location_type l)
      {
        return symbol_type (token::TEMPLATE, std::move (l));
      }
#else
      static
      symbol_type
      make_TEMPLATE (const location_type& l)
      {
        return symbol_type (token::TEMPLATE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHERE (location_type l)
      {
        return symbol_type (token::WHERE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHERE (const location_type& l)
      {
        return symbol_type (token::WHERE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPE (location_type l)
      {
        return symbol_type (token::TYPE, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPE (const location_type& l)
      {
        return symbol_type (token::TYPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MODULE (location_type l)
      {
        return symbol_type (token::MODULE, std::move (l));
      }
#else
      static
      symbol_type
      make_MODULE (const location_type& l)
      {
        return symbol_type (token::MODULE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NAMESPACE (location_type l)
      {
        return symbol_type (token::NAMESPACE, std::move (l));
      }
#else
      static
      symbol_type
      make_NAMESPACE (const location_type& l)
      {
        return symbol_type (token::NAMESPACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPORT (location_type l)
      {
        return symbol_type (token::IMPORT, std::move (l));
      }
#else
      static
      symbol_type
      make_IMPORT (const location_type& l)
      {
        return symbol_type (token::IMPORT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FROM (location_type l)
      {
        return symbol_type (token::FROM, std::move (l));
      }
#else
      static
      symbol_type
      make_FROM (const location_type& l)
      {
        return symbol_type (token::FROM, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AS (location_type l)
      {
        return symbol_type (token::AS, std::move (l));
      }
#else
      static
      symbol_type
      make_AS (const location_type& l)
      {
        return symbol_type (token::AS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WITH (location_type l)
      {
        return symbol_type (token::WITH, std::move (l));
      }
#else
      static
      symbol_type
      make_WITH (const location_type& l)
      {
        return symbol_type (token::WITH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IS (location_type l)
      {
        return symbol_type (token::IS, std::move (l));
      }
#else
      static
      symbol_type
      make_IS (const location_type& l)
      {
        return symbol_type (token::IS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIZEOF (location_type l)
      {
        return symbol_type (token::SIZEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_SIZEOF (const location_type& l)
      {
        return symbol_type (token::SIZEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPEOF (location_type l)
      {
        return symbol_type (token::TYPEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPEOF (const location_type& l)
      {
        return symbol_type (token::TYPEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC_ASSERT (location_type l)
      {
        return symbol_type (token::STATIC_ASSERT, std::move (l));
      }
#else
      static
      symbol_type
      make_STATIC_ASSERT (const location_type& l)
      {
        return symbol_type (token::STATIC_ASSERT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSERT (location_type l)
      {
        return symbol_type (token::ASSERT, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSERT (const location_type& l)
      {
        return symbol_type (token::ASSERT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEW (location_type l)
      {
        return symbol_type (token::NEW, std::move (l));
      }
#else
      static
      symbol_type
      make_NEW (const location_type& l)
      {
        return symbol_type (token::NEW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DYNAMIC (location_type l)
      {
        return symbol_type (token::DYNAMIC, std::move (l));
      }
#else
      static
      symbol_type
      make_DYNAMIC (const location_type& l)
      {
        return symbol_type (token::DYNAMIC, l);
      }
#endif


    class context
    {
    public:
      context (const NikolaParser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const NikolaParser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    NikolaParser (const NikolaParser&);
    /// Non copyable.
    NikolaParser& operator= (const NikolaParser&);
#endif

    /// Check the lookahead yytoken.
    /// \returns  true iff the token will be eventually shifted.
    bool yy_lac_check_ (symbol_kind_type yytoken) const;
    /// Establish the initial context if no initial context currently exists.
    /// \returns  true iff the token will be eventually shifted.
    bool yy_lac_establish_ (symbol_kind_type yytoken);
    /// Discard any previous initial lookahead context because of event.
    /// \param event  the event which caused the lookahead to be discarded.
    ///               Only used for debbuging output.
    void yy_lac_discard_ (const char* event);

    /// Stored state numbers (used for stacks).
    typedef signed char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;



    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const signed char yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const signed char yytable_[];

    static const signed char yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const unsigned char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const signed char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;
    /// The stack for LAC.
    /// Logically, the yy_lac_stack's lifetime is confined to the function
    /// yy_lac_check_. We just store it as a member of this class to hold
    /// on to the memory and to avoid frequent reallocations.
    /// Since yy_lac_check_ is const, this member must be mutable.
    mutable std::vector<state_type> yylac_stack_;
    /// Whether an initial LAC context was established.
    bool yy_lac_established_;


    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 1,     ///< Last index in yytable_.
      yynnts_ = 2,  ///< Number of nonterminal symbols.
      yyfinal_ = 3 ///< Termination state number.
    };


    // User arguments.
    Nikola::SyntaxAnalysis::NikolaLexer& lexer;

  };

  inline
  NikolaParser::symbol_kind_type
  NikolaParser::yytranslate_ (int t) YY_NOEXCEPT
  {
    return static_cast<symbol_kind_type> (t);
  }

  // basic_symbol.
  template <typename Base>
  NikolaParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  NikolaParser::symbol_kind_type
  NikolaParser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  NikolaParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  NikolaParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  NikolaParser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  NikolaParser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  NikolaParser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  NikolaParser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  NikolaParser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  NikolaParser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  NikolaParser::symbol_kind_type
  NikolaParser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  NikolaParser::symbol_kind_type
  NikolaParser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 7 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"
} } // Nikola::SyntaxAnalysis
#line 3909 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.hpp"




#endif // !YY_YY_HOME_ASCHIFFE_DEV_NIKOLA_C_NIKOLAC_INCLUDE_PARSER_NIKOLAPARSER_HPP_INCLUDED
