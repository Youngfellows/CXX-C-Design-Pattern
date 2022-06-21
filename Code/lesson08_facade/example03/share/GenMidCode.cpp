#include "../include/GenMidCode.h"

GenMidCode::GenMidCode()
{
    cout << "GenMidCode()构造函数" << endl;
}

GenMidCode::~GenMidCode()
{
    cout << "~GenMidCode()析构函数" << endl;
}

void GenMidCode::genCode()
{
    cout << "GenMidCode::genCode():: 产生中间代码 ..." << endl;
}