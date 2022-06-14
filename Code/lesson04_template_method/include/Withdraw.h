#ifndef WITHDRAW_H
#define WITHDRAW_H

#include "./BankTemplateMethod.h"

/**
 * @brief 具体类: 取款
 * 
 */
class Withdraw : public BankTemplateMethod
{
    public:
        Withdraw();
        ~Withdraw();
        void transact() override;
};
#endif