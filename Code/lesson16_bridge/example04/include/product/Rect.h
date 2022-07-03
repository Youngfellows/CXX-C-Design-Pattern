#ifndef RECT_H
#define RECT_H

#include "../Shape.h"

/**
 * @brief 派生类: 矩形
 *
 */
class Rect : public Shape
{
public:
    Rect() = default;
    Rect(Paint *paint);
    ~Rect() = default;
    void show() override; //覆写show()函数
};
#endif