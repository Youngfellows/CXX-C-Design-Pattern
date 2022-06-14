#ifndef NORTH_BANANA_H
#define NORTH_BANANA_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 北方香蕉
 * 
 */
class NorthBanana : public Fruit
{
    private:
        string name;
        double price_;

    public:
        NorthBanana();
        NorthBanana(string name,double price_);
        ~NorthBanana();
        string fruit() override;
        double price() override;
};
#endif