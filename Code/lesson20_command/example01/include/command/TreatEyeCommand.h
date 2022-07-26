#ifndef TREAT_EYE_COMMAND_H
#define TREAT_EYE_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/IDoctor.h"

/**
 * @brief 派生类: 治疗眼科病的命令
 *
 */
class TreatEyeCommand : public ICommand
{
private:
    std::shared_ptr<IDoctor> doctor; //医生指针变量

public:
    TreatEyeCommand(std::shared_ptr<IDoctor> doctor);
    ~TreatEyeCommand();
    virtual void treat() override; //实现treat()函数
};
#endif