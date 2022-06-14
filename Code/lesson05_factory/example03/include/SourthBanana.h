#ifndef SOURTH_BANANA_H
#define SOURTH_BANANA_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 南方香蕉
 * 
 */
class SourthBanana : public Fruit
{
    private:
        string name;
        double price_;

    public:
        SourthBanana();
        SourthBanana(string name,double price_);
        ~SourthBanana();
        string fruit() override;
        double price() override;
};
#endif