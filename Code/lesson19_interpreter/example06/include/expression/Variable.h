#ifndef VARIABLE_H
#define VARIABLE_H

#include "../interface/Expression.h"

class Variable : public Expression
{
public:
    virtual int interpret(Context *ctx) override;
};
#endif