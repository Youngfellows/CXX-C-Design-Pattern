#include "../include/Carrefour.h"

Carrefour::Carrefour(std::unique_ptr<DiscountFactory> factory)
{
    this->factory = std::move(factory);
}

Carrefour::~Carrefour()
{
    if(this->factory != nullptr)
    {
        this->factory = nullptr;
    }
}

/**
 * @brief 通过客户端,调用具体算法的打折后应该付款数
 * 
 * @param fltAmount 消费多少
 * @return double 返回打折后应该付费多少
 */
double Carrefour::calculate(double fltAmount)
{
    std::unique_ptr<SalesDiscount> salesDiscount = this->factory->create();//通过工厂生产打折产品
    return salesDiscount->discount() * fltAmount;//计算打折后应该付费多少
}
