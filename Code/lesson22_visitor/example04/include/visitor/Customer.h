#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "./AbsVisitor.h"

/**
 * @brief 具体访问者: 顾客
 *
 */
class Customer : public AbsVisitor
{
public:
    Customer(std::string name);
    ~Customer();
    virtual void visitPartApple(std::shared_ptr<IProduct> apple) override;
    virtual void visitPartBook(std::shared_ptr<IProduct> book) override;
};

#endif