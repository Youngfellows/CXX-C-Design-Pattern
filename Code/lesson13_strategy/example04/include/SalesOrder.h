#ifndef SALES_ORDER_H
#define SALES_ORDER_H

#include "./TaxFactory.h"
#include "./TaxOrder.h"

/**
 * @brief 策略类,客户端,根据设置德不同税收策略计算应该缴纳德税额
 * 
 */
class SalesOrder : public TaxOrder
{
    private:
        std::unique_ptr<TaxFactory> factory = nullptr;//生产税收策略产品的工厂
        //std::unique_ptr<TaxStrategy> strategy = nullptr;//具体的策略算法

    public:
        SalesOrder(std::unique_ptr<TaxFactory> factory);
        ~SalesOrder();
        virtual double calculateTax(std::unique_ptr<Taxpayer> taxpayer) override;//实现calculateTax()函数
};
#endif