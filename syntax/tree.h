#ifndef SYNTAX_TREE_H
#define SYNTAX_TREE_H

#include "../lexer/lexer.h"

class ast
{
public:
    class module;
    class function;
    class operation;
    class instruction;

    class type;
    class context;
};

#endif // SYNTAX_TREE_H