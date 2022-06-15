#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Global.h"
#include "../IShape.h"

/**
 * @brief 具体产品: 圆形
 * 
 */
class Circle : public IShape
{
    private:
        float x;//x坐标
        float y;//y坐标
        float radius;//半径

    public:
        Circle();
        Circle(float x,float y,float radius);
        ~Circle();
        virtual void draw() override;//覆写draw()函数
        virtual double area() override;//覆写area()函数
};
#endif