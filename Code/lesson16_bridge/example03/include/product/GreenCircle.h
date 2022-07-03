#ifndef GREEN_CIRCLE_H
#define GREEN_CIRCLE_H

#include "../Global.h"
#include "../DrawCircleAPI.h"

/**
 * @brief 派生类: 绘制绿色的圆
 *
 */
class GreenCircle : public DrawCircleAPI
{
public:
    GreenCircle() = default;
    ~GreenCircle() = default;
    virtual void drawCircle(double x, double y, double radius) override; //实现drawCircle()函数
};
#endif