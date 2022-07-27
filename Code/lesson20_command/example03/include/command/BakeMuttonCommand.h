#ifndef BAKE_MUTTON_COMMAND_H
#define BAKE_MUTTON_COMMAND_H

#include "../interface/ICommand.h"

/**
 * @brief 派生类: 烤羊肉命令传送者
 *
 */
class BakeMuttonCommand : public ICommand
{
private:
public:
    BakeMuttonCommand();
    ~BakeMuttonCommand();
    virtual void makingBarbecue() override; //实现makingBarbecue()函数
};

/**
 * @brief 构造函数,病初始化父类
 *
 * @param barbecure
 */
BakeMuttonCommand::BakeMuttonCommand(std::shared_ptr<IBarbecuer> barbecure) : ICommand(barbecure)
{
    cout << "BakeMuttonCommand()构造函数" << endl;
}

BakeMuttonCommand::~BakeMuttonCommand()
{
    cout << "~BakeMuttonCommand()析构函数" << endl;
}

void BakeMuttonCommand::makingBarbecue()
{
    this->barbecure->bakeMutton();
}

#endif