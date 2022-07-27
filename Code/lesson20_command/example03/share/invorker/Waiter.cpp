#include "../../include/invorker/Waiter.h"

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