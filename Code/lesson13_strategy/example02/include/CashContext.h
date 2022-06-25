#ifndef CASH_CONTEXT_H
#define CASH_CONTEXT_H

#include "./Global.h"
#include "./CashSuper.h"
#include "./CashNormal.h"
#include "./CashRebate.h"
#include "./CashReturn.h"

/**
 * @brief 客户端,根据不同的策略设置要收费的算法
 * 
 */
class CashContext
{
    private:
        std::unique_ptr<CashSuper> cashSuper = nullptr;//收费的算法

    public:
        CashContext(string strategy);
        ~CashContext();
        double getResult(double money);
};
#endif