#ifndef SQUARE_H
#define SQUARE_H

#include "../Global.h"
#include "../IShape.h"

/**
 * @brief 具体产品: 正方形
 * 
 */
class Square  : public IShape
{
    private:
        float length;//边长

    public:
        Square();
        Square(float length);
        ~Square();
        virtual void draw() override;//覆写draw()函数
        virtual double area() override;//覆写area()函数
};
#endif