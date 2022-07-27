#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Global.h"
#include "../interface/IController.h"

/**
 * @brief 派生类触发者: 遥控器
 *
 */
class Controller : public IController
{
private:
    std::shared_ptr<ICommand> command = nullptr;

public:
    Controller() = default;
    Controller(std::shared_ptr<ICommand> command);
    ~Controller();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void executeCommand() override;                              //实现executeCommand()函数
};

#endif