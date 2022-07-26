#include "../../include/command/TreatNoseCommand.h"

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