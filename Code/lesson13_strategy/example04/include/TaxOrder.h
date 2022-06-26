#ifndef TAX_ORDER_H
#define TAX_ORDER_H

#include "./Taxpayer.h"

/**
 * @brief 抽象接口: 计算税收订单德接口
 * 
 */
class TaxOrder
{
    public:
        virtual ~TaxOrder() = default;
        
        /**
         * @brief 纯虚函数,抽象接口,计算纳税人税收
         * 
         * @param taxpayer 纳税人
         * @return double 返回该缴费德金额
         */
        virtual double calculateTax(std::unique_ptr<Taxpayer> taxpayer) = 0;
};

#endif