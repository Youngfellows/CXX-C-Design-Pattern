#ifndef SALER_H
#define SALER_H

#include "./AbsVisitor.h"

/**
 * @brief 具体访问者: 收银员
 *
 */
class Saler : public AbsVisitor
{
public:
    Saler(std::string name);
    ~Saler();
    virtual void visitPartApple(std::shared_ptr<IProduct> apple) override;
    virtual void visitPartBook(std::shared_ptr<IProduct> book) override;
};
#endif