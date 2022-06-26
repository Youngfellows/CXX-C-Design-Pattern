#ifndef CARREFOUR_H
#define CARREFOUR_H

#include "./Global.h"
#include "./DiscountFactory.h"
#include "./SalesDiscount.h"
#include "./SalesOrder.h"

/**
 * @brief 策略模式客户端: 家乐福打折
 * 
 */
class Carrefour : public SalesOrder
{
    private:
        std::unique_ptr<DiscountFactory> factory = nullptr;//生产打折产品的具体工厂

    public:
        Carrefour(std::unique_ptr<DiscountFactory> factory);
        ~Carrefour();
        virtual double calculate(double fltAmount) override;//实现calculate()函数
};
#endif