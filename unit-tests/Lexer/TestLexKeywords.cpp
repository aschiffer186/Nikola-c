#include <gtest/gtest.h>

#include "LexerTestUtils.hpp"

TEST(TestLexer, TestTypeKeywords)
{
    runLexerTestValueless("int8_t", NikolaParser::symbol_kind::S_INT8_T);
    runLexerTestValueless("int16_t", NikolaParser::symbol_kind::S_INT16_T);
    runLexerTestValueless("int32_t", NikolaParser::symbol_kind::S_INT32_T);
    runLexerTestValueless("int64_t", NikolaParser::symbol_kind::S_INT64_T);
    runLexerTestValueless("int", NikolaParser::symbol_kind::S_INT);
    runLexerTestValueless("real32_t", NikolaParser::symbol_kind::S_REAL32_T);
    runLexerTestValueless("real64_t", NikolaParser::symbol_kind::S_REAL64_T);
    runLexerTestValueless("real", NikolaParser::symbol_kind::S_REAL);
    runLexerTestValueless("bool", NikolaParser::symbol_kind::S_BOOL);
    runLexerTestValueless("char", NikolaParser::symbol_kind::S_CHAR);
    runLexerTestValueless("mod", NikolaParser::symbol_kind::S_MOD);
    runLexerTestValueless("void", NikolaParser::symbol_kind::S_VOID);
}

TEST(TestLexer, TestLiteralKeywords)
{
    runLexerTestValueless("true", NikolaParser::symbol_kind::S_TRUE);
    runLexerTestValueless("false", NikolaParser::symbol_kind::S_FALSE);
    runLexerTestValueless("this", NikolaParser::symbol_kind::S_THIS);
    runLexerTestValueless("nptr", NikolaParser::symbol_kind::S_NPTR);
}

TEST(TestLexer, TestDeclarationKeywords)
{
    runLexerTestValueless("let", NikolaParser::symbol_kind::S_LET);
    runLexerTestValueless("const", NikolaParser::symbol_kind::S_CONST);
    runLexerTestValueless("compeval", NikolaParser::symbol_kind::S_COMPEVAL);
    runLexerTestValueless("pure", NikolaParser::symbol_kind::S_PURE);
    runLexerTestValueless("static", NikolaParser::symbol_kind::S_STATIC);
    runLexerTestValueless("nothrow", NikolaParser::symbol_kind::S_NOTHROW);
    runLexerTestValueless("in", NikolaParser::symbol_kind::S_IN);
    runLexerTestValueless("inout", NikolaParser::symbol_kind::S_INOUT);
    runLexerTestValueless("out", NikolaParser::symbol_kind::S_OUT);
    runLexerTestValueless("move", NikolaParser::symbol_kind::S_MOVE);
    runLexerTestValueless("operator", NikolaParser::symbol_kind::S_OPERATOR);
    runLexerTestValueless("delete", NikolaParser::symbol_kind::S_DELETE);
    runLexerTestValueless("class", NikolaParser::symbol_kind::S_CLASS);
    runLexerTestValueless("enum", NikolaParser::symbol_kind::S_ENUM);
    runLexerTestValueless("public", NikolaParser::symbol_kind::S_PUBLIC);
    runLexerTestValueless("protected", NikolaParser::symbol_kind::S_PROTECTED);
    runLexerTestValueless("private", NikolaParser::symbol_kind::S_PRIVATE);
    runLexerTestValueless("constructor", NikolaParser::symbol_kind::S_CONSTRUCTOR);
    runLexerTestValueless("destructor", NikolaParser::symbol_kind::S_DESTRUCTOR);
    runLexerTestValueless("default", NikolaParser::symbol_kind::S_DEFAULT);
    runLexerTestValueless("define", NikolaParser::symbol_kind::S_DEFINE);
}

TEST(TestLexer, TestLexControlFlowKeywords)
{
    runLexerTestValueless("if", NikolaParser::symbol_kind::S_IF);
    runLexerTestValueless("else if", NikolaParser::symbol_kind::S_ELSE_IF);
    runLexerTestValueless("for", NikolaParser::symbol_kind::S_FOR);
    runLexerTestValueless("do", NikolaParser::symbol_kind::S_DO);
    runLexerTestValueless("while", NikolaParser::symbol_kind::S_WHILE);
    runLexerTestValueless("try", NikolaParser::symbol_kind::S_TRY);
    runLexerTestValueless("catch", NikolaParser::symbol_kind::S_CATCH);
    runLexerTestValueless("throw", NikolaParser::symbol_kind::S_THROW);
    runLexerTestValueless("break", NikolaParser::symbol_kind::S_BREAK);
    runLexerTestValueless("return", NikolaParser::symbol_kind::S_RETURN);
    runLexerTestValueless("continue", NikolaParser::symbol_kind::S_CONTINUE);
    runLexerTestValueless("match", NikolaParser::symbol_kind::S_MATCH);
    runLexerTestValueless("when", NikolaParser::symbol_kind::S_WHEN);
}

TEST(TestLexer, TestLexGenericKeywords)
{
    runLexerTestValueless("typeset", NikolaParser::symbol_kind::S_TYPESET);
    runLexerTestValueless("template", NikolaParser::symbol_kind::S_TEMPLATE);
    runLexerTestValueless("where", NikolaParser::symbol_kind::S_WHERE);
    runLexerTestValueless("type", NikolaParser::symbol_kind::S_TYPE);
}

TEST(TestLexer, TestLexModuleKeywords)
{
    runLexerTestValueless("module", NikolaParser::symbol_kind::S_MODULE);
    runLexerTestValueless("namespace", NikolaParser::symbol_kind::S_NAMESPACE);
    runLexerTestValueless("import", NikolaParser::symbol_kind::S_IMPORT);
    runLexerTestValueless("from", NikolaParser::symbol_kind::S_FROM);
    runLexerTestValueless("as", NikolaParser::symbol_kind::S_AS);
    runLexerTestValueless("with", NikolaParser::symbol_kind::S_WITH);
}

TEST(TestLexer, TestLexExpressionKeywords)
{
    runLexerTestValueless("is", NikolaParser::symbol_kind::S_IS);
    runLexerTestValueless("sizeof", NikolaParser::symbol_kind::S_SIZEOF);
    runLexerTestValueless("typeof", NikolaParser::symbol_kind::S_TYPEOF);
    runLexerTestValueless("static_assert", NikolaParser::symbol_kind::S_STATIC_ASSERT);
    runLexerTestValueless("assert", NikolaParser::symbol_kind::S_ASSERT);
    runLexerTestValueless("new", NikolaParser::symbol_kind::S_NEW);
    runLexerTestValueless("dynamic", NikolaParser::symbol_kind::S_DYNAMIC);
}