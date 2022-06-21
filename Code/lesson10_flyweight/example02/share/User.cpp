#include "../include/User.h"

User::User()
{
    cout << "User()构造函数" << endl;
}

User::User(string name)
{
    cout << "User()有参数构造函数" << endl;
    this->name = name;
}

User::~User()
{
    cout << "~User()析构函数" << endl;
}

string User::getName()
{
    return this->name;
}