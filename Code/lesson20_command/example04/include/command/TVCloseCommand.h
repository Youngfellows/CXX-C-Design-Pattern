#ifndef TV_CLOSE_COMMAND_H
#define TV_CLOSE_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/ITelevision.h"

/**
 * @brief 具体命令类: 关闭电视
 *
 */
class TVCloseCommand : public ICommand
{
private:
    std::shared_ptr<ITelevision> television = nullptr; //接收者,电视

public:
    TVCloseCommand(std::shared_ptr<ITelevision> television);
    ~TVCloseCommand();
    virtual void execute() override; //实现execute()函数
};
#endif