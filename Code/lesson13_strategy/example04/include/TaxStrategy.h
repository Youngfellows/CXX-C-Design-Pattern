#ifndef TAX_STRATEGY_H
#define TAX_STRATEGY_H

#include "./Global.h"
#include "./Taxpayer.h"

/**
 * @brief 抽象类: 计算税收的策略方法
 * 
 */
class TaxStrategy
{
    public:
        virtual ~TaxStrategy() = default;

        /**
         * @brief 根据纳税人信息计算纳税金额
         * 
         * @param taxpayer 纳税人
         * @return double 返回该纳税额
         */
        virtual double calculate(std::unique_ptr<Taxpayer> taxpayer) = 0;
};
#endif