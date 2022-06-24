#ifndef FRAME_CANVAS_DECORATOR_H
#define FRAME_CANVAS_DECORATOR_H

#include "./CanvasDecorator.h"

/**
 * @brief 派生类: 框架画布装饰器
 * 
 */
class FrameCanvasDecorator : public CanvasDecorator
{
    public:
        FrameCanvasDecorator(Canvas *cvs);
        ~FrameCanvasDecorator() = default;
        virtual void draw() override;//实现draw()函数

    private:
        void addedOperation();//特有函数
};
#endif