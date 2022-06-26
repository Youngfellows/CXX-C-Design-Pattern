#ifndef DE_TAX_H
#define DE_TAX_H

#include "../TaxStrategy.h"

/**
 * @brief 派生类: 德国纳税人纳税
 * 
 */
class DETax : public TaxStrategy
{
    public:
        DETax() = default;
        ~DETax() = default;
        virtual double calculate(std::unique_ptr<Taxpayer> taxpayer) override;//实现calculate()函数
};

#endif