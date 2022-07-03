#include "../../include/product/Circle.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param x X坐标
 * @param y Y坐标
 * @param radius 半径
 * @param drawApi 绘图API
 */
Circle::Circle(double x, double y, double radius, std::shared_ptr<DrawCircleAPI> drawApi) : Shape(drawApi)
{
    cout << "Circle()构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Circle::draw()
{
    this->drawApi->drawCircle(this->x, this->y, this->radius);
}
