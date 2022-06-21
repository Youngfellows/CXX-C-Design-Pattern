#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "./Shape.h"

/**
 * @brief 子系统,具体实现类: 矩形
 * 
 */
class Rectangle : public Shape
{
    private:
        double length;//长
        double width;//宽

    public:
        Rectangle(double length,double width);
        ~Rectangle();
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif