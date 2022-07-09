#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "../context/Context.h"

class Context;
class Expression
{
public:
    virtual ~Expression() {}
    virtual int interpret(Context *ctx) = 0;
};

#endif