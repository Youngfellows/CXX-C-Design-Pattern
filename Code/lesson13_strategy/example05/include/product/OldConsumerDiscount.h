#ifndef OLD_CONSUMER_DISCOUNT_H
#define OLD_CONSUMER_DISCOUNT_H

#include "../SalesDiscount.h"

/**
 * @brief 派生类: 老客户打折
 * 
 */
class OldConsumerDiscount : public SalesDiscount
{
    public:
        OldConsumerDiscount() = default;
        ~OldConsumerDiscount() = default;
        virtual double discount() override;//实现discount()函数
};
#endif