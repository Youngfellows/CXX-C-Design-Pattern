#include "../../include/product/Android.h"


Android::Android(HandsetSoft *handsetSoft) : HandsetBrand(handsetSoft)
{
    cout << "Android()构造函数" << endl;
}

Android::~Android()
{
    cout << "~Android()析构函数" << endl;
}

void Android::run()
{
    cout << "Android::run():: 在安卓手机上 ..." << endl;
    this->handsetSoft->run();
}