#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "../Global.h"
#include "../context/Context.h"

class Expression
{
public:
    virtual ~Expression() {}
    void interprete(Context *context);

protected:
    virtual void excute(std::string text, double value) = 0;
};
#endif