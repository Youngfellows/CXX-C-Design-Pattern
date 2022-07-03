#ifndef RED_CIRCLE_H
#define RED_CIRCLE_H

#include "../Global.h"
#include "../DrawCircleAPI.h"

/**
 * @brief 派生类: 绘制红色的圆
 *
 */
class RedCircle : public DrawCircleAPI
{
public:
    RedCircle() = default;
    ~RedCircle() = default;
    virtual void drawCircle(double x, double y, double radius) override; //实现drawCircle()函数
};
#endif