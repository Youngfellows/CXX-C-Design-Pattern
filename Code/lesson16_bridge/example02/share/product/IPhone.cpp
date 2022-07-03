#include "../../include/product/IPhone.h"

IPhone::IPhone(HandsetSoft *handsetSoft) : HandsetBrand(handsetSoft)
{
    cout << "IPhone()构造函数" << endl;
}

IPhone::~IPhone()
{
    cout << "~IPhone()析构函数" << endl;
}

void IPhone::run()
{
    cout << "IPhone::run():: 在苹果手机上 ..." << endl;
    this->handsetSoft->run();
}