#ifndef MESSAGER_IMPL_H
#define MESSAGER_IMPL_H

/**
 * @brief 抽象类: 抽象平台实现类
 * @brief 不同的变化方向(业务和平台)，所以分为两个类
 */
class MessagerImp
{
public:
    virtual ~MessagerImp() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 播放声音
     */
    virtual void playSound() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 绘制图形
     */
    virtual void drawShape() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 写文本
     */
    virtual void writeText() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 连接
     */
    virtual void connect() = 0;
};

#endif