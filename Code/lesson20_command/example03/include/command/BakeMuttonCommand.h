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
    BakeMuttonCommand(std::shared_ptr<IBarbecuer> barbecure);
    ~BakeMuttonCommand();
    virtual void makingBarbecue() override; //实现makingBarbecue()函数
};

#endif