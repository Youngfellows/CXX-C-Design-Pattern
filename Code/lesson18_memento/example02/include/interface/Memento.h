#ifndef MEMENTO_H
#define MEMENTO_H

#include "../Global.h"

/**
 * @brief 抽象类: 备忘录
 *
 */
class Memento
{
public:
    virtual ~Memento() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取当前文本内容
     *
     * @return std::string 返回当前文本内容
     */
    virtual std::string getText() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取当前光标的X坐标位置
     *
     * @return double 返回当前光标的X坐标位置
     */
    virtual double getCurX() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取当前光标的Y坐标位置
     *
     * @return double 返回当前光标的Y坐标位置
     */
    virtual double getCurY() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取当前滚动条位置
     *
     * @return double 返回当前滚动条位置
     */
    virtual double getSelectionWidth() = 0;
};

#endif