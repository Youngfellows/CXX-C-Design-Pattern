#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../Global.h"
#include "../IShape.h"

/**
 * @brief 具体产品: 矩形
 * 
 */
class Rectangle  : public IShape
{
    private:
        float width;//宽
        float length;//长

    public:
        Rectangle();
        Rectangle(float w,float l);
        ~Rectangle();
        virtual void draw() override;//覆写draw()函数
        virtual double area() override;//覆写area()函数
};
#endif