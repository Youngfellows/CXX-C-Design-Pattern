#ifndef SHAPE_H
#define SHAPE_H

#include "./Global.h"
#include "./Paint.h"

/**
 * @brief 抽象类: 抽象形状类
 *
 */
class Shape
{
private:
    Paint *paint = nullptr; //画笔
public:
    Shape() = default;
    Shape(Paint *paint);
    virtual ~Shape() = default;

    /**
     * @brief 虚函数,子类选择性实现
     * @brief 显示图形
     */
    virtual void show();
};
#endif