#ifndef NORMAL_SALESCLERK_H
#define NORMAL_SALESCLERK_H

#include "../interface/IShopAssistant.h"

/**
 * @brief 派生类: 普通售货员
 *
 */
class NormalSalesclerk : public IShopAssistant
{
private:
    std::shared_ptr<ICommand> command;

public:
    NormalSalesclerk() = default;
    NormalSalesclerk(std::shared_ptr<ICommand> command);
    ~NormalSalesclerk();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void sail() override;                                        //实现sail()函数
};
#endif