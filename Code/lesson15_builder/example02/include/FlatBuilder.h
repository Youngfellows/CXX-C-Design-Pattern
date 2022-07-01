#ifndef FLAT_BUILDER_H
#define FLAT_BUILDER_H

#include "./Builder.h"
#include "./FlatHouse.h"

/**
 * @brief 派生类: 公寓建造者(公寓工程队)
 *
 */
class FlatBuilder : public Builder
{
private:
    std::shared_ptr<House> house = nullptr; //公寓

public:
    FlatBuilder();
    ~FlatBuilder();

    /**
     * @brief  实现抽象函数
     * @brief 造地板
     *
     */
    virtual void buildGround() override;

    /**
     * @brief  实现抽象函数
     * @brief 造墙
     *
     */
    virtual void buildWall() override;

    /**
     * @brief  实现抽象函数
     * @brief 造窗
     *
     */
    virtual void buildWindow() override;

    /**
     * @brief  实现抽象函数
     * @brief 造门
     *
     */
    virtual void buildDoor() override;

    /**
     * @brief  实现抽象函数
     * @brief 造屋顶
     *
     */
    virtual void buildRoof() override;

    /**
     * @brief 获取建造的房子
     *
     * @return std::shared_ptr<House> 返回建造的房子
     */
    virtual std::shared_ptr<House> getHouse() override;
};
#endif