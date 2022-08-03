#ifndef CUSTOMER_B_H
#define CUSTOMER_B_H

#include "./AbsCustomer.h"

/**
 * @brief 顾客B
 *
 */
class CustomerB : public AbsCustomer
{
public:
    CustomerB(std::string name);
    ~CustomerB();
    virtual void visit(std::shared_ptr<IElement> element) override;
};
#endif