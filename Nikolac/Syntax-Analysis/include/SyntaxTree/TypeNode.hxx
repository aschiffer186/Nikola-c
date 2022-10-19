#ifndef TYPE_NODE_HXX
#define TYPE_NODE_HXX

#include <memory>
#include <string>

#include "SyntaxNode.hxx"

namespace Nikola::SyntaxAnalysis::SyntaxTree
{
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

        const std::vector<TypeNode>& getTemplateInstantiations() const;

        const TypeNode* getCoreType() const;

        TypeFlags getFlags() const;
    private:
        std::string identifier_;
        std::vector<TypeNode> templateInstantiations_;
        std::unique_ptr<TypeNode> coreType_;
        TypeFlags flags_;
    };
}

#endif