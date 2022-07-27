#ifndef ITELEVISION_H
#define ITELEVISION_H

/**
 * @brief 抽象接收者: 抽象电视类
 *
 */
class ITelevision
{
public:
    virtual ~ITelevision() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 打开电视
     */
    virtual void open() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 关闭电视
     */
    virtual void close() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 切换电视频道
     */
    virtual void changeChannel() = 0;
};

#endif