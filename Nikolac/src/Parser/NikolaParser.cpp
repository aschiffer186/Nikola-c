// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

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

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "NikolaParser.hpp"


// Unqualified %code blocks.
#line 28 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"

    #include "NikolaLexer.hpp"

    #define yylex lexer.lex

#line 52 "/home/aschiffe/Dev/Nikola-c/Nikolac/src/Parser/NikolaParser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 7 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"
namespace Nikola { namespace SyntaxAnalysis {
#line 145 "/home/aschiffe/Dev/Nikola-c/Nikolac/src/Parser/NikolaParser.cpp"

  /// Build a parser object.
  NikolaParser::NikolaParser (Nikola::SyntaxAnalysis::NikolaLexer& lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      yy_lac_established_ (false),
      lexer (lexer_yyarg)
  {}

  NikolaParser::~NikolaParser ()
  {}

  NikolaParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  NikolaParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  NikolaParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  NikolaParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  NikolaParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  NikolaParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  NikolaParser::symbol_kind_type
  NikolaParser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  NikolaParser::stack_symbol_type::stack_symbol_type ()
  {}

  NikolaParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  NikolaParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  NikolaParser::stack_symbol_type&
  NikolaParser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  NikolaParser::stack_symbol_type&
  NikolaParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  NikolaParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  NikolaParser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  NikolaParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  NikolaParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  NikolaParser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  NikolaParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  NikolaParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  NikolaParser::debug_level_type
  NikolaParser::debug_level () const
  {
    return yydebug_;
  }

  void
  NikolaParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  NikolaParser::state_type
  NikolaParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  NikolaParser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  NikolaParser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  NikolaParser::operator() ()
  {
    return parse ();
  }

  int
  NikolaParser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // Discard the LAC context in case there still is one left from a
    // previous invocation.
    yy_lac_discard_ ("init");

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        if (!yy_lac_establish_ (yyla.kind ()))
          goto yyerrlab;
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        if (!yy_lac_establish_ (yyla.kind ()))
          goto yyerrlab;

        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    yy_lac_discard_ ("shift");
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_REAL_LITERAL: // REAL_LITERAL
      case symbol_kind::S_COMPLEX_LITERAL: // COMPLEX_LITERAL
      case symbol_kind::S_CHAR_LITERAL: // CHAR_LITERAL
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {

#line 593 "/home/aschiffe/Dev/Nikola-c/Nikolac/src/Parser/NikolaParser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      yy_lac_discard_ ("error recovery");
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  NikolaParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  const char *
  NikolaParser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "INTEGER_LITERAL",
  "REAL_LITERAL", "COMPLEX_LITERAL", "CHAR_LITERAL", "STRING_LITERAL",
  "IDENTIFIER", "[", "]", "(", ")", "{", "}", ";", ":", "=>", ",", "+",
  "-", "*", "/", "//", "^", "%", "+=", "-=", "*=", "/=", "//=", "^=", "%=",
  "+<", "-<", "*<", "/<", "//<", "^<", "%<", "+<=", "-<=", "*<=", "/<=",
  "//<=", "^<=", "%<=", "&&", "||", "!", "<", "<=", "<=>", ">=", ">", "==",
  "!=", "&", "|", "^^", "~", "<<", ">>", "&=", "|=", "^^=", "~=", "<<=",
  ">>=", "&<", "|<", "^^<", "~<", "<<<", ">><", "&<=", "|<=", "^^<=",
  "~<=", "<<<=", ">><=", "=", "<-", "++", "--", "...", "::", ".", "?",
  "int8_t", "int16_t", "int32_t", "int64_t", "int", "real32_t", "real64_t",
  "real", "bool", "char", "mod", "void", "true", "false", "this", "nptr",
  "let", "const", "compeval", "pure", "static", "nothrow", "in", "inout",
  "out", "move", "operator", "delete", "class", "public", "protected",
  "private", "enum", "constructor", "destructor", "default", "define",
  "if", "else", "else if", "for", "do", "while", "try", "catch", "throw",
  "break", "return", "continue", "match", "when", "typeset", "template",
  "where", "type", "module", "namespace", "import", "from", "as", "with",
  "is", "sizeof", "typeof", "static_assert", "assert", "new", "dynamic",
  "$accept", "nikola", "statements", "statement", "compound-statement",
  "assignment-statement", "match-statement", "match-arms", "match-arm",
  "conditional-statement", "if-statement", "else-if-statements-opt",
  "else-if-statement", "else-statement-opt", "else-statement",
  "loop-statement", "while-loop", "do-while-loop", "for-loop",
  "for-loop-sequence", "expression-opt", "exception-statement",
  "try-statement", "catch-statements", "catch-statement",
  "catch-all-statement-opt", "catch-all-statement", "jump-statement",
  "binary-expression", "unary-expression", "expression", "literal",
  "vector-literal", "expression-list", "matrix-literal",
  "vector-literal-list", "vector-literal-list-opt", "set-builder-literal",
  "function_argument_list", "function_argument_list0", "function_argument",
  "array_index", "array_slice_list", "array_slice", "name", "module_name", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // NikolaParser::context.
  NikolaParser::context::context (const NikolaParser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  NikolaParser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

#if YYDEBUG
    // Execute LAC once. We don't care if it is successful, we
    // only do it for the sake of debugging output.
    if (!yyparser_.yy_lac_established_)
      yyparser_.yy_lac_check_ (yyla_.kind ());
#endif

    for (int yyx = 0; yyx < YYNTOKENS; ++yyx)
      {
        symbol_kind_type yysym = YY_CAST (symbol_kind_type, yyx);
        if (yysym != symbol_kind::S_YYerror
            && yysym != symbol_kind::S_YYUNDEF
            && yyparser_.yy_lac_check_ (yysym))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
      }
    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }




  bool
  NikolaParser::yy_lac_check_ (symbol_kind_type yytoken) const
  {
    // Logically, the yylac_stack's lifetime is confined to this function.
    // Clear it, to get rid of potential left-overs from previous call.
    yylac_stack_.clear ();
    // Reduce until we encounter a shift and thereby accept the token.
#if YYDEBUG
    YYCDEBUG << "LAC: checking lookahead " << symbol_name (yytoken) << ':';
#endif
    std::ptrdiff_t lac_top = 0;
    while (true)
      {
        state_type top_state = (yylac_stack_.empty ()
                                ? yystack_[lac_top].state
                                : yylac_stack_.back ());
        int yyrule = yypact_[+top_state];
        if (yy_pact_value_is_default_ (yyrule)
            || (yyrule += yytoken) < 0 || yylast_ < yyrule
            || yycheck_[yyrule] != yytoken)
          {
            // Use the default action.
            yyrule = yydefact_[+top_state];
            if (yyrule == 0)
              {
                YYCDEBUG << " Err\n";
                return false;
              }
          }
        else
          {
            // Use the action from yytable.
            yyrule = yytable_[yyrule];
            if (yy_table_value_is_error_ (yyrule))
              {
                YYCDEBUG << " Err\n";
                return false;
              }
            if (0 < yyrule)
              {
                YYCDEBUG << " S" << yyrule << '\n';
                return true;
              }
            yyrule = -yyrule;
          }
        // By now we know we have to simulate a reduce.
        YYCDEBUG << " R" << yyrule - 1;
        // Pop the corresponding number of values from the stack.
        {
          std::ptrdiff_t yylen = yyr2_[yyrule];
          // First pop from the LAC stack as many tokens as possible.
          std::ptrdiff_t lac_size = std::ptrdiff_t (yylac_stack_.size ());
          if (yylen < lac_size)
            {
              yylac_stack_.resize (std::size_t (lac_size - yylen));
              yylen = 0;
            }
          else if (lac_size)
            {
              yylac_stack_.clear ();
              yylen -= lac_size;
            }
          // Only afterwards look at the main stack.
          // We simulate popping elements by incrementing lac_top.
          lac_top += yylen;
        }
        // Keep top_state in sync with the updated stack.
        top_state = (yylac_stack_.empty ()
                     ? yystack_[lac_top].state
                     : yylac_stack_.back ());
        // Push the resulting state of the reduction.
        state_type state = yy_lr_goto_state_ (top_state, yyr1_[yyrule]);
        YYCDEBUG << " G" << int (state);
        yylac_stack_.push_back (state);
      }
  }

  // Establish the initial context if no initial context currently exists.
  bool
  NikolaParser::yy_lac_establish_ (symbol_kind_type yytoken)
  {
    /* Establish the initial context for the current lookahead if no initial
       context is currently established.

       We define a context as a snapshot of the parser stacks.  We define
       the initial context for a lookahead as the context in which the
       parser initially examines that lookahead in order to select a
       syntactic action.  Thus, if the lookahead eventually proves
       syntactically unacceptable (possibly in a later context reached via a
       series of reductions), the initial context can be used to determine
       the exact set of tokens that would be syntactically acceptable in the
       lookahead's place.  Moreover, it is the context after which any
       further semantic actions would be erroneous because they would be
       determined by a syntactically unacceptable token.

       yy_lac_establish_ should be invoked when a reduction is about to be
       performed in an inconsistent state (which, for the purposes of LAC,
       includes consistent states that don't know they're consistent because
       their default reductions have been disabled).

       For parse.lac=full, the implementation of yy_lac_establish_ is as
       follows.  If no initial context is currently established for the
       current lookahead, then check if that lookahead can eventually be
       shifted if syntactic actions continue from the current context.  */
    if (yy_lac_established_)
      return true;
    else
      {
#if YYDEBUG
        YYCDEBUG << "LAC: initial context established for "
                 << symbol_name (yytoken) << '\n';
#endif
        yy_lac_established_ = true;
        return yy_lac_check_ (yytoken);
      }
  }

  // Discard any previous initial lookahead context.
  void
  NikolaParser::yy_lac_discard_ (const char* event)
  {
   /* Discard any previous initial lookahead context because of Event,
      which may be a lookahead change or an invalidation of the currently
      established initial context for the current lookahead.

      The most common example of a lookahead change is a shift.  An example
      of both cases is syntax error recovery.  That is, a syntax error
      occurs when the lookahead is syntactically erroneous for the
      currently established initial context, so error recovery manipulates
      the parser stacks to try to find a new initial context in which the
      current lookahead is syntactically acceptable.  If it fails to find
      such a context, it discards the lookahead.  */
    if (yy_lac_established_)
      {
        YYCDEBUG << "LAC: initial context discarded due to "
                 << event << '\n';
        yy_lac_established_ = false;
      }
  }


  int
  NikolaParser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
         In the first two cases, it might appear that the current syntax
         error should have been detected in the previous state when
         yy_lac_check was invoked.  However, at that time, there might
         have been a different syntax error that discarded a different
         initial context during error recovery, leaving behind the
         current lookahead.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  NikolaParser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short NikolaParser::yypact_ninf_ = -356;

  const short NikolaParser::yytable_ninf_ = -159;

  const short
  NikolaParser::yypact_[] =
  {
     329,  -356,  -356,  -356,  -356,  -356,   -81,   590,   590,   329,
     590,   590,   590,   590,   590,   590,   590,  -356,  -356,  -356,
      46,    24,    27,    32,    39,    40,    41,    40,   590,     5,
     590,    36,    44,    11,    48,    52,    54,    17,    68,  -356,
     329,  -356,  -356,  -356,  -356,   -59,  -356,  -356,  -356,  -356,
    -356,   -63,  -356,  -356,  -356,  1753,  -356,  -356,  -356,  -356,
      60,    30,  -356,    64,   590,  4274,    65,     8,   812,    59,
    1854,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   590,    39,
      69,   590,   590,   590,   590,    40,   329,   -56,   590,  -356,
      61,  4274,  -356,    72,  -356,    81,    84,   590,   590,   590,
      84,    80,  -356,  -356,    85,   -32,   -59,    89,   -31,  -356,
    -356,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,  -356,  -356,  -356,    93,   590,   590,   590,
     675,   482,   675,   -81,  -356,  4344,   590,  -356,    86,    95,
    -356,   590,    37,  -356,   590,   882,    40,    98,   952,  1022,
    1092,    88,  -356,    96,  1162,  -356,  -356,    97,    56,  1232,
    1302,  1372,   161,   675,   590,    40,  -356,  -356,  -356,   590,
     169,  -356,  -356,  -356,   345,   345,     7,     7,     7,     7,
       7,  1925,  1996,  2067,  2138,  2209,  2280,  2351,   345,   345,
       7,     7,     7,     7,     7,  2422,  2493,  2564,  2635,  2706,
    2777,  2848,  4553,  4484,   728,   728,  4872,   728,   728,  4816,
    4816,  4760,  4622,  4691,   225,   225,  2919,  2990,  3061,  3132,
    3203,  3274,  4760,  4622,  4691,   -51,   225,   225,  3345,  3416,
    3487,  3558,  3629,  3700,  3771,  3842,    38,  3912,  4816,  4414,
     -57,  4274,   170,  -356,    90,   590,  3982,   173,   167,   175,
      65,  -356,  4274,   482,   675,   218,     9,    40,  -356,   177,
    -356,  -356,    40,   590,   590,    40,   179,   184,  -356,  -356,
    -356,   675,   176,  1442,  -356,  1512,   504,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,   482,   675,  -356,   590,  -356,
     675,  4052,   590,  -356,   482,  -356,  -356,   186,   185,  -356,
    -356,   187,  -356,   183,  1582,  -356,  -105,   590,   188,  -356,
      40,    40,    40,   189,   191,  4274,  -356,   590,  4122,  -356,
    -356,  -356,  -105,   590,  -356,   590,   190,  -105,  -356,  1652,
    -356,  -356,  -356,  -356,  -356,  -356,  4274,   590,   192,   193,
    4204,  -356,  -356,  -356,  4274,  -356,  -356,    40,  -356
  };

  const unsigned char
  NikolaParser::yydefact_[] =
  {
       4,   145,   146,   147,   149,   148,   182,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       4,     6,     7,     8,     9,    52,    10,    57,    58,    59,
      11,     0,    12,   129,   130,     0,   126,   153,   154,   155,
     143,   127,   183,     0,     0,   158,   153,     0,     0,     0,
       0,   124,   122,   116,   123,   117,   118,   119,     0,     0,
       0,     0,     0,     0,    66,     0,     4,     0,     0,    68,
       0,    65,    76,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     1,     3,     0,    55,    52,     0,    73,    70,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,   125,     0,     0,     0,     0,
     166,     0,   166,   185,   184,     0,     0,   161,   162,     0,
     156,     0,   128,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    62,     0,     0,    78,    75,     0,     0,     0,
       0,     0,     0,   166,     0,     0,    48,    54,    51,     0,
       0,    69,    67,    72,    79,    80,    81,    82,    83,    85,
      84,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
       0,     0,   107,   108,   109,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,   115,   114,
     182,   169,     0,   165,   168,     0,   176,     0,   175,     0,
       0,   159,   157,     0,   166,   103,     0,     0,    63,     0,
     136,   137,     0,    66,     0,     0,     0,     0,   133,   132,
     135,   166,     0,     0,    56,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,     0,   166,   131,     0,   144,
       0,   178,   177,   171,     0,   140,   160,     0,     0,   164,
      50,     0,    49,     0,     0,    60,     0,     0,     0,   138,
       0,     0,     0,     0,     0,   170,   167,     0,     0,   174,
     173,   141,     0,    66,    61,     0,     0,    45,    47,     0,
     139,    53,    71,    74,   172,   142,   181,   180,     0,     0,
       0,    42,    44,   134,   179,    43,    64,     0,    46
  };

  const short
  NikolaParser::yypgoto_[] =
  {
    -356,  -356,     4,  -356,    -8,  -356,  -356,  -355,  -356,  -356,
    -356,   102,  -356,  -356,   104,  -356,  -356,  -356,  -356,   122,
     -28,  -356,  -356,  -356,   103,  -356,  -356,  -356,  -356,  -356,
       0,  -356,    -6,    16,  -356,  -356,  -356,  -356,  -128,  -148,
    -356,  -356,  -297,  -356,   -34,   150
  };

  const short
  NikolaParser::yydefgoto_[] =
  {
       0,    38,    69,    40,    41,    42,    43,   396,   397,    44,
      45,   105,   106,   216,   398,    46,    47,    48,    49,    85,
      90,    50,    51,   108,   109,   222,   223,    52,    53,    54,
     291,    56,    57,    67,    58,   188,   189,    59,   292,   293,
     294,    60,   297,   298,    61,    62
  };

  const short
  NikolaParser::yytable_[] =
  {
      55,    66,    93,   101,    39,    63,   367,    65,    68,    70,
      71,    72,    73,    74,    75,    76,    77,    87,   190,    89,
      92,   162,   215,   369,   358,     6,   191,   191,    91,    63,
      91,   116,   173,   174,   395,    81,   176,   408,    82,   181,
      55,   182,   412,    83,   103,   130,   303,   355,   304,   356,
      84,    94,    88,    86,   299,    95,   201,    78,   383,    97,
     187,    96,   208,    98,   185,    99,   212,   389,   102,   104,
     107,   180,   183,   193,   186,   203,   205,   202,   195,   162,
     197,   198,   199,   200,    91,   322,    55,   206,   204,   207,
     173,   174,     6,   213,   176,   215,   214,   209,   210,   211,
     219,   286,   220,   313,   300,   301,   309,   314,   360,   316,
     317,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   100,   321,    79,   368,   287,   288,   289,
     326,   296,   359,   363,    80,   364,    65,   365,   308,   371,
     379,   302,   376,   378,   305,   377,   390,   391,   393,   404,
     392,   196,   400,   405,   411,   416,   415,   324,   218,   217,
     306,   221,   386,   184,   323,     0,     0,     0,     0,   325,
       0,     0,     0,     0,     0,     0,     0,     0,   384,     0,
       0,     0,  -158,     0,     0,     0,  -158,   111,   112,   113,
     114,   115,   116,   117,   111,   112,   113,   114,   115,   116,
     117,   125,   126,   127,   128,   129,   130,   131,   125,   126,
     127,   128,   129,   130,   131,     0,     0,     0,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   150,     0,   151,
     152,     0,     0,     0,     0,   373,     0,   159,     0,   161,
     162,   163,   164,     0,   366,   361,     0,   162,     0,   370,
       0,   173,   174,   296,   372,   176,     0,   375,   173,   174,
       0,     0,   176,    91,   374,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,     0,   178,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     0,
       8,     0,     9,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,   296,     0,     0,   385,     0,
       0,     0,   388,     0,   296,   409,   113,   114,   115,   116,
     117,     0,   401,   402,   403,     0,     0,   399,    12,     0,
     127,   128,   129,   130,   131,     0,    13,   406,     0,    14,
       0,     0,     0,    91,     0,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   414,     0,   418,
       0,     0,    15,    16,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
      17,    18,   176,    19,     0,     0,    20,    21,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,    24,    25,
      26,    27,     0,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     0,    37,     1,     2,     3,     4,     5,
       6,     7,     0,     8,     0,    64,     0,     0,   295,     0,
       0,     0,    10,    11,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     0,     8,   382,    64,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    18,     0,    19,    15,    16,     0,
      21,     0,    22,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     0,    64,     0,    17,    18,     0,    19,     0,
      10,    11,    21,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,    34,    35,    36,     0,    37,     0,    12,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      14,     0,    33,     0,     0,    34,    35,    36,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     1,     2,
       3,     4,     5,   290,     7,     0,     8,     0,    64,     0,
       0,    17,    18,     0,    19,    10,    11,     0,    21,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    14,     0,     0,    33,     0,
       0,    34,    35,    36,     0,    37,     0,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,    15,    16,
       0,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,    19,
     143,     0,     0,    21,     0,    22,     0,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,   173,   174,     0,     0,   176,     0,     0,     0,     0,
       0,     0,     0,    33,   192,     0,    34,    35,    36,     0,
      37,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,   307,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   310,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   311,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   312,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   315,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   318,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   319,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   320,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   380,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   381,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   394,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,   413,   173,   174,   175,     0,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,     0,   173,   174,   175,     0,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,   110,     0,
       0,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   179,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,   110,
       0,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   179,   141,   142,   143,   144,   145,   146,
     147,   148,   194,   150,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     327,   176,   177,     0,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   178,     0,     0,     0,     0,
       0,     0,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,     0,
       0,     0,     0,     0,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,   179,     0,     0,     0,   173,   174,
     175,   328,   176,   177,     0,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   178,     0,     0,     0,
       0,     0,     0,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   179,     0,     0,     0,   173,
     174,   175,   329,   176,   177,     0,   111,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   178,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,   179,     0,     0,     0,
     173,   174,   175,   330,   176,   177,     0,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   178,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,     0,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,   179,     0,     0,
       0,   173,   174,   175,   331,   176,   177,     0,   111,   112,
     113,   114,   115,   116,   117,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   178,
       0,     0,     0,     0,     0,     0,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,   179,     0,
       0,     0,   173,   174,   175,   332,   176,   177,     0,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   131,
     178,     0,     0,     0,     0,     0,     0,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,   179,
       0,     0,     0,   173,   174,   175,   333,   176,   177,     0,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   178,     0,     0,     0,     0,     0,     0,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
     179,     0,     0,     0,   173,   174,   175,   334,   176,   177,
       0,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   178,     0,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,   179,     0,     0,     0,   173,   174,   175,   335,   176,
     177,     0,   111,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   178,     0,     0,     0,     0,     0,     0,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,   179,     0,     0,     0,   173,   174,   175,   336,
     176,   177,     0,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,   178,     0,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,   179,     0,     0,     0,   173,   174,   175,
     337,   176,   177,     0,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   178,     0,     0,     0,     0,
       0,     0,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,     0,
       0,     0,     0,     0,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,   179,     0,     0,     0,   173,   174,
     175,   338,   176,   177,     0,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   178,     0,     0,     0,
       0,     0,     0,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   179,     0,     0,     0,   173,
     174,   175,   339,   176,   177,     0,   111,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   178,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,   179,     0,     0,     0,
     173,   174,   175,   340,   176,   177,     0,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   178,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,     0,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,   179,     0,     0,
       0,   173,   174,   175,   341,   176,   177,     0,   111,   112,
     113,   114,   115,   116,   117,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   178,
       0,     0,     0,     0,     0,     0,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,   179,     0,
       0,     0,   173,   174,   175,   342,   176,   177,     0,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   131,
     178,     0,     0,     0,     0,     0,     0,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,   179,
       0,     0,     0,   173,   174,   175,   343,   176,   177,     0,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   178,     0,     0,     0,     0,     0,     0,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
     179,     0,     0,     0,   173,   174,   175,   344,   176,   177,
       0,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   178,     0,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,   179,     0,     0,     0,   173,   174,   175,   345,   176,
     177,     0,   111,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   178,     0,     0,     0,     0,     0,     0,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,   179,     0,     0,     0,   173,   174,   175,   346,
     176,   177,     0,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,   178,     0,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,   179,     0,     0,     0,   173,   174,   175,
     347,   176,   177,     0,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   178,     0,     0,     0,     0,
       0,     0,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,     0,
       0,     0,     0,     0,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,   179,     0,     0,     0,   173,   174,
     175,   348,   176,   177,     0,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,   131,   178,     0,     0,     0,
       0,     0,     0,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   179,     0,     0,     0,   173,
     174,   175,   349,   176,   177,     0,   111,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   178,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,   179,     0,     0,     0,
     173,   174,   175,   350,   176,   177,     0,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   178,     0,
       0,     0,     0,     0,     0,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,     0,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,   179,     0,     0,
       0,   173,   174,   175,   351,   176,   177,     0,   111,   112,
     113,   114,   115,   116,   117,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   178,
       0,     0,     0,     0,     0,     0,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,   179,     0,
       0,     0,   173,   174,   175,   352,   176,   177,     0,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   131,
     178,     0,     0,     0,     0,     0,     0,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,   179,
       0,     0,     0,   173,   174,   175,   353,   176,   177,     0,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   178,     0,     0,     0,     0,     0,     0,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
     179,     0,     0,     0,   173,   174,   175,   354,   176,   177,
       0,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   178,     0,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,   179,     0,     0,     0,   173,   174,   175,   357,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,     0,   173,   174,   175,   362,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,     0,   173,   174,   175,   387,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,     0,   173,   174,   175,   407,   176,
     177,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   178,     0,     0,     0,     0,     0,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   179,     0,     0,   173,   174,   175,     0,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,     0,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,   178,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,   179,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   174,   175,
       0,   176,   177,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   178,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,   179,     0,     0,   173,   174,   175,
       0,   176,   177,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   178,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   194,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,   179,     0,     0,   173,   174,   175,
       0,   176,   177,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   178,     0,     0,     0,     0,
       0,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,   179,     0,     0,   173,   174,   175,
       0,   176,   177,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   178,     0,     0,     0,     0,
       0,   139,     0,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   174,     0,
       0,   176,   111,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   178,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,   173,   174,     0,     0,
     176,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   150,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   159,     0,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   174,     0,     0,   176,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     159,     0,     0,   162,   163,   164,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   174,     0,     0,   176,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   144,   145,   146,   147,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   163,   164,   111,   112,   113,   114,   115,
     116,   117,     0,   173,   174,     0,     0,   176,     0,   125,
     126,   127,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   144,
     145,   178,     0,     0,     0,     0,     0,   151,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   162,   163,
     164,   111,   112,   113,   114,   115,   116,   117,     0,   173,
     174,     0,     0,   176,     0,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   174,     0,     0,   176
  };

  const short
  NikolaParser::yycheck_[] =
  {
       0,     7,    30,    37,     0,    86,   303,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    25,    10,    27,
      15,    72,   127,    14,    81,     8,    18,    18,    28,    86,
      30,    24,    83,    84,   139,    11,    87,   392,    11,     9,
      40,    11,   397,    11,    40,    38,     9,     9,    11,    11,
      11,    15,    11,    13,   182,    11,    84,    11,   355,    11,
      66,    50,    96,    11,    64,    11,   100,   364,     0,   128,
     133,    11,     8,    14,     9,   131,    15,    85,    78,    72,
      11,    81,    82,    83,    84,   213,    86,    15,    88,     8,
      83,    84,     8,    13,    87,   127,    11,    97,    98,    99,
      11,     8,   133,    15,    18,    10,     8,    11,    18,    12,
      54,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   156,    13,   129,   304,   177,   178,   179,
      11,   181,    12,    10,   138,    18,   186,    12,   196,    12,
      14,   191,    13,   321,   194,    11,    10,    12,    15,    10,
      13,    79,    14,    12,    14,    12,    14,   215,   106,   105,
     194,   108,   360,    63,   214,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    19,    20,    21,    22,    23,    24,
      25,    33,    34,    35,    36,    37,    38,    39,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,   313,    -1,    69,    -1,    71,
      72,    73,    74,    -1,   300,   295,    -1,    72,    -1,   307,
      -1,    83,    84,   303,   312,    87,    -1,   315,    83,    84,
      -1,    -1,    87,   313,   314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,   111,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,   355,    -1,    -1,   358,    -1,
      -1,    -1,   362,    -1,   364,   393,    21,    22,    23,    24,
      25,    -1,   380,   381,   382,    -1,    -1,   377,    49,    -1,
      35,    36,    37,    38,    39,    -1,    57,   387,    -1,    60,
      -1,    -1,    -1,   393,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   407,    -1,   417,
      -1,    -1,    83,    84,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
     101,   102,    87,   104,    -1,    -1,   107,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,    -1,   155,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    13,    -1,    -1,    16,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,    83,    84,    -1,
     108,    -1,   110,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    13,    -1,   101,   102,    -1,   104,    -1,
      20,    21,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,    -1,   155,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,   148,    -1,    -1,   151,   152,   153,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    13,    -1,
      -1,   101,   102,    -1,   104,    20,    21,    -1,   108,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,   148,    -1,
      -1,   151,   152,   153,    -1,   155,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    83,    84,
      -1,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,   104,
      52,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    12,    -1,   151,   152,   153,    -1,
     155,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    12,    83,    84,    85,    -1,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    83,    84,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   150,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   150,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      15,    87,    88,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,    84,
      85,    15,    87,    88,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,
      84,    85,    15,    87,    88,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      83,    84,    85,    15,    87,    88,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    83,    84,    85,    15,    87,    88,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    83,    84,    85,    15,    87,    88,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    83,    84,    85,    15,    87,    88,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    83,    84,    85,    15,    87,    88,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    83,    84,    85,    15,    87,
      88,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    83,    84,    85,    15,
      87,    88,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    83,    84,    85,
      15,    87,    88,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,    84,
      85,    15,    87,    88,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,
      84,    85,    15,    87,    88,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      83,    84,    85,    15,    87,    88,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    83,    84,    85,    15,    87,    88,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    83,    84,    85,    15,    87,    88,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    83,    84,    85,    15,    87,    88,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    83,    84,    85,    15,    87,    88,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    83,    84,    85,    15,    87,
      88,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    83,    84,    85,    15,
      87,    88,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    83,    84,    85,
      15,    87,    88,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,    84,
      85,    15,    87,    88,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    83,
      84,    85,    15,    87,    88,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      83,    84,    85,    15,    87,    88,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    83,    84,    85,    15,    87,    88,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    83,    84,    85,    15,    87,    88,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    83,    84,    85,    15,    87,    88,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    83,    84,    85,    15,    87,    88,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,   111,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    83,    84,    85,    16,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    83,    84,    85,    16,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    83,    84,    85,    16,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    83,    84,    85,    16,    87,
      88,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,   111,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    83,    84,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,   150,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,    85,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,    85,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,    85,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    87,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      87,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    19,    20,    21,    22,    23,
      24,    25,    -1,    83,    84,    -1,    -1,    87,    -1,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,   111,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    19,    20,    21,    22,    23,    24,    25,    -1,    83,
      84,    -1,    -1,    87,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87
  };

  const unsigned char
  NikolaParser::yystos_[] =
  {
       0,     3,     4,     5,     6,     7,     8,     9,    11,    13,
      20,    21,    49,    57,    60,    83,    84,   101,   102,   104,
     107,   108,   110,   126,   129,   130,   131,   132,   134,   135,
     136,   137,   138,   148,   151,   152,   153,   155,   158,   159,
     160,   161,   162,   163,   166,   167,   172,   173,   174,   175,
     178,   179,   184,   185,   186,   187,   188,   189,   191,   194,
     198,   201,   202,    86,    13,   187,   189,   190,   187,   159,
     187,   187,   187,   187,   187,   187,   187,   187,    11,   129,
     138,    11,    11,    11,    11,   176,    13,   161,    11,   161,
     177,   187,    15,   177,    15,    11,    50,    11,    11,    11,
     156,   201,     0,   159,   128,   168,   169,   133,   180,   181,
      15,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    87,    88,   111,   150,
      11,     9,    11,     8,   202,   187,     9,   189,   192,   193,
      10,    18,    12,    14,    58,   187,   176,    11,   187,   187,
     187,   177,   161,   131,   187,    15,    15,     8,   201,   187,
     187,   187,   201,    13,    11,   127,   170,   171,   168,    11,
     133,   181,   182,   183,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,     8,   187,   187,   187,
       8,   187,   195,   196,   197,    16,   187,   199,   200,   195,
      18,    10,   187,     9,    11,   187,   190,    12,   161,     8,
      12,    12,    12,    15,    11,    12,    12,    54,    12,    12,
      12,    13,   195,   187,   161,   187,    11,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,     9,    11,    16,    81,    12,
      18,   187,    16,    10,    18,    12,   189,   199,   195,    14,
     161,    12,   161,   177,   187,   161,    13,    11,   195,    14,
      12,    12,    12,   199,   195,   187,   196,    16,   187,   199,
      10,    12,    13,    15,    12,   139,   164,   165,   171,   187,
      14,   161,   161,   161,    10,    12,   187,    16,   164,   177,
     187,    14,   164,    12,   187,    14,    12,    17,   161
  };

  const unsigned char
  NikolaParser::yyr1_[] =
  {
       0,   157,   158,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   161,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   167,
     167,   168,   168,   169,   170,   170,   171,   172,   172,   172,
     173,   174,   175,   175,   176,   177,   177,   178,   179,   180,
     180,   181,   182,   182,   183,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   190,   190,   191,
     192,   192,   193,   193,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   198,   199,   199,   200,   200,   200,   200,
     200,   200,   201,   201,   202,   202
  };

  const signed char
  NikolaParser::yyr2_[] =
  {
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     7,     8,     2,     1,     4,     1,     3,     5,
       5,     2,     0,     5,     1,     0,     2,     1,     1,     1,
       5,     6,     3,     4,     7,     1,     0,     3,     2,     2,
       1,     5,     1,     0,     4,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     3,     1,
       1,     4,     4,     4,     7,     4,     4,     4,     5,     6,
       4,     6,     6,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     4,
       3,     1,     1,     0,     5,     1,     0,     3,     1,     1,
       3,     4,     6,     6,     3,     1,     1,     2,     2,     5,
       4,     4,     1,     1,     3,     3
  };




#if YYDEBUG
  const short
  NikolaParser::yyrline_[] =
  {
       0,   107,   107,   109,   110,   114,   115,   116,   117,   118,
     119,   120,   121,   124,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   160,   161,   163,   164,   166,   167,   170,   173,
     174,   176,   177,   179,   180,   181,   184,   188,   189,   190,
     193,   195,   198,   199,   200,   201,   202,   206,   208,   210,
     211,   213,   214,   215,   217,   221,   222,   223,   224,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   280,   281,   282,   283,
     284,   285,   287,   288,   289,   290,   291,   292,   294,   295,
     297,   298,   299,   300,   301,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   318,   319,   320,   323,
     324,   325,   327,   328,   332,   335,   336,   338,   339,   341,
     342,   347,   348,   349,   351,   352,   355,   356,   357,   358,
     359,   360,   363,   364,   368,   369
  };

  void
  NikolaParser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  NikolaParser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 7 "/home/aschiffe/Dev/Nikola-c/Nikolac/include/Parser/NikolaParser.yy"
} } // Nikola::SyntaxAnalysis
#line 2349 "/home/aschiffe/Dev/Nikola-c/Nikolac/src/Parser/NikolaParser.cpp"

