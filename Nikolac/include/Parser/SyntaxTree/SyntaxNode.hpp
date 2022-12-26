#ifndef SYNTAX_NODE_HPP
#define SYNTAX_NODE_HPP

#include <memory>
#include <type_traits>
#include <vector>

namespace Nikola::SyntaxAnalysis
{
    enum class SyntaxNodeType
    {
    };

    struct Visitor;
    template<typename Node>
    using NodeView = std::reference_wrapper<Node>;

    struct SyntaxNode
    {
        virtual SyntaxNodeType getNodeType() const = 0;
        virtual std::vector<NodeView<SyntaxNode>> getChildren() const = 0;
        virtual void accept(Visitor* visitor) = 0;
    };

    using NodePtr = std::unique_ptr<SyntaxNode>;
}

#endif