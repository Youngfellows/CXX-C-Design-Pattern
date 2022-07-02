#ifndef CANVAS_H
#define CANVAS_H

#include "./Global.h"

/**
 * @brief 实体类: 画布
 *
 */
class Canvas
{
private:
    double length; //画布长
    double width;  //画布宽

public:
    Canvas() = default;
    Canvas(double length, double width);
    ~Canvas() = default;
    void use();
};
#endif