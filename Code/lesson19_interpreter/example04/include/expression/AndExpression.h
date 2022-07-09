#ifndef AND_EXPRESSION_H
#define AND_EXPRESSION_H

#include "../interface/IExpression.h"

class AndExpression : public IExpression
{
private:
    std::shared_ptr<IExpression> lExpression = nullptr; //解释器1
    std::shared_ptr<IExpression> rExpression = nullptr; //解释器2

public:
    AndExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression);
    ~AndExpression();
    virtual bool interprete(std::shared_ptr<IContext> context) override;
};
#endif