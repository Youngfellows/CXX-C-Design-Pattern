#ifndef VIP_CONSUMER_FACTORY_H
#define VIP_CONSUMER_FACTORY_H

#include "../DiscountFactory.h"
#include "../product/VIPConsumerDiscount.h"

/**
 * @brief 派生类: 生产VIP客户打折产品的工厂
 * 
 */
class VIPConsumerFactory : public DiscountFactory
{
    public:
        VIPConsumerFactory() = default;
        ~VIPConsumerFactory() = default;
        virtual std::unique_ptr<SalesDiscount> create() override;//实现create()函数

};
#endif