#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "../interface/IExpression.h"

/**
 * @brief
 *
 */
class Expression : public IExpression
{
private:
public:
    Expression() = default;
    virtual ~Expression() = default;
    virtual void interprete(std::shared_ptr<IContext> context) override;

protected:
    virtual void excute(const std::string &key, const std::string &value) = 0;
};
#endif