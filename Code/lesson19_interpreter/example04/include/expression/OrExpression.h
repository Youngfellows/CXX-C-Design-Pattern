#ifndef OR_EXPRESSION_H
#define OR_EXPRESSION_H

#include "../interface/IExpression.h"

class OrExpression : public IExpression
{
private:
    std::shared_ptr<IExpression> lExpression = nullptr; //解释器1
    std::shared_ptr<IExpression> rExpression = nullptr; //解释器2

public:
    OrExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression);
    ~OrExpression();
    virtual bool interprete(std::shared_ptr<IContext> context) override;
};
#endif