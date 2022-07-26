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

Doctor::Doctor(std::string name, std::string hospital)
{
    cout << "Doctor()构造函数" << endl;
    this->name = name;
    this->hospital = hospital;
}

Doctor::~Doctor()
{
    cout << "~Doctor()析构函数" << endl;
}

void Doctor::treatEye()
{
    cout << this->hospital << "医院的医生" << this->name << ",治疗眼科病 ..." << endl;
}

void Doctor::treatNose()
{
    cout << this->hospital << "医院的医生" << this->name << ",治疗鼻科病 ..." << endl;
}

#endif