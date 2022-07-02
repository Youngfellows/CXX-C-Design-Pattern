#include "../include/God.h"

God::God(std::shared_ptr<PersonBuilder> builder)
{
    cout << "God()构造函数" << endl;
    this->builder = builder;
}

God::~God()
{
    cout << "~God()析构函数" << endl;
    if (this->builder != nullptr)
    {
        this->builder = nullptr;
    }
}

/**
 * @brief 为负责任设置建造者
 *
 * @param builder
 */
void God::setBuilder(std::shared_ptr<PersonBuilder> builder)
{
    cout << "God::setBuilder():: ..." << endl;
    this->builder = builder;
}

/**
 * @brief 负责任赋值建造人,创建逻辑由赋值人来实现
 *
 * @return std::shared_ptr<Person> 返回创建者创建好的的人
 */
std::shared_ptr<Person> God::createPerson()
{
    cout << "God::createPerson():: ..." << endl;
    this->builder->useTool();          //使用工具
    this->builder->createHead();       //创建头
    this->builder->createHand();       //创建手
    this->builder->createBody();       //创建身体
    this->builder->createFoot();       //创建脚
    return this->builder->getPerson(); //返回创建好的人
}