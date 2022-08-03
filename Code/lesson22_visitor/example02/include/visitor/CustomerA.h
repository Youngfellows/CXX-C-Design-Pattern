#ifndef CUSTOMER_A_H
#define CUSTOMER_A_H

#include "./AbsCustomer.h"

/**
 * @brief 顾客A
 *
 */
class CustomerA : public AbsCustomer
{
public:
    CustomerA(std::string name);
    ~CustomerA();
    virtual void visit(std::shared_ptr<IElement> element) override;
};
#endif