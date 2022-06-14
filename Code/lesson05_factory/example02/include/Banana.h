#ifndef BANANA_H
#define BANANA_H

#include "./Fruit.h"

/**
 * @brief 具体产品: 香蕉
 * 
 */
class Banana : public Fruit
{
    private:
        string name;
        double price_;

    public:
        Banana();
        Banana(string name,double price_);
        ~Banana();
        string fruit() override;
        double price() override;
};
#endif