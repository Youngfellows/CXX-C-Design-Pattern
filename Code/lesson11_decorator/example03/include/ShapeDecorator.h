#ifndef SHAPE_DECORATOR_H
#define SHAPE_DECORATOR_H

#include "./Global.h"
#include "./Shape.h"

/**
 * @brief 抽象类: 图形装饰器
 * 
 */
class ShapeDecorator : public Shape
{
    private:
        std::shared_ptr<Shape> shape = nullptr;//被装饰对象

    public:
        ShapeDecorator() = default;
        ShapeDecorator(std::shared_ptr<Shape> shape);
        ~ShapeDecorator();
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif