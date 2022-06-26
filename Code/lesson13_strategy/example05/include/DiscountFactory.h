#ifndef DISCOUNT_FACTORY_H
#define DISCOUNT_FACTORY_H

#include "./Global.h"
#include "./SalesDiscount.h"

/**
 * @brief 抽象类: 工厂方法模式,工厂方法生产具体的产品
 * 
 */
class DiscountFactory
{
    public:
       virtual ~DiscountFactory() = default;

       /**
        * @brief 纯虚函数,抽象接口: 创建具体的客户打折产品
        * 
        * @return std::unique_ptr<SalesDiscount> 返回具体的打折产品指针变量
        */
       virtual std::unique_ptr<SalesDiscount> create() = 0;
};

#endif