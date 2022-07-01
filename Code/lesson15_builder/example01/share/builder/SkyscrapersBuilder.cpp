#include "../../include/builder/SkyscrapersBuilder.h"


SkyscrapersBuilder::SkyscrapersBuilder()
{
    cout << "SkyscrapersBuilder()构造函数" << endl;
    house = std::make_shared<Skyscrapers>("平安国际大厦");
}

SkyscrapersBuilder::~SkyscrapersBuilder()
{
    cout << "~FlatBuilder()析构函数" << endl;
}

/**
 * @brief 造地板
 *
 */
void SkyscrapersBuilder::buildGround()
{
    house->setGround("建造平安国际大厦地板");
}

/**
 * @brief 造墙
 *
 */
void SkyscrapersBuilder::buildWall()
{
    house->setWall("建造平安国际大厦墙");
}
/**
 * @brief 造窗
 *
 */
void SkyscrapersBuilder::buildWindow()
{
    house->setWindow("建造平安国际大厦窗户");
}

/**
 * @brief 造门
 *
 */
void SkyscrapersBuilder::buildDoor()
{
    house->setDoor("建造平安国际大厦门");
}

/**
 * @brief 造屋顶
 *
 */
void SkyscrapersBuilder::buildRoof()
{
    house->setRoof("建造平安国际大厦屋顶");
}

/**
 * @brief 获取建造的房子
 *
 * @return std::shared_ptr<House> 返回建造的房子
 */
std::shared_ptr<House> SkyscrapersBuilder::getHouse()
{
    return this->house;
}
