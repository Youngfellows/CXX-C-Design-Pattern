#include "../include/HouseDirector.h"

HouseDirector::HouseDirector(std::shared_ptr<Builder> builder)
{
    cout << "HouseDirector()构造函数" << endl;
    this->builder = builder;
}

HouseDirector::~HouseDirector()
{
    cout << "~HouseDirector()析构函数" << endl;
}

/**
 * @brief  设计师(指挥者)负责建造逻辑
 * @brief 建筑队干具体的活
 *
 */
void HouseDirector::construct()
{
    this->builder->buildGround(); //造地板
    this->builder->buildWall();   //造墙壁
    this->builder->buildWindow(); //造窗户
    this->builder->buildDoor();   //造门
    this->builder->buildRoof();   //造屋顶
}