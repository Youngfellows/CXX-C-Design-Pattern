#include "../include/SalesOrder.h"

SalesOrder::SalesOrder(std::unique_ptr<TaxFactory> factory)
{
    this->factory = std::move(factory);
    //this->strategy = this->factory->create();
}

SalesOrder::~SalesOrder()
{
    cout << "~SalesOrder()析构函数" << endl;
    if(this->factory != nullptr)
    {
        this->factory = nullptr;
    }
}

/**
 * @brief 公共策略接口调用策略类的计算方法
 * 
 * @param taxpayer 纳税人
 * @return double 返回该纳税额
 */
double SalesOrder::calculateTax(std::unique_ptr<Taxpayer> taxpayer)
{
    std::unique_ptr<TaxStrategy> strategy = this->factory->create();
    double result = strategy->calculate(std::move(taxpayer));
    cout << "SalesOrder::calculateTax():: result=" << result << endl;
    return result;
}
