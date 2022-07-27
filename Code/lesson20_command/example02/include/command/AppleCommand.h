#ifndef APPLE_COMMAND_H
#define APPLE_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/IVendor.h"

/**
 * @brief 派生类: 卖苹果的命令
 *
 */
class AppleCommand : public ICommand
{
private:
    std::shared_ptr<IVendor> vendor = nullptr; //需要调用的目标对象,小商贩

public:
    AppleCommand(std::shared_ptr<IVendor> vendor);
    ~AppleCommand();
    virtual void sail() override; //实现sail()函数
};
#endif