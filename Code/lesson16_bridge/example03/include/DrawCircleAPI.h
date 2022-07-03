#ifndef DRAW_CIRCLE_API_H
#define DRAW_CIRCLE_API_H

/**
 * @brief 抽象类: 绘制圆抽象类
 *
 */
class DrawCircleAPI
{
public:
    virtual ~DrawCircleAPI() = default;

    /**
     * @brief 纯虚函数,抽象接口
     *
     * @param x X坐标
     * @param y Y坐标
     * @param radius 半径
     */
    virtual void drawCircle(double x, double y, double radius) = 0;
};

#endif