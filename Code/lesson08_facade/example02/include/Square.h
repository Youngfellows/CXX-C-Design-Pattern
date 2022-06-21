#ifndef SQUARE_H
#define SQUARE_H

#include "./Shape.h"

/**
 * @brief 子系统,具体实现类: 正方形
 * 
 */
class Square : public Shape
{
    private:
        double length;//边长  
    public:
        Square(double length);
        ~Square();
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif