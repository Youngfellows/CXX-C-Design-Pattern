#ifndef RED_SHAPE_DECORATOR_H
#define RED_SHAPE_DECORATOR_H

#include "./ShapeDecorator.h"

/**
 * @brief 派生类: 红色图形装饰器
 * 
 */
class RedShapeDecorator : public ShapeDecorator
{
    private:
        void setRedBorder();//设置红色边框

    public:
        RedShapeDecorator(std::shared_ptr<Shape> shape);
        ~RedShapeDecorator() = default;//默认析构函数
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif