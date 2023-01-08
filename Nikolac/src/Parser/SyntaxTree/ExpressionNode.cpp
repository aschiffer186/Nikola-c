#include "ExpressionNode.hpp"
#include "Visitor.hpp"

namespace Nikola::SyntaxAnalysis
{
    BinaryExpressionNode::BinaryExpressionNode(std::unique_ptr<ExpressionNode> lhs, BinaryOperator op, std::unique_ptr<ExpressionNode> rhs)
    : lhs_{std::move(lhs)}, operator_{op}, rhs_{std::move(rhs)}
    {

    }

    SyntaxNodeType BinaryExpressionNode::getNodeType() const 
    {
        return SyntaxNodeType::BinaryExpression;
    }

    std::vector<NodeView<SyntaxNode>> BinaryExpressionNode::getChildren() const 
    {
        return {*lhs_, *rhs_};
    }

    void BinaryExpressionNode::accept(Visitor* visitor)
    {
       visitor->visit(*this);
    }

    BinaryOperator BinaryExpressionNode::getOperator() const 
    {
        return operator_;
    }


    UnaryExpressionNode::UnaryExpressionNode(UnaryOperator op, std::unique_ptr<ExpressionNode> operand)
    : operator_{op}, operand_{std::move(operand)}
    {

    }

    SyntaxNodeType UnaryExpressionNode::getNodeType() const 
    {
        return SyntaxNodeType::UnaryExpression;
    }

    std::vector<NodeView<SyntaxNode>> UnaryExpressionNode::getChildren() const
    {
        return {*operand_};
    }

    void UnaryExpressionNode::accept(Visitor* visitor) 
    {
        visitor->visit(*this);
    }

    UnaryOperator UnaryExpressionNode::getOperator() const 
    {
        return operator_;
    }

    FunctionCallNode::FunctionCallNode(std::unique_ptr<ExpressionNode> caller, std::vector<FunctionArgument>&& functionArguments)
    : caller_{std::move(caller)}, functionArgs_{functionArguments}
    {

    }

    SyntaxNodeType FunctionCallNode::getNodeType() const 
    {
        return SyntaxNodeType::FunctionCall;
    }

    std::vector<NodeView<SyntaxNode>> FunctionCallNode::getChildren() const
    {
        return {*caller_};
    }

    void FunctionCallNode::accept(Visitor* visitor)
    {
        visitor->visit(*this);
    }

    const ExpressionNode& FunctionCallNode::getCaller() const 
    {
        return *caller_;
    }

    const std::vector<FunctionArgument>& FunctionCallNode::getArguments() const 
    {
        return functionArgs_;
    }

    NewExpressionNode::NewExpressionNode(bool isHeap, std::unique_ptr<FunctionCallNode> function)
    : isHeap_{isHeap}, function_{std::move(function)}
    {

    }

    SyntaxNodeType NewExpressionNode::getNodeType() const 
    {
        return SyntaxNodeType::NewExpression;
    }

    std::vector<NodeView<SyntaxNode>> NewExpressionNode::getChildren() const 
    {
        return {*function_};
    }

    void NewExpressionNode::accept(Visitor* visitor)
    {
        visitor->visit(*this);
    }

    bool NewExpressionNode::isHeapAllocation() const 
    {
        return isHeap_;
    }

    const FunctionCallNode& NewExpressionNode::initializationExpression() const 
    {
        return *function_;
    }


    LiteralNode::LiteralNode(LiteralType type, std::string_view value)
    : type_{type}, value_{value}
    {

    }

    SyntaxNodeType LiteralNode::getNodeType() const 
    {
        return SyntaxNodeType::Literal;
    }

    std::vector<NodeView<SyntaxNode>> LiteralNode::getChildren() const 
    {
        return {};
    }

    void LiteralNode::accept(Visitor* visitor)
    {
        visitor->visit(*this);
    }

    std::string_view LiteralNode::getValue() const 
    {
        return value_;
    } 

    LiteralType LiteralNode::getType() const 
    {
        return type_;
    }
}