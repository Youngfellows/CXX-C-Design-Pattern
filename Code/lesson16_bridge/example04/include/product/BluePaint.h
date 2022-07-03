#ifndef BLUE_PAINT_H
#define BLUE_PAINT_H

#include "../Global.h"
#include "../Paint.h"

/**
 * @brief 派生类: 蓝色画笔
 *
 */
class BluePaint : public Paint
{
public:
    BluePaint() = default;
    ~BluePaint() = default;
    virtual void draw() override; //实现draw()函数
};
#endif