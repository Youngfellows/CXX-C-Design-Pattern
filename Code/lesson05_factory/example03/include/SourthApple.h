#ifndef SOURTH_APPLE_H
#define SOURTH_APPLE_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 南方苹果
 * 
 */
class SourthApple : public Fruit
{
    private:
        string name;
        double price_;

    public:
        SourthApple();
        SourthApple(string name,double price_);
        ~SourthApple();
        string fruit() override;
        double price() override;
};
#endif