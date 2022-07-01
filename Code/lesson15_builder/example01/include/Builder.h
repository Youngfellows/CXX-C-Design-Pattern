#ifndef BUILDER_H
#define BUILDER_H

/**
 * @brief 抽象类: 建造者抽象类
 *
 */
class Builder
{
public:
    virtual ~Builder() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 造地板
     *
     */
    virtual void buildGround() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 造墙
     *
     */
    virtual void buildWall() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 造窗
     *
     */
    virtual void buildWindow() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 造门
     *
     */
    virtual void buildDoor() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 造屋顶
     *
     */
    virtual void buildRoof() = 0;
};

#endif