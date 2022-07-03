#ifndef PAINT_H
#define PAINT_H

/**
 * @brief 抽象类: 抽象画笔
 *
 */
class Paint
{
public:
    virtual ~Paint() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 使用画笔绘制
     *
     */
    virtual void draw() = 0;
};

#endif