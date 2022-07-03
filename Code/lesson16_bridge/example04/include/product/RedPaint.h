#ifndef RED_PAINT_H
#define RED_PAINT_H

#include "../Global.h"
#include "../Paint.h"

/**
 * @brief 派生类: 红色画笔
 *
 */
class RedPaint : public Paint
{
public:
    RedPaint() = default;
    ~RedPaint() = default;
    virtual void draw() override; //实现draw()函数
};
#endif