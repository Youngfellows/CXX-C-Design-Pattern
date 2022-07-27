#ifndef IVENDOR_H
#define IVENDOR_H

/**
 * @brief 抽象类: 抽象商贩类
 *
 */
class IVendor
{
public:
    virtual ~IVendor() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 卖香蕉
     *
     */
    virtual void sailBanana() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 卖苹果
     *
     */
    virtual void sailApple() = 0;
};

#endif