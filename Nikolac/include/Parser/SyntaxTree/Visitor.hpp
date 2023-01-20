#ifndef VISITOR_HPP
#define VISITOR_HPP

namespace Nikola::SyntaxAnalysis
{
    struct BinaryExpressionNode;
    struct UnaryExpressionNode;
    struct FunctionCallNode;
    struct NewExpressionNode;
    struct UnitLiteralNode;
    struct VectorLiteralNode;
    struct MatrixLiteralNode;
    struct SetBuilderLiteralNode;

    struct Visitor
    {
        virtual void visit(BinaryExpressionNode& node) = 0;
        virtual void visit(UnaryExpressionNode& node) = 0;
        virtual void visit(FunctionCallNode& node) = 0;
        virtual void visit(NewExpressionNode& node) = 0;
        virtual void visit(UnitLiteralNode& node) = 0;
        virtual void visit(VectorLiteralNode& node) = 0;
        virtual void visit(MatrixLiteralNode& node) = 0;
        virtual void visit(SetBuilderLiteralNode& node) = 0;
    };
}

#endif