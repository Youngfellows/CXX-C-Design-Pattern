#ifndef OLD_CONSUMER_FACTORY_H
#define OLD_CONSUMER_FACTORY_H

#include "../DiscountFactory.h"
#include "../product/OldConsumerDiscount.h"

/**
 * @brief 派生类: 生产老客户打折产品的工厂
 * 
 */
class OldConsumerFactory : public DiscountFactory
{
    public:
        OldConsumerFactory() = default;
        ~OldConsumerFactory() = default;
        virtual std::unique_ptr<SalesDiscount> create() override;//实现create()函数

};
#endif