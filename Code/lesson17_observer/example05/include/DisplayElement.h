#ifndef DISPLAY_ELEMENT_H
#define DISPLAY_ELEMENT_H

/**
 * @brief 抽象类: 显示抽象接口
 *
 */
class DisplayElement
{
public:
    virtual ~DisplayElement() = default;

    /**
     * @brief 纯虚函数,抽象结果
     * @brief 显示信息
     *
     */
    virtual void display() = 0;
};

#endif