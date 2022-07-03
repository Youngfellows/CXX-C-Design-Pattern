#ifndef SHAPE_H
#define SHAPE_H

#include "./Global.h"
#include "./DrawCircleAPI.h"

/**
 * @brief 抽象类: 抽象图形
 *
 */
class Shape
{
protected:
    std::shared_ptr<DrawCircleAPI> drawApi = nullptr; //绘制圆抽象类

public:
    Shape() = default;
    Shape(std::shared_ptr<DrawCircleAPI> drawApi);
    virtual ~Shape() = default;

    /**
     * @brief 绘制形状
     *
     */
    virtual void draw() = 0;
};
#endif