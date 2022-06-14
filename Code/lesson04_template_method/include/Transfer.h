#ifndef TRANSFER_H
#define TRANSFER_H

#include "./BankTemplateMethod.h"

/**
 * @brief 具体类: 转账
 * 
 */
class Transfer : public BankTemplateMethod
{
    public:
        Transfer();
        ~Transfer();
        void transact() override;
};
#endif