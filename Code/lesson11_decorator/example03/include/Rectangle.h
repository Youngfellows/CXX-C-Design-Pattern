#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "./Global.h"
#include "./Shape.h"

/**
 * @brief 派生类: 矩形
 * 
 */
class Rectangle : public Shape
{
    private:
        double width;//宽
        double length;//长

    public:
        Rectangle(double w,double l);
        ~Rectangle() = default;//默认析构函数
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif