#include "../../include/command/BakeMuttonCommand.h"

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