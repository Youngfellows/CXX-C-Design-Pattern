#include "../../include/builder/StoneBuilder.h"

StoneBuilder::StoneBuilder()
{
    cout << "StoneBuilder()构造函数" << endl;
    house = std::make_shared<StoneHouse>("周公馆");
}

StoneBuilder::~StoneBuilder()
{
    cout << "~StoneBuilder()析构函数" << endl;
}

/**
 * @brief 造地板
 *
 */
void StoneBuilder::buildGround()
{
    house->setGround("建造周公馆地板");
}

/**
 * @brief 造墙
 *
 */
void StoneBuilder::buildWall()
{
    house->setWall("建造周公馆墙");
}
/**
 * @brief 造窗
 *
 */
void StoneBuilder::buildWindow()
{
    house->setWindow("建造周公馆窗户");
}

/**
 * @brief 造门
 *
 */
void StoneBuilder::buildDoor()
{
    house->setDoor("建造周公馆门");
}

/**
 * @brief 造屋顶
 *
 */
void StoneBuilder::buildRoof()
{
    house->setRoof("建造周公馆屋顶");
}

/**
 *
 * @return std::shared_ptr<House> 返回建造的房子
 */
std::shared_ptr<House> StoneBuilder::getHouse()
{
    return this->house;
}