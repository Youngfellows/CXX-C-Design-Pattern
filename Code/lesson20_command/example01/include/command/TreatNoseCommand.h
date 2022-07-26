#ifndef TREAT_NOSE_COMMAND_H
#define TREAT_NOSE_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/IDoctor.h"

/**
 * @brief 派生类: 治疗鼻科病的命令
 *
 */
class TreatNoseCommand : public ICommand
{
private:
    std::shared_ptr<IDoctor> doctor; //医生指针变量

public:
    TreatNoseCommand(std::shared_ptr<IDoctor> doctor);
    ~TreatNoseCommand();
    virtual void treat() override; //实现treat()函数
};
#endif