#include "../../include/invorker/AdvWaiter.h"

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