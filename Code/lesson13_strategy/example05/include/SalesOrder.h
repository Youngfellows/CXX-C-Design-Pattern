#ifndef SALES_ORDER_H
#define SALES_ORDER_H

/**
 * @brief 抽象接口: 销售打折
 * 
 */
class SalesOrder
{
    public:
       virtual ~SalesOrder() = default;

       /**
        * @brief 纯虚函数,抽象接口,计算消费后应付款
        * 
        * @param fltAmount 消费xx元
        * @return double 返回打折后应该付
        */
       virtual double calculate(double fltAmount) = 0;
};
#endif