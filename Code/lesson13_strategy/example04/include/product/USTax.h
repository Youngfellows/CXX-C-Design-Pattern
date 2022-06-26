#ifndef US_TAX_H
#define US_TAX_H

#include "../TaxStrategy.h"

/**
 * @brief 派生类: 美国纳税人纳税
 * 
 */
class USTax : public TaxStrategy
{
    public:
        USTax() = default;
        ~USTax() = default;
        virtual double calculate(std::unique_ptr<Taxpayer> taxpayer) override;//实现calculate()函数
};
#endif