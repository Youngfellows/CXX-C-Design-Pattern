#ifndef ADV_WAITER_H
#define ADV_WAITER_H

#include "../Global.h"
#include "../interface/IWaiter.h"

/**
 * @brief 派生类: 普通服务员
 *
 */
class AdvWaiter : public IWaiter
{
private:
    std::shared_ptr<std::vector<std::shared_ptr<ICommand>>> commands = nullptr;

public:
    AdvWaiter();
    ~AdvWaiter();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void serve() override;                                       //实现serve()函数
};
#endif