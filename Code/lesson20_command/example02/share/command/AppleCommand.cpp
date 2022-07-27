#include "../../include/command/AppleCommand.h"

AppleCommand::AppleCommand(std::shared_ptr<IVendor> vendor)
{
    cout << "AppleCommand()构造函数" << endl;
    this->vendor = vendor;
}

AppleCommand::~AppleCommand()
{
    cout << "~BananaCommand()析构函数" << endl;
}

void AppleCommand::sail()
{
    this->vendor->sailApple();
}
