#ifndef SHAPE_H
#define SHAPE_H

#include "./Global.h"

/**
 * @brief 抽象类接口: 形状
 * 
 */
class Shape
{     
    public:
       virtual ~Shape();
       /**
        * @brief 纯虚函数,抽象接口: 绘制图形
        * 
        */
       virtual void draw() = 0;

       /**
        * @brief 纯虚函数,抽象接口: 求面积
        * 
        * @return double 返回图形的面积
        */
       virtual double area() = 0;
};
#endif