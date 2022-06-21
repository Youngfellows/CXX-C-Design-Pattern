#include "../include/UnShareWebsite.h"

UnShareWebsite::UnShareWebsite()
{
    cout << "UnShareWebsite()构造函数" << endl;
}

UnShareWebsite::UnShareWebsite(string websiteName)
{
    cout << "UnShareWebsite()有参数构造函数" << endl;
    this->websiteName = websiteName;
}

UnShareWebsite::~UnShareWebsite()
{
    cout << "~UnShareWebsite()析构函数" << endl;
}

void UnShareWebsite::use(std::shared_ptr<User> user)
{
    cout << "UnShareWebsite::use():: 用户:" << user->getName() << ",正在使用不共享网站:" << this->websiteName << endl;
}