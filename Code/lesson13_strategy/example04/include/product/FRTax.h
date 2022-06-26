#ifndef FR_TAX_H
#define FR_TAX_H

#include "../TaxStrategy.h"

/**
 * @brief 派生类: 法国纳税人纳税
 * 
 */
class FRTax : public TaxStrategy
{
    public:
        FRTax() = default;
        ~FRTax() = default;
        virtual double calculate(std::unique_ptr<Taxpayer> taxpayer) override;//实现calculate()函数
};

#endif