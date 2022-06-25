#ifndef CASH_NORMAL_H
#define CASH_NORMAL_H

#include "./Global.h"
#include "./CashSuper.h"

/**
 * @brief 派生类: 正常收钱
 * 
 */
class CashNormal : public CashSuper
{
    public:
        CashNormal() = default;
        ~CashNormal() = default;
        virtual double acceptMoney(double money) override;//实现acceptMoney()函数
};
#endif