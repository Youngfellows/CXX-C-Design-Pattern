#ifndef FACTIORY_H
#define FACTIORY_H

#include "./Expression.h"
#include "./Scale.h"
#include "./Note.h"

class ExpressionFactory
{
public:
    Expression *createExpression(Context *context);
};
#endif