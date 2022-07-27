#ifndef WAITER_H
#define WAITER_H

#include "../interface/IWaiter.h"

/**
 * @brief 派生类: 普通服务员
 *
 */
class Waiter : public IWaiter
{
private:
    std::shared_ptr<ICommand> command = nullptr; //命令

public:
    Waiter() = default;
    Waiter(std::shared_ptr<ICommand> command);
    ~Waiter();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void serve() override;                                       //实现serve()函数
};

Waiter::Waiter(std::shared_ptr<ICommand> command)
{
    cout << "Waiter()构造函数" << endl;
    this->command = command;
}

Waiter::~Waiter()
{
    cout << "~Waiter()析构函数" << endl;
}

void Waiter::setCommand(std::shared_ptr<ICommand> command)
{
    this->command = command;
}

void Waiter::serve()
{
    this->command->makingBarbecue();
}

#endif