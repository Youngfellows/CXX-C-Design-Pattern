#ifndef CASH_RETURN_H
#define CASH_RETURN_H

#include "./Global.h"
#include "./CashSuper.h"

/**
 * @brief 派生类: 满多少返回多少
 * 
 */
class CashReturn : public CashSuper
{
    private:
        double moneyCondition;//满多少
        double moneyReturn;//返回多少

    public:
        CashReturn() = default;
        ~CashReturn() = default;
        CashReturn(double condition,double mr);
        virtual double acceptMoney(double money) override;//实现acceptMoney()函数
};

#endif