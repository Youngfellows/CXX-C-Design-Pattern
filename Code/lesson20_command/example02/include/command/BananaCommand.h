#ifndef BANANA_COMMAND_H
#define BANANA_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/IVendor.h"

/**
 * @brief 派生类: 卖香蕉的命令
 *
 */
class BananaCommand : public ICommand
{
private:
    std::shared_ptr<IVendor> vendor = nullptr; //需要调用的目标对象,小商贩

public:
    BananaCommand(std::shared_ptr<IVendor> vendor);
    ~BananaCommand();
    virtual void sail() override; //实现sail()函数
};
#endif