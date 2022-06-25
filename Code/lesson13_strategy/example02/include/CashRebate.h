#ifndef CASH_REBATE_H
#define CASH_REBATE_H

#include "./Global.h"
#include "./CashSuper.h"

/**
 * @brief 派生类: 打折收钱
 * 
 */
class CashRebate : public CashSuper
{
    private:
        double discount;//折扣

    public:
        CashRebate() = default;
        ~CashRebate() = default;
        CashRebate(double dis);
        virtual double acceptMoney(double money) override;//实现acceptMoney()函数
};
#endif