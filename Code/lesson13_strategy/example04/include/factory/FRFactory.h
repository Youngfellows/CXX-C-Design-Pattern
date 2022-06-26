#ifndef FR_FACTORY_H
#define FR_FACTORY_H

#include "../TaxFactory.h"
#include "../product/FRTax.h"

/**
 * @brief 工厂方法模式,生产法国纳税人纳税策略
 * 
 */
class FRFactory : public TaxFactory
{
    public:
        FRFactory() = default;
        ~FRFactory() = default;
        virtual std::unique_ptr<TaxStrategy> create() override;//实现create()函数
};
#endif