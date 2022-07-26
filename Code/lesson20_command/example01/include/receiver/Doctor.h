#ifndef DOCTOR_H
#define DOCTOR_H

#include "../Global.h"
#include "../interface/IDoctor.h"

/**
 * @brief 派生类: 医生
 *
 */
class Doctor : public IDoctor
{
private:
    std::string hospital; //医院
    std::string name;     //医生名称

public:
    Doctor(std::string name, std::string hospital);
    ~Doctor();
    virtual void treatEye() override;  //实现treatEye()函数
    virtual void treatNose() override; //实现treatNose()函数
};
#endif