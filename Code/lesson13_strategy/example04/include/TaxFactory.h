#ifndef TAX_FACTORY_H
#define TAX_FACTORY_H

#include "./TaxStrategy.h"

/**
 * @brief 抽象类,工厂生产产品
 * 
 */
class TaxFactory
{
    public:
        virtual ~TaxFactory() = default;//默认析构函数

        /**
         * @brief 纯虚函数,抽象接口: 返回具体的工厂生产的产品
         * 
         * @return std::unique_ptr<TaxStrategy> 返回具体的工厂生产的产品
         */
        virtual std::unique_ptr<TaxStrategy> create() = 0;
};

#endif