#include "../../include/builder/WoodenBuilder.h"

WoodenBuilder::WoodenBuilder()
{
    cout << "WoodenBuilder()构造函数" << endl;
    house = std::make_shared<WoodenHouse>("杜甫草堂");
}

WoodenBuilder::~WoodenBuilder()
{
    cout << "~WoodenBuilder()析构函数" << endl;
}

/**
 * @brief 造地板
 *
 */
void WoodenBuilder::buildGround()
{
    house->setGround("建造杜甫草堂地板");
}

/**
 * @brief 造墙
 *
 */
void WoodenBuilder::buildWall()
{
    house->setWall("建造杜甫草堂墙");
}
/**
 * @brief 造窗
 *
 */
void WoodenBuilder::buildWindow()
{
    house->setWindow("建造杜甫草堂窗户");
}

/**
 * @brief 造门
 *
 */
void WoodenBuilder::buildDoor()
{
    house->setDoor("建造杜甫草堂门");
}

/**
 * @brief 造屋顶
 *
 */
void WoodenBuilder::buildRoof()
{
    house->setRoof("建造深杜甫草堂屋顶");
}

/**
 *
 * @return std::shared_ptr<House> 返回建造的房子
 */
std::shared_ptr<House> WoodenBuilder::getHouse()
{
    return this->house;
}
