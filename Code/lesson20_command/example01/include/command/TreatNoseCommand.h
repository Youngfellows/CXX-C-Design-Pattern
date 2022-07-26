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

TreatNoseCommand::TreatNoseCommand(std::shared_ptr<IDoctor> doctor)
{
    cout << "TreatNoseCommand()构造函数" << endl;
    this->doctor = doctor;
}

TreatNoseCommand::~TreatNoseCommand()
{
    cout << "~TreatNoseCommand()析构函数" << endl;
}

/**
 * @brief 通过命令治疗鼻科病
 *
 */
void TreatNoseCommand::treat()
{
    this->doctor->treatNose();
}

#endif