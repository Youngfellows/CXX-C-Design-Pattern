#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "./Beverage.h"

/**
 * @brief 派生类: 蒸馏咖啡
 * 
 */
class Espresso : public Beverage
{
    public:
        Espresso() = default;
        ~Espresso() = default;
        virtual string getDescription() override;//实现getDescription()函数
        virtual double cost() override;//实现getDescription()函数
};

#endif