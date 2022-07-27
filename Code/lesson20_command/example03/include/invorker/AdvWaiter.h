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

AdvWaiter::AdvWaiter()
{
    cout << "AdvWaiter()构造函数" << endl;
    this->commands = std::make_shared<std::vector<std::shared_ptr<ICommand>>>();
}

AdvWaiter::~AdvWaiter()
{
    cout << "~AdvWaiter()析构函数" << endl;
}

void AdvWaiter::setCommand(std::shared_ptr<ICommand> command)
{
    this->commands->push_back(command);
}

void AdvWaiter::serve()
{
    for (auto iter = this->commands->begin(); iter != this->commands->end(); iter++)
    {
        (*iter)->makingBarbecue();
    }
}

#endif