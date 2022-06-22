#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Shape.h"

/**
 * @brief 派生类: 圆形
 * 
 */
class Circle : public Shape
{
    private:
        double x;//X坐标
        double y;//Y坐标
        double radius = 0;//半径
        string color;//颜色
        
    public:
        Circle();
        Circle(string color);
        ~Circle();
        virtual void draw() override;//实现draw()函数
        void setX(double x);//设置x坐标
        void setY(double y);//设置y坐标
        void setRadius(double radius);//设置半径

};
#endif