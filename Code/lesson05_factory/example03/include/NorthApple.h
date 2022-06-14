#ifndef NORTH_APPLE_H
#define NORTH_APPLE_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 北方苹果
 * 
 */
class NorthApple : public Fruit
{
    private:
        string name;
        double price_;

    public:
        NorthApple();
        NorthApple(string name,double price_);
        ~NorthApple();
        string fruit() override;
        double price() override;
};
#endif