#ifndef NEW_CONSUMER_FACTORY_H
#define NEW_CONSUMER_FACTORY_H

#include "../DiscountFactory.h"
#include "../product/NewConsumerDiscount.h"

/**
 * @brief 派生类: 生产新客户打折产品的工厂
 * 
 */
class NewConsumerFactory : public DiscountFactory
{
    public:
        NewConsumerFactory() = default;
        ~NewConsumerFactory() = default;
        virtual std::unique_ptr<SalesDiscount> create() override;//实现create()函数

};
#endif