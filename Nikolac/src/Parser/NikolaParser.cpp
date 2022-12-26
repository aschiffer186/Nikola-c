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
  "$accept", "nikola", "statements", "statement", "assignment-statement",
  "expression", "literal", "function_argument_list",
  "function_argument_list0", "function_argument", YY_NULLPTR
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


  const short NikolaParser::yypact_ninf_ = -201;

  const signed char NikolaParser::yytable_ninf_ = -1;

  const short
  NikolaParser::yypact_[] =
  {
     117,  -201,  -201,  -201,  -201,  -201,    -8,   117,   117,   117,
     117,   117,   117,   117,   117,  -201,  -201,  -201,    -6,    -5,
       6,     7,     9,    10,    -7,    22,  -201,   117,  -201,   805,
    -201,   147,   284,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     117,   117,   117,   117,   117,   117,    11,    15,  -201,  -201,
    -201,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,  -201,  -201,   117,   117,   117,   117,    38,
    2905,    13,  -201,     8,    17,   354,   424,   494,   564,   634,
     704,    16,    18,   108,   108,    89,    89,    89,    89,    89,
     875,   945,  1015,  1085,  1155,  1225,  1295,   108,   108,    89,
      89,    89,    89,    89,  1365,  1435,  1505,  1575,  1645,  1715,
    1785,  3114,  3045,  3433,  3433,  3489,  3433,  3433,  3377,  3377,
    3321,  3183,  3252,  3510,  3510,  1855,  1925,  1995,  2065,  2135,
    2205,  3321,  3183,  3252,   -68,  3510,  3510,  2275,  2345,  2415,
    2485,  2555,  2625,  2695,  2765,    21,  2835,  3377,  2975,   117,
    -201,   147,   147,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
      19,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,   147,
    -201,  2905,  -201,    23,  -201,    24,  -201,  -201
  };

  const signed char
  NikolaParser::yydefact_[] =
  {
       4,    95,    96,    97,    99,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     4,     6,     0,
      35,   104,     0,    80,    78,    60,    79,    64,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     0,     0,     0,     0,     0,
     107,     0,   103,   106,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    43,    42,
       0,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      61,    62,    63,    65,    66,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    83,    82,     0,
      92,     0,   104,    88,    89,    86,    85,    84,    87,    90,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     7,     8,   104,
      81,   108,   105,     0,    91,     0,    93,    94
  };

  const short
  NikolaParser::yypgoto_[] =
  {
    -201,  -201,     2,  -201,  -201,     0,  -201,  -200,  -167,  -201
  };

  const signed char
  NikolaParser::yydefgoto_[] =
  {
       0,    25,    26,    27,    28,   120,    30,   121,   122,   123
  };

  const unsigned char
  NikolaParser::yytable_[] =
  {
      29,    46,   243,    31,   102,    40,    41,    32,    33,    34,
      35,    36,    37,    38,    39,   113,   114,    42,    43,   115,
      44,    45,    48,   132,   131,   200,   201,    29,   202,    49,
     209,   210,   239,   244,   242,   246,   247,     0,     0,   245,
     125,   126,   127,   128,   129,   130,     0,     0,     0,    31,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    56,     0,   195,   196,   197,   198,   199,
       1,     2,     3,     4,     5,     6,     0,    70,     7,    53,
      54,    55,    56,    57,     0,     0,     0,     8,     9,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     0,    47,
       1,     2,     3,     4,     5,   119,     0,     0,     7,     0,
       0,   102,     0,     0,     0,     0,    10,     8,     9,     0,
       0,     0,   113,   114,    11,     0,   115,    12,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,   115,    10,     0,     0,   241,
      13,    14,     0,     0,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    17,     0,     0,     0,    18,     0,    19,     0,     0,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    17,     0,     0,     0,    18,     0,    19,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,    21,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,   124,     0,    21,    22,
      23,     0,    24,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,     0,     0,   203,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,   204,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,   205,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,   206,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,   207,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,   208,   113,   114,     0,
       0,   115,   116,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,   117,     0,     0,     0,     0,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,   118,     0,     0,   113,   114,     0,
       0,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   118,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     211,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     212,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     213,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     214,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     215,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     216,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     217,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     218,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     219,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     220,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     221,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     222,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     223,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     224,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     225,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     226,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     227,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     228,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     229,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     230,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     231,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     232,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     233,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     234,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     235,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     236,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     237,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
     238,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
       0,   240,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
       0,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
       0,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,    80,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   118,     0,     0,   113,   114,
       0,     0,   115,   116,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,   117,     0,     0,     0,
       0,     0,    79,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,   115,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,   115,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,    99,     0,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
     115,    51,    52,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,    91,    92,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   102,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,   115,
      51,    52,    53,    54,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,    51,    52,    53,    54,
      55,    56,    57,     0,   113,   114,     0,     0,   115,     0,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,   117,     0,     0,     0,     0,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,    51,    52,    53,    54,    55,    56,    57,     0,
     113,   114,     0,     0,   115,     0,    65,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,    51,    52,
      53,    54,    55,    56,    57,     0,   113,   114,     0,     0,
     115,     0,    65,    66,    67,    68,    69,    70,    71,    51,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,   115,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,   115
  };

  const short
  NikolaParser::yycheck_[] =
  {
       0,     8,   202,    11,    72,    11,    11,     7,     8,     9,
      10,    11,    12,    13,    14,    83,    84,    11,    11,    87,
      11,    11,     0,     8,    13,    12,    18,    27,    11,    27,
      14,    13,    11,    14,   201,    12,    12,    -1,    -1,   239,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    11,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    24,    -1,   115,   116,   117,   118,    81,
       3,     4,     5,     6,     7,     8,    -1,    38,    11,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,   156,
       3,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    49,    20,    21,    -1,
      -1,    -1,    83,    84,    57,    -1,    87,    60,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    87,    49,    -1,    -1,   199,
      83,    84,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,    -1,    -1,    -1,   108,    -1,   110,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,    -1,    -1,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    12,    -1,   151,   152,
     153,    -1,   155,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    12,    83,    84,    -1,
      -1,    87,    88,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   150,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      15,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      -1,    16,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    -1,    87,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    87,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      87,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    19,    20,    21,    22,
      23,    24,    25,    -1,    83,    84,    -1,    -1,    87,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,   111,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    19,    20,    21,    22,    23,    24,    25,    -1,
      83,    84,    -1,    -1,    87,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    19,    20,
      21,    22,    23,    24,    25,    -1,    83,    84,    -1,    -1,
      87,    -1,    33,    34,    35,    36,    37,    38,    39,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    87
  };

  const unsigned char
  NikolaParser::yystos_[] =
  {
       0,     3,     4,     5,     6,     7,     8,    11,    20,    21,
      49,    57,    60,    83,    84,   101,   102,   104,   108,   110,
     148,   151,   152,   153,   155,   158,   159,   160,   161,   162,
     163,    11,   162,   162,   162,   162,   162,   162,   162,   162,
      11,    11,    11,    11,    11,    11,     8,   156,     0,   159,
      15,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    87,    88,   111,   150,     8,
     162,   164,   165,   166,    12,   162,   162,   162,   162,   162,
     162,    13,     8,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,    81,
      12,    18,    11,    12,    12,    12,    12,    12,    12,    14,
      13,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    11,
      16,   162,   165,   164,    14,   164,    12,    12
  };

  const unsigned char
  NikolaParser::yyr1_[] =
  {
       0,   157,   158,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   164,   164,   165,   165,   166,   166
  };

  const signed char
  NikolaParser::yyr2_[] =
  {
       0,     2,     1,     2,     0,     2,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     4,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     5,     4,     6,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     1,     1,     3
  };




#if YYDEBUG
  const unsigned char
  NikolaParser::yyrline_[] =
  {
       0,   106,   106,   108,   109,   113,   114,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   197,   198,   199,   200,   201,   202,
     204,   205,   207,   208,   209,   212,   213,   214,   215,   216,
     217,   218,   219,   221,   222,   224,   225,   227,   228
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
#line 1984 "/home/aschiffe/Dev/Nikola-c/Nikolac/src/Parser/NikolaParser.cpp"

