#ifndef APPLE_H
#define APPLE_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 苹果
 * 
 */
class Apple : public Fruit
{
    private:
        string name;
        double price_;

    public:
        Apple();
        Apple(string name,double price_);
        ~Apple();
        string fruit() override;
        double price() override;
};
#endif