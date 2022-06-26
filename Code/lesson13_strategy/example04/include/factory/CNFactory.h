#ifndef CN_FACTORY_H
#define CN_FACTORY_H

#include "../TaxFactory.h"
#include "../product/CNTax.h"

/**
 * @brief 工厂方法模式,生产中国纳税人纳税策略
 * 
 */
class CNFactory : public TaxFactory
{
    public:
        CNFactory() = default;
        ~CNFactory() = default;
        virtual std::unique_ptr<TaxStrategy> create() override;//实现create()函数
};
#endif