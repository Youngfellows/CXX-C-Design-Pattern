#ifndef ICONTEXT_H
#define ICONTEXT_H

/**
 * @brief 抽象类: 抽象解释器上下文环境类
 *
 */
class IContext
{
public:
    virtual ~IContext() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置上下文数据
     *
     * @param num 要设置的上下文数据
     */
    virtual void setNumber(int num) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取上下文数据
     *
     * @return int 返回设置的上下文数据
     */
    virtual int getNumber() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 返回操作结果
     * @return int 操作结果
     */
    virtual int getResult() = 0;
};

#endif