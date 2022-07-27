#include "../../include/invoker/Controller.h"

Controller::Controller(std::shared_ptr<ICommand> command)
{
    cout << "Controller()构造函数" << endl;
    this->command = command;
}

Controller::~Controller()
{
    cout << "~Controller()析构函数" << endl;
}

void Controller::setCommand(std::shared_ptr<ICommand> command)
{
    this->command = command;
}

void Controller::executeCommand()
{
    this->command->execute();
}