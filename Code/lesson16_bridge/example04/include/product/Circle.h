#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Shape.h"

/**
 * @brief 派生类: 圆形
 *
 */
class Circle : public Shape
{
public:
    Circle() = default;
    Circle(Paint *paint);
    ~Circle() = default;
    void show() override; //覆写show()函数
};
#endif