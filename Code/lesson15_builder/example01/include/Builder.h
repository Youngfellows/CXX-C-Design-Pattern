#ifndef BUILDER_H
#define BUILDER_H

#include "./House.h"

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

    /**
     * @brief 获取建造的房子
     * 
     * @return std::shared_ptr<House> 返回建造的房子
     */
    virtual std::shared_ptr<House> getHouse() = 0; 
};

#endif