#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Shape.h"

/**
 * @brief 子系统,具体实现类: 圆形
 * 
 */
class Circle : public Shape
{
    private:
        double x;//X坐标
        double y;//Y坐标
        double radius;//半径

    public:
        Circle(double x,double y,double radius);
        ~Circle();
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif