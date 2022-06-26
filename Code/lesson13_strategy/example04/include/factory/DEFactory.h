#ifndef DE_FACTORY_H
#define DE_FACTORY_H

#include "../TaxFactory.h"
#include "../product/DETax.h"

/**
 * @brief 工厂方法模式,生产德国纳税人纳税策略
 * 
 */
class DEFactory : public TaxFactory
{
    public:
        DEFactory() = default;
        ~DEFactory() = default;
        virtual std::unique_ptr<TaxStrategy> create() override;//实现create()函数
};
#endif