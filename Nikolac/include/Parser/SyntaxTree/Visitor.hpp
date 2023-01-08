#ifndef VISITOR_HPP
#define VISITOR_HPP

namespace Nikola::SyntaxAnalysis
{
    struct BinaryExpressionNode;
    struct UnaryExpressionNode;
    struct FunctionCallNode;
    struct NewExpressionNode;
    struct LiteralNode;

    struct Visitor
    {
        virtual void visit(BinaryExpressionNode& node) = 0;
        virtual void visit(UnaryExpressionNode& node) = 0;
        virtual void visit(FunctionCallNode& node) = 0;
        virtual void visit(NewExpressionNode& node) = 0;
        virtual void visit(LiteralNode& node) = 0;
    };
}

#endif