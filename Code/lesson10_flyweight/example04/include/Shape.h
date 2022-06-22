#ifndef SHAPE_H
#define SHAPE_H

#include "./Global.h"

/**
 * @brief 抽象类: 图形
 * 
 */
class Shape
{
    public:
        //Shape() = default;//默认构造函数
        //virtual ~Shape() = default;//默认析构函数
        virtual ~Shape();
        /**
         * @brief 纯虚函数,抽象接口: 绘制图像
         * 
         */
        virtual void draw() = 0;
};
#endif