#ifndef NEW_CONSUMER_DISCOUNT_H
#define NEW_CONSUMER_DISCOUNT_H

#include "../SalesDiscount.h"

/**
 * @brief 派生类: 新客户打折
 * 
 */
class NewConsumerDiscount : public SalesDiscount
{
    public:
        NewConsumerDiscount() = default;
        ~NewConsumerDiscount() = default;
        virtual double discount() override;//实现discount()函数
};
#endif