#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H

#include "./Beverage.h"

/**
 * @brief 派生类: 混搭咖啡
 * 
 */
class HouseBlend : public Beverage
{
    public:
        HouseBlend() = default;
        ~HouseBlend() = default;
        virtual string getDescription() override;//实现getDescription()函数
        virtual double cost() override;//实现getDescription()函数
};

#endif