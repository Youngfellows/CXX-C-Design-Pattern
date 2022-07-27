#ifndef SENIOR_SALESCLERK_H
#define SENIOR_SALESCLERK_H

#include "../interface/IShopAssistant.h"

/**
 * @brief 派生类: 高级售货员
 *
 */
class SeniorSalesclerk : public IShopAssistant
{
private:
    std::shared_ptr<std::vector<std::shared_ptr<ICommand>>> commands; //命令列表

public:
    SeniorSalesclerk();
    SeniorSalesclerk(std::shared_ptr<ICommand> command);
    ~SeniorSalesclerk();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void sail() override;                                        //实现sail()函数
};
#endif