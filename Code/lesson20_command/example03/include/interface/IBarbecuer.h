#ifndef IBARBECURE_H
#define IBARBECURE_H

/**
 * @brief 抽象类: 抽象烧烤的人
 *
 */
class IBarbecuer
{
public:
    virtual ~IBarbecuer() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 烤羊肉
     */
    virtual void bakeMutton() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 烤鸡翅
     */
    virtual void bakeChickenWing() = 0;
};

#endif