#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "../Global.h"
#include "./Memento.h"

//先声明类,后面再定义
// class Memento;

/**
 * @brief 抽象类: 抽象数据原生者
 * @brief 原发器中包含了一些可能会随时间变化的重要数据
 * @brief 它还定义了在备忘录中保存自身状态的方法, 以及从备忘录中恢复状态的方法
 */
class Originator
{
public:
    virtual ~Originator() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置文本
     *
     * @param text 文本内容
     */
    virtual void setText(std::string text) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置当前光标位置
     *
     * @param x X坐标
     * @param y Y坐标
     */
    virtual void setCursor(double x, double y) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置当前滚动条位置
     *
     * @param width 当前滚动条位置
     */
    virtual void setSelectionWidth(double width) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 创建备忘录,在备忘录中保存当前的状态
     * @brief 备忘录是不可变的对象, 因此原发器会将自身状态作为参数传递给备忘录的构造函数
     *
     * @return std::shared_ptr<Memento> 返回备忘录
     */
    virtual std::shared_ptr<Memento> createSnapshot() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 从备忘录恢复数据
     *
     * @param snapshot 保存历史数据的备忘录
     */
    virtual void resotre(std::shared_ptr<Memento> snapshot) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 显示数据
     */
    virtual void display() = 0;
};

#endif