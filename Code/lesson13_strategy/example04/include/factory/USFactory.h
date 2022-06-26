#ifndef US_FACTORY_H
#define US_FACTORY_H

#include "../TaxFactory.h"
#include "../product/USTax.h"

/**
 * @brief 工厂方法模式,生产中国纳税人纳税策略
 * 
 */
class USFactory : public TaxFactory
{
    public:
        USFactory() = default;
        ~USFactory() = default;
        virtual std::unique_ptr<TaxStrategy> create() override;//实现create()函数
};
#endif