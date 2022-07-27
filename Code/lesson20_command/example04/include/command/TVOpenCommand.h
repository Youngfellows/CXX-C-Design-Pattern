#ifndef TV_OPEN_COMMAND_H
#define TV_OPEN_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/ITelevision.h"

/**
 * @brief 具体命令类: 打开电视
 *
 */
class TVOpenCommand : public ICommand
{
private:
    std::shared_ptr<ITelevision> television = nullptr; //接收者,电视

public:
    TVOpenCommand(std::shared_ptr<ITelevision> television);
    ~TVOpenCommand();
    virtual void execute() override; //实现execute()函数
};

#endif