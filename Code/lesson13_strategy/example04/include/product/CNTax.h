#ifndef CN_TAX_H
#define CN_TAX_H

#include "../TaxStrategy.h"

/**
 * @brief 派生类: 中国纳税人纳税
 * 
 */
class CNTax : public TaxStrategy
{
    public:
        CNTax() = default;
        ~CNTax() = default;
        virtual double calculate(std::unique_ptr<Taxpayer> taxpayer) override;//实现calculate()函数
};

#endif