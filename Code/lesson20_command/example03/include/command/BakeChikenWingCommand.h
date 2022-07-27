#ifndef BAKE_CHIKEN_WING_COMMAND_H
#define BAKE_CHIKEN_WING_COMMAND_H

#include "../interface/ICommand.h"

/**
 * @brief 派生类: 烤鸡翅命令传送者
 *
 */
class BakeChikenWingCommand : public ICommand
{

public:
    using ICommand::ICommand(); //使用父类的构造函数
    ~BakeChikenWingCommand();
    virtual void makingBarbecue() override; //实现makingBarbecue()函数
};

BakeChikenWingCommand::~BakeChikenWingCommand()
{
    cout << "~BakeChikenWingCommand()析构函数" << endl;
}

void BakeChikenWingCommand::makingBarbecue()
{
    this->barbecure->bakeChickenWing();
}

#endif