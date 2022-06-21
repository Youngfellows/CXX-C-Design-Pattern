#include "../include/GenMachineCode.h"

GenMachineCode::GenMachineCode()
{
    cout << "GenMachineCode()构造函数" << endl;
}

GenMachineCode::~GenMachineCode()
{
    cout << "~GenMachineCode()析构函数" << endl;
}

void GenMachineCode::genCode()
{
    cout << "GenMachineCode::genCode():: 产生机器代码 ..." << endl;
}