#ifndef BORDER_CANVAS_DECORATOR_H
#define BORDER_CANVAS_DECORATOR_H

#include "./CanvasDecorator.h"

/**
 * @brief 派生类: 边框画布装饰器
 * 
 */
class BorderCanvasDecorator : public CanvasDecorator
{
    public:
        BorderCanvasDecorator(Canvas *cvs);
        ~BorderCanvasDecorator() = default;
        virtual void draw() override;//实现draw()函数

    private:
        void addedOperation();//特有函数
};
#endif