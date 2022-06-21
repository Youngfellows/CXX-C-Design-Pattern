#include "../include/ConcreteWebsite.h"

ConcreteWebsite::ConcreteWebsite()
{
    cout << "ConcreteWebsite()构造函数" << endl;
}

ConcreteWebsite::ConcreteWebsite(string websiteName)
{
    cout << "ConcreteWebsite()有参数构造函数" << endl;
    this->websiteName = websiteName;
}

ConcreteWebsite::~ConcreteWebsite()
{
    cout << "~ConcreteWebsite()析构函数" << endl;
}

void ConcreteWebsite::use(std::shared_ptr<User> user)
{
    cout << "ConcreteWebsite::use():: 用户:" << user->getName() << ",正在使用网站:" << this->websiteName << endl;
}