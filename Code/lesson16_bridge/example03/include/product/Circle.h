#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Shape.h"

/**
 * @brief 派生类: 圆形
 *
 */
class Circle : public Shape
{
private:
    double x;      // X坐标
    double y;      // Y坐标
    double radius; //半径

public:
    Circle() = default;
    Circle(double x, double y, double radius, std::shared_ptr<DrawCircleAPI> drawApi);
    ~Circle() = default;
    virtual void draw() override; //实现draw()函数
};
#endif