#ifndef GREEN_SHAPE_DECORATOR_H
#define GREEN_SHAPE_DECORATOR_H

#include "./ShapeDecorator.h"

/**
 * @brief 派生类: 绿色图形装饰器
 * 
 */
class GreenShapeDecorator : public ShapeDecorator
{
    private:
        void fillGreen();//设置绿色填充

    public:
        GreenShapeDecorator(std::shared_ptr<Shape> shape);
        ~GreenShapeDecorator() = default;//默认析构函数
        virtual void draw() override;//实现draw()函数
        virtual double area() override;//实现area()函数
};
#endif