#ifndef STONE_BUILDER_H
#define STONE_BUILDER_H

#include "../Builder.h"
#include "../house/StoneHouse.h"

/**
 * @brief 派生类: 石屋建造者(石屋工程队)
 *
 */
class StoneBuilder : public Builder
{
private:
    std::shared_ptr<House> house = nullptr; //石屋

public:
    StoneBuilder();
    ~StoneBuilder();

    /**
     * @brief 实现抽象函数
     * @brief 造地板
     *
     */
    virtual void buildGround() override;

    /**
     * @brief 实现抽象函数
     * @brief 造墙
     *
     */
    virtual void buildWall() override;

    /**
     * @brief 实现抽象函数
     * @brief 造窗
     *
     */
    virtual void buildWindow() override;

    /**
     * @brief 实现抽象函数
     * @brief 造门
     *
     */
    virtual void buildDoor() override;

    /**
     * @brief 实现抽象函数
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