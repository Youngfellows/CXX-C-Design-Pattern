#ifndef SALES_DISCOUNT_H
#define SALES_DISCOUNT_H

/**
 * @brief 抽象类: 策略接口,销售打折
 * 
 */
class SalesDiscount
{
    public:
       virtual ~SalesDiscount() = default;

       /**
        * @brief 纯虚函数,抽象接口: 销售打折
        * 
        * @return double 
        */
       virtual double discount() = 0;
};

#endif