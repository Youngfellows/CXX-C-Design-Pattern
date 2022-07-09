#include "../../include/expression/ExpressionFactory.h"

Expression *ExpressionFactory::createExpression(Context *context)
{
    char key = context->getText()[0];
    if (key == 'O')
    {
        return new Scale();
    }
    else
    {
        return new Note();
    }
}