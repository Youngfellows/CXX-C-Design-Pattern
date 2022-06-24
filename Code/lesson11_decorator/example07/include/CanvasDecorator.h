#ifndef DECORATOR_H
#define DECORATOR_H

#include "./Canvas.h"

/**
 * @brief 抽象类: 装饰器装饰被装饰对象Canvas
 * 
 */
class CanvasDecorator : public Canvas
{
    protected:
        Canvas* canvas = nullptr;//被装饰对象

    public:
        CanvasDecorator(Canvas* cvs);
        ~CanvasDecorator();
        virtual void draw() override;//实现draw()函数
};
#endif