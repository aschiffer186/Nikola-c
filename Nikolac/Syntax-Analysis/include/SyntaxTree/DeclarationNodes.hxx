#ifndef DECLARATION_NODES_HH
#define DECLARATION_NODES_HH

#include <memory>
#include <string>

#include "SyntaxNode.hxx"

namespace Nikola::SyntaxAnalysis::SyntaxTree
{
    enum DeclarationFlags
    {
        NONE,
        COMPEVAL,
        PURE,
        STATIC,
        NOTHROW
    };

    struct DeclarationNode : public SyntaxNode
    {
        virtual const std::string& getIdentifier() const = 0;

        virtual DeclarationFlags getFlags() const = 0;

        virtual ~DeclarationNode() = default;
    };

    struct TypeNode;
    struct ExpressionNode;

    struct VariableDeclarationNode : public DeclarationNode
    {
        VariableDeclarationNode(
            DeclarationFlags flags, 
            const std::string& identifier, 
            std::unique_ptr<TypeNode> type, 
            std::unique_ptr<ExpressionNode> getInitialValue);

        SyntaxNodeType getNodeType() const override;

        std::vector<SyntaxNode*> getChildren() const override;

        void accept(Visitor* visitor) override;

        const std::string& getIdentifier() const override;

        DeclarationFlags getFlags() const override;

        const TypeNode* getType() const;      

        const ExpressionNode* getInitialValue() const;  
    
    private:
        DeclarationFlags flags_;
        std::string identifier_;
        std::unique_ptr<TypeNode> type_;
        std::unique_ptr<ExpressionNode> initialValue_;
    };

    enum TypeFlags
    {
        CONST,
        POINTER, 
        VIEW, 
        ARRAY
    };

    struct TypeNode : public SyntaxNode
    {
        SyntaxNodeType getNodeType() const override;

        std::vector<SyntaxNode*> getChildren() const override;

        void accept(Visitor* visitor) override;

        const std::string& getIdentifier();
    private:
        std::string identifier;
        std::vector<TypeNode> templateInstantiations;
        std::unique_ptr<TypeNode> coreType;
        TypeFlags flags;
    };

    struct FunctionDeclarationNode : public DeclarationNode
    {
    };
} // namespace Nikola::SyntaxAnalysis::SyntaxTree


#endif