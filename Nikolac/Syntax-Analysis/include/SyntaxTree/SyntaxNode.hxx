#ifndef SYNTAX_NODE_HH
#define SYNTAX_NODE_HH

#include <vector>

namespace Nikola::SyntaxAnalysis::SyntaxTree
{
    enum class SyntaxNodeType
    {

    };

    struct Visitor;

    struct SyntaxNode
    {
        virtual SyntaxNodeType getNodeType() const = 0;

        virtual std::vector<SyntaxNode*> getChildren() const = 0;

        virtual void accept(Visitor* visitor) = 0;

        virtual ~SyntaxNode() = default;
    };
}

#endif