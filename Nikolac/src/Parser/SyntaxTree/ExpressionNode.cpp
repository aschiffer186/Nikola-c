#include "ExpressionNode.hpp"

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

    }

    UnaryOperator UnaryExpressionNode::getOperator() const 
    {
        return operator_;
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