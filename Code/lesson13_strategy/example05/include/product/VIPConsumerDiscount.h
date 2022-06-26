#ifndef VIP_CONSUMER_DISCOUNT_H
#define VIP_CONSUMER_DISCOUNT_H

#include "../SalesDiscount.h"

/**
 * @brief 派生类: VIP客户打折
 * 
 */
class VIPConsumerDiscount : public SalesDiscount
{
    public:
        VIPConsumerDiscount() = default;
        ~VIPConsumerDiscount() = default;
        virtual double discount() override;//实现discount()函数
};
#endif