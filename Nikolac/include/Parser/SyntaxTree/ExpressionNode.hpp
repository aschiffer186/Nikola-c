#ifndef EXPRESSION_NODE_HPP
#define EXPRESSION_NODE_HPP

#include "SyntaxNode.hpp"

namespace Nikola::SyntaxAnalysis
{
    struct ExpressionNode : public SyntaxNode {
        virtual ~ExpressionNode() = default;
    };

    enum class BinaryOperator
    {
        ADD,
        MINUS,
        MULTIPLY, 
        DIVIDE,
        INTEGER_DIVIDE, 
        MODULO, 
        EXPONENT, 
        VEC_ADD,
        VEC_MULTIPLY, 
        VEC_DIVIDE,
        VEC_INTEGER_DIVIDE,
        VEC_EXPONENT,
        VEC_MODULO,
        LOGICAL_AND,
        LOGICAL_OR,
        LESS_THAN,
        LEQ, 
        SPACESHIP,
        GEQ, 
        GREATER, 
        EQUALS,
        NOT_EQUALS, 
        BINARY_AND, 
        BINARY_OR, 
        BINARY_XOR,
        LEFT_SHIFT, 
        RIGHT_SHIFT, 
        VEC_BINARY_AND, 
        VEC_BINARY_OR, 
        VEC_BINARY_XOR,
        VEC_LEFT_SHIFT, 
        VEC_RIGHT_SHIFT,
        IS, 
        IN
    };

    struct BinaryExpressionNode : ExpressionNode
    {
        BinaryExpressionNode(std::unique_ptr<ExpressionNode> lhs, BinaryOperator operatorIn, std::unique_ptr<ExpressionNode> rhs);

        SyntaxNodeType getNodeType() const override;

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

        BinaryOperator getOperator() const;
    
    private:
        std::unique_ptr<ExpressionNode> lhs_;
        BinaryOperator operator_;
        std::unique_ptr<ExpressionNode> rhs_;
    };

    enum class UnaryOperator
    {
        LOGICAL_NOT,
        BINARY_NOT,
        PRE_INCREMENT,
        PRE_DECREMENT,
        POST_INCREMENT,
        POST_DECREMENT,
        DEREFERENCE, 
        MAKE_VIEW, 
        UNARY_MINUS,
        TYPE_OF, 
        SIZE_OF, 
        AS, 
        STATIC_ASSERT, 
        PURE, 
        NOTHROW
    };

    struct UnaryExpressionNode : public ExpressionNode 
    {
        UnaryExpressionNode(UnaryOperator operatorIn, std::unique_ptr<ExpressionNode> operand);

        SyntaxNodeType getNodeType() const override; 

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

        UnaryOperator getOperator() const;
    
    private:
        UnaryOperator operator_;
        std::unique_ptr<ExpressionNode> operand_;
    };

    struct FunctionArgument
    {
        std::string name;
        std::unique_ptr<ExpressionNode> argument;
    };

    struct FunctionCallNode : public ExpressionNode
    {
    public:
        FunctionCallNode(std::unique_ptr<ExpressionNode> caller, std::vector<FunctionArgument>&& functionArguments);

        SyntaxNodeType getNodeType() const override; 

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

        const ExpressionNode& getCaller() const;

        const std::vector<FunctionArgument>& getArguments() const;
    private:
        std::unique_ptr<ExpressionNode> caller_;
        std::vector<FunctionArgument> functionArgs_;
    };

    struct NewExpressionNode : public ExpressionNode
    {
        NewExpressionNode(bool isHeap, std::unique_ptr<FunctionCallNode> function);

        SyntaxNodeType getNodeType() const override; 

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

        bool isHeapAllocation() const;

        const FunctionCallNode& initializationExpression() const;
    private:
        bool isHeap_;
        std::unique_ptr<FunctionCallNode> function_;
    };

    enum class LiteralType
    {
        INTEGER,
        REAL,
        COMPLEX,
        CHARACTER,
        STRING
    };

    struct UnitLiteralNode : public ExpressionNode 
    {
        UnitLiteralNode(LiteralType type, std::string_view value);

        SyntaxNodeType getNodeType() const override; 

        std::vector<NodeView<SyntaxNode>> getChildren() const override; 

        void accept(Visitor* visitor) override; 

        std::string_view getValue() const;

        LiteralType getType() const;
    private:
        LiteralType type_;
        std::string value_;
    };

    struct VectorLiteralNode : public ExpressionNode 
    {
    public:
        SyntaxNodeType getNodeType() const override;

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

    private:
        std::vector<std::unique_ptr<ExpressionNode>> elements_;
    };

    struct MatrixLiteralNode : public ExpressionNode
    {
    public:
        SyntaxNodeType getNodeType() const override;

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

    private:
        std::vector<std::unique_ptr<VectorLiteralNode>> elements_;
    };

    struct SetBuilderNotation : public ExpressionNode 
    {
    public:
        SyntaxNodeType getNodeType() const override;

        std::vector<NodeView<SyntaxNode>> getChildren() const override;

        void accept(Visitor* visitor) override;

    private: 
        std::unique_ptr<ExpressionNode> iterator_;
        std::unique_ptr<ExpressionNode> constraint_;
    };

} // namespace Nikola::SyntaxAnalysis


#endif