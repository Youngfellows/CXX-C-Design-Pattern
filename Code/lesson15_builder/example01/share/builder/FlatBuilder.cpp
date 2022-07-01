#include "../../include/builder/FlatBuilder.h"


FlatBuilder::FlatBuilder()
{
    cout << "FlatBuilder()构造函数" << endl;
    house = std::make_shared<FlatHouse>("蛋壳公寓");
}

FlatBuilder::~FlatBuilder()
{
    cout << "~FlatBuilder()析构函数" << endl;
}

/**
 * @brief 造地板
 *
 */
void FlatBuilder::buildGround()
{
    house->setGround("建造蛋壳公寓地板");
}

/**
 * @brief 造墙
 *
 */
void FlatBuilder::buildWall()
{
    house->setWall("建造蛋壳公寓墙");
}
/**
 * @brief 造窗
 *
 */
void FlatBuilder::buildWindow()
{
    house->setWindow("建造蛋壳公寓窗户");
}

/**
 * @brief 造门
 *
 */
void FlatBuilder::buildDoor()
{
    house->setDoor("建造蛋壳公寓门");
}

/**
 * @brief 造屋顶
 *
 */
void FlatBuilder::buildRoof()
{
    house->setRoof("建造蛋壳公寓屋顶");
}

/**
 * @brief 获取建造的房子
 *
 * @return std::shared_ptr<House> 返回建造的房子
 */
std::shared_ptr<House> FlatBuilder::getHouse()
{
    return this->house;
}