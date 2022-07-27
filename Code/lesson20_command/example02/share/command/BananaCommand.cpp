#include "../../include/command/BananaCommand.h"

BananaCommand::BananaCommand(std::shared_ptr<IVendor> vendor)
{
    cout << "BananaCommand()构造函数" << endl;
    this->vendor = vendor;
}

BananaCommand::~BananaCommand()
{
    cout << "~BananaCommand()析构函数" << endl;
}

void BananaCommand::sail()
{
    this->vendor->sailBanana();
}
