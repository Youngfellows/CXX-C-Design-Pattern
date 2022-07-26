#include "../../include/command/TreatEyeCommand.h"

TreatEyeCommand::TreatEyeCommand(std::shared_ptr<IDoctor> doctor)
{
    cout << "TreatEyeCommand()构造函数" << endl;
    this->doctor = doctor;
}

TreatEyeCommand::~TreatEyeCommand()
{
    cout << "~TreatEyeCommand()析构函数" << endl;
}

/**
 * @brief 通过命令治疗眼科病
 *
 */
void TreatEyeCommand::treat()
{
    this->doctor->treatEye();
}