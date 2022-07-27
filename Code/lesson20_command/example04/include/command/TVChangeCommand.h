#ifndef TV_CHANGE_COMMAND_H
#define TV_CHANGE_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/ITelevision.h"

/**
 * @brief 具体命令类: 切换电视频道
 *
 */
class TVChangeCommand : public ICommand
{
private:
    std::shared_ptr<ITelevision> television = nullptr; //接收者,电视

public:
    TVChangeCommand(std::shared_ptr<ITelevision> television);
    ~TVChangeCommand();
    virtual void execute() override; //实现execute()函数
};
#endif