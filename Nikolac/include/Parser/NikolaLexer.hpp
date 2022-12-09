#ifndef NIKOLA_LEXER_HPP
#define NIKOLA_LEXER_HPP

#include <iosfwd>

#ifndef yyFlexLexer
#include <FlexLexer.h>
#endif

#include "Location.hpp"
#include "NikolaParser.hpp"

namespace Nikola::SyntaxAnalysis
{
    class NikolaLexer final : public yyFlexLexer 
    {
    public:
        explicit NikolaLexer(std::istream& input);
    
        using FlexLexer::yylex;

        NikolaParser::symbol_type lex();
    
    private:
        location loc_;
    };
} // namespace Nikola::Lexer


#endif