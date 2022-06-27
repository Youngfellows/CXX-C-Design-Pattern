#include "../include/USA.h"

/**
 * @brief 构造函数,并初始化父类中介者属性
 * 
 * @param uniteNations 父类中介者
 */
USA::USA(UniteNations * uniteNations) : Country(uniteNations)
{
    cout << "USA()构造函数" << endl;
}

USA::~USA()
{
    cout << "~USA()析构函数" << endl;
}

void USA::declare(const std::string message)
{
    cout << "美方发布消息: " << message << endl;
}

void USA::getMessage(const std::string message)
{
    cout << "美方获取到对方消息: " << message << endl;
}