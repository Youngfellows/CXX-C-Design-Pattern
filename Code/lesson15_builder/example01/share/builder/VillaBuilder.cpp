#include "../../include/builder/VillaBuilder.h"


VillaBuilder::VillaBuilder()
{
    cout << "VillaBuilder()构造函数" << endl;
    house = std::make_shared<VillaHouse>("深圳湾一号");
}

VillaBuilder::~VillaBuilder()
{
    cout << "~VillaBuilder()析构函数" << endl;
}

/**
 * @brief 造地板
 *
 */
void VillaBuilder::buildGround()
{
    house->setGround("建造深圳湾一号地板");
}

/**
 * @brief 造墙
 *
 */
void VillaBuilder::buildWall()
{
    house->setWall("建造深圳湾一号墙");
}
/**
 * @brief 造窗
 *
 */
void VillaBuilder::buildWindow()
{
    house->setWindow("建造深圳湾一号窗户");
}

/**
 * @brief 造门
 *
 */
void VillaBuilder::buildDoor()
{
    house->setDoor("建造深圳湾一号门");
}

/**
 * @brief 造屋顶
 *
 */
void VillaBuilder::buildRoof()
{
    house->setRoof("建造深圳湾一号屋顶");
}

/**
 *
 * @return std::shared_ptr<House> 返回建造的房子
 */
std::shared_ptr<House> VillaBuilder::getHouse()
{
    return this->house;
}