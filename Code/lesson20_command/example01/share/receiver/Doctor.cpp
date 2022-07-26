#include "../../include/receiver/Doctor.h"

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
    cout << this->hospital << "的医生" << this->name << ",治疗眼科病 ..." << endl;
}

void Doctor::treatNose()
{
    cout << this->hospital << "的医生" << this->name << ",治疗鼻科病 ..." << endl;
}