#ifndef SHAPE_H
#define SHAPE_H

/**
 * @brief 抽象类: 图形
 * 
 */
class Shape
{
    public:
        Shape() = default;//默认构造函数
        virtual ~Shape() = default;//默认析构函数

        /**
         * @brief 纯虚函数: 抽象接口,绘制形状
         * 
         */
        virtual void draw() = 0;

        /**
         * @brief 纯虚函数: 抽象接口,求面积
         * 
         */
        virtual double area() = 0;
};
#endif