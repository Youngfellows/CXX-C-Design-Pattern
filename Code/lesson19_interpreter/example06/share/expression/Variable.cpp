#include "../../include/expression/Variable.h"

int Variable::interpret(Context *ctx)
{
    return ctx->lookUpValue(this);
}