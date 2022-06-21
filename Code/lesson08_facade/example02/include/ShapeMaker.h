#ifndef SHAPE_MAKER_H
#define SHAPE_MAKER_H

#include "./IShapeMaker.h"
#include "./Circle.h"
#include "./Rectangle.h"
#include "./Square.h"

/**
 * @brief 外观模式,包含各个子系统
 * 
 */
class ShapeMaker : public IShapeMaker
{
    private:
        Shape * circle = nullptr;//圆形
        Shape * rectangle = nullptr;//矩形
        Shape * square = nullptr;//正方形

    public:
        ShapeMaker();
        ~ShapeMaker();
        virtual void drawCircle() override;//实现drawCircle()函数
        virtual void drawRectangle() override;//实现drawRectangle()函数
        virtual void drawSquare() override;//实现drawSquare()函数
};
#endif