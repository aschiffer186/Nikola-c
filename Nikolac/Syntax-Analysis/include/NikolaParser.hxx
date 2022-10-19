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
 ** \file NikolaParser.hxx
 ** Define the Nikola::SyntaxAnalysis::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_NIKOLAPARSER_HXX_INCLUDED
# define YY_YY_NIKOLAPARSER_HXX_INCLUDED
// "%code requires" blocks.
#line 22 "NikolaParser.yy"

    #include <string>

#line 53 "NikolaParser.hxx"

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
# include "include/Location.hxx"
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

#line 10 "NikolaParser.yy"
namespace Nikola { namespace SyntaxAnalysis {
#line 194 "NikolaParser.hxx"




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
      // STRING_LITERAL
      // CHARACTER_LITERAL
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
    STRING_LITERAL = 6,            // STRING_LITERAL
    CHARACTER_LITERAL = 7,         // CHARACTER_LITERAL
    IDENTIFIER = 8,                // IDENTIFIER
    PLUS = 9,                      // "+"
    MINUS = 10,                    // "-"
    STAR = 11,                     // "*"
    SLASH = 12,                    // "/"
    DOUBLE_SLASH = 13,             // "//"
    CARET = 14,                    // "^"
    PERCENT = 15,                  // "%"
    PLUS_ASSIGN = 16,              // "+="
    MINUS_ASSIGN = 17,             // "-="
    STAR_ASSIGN = 18,              // "*="
    SLASH_ASSIGN = 19,             // "/="
    DOUBLE_SLASH_ASSIGN = 20,      // "//="
    CARET_ASSIGN = 21,             // "^="
    PERCENT_ASSIGN = 22,           // "%="
    VEC_PLUS = 23,                 // "+<"
    VEC_MINUS = 24,                // "-<"
    VEC_STAR = 25,                 // "*<"
    VEC_SLASH = 26,                // "/<"
    VEC_DOUBLE_SLASH = 27,         // "//<"
    VEC_CARET = 28,                // "^<"
    VEC_PERCENT = 29,              // "%<"
    VEC_PLUS_ASSIGN = 30,          // "+<="
    VEC_MINUS_ASSIGN = 31,         // "-<="
    VEC_STAR_ASSIGN = 32,          // "*<="
    VEC_SLASH_ASSIGN = 33,         // "/<="
    VEC_DOUBLE_SLASH_ASSIGN = 34,  // "//<="
    VEC_CARET_ASSIGN = 35,         // "^<="
    VEC_PERCENT_ASSIGN = 36,       // "%<="
    DOUBLE_AMP = 37,               // "&&"
    DOUBLE_PIPE = 38,              // "||"
    DOUBLE_EQ = 39,                // "=="
    BANG_EQ = 40,                  // "!="
    LESS = 41,                     // "<"
    LEQ = 42,                      // "<="
    GREATER = 43,                  // ">"
    GEQ = 44,                      // ">="
    SPACESHIP = 45,                // "<=>"
    BANG = 46,                     // "!"
    AMP = 47,                      // "&"
    PIPE = 48,                     // "|"
    DOUBLE_CARET = 49,             // "^^"
    TILDE = 50,                    // "~"
    LEFT_SHIFT = 51,               // "<<"
    RIGHT_SHIFT = 52,              // ">>"
    AMP_ASSIGN = 53,               // "&="
    PIPE_ASSIGN = 54,              // "|="
    DOUBLE_CARET_ASSIGN = 55,      // "^^="
    TILDE_ASSIGN = 56,             // "~="
    LEFT_SHIFT_ASSIGN = 57,        // "<<="
    RIGHT_SHIFT_ASSIGN = 58,       // ">>="
    ASSIGN = 59,                   // "="
    LEFT_ARROW = 60,               // "<-"
    RIGHT_ARROW = 61,              // "->"
    DOUBLE_COLON = 62,             // "::"
    DOUBLE_PLUS = 63,              // "++"
    DOUBLE_MINUS = 64,             // "--"
    IS = 65,                       // "is"
    IN = 66,                       // "in"
    FACTORIAL = 68,                // FACTORIAL
    LEFT_BRACKET = 69,             // "["
    RIGHT_BRACKET = 70,            // "]"
    COMMA = 71,                    // ","
    LEFT_BRACE = 72,               // "{"
    RIGHT_BRACE = 73,              // "}"
    COLON = 74,                    // ":"
    LEFT_PARENTHESIS = 75,         // "("
    RIGHT_PARENTHEIS = 76,         // ")"
    SEMICOLON = 77,                // ";"
    ELLIPSIS = 78,                 // "..."
    DOUBLE_ARROW = 79,             // "=>"
    MROW_START = 80,               // MROW_START
    MROW_END = 81,                 // MROW_END
    AS = 82,                       // "as"
    BOOL = 83,                     // "bool"
    BREAK = 84,                    // "break"
    CATCH = 85,                    // "catch"
    CHAR = 86,                     // "char"
    CLASS = 87,                    // "class"
    COMPEVAL = 88,                 // "compeval"
    COMPLEX = 89,                  // "complex"
    CONST = 90,                    // "const"
    CONTINUE = 91,                 // "continue"
    DO = 92,                       // "do"
    DYNAMIC = 93,                  // "dynamic"
    ENUM = 94,                     // "enum"
    ELSE = 95,                     // "else"
    ELSE_IF = 96,                  // "else if"
    FALSE = 97,                    // "false"
    FOR = 98,                      // "for"
    IF = 99,                       // "if"
    INT8_T = 100,                  // "int8_t"
    INT16_T = 101,                 // "int16_t"
    INT32_T = 102,                 // "int32_t"
    INT64_T = 103,                 // "int64_t"
    LET = 104,                     // "let"
    MATCH = 105,                   // "match"
    NEW = 106,                     // "new"
    NOOP = 107,                    // "noop"
    NOTHROW = 108,                 // "nothrow"
    PRIVATE = 109,                 // "private"
    PUBLIC = 110,                  // "public"
    PURE = 111,                    // "pure"
    REAL = 112,                    // "real"
    RETURN = 113,                  // "return"
    SIZEOF = 114,                  // "sizeof"
    STATIC = 115,                  // "static"
    THROW = 116,                   // "throw"
    TRUE = 117,                    // "true"
    TRY = 118,                     // "try"
    TYPE = 119,                    // "type"
    TYPEDEF = 120,                 // "typedef"
    WHEN = 121,                    // "when"
    WHERE = 122,                   // "where"
    WHILE = 123                    // "while"
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
        YYNTOKENS = 124, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_INTEGER_LITERAL = 3,                   // INTEGER_LITERAL
        S_REAL_LITERAL = 4,                      // REAL_LITERAL
        S_COMPLEX_LITERAL = 5,                   // COMPLEX_LITERAL
        S_STRING_LITERAL = 6,                    // STRING_LITERAL
        S_CHARACTER_LITERAL = 7,                 // CHARACTER_LITERAL
        S_IDENTIFIER = 8,                        // IDENTIFIER
        S_PLUS = 9,                              // "+"
        S_MINUS = 10,                            // "-"
        S_STAR = 11,                             // "*"
        S_SLASH = 12,                            // "/"
        S_DOUBLE_SLASH = 13,                     // "//"
        S_CARET = 14,                            // "^"
        S_PERCENT = 15,                          // "%"
        S_PLUS_ASSIGN = 16,                      // "+="
        S_MINUS_ASSIGN = 17,                     // "-="
        S_STAR_ASSIGN = 18,                      // "*="
        S_SLASH_ASSIGN = 19,                     // "/="
        S_DOUBLE_SLASH_ASSIGN = 20,              // "//="
        S_CARET_ASSIGN = 21,                     // "^="
        S_PERCENT_ASSIGN = 22,                   // "%="
        S_VEC_PLUS = 23,                         // "+<"
        S_VEC_MINUS = 24,                        // "-<"
        S_VEC_STAR = 25,                         // "*<"
        S_VEC_SLASH = 26,                        // "/<"
        S_VEC_DOUBLE_SLASH = 27,                 // "//<"
        S_VEC_CARET = 28,                        // "^<"
        S_VEC_PERCENT = 29,                      // "%<"
        S_VEC_PLUS_ASSIGN = 30,                  // "+<="
        S_VEC_MINUS_ASSIGN = 31,                 // "-<="
        S_VEC_STAR_ASSIGN = 32,                  // "*<="
        S_VEC_SLASH_ASSIGN = 33,                 // "/<="
        S_VEC_DOUBLE_SLASH_ASSIGN = 34,          // "//<="
        S_VEC_CARET_ASSIGN = 35,                 // "^<="
        S_VEC_PERCENT_ASSIGN = 36,               // "%<="
        S_DOUBLE_AMP = 37,                       // "&&"
        S_DOUBLE_PIPE = 38,                      // "||"
        S_DOUBLE_EQ = 39,                        // "=="
        S_BANG_EQ = 40,                          // "!="
        S_LESS = 41,                             // "<"
        S_LEQ = 42,                              // "<="
        S_GREATER = 43,                          // ">"
        S_GEQ = 44,                              // ">="
        S_SPACESHIP = 45,                        // "<=>"
        S_BANG = 46,                             // "!"
        S_AMP = 47,                              // "&"
        S_PIPE = 48,                             // "|"
        S_DOUBLE_CARET = 49,                     // "^^"
        S_TILDE = 50,                            // "~"
        S_LEFT_SHIFT = 51,                       // "<<"
        S_RIGHT_SHIFT = 52,                      // ">>"
        S_AMP_ASSIGN = 53,                       // "&="
        S_PIPE_ASSIGN = 54,                      // "|="
        S_DOUBLE_CARET_ASSIGN = 55,              // "^^="
        S_TILDE_ASSIGN = 56,                     // "~="
        S_LEFT_SHIFT_ASSIGN = 57,                // "<<="
        S_RIGHT_SHIFT_ASSIGN = 58,               // ">>="
        S_ASSIGN = 59,                           // "="
        S_LEFT_ARROW = 60,                       // "<-"
        S_RIGHT_ARROW = 61,                      // "->"
        S_DOUBLE_COLON = 62,                     // "::"
        S_DOUBLE_PLUS = 63,                      // "++"
        S_DOUBLE_MINUS = 64,                     // "--"
        S_IS = 65,                               // "is"
        S_IN = 66,                               // "in"
        S_67_ = 67,                              // "^=="
        S_FACTORIAL = 68,                        // FACTORIAL
        S_LEFT_BRACKET = 69,                     // "["
        S_RIGHT_BRACKET = 70,                    // "]"
        S_COMMA = 71,                            // ","
        S_LEFT_BRACE = 72,                       // "{"
        S_RIGHT_BRACE = 73,                      // "}"
        S_COLON = 74,                            // ":"
        S_LEFT_PARENTHESIS = 75,                 // "("
        S_RIGHT_PARENTHEIS = 76,                 // ")"
        S_SEMICOLON = 77,                        // ";"
        S_ELLIPSIS = 78,                         // "..."
        S_DOUBLE_ARROW = 79,                     // "=>"
        S_MROW_START = 80,                       // MROW_START
        S_MROW_END = 81,                         // MROW_END
        S_AS = 82,                               // "as"
        S_BOOL = 83,                             // "bool"
        S_BREAK = 84,                            // "break"
        S_CATCH = 85,                            // "catch"
        S_CHAR = 86,                             // "char"
        S_CLASS = 87,                            // "class"
        S_COMPEVAL = 88,                         // "compeval"
        S_COMPLEX = 89,                          // "complex"
        S_CONST = 90,                            // "const"
        S_CONTINUE = 91,                         // "continue"
        S_DO = 92,                               // "do"
        S_DYNAMIC = 93,                          // "dynamic"
        S_ENUM = 94,                             // "enum"
        S_ELSE = 95,                             // "else"
        S_ELSE_IF = 96,                          // "else if"
        S_FALSE = 97,                            // "false"
        S_FOR = 98,                              // "for"
        S_IF = 99,                               // "if"
        S_INT8_T = 100,                          // "int8_t"
        S_INT16_T = 101,                         // "int16_t"
        S_INT32_T = 102,                         // "int32_t"
        S_INT64_T = 103,                         // "int64_t"
        S_LET = 104,                             // "let"
        S_MATCH = 105,                           // "match"
        S_NEW = 106,                             // "new"
        S_NOOP = 107,                            // "noop"
        S_NOTHROW = 108,                         // "nothrow"
        S_PRIVATE = 109,                         // "private"
        S_PUBLIC = 110,                          // "public"
        S_PURE = 111,                            // "pure"
        S_REAL = 112,                            // "real"
        S_RETURN = 113,                          // "return"
        S_SIZEOF = 114,                          // "sizeof"
        S_STATIC = 115,                          // "static"
        S_THROW = 116,                           // "throw"
        S_TRUE = 117,                            // "true"
        S_TRY = 118,                             // "try"
        S_TYPE = 119,                            // "type"
        S_TYPEDEF = 120,                         // "typedef"
        S_WHEN = 121,                            // "when"
        S_WHERE = 122,                           // "where"
        S_WHILE = 123,                           // "while"
        S_YYACCEPT = 124,                        // $accept
        S_nikola = 125,                          // nikola
        S_statements = 126,                      // statements
        S_compound_statement = 127,              // compound_statement
        S_if_statement = 128,                    // if_statement
        S_else_if_statement = 129,               // else_if_statement
        S_else_if_statements = 130,              // else_if_statements
        S_else_statement = 131,                  // else_statement
        S_else_statement_opt = 132,              // else_statement_opt
        S_conditional_statement = 133,           // conditional_statement
        S_for_loop = 134,                        // for_loop
        S_while_loop = 135,                      // while_loop
        S_do_while_loop = 136,                   // do_while_loop
        S_loop_statement = 137,                  // loop_statement
        S_match_clauses = 138,                   // match_clauses
        S_match_clause = 139,                    // match_clause
        S_match_statement = 140,                 // match_statement
        S_exception_statement = 141,             // exception_statement
        S_catch_statements = 142,                // catch_statements
        S_catch_statement = 143,                 // catch_statement
        S_jump_statement = 144,                  // jump_statement
        S_statement = 145,                       // statement
        S_literal = 146,                         // literal
        S_expression_list = 147,                 // expression_list
        S_148_matrix_rows = 148,                 // matrix-rows
        S_expression_opt = 149,                  // expression_opt
        S_expression = 150                       // expression
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
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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
                   || (token::PLUS <= tok && tok <= token::WHILE));
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
    NikolaParser ();
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
      make_CHARACTER_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::CHARACTER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CHARACTER_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CHARACTER_LITERAL, v, l);
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
      make_DOUBLE_EQ (location_type l)
      {
        return symbol_type (token::DOUBLE_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_EQ (const location_type& l)
      {
        return symbol_type (token::DOUBLE_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BANG_EQ (location_type l)
      {
        return symbol_type (token::BANG_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_BANG_EQ (const location_type& l)
      {
        return symbol_type (token::BANG_EQ, l);
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
      make_LEQ (location_type l)
      {
        return symbol_type (token::LEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_LEQ (const location_type& l)
      {
        return symbol_type (token::LEQ, l);
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
      make_GEQ (location_type l)
      {
        return symbol_type (token::GEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_GEQ (const location_type& l)
      {
        return symbol_type (token::GEQ, l);
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
      make_DOUBLE_COLON (location_type l)
      {
        return symbol_type (token::DOUBLE_COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_COLON (const location_type& l)
      {
        return symbol_type (token::DOUBLE_COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_PLUS (location_type l)
      {
        return symbol_type (token::DOUBLE_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_PLUS (const location_type& l)
      {
        return symbol_type (token::DOUBLE_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_MINUS (location_type l)
      {
        return symbol_type (token::DOUBLE_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_MINUS (const location_type& l)
      {
        return symbol_type (token::DOUBLE_MINUS, l);
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
      make_FACTORIAL (location_type l)
      {
        return symbol_type (token::FACTORIAL, std::move (l));
      }
#else
      static
      symbol_type
      make_FACTORIAL (const location_type& l)
      {
        return symbol_type (token::FACTORIAL, l);
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
      make_COMMA (location_type l)
      {
        return symbol_type (token::COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::COMMA, l);
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
      make_RIGHT_PARENTHEIS (location_type l)
      {
        return symbol_type (token::RIGHT_PARENTHEIS, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_PARENTHEIS (const location_type& l)
      {
        return symbol_type (token::RIGHT_PARENTHEIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (location_type l)
      {
        return symbol_type (token::SEMICOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const location_type& l)
      {
        return symbol_type (token::SEMICOLON, l);
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
      make_DOUBLE_ARROW (location_type l)
      {
        return symbol_type (token::DOUBLE_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_ARROW (const location_type& l)
      {
        return symbol_type (token::DOUBLE_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MROW_START (location_type l)
      {
        return symbol_type (token::MROW_START, std::move (l));
      }
#else
      static
      symbol_type
      make_MROW_START (const location_type& l)
      {
        return symbol_type (token::MROW_START, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MROW_END (location_type l)
      {
        return symbol_type (token::MROW_END, std::move (l));
      }
#else
      static
      symbol_type
      make_MROW_END (const location_type& l)
      {
        return symbol_type (token::MROW_END, l);
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
      make_COMPLEX (location_type l)
      {
        return symbol_type (token::COMPLEX, std::move (l));
      }
#else
      static
      symbol_type
      make_COMPLEX (const location_type& l)
      {
        return symbol_type (token::COMPLEX, l);
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
      make_NOOP (location_type l)
      {
        return symbol_type (token::NOOP, std::move (l));
      }
#else
      static
      symbol_type
      make_NOOP (const location_type& l)
      {
        return symbol_type (token::NOOP, l);
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
      make_TYPEDEF (location_type l)
      {
        return symbol_type (token::TYPEDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPEDEF (const location_type& l)
      {
        return symbol_type (token::TYPEDEF, l);
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
    typedef unsigned char state_type;

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

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;



    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const unsigned char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const unsigned char yyrline_[];
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
      yylast_ = 2093,     ///< Last index in yytable_.
      yynnts_ = 27,  ///< Number of nonterminal symbols.
      yyfinal_ = 77 ///< Termination state number.
    };



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
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_CHARACTER_LITERAL: // CHARACTER_LITERAL
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


#line 10 "NikolaParser.yy"
} } // Nikola::SyntaxAnalysis
#line 3368 "NikolaParser.hxx"




#endif // !YY_YY_NIKOLAPARSER_HXX_INCLUDED
