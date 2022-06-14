#ifndef DEPOSIT_H
#define DEPOSIT_H

#include "./BankTemplateMethod.h"

/**
 * @brief 具体类: 存款
 * 
 */
class Deposit : public BankTemplateMethod
{
    public:
        Deposit();
        ~Deposit();
        void transact() override;
};
#endif