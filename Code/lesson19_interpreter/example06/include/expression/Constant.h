#ifndef CONSTANT_H
#define CONSTANT_H

#include "../interface/Expression.h"

class Constant : public Expression
{
public:
    Constant(int value) : m_value(value) {}
    
    virtual int interpret(Context *ctx) override
    {
        return m_value;
    }

private:
    int m_value;
};

#endif