#include "../include/Iraq.h"

/**
 * @brief 构造函数,并初始化父类中介者属性
 * 
 * @param uniteNations 父类中介者
 */
Iraq::Iraq(UniteNations * uniteNations) : Country(uniteNations)
{
    cout << "Iraq()构造函数" << endl;
}

Iraq::~Iraq()
{
    cout << "~Iraq()析构函数" << endl;
}

void Iraq::declare(const std::string message)
{
    cout << "伊拉克发布消息: " << message << endl;
}

void Iraq::getMessage(const std::string message)
{
    cout << "伊拉克获取到对方消息: " << message << endl;
}
