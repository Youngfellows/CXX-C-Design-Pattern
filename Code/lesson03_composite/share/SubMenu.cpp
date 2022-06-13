#include "../include/SubMenu.h"

SubMenu::SubMenu()
{
    cout << "SubMenu()构造函数" << endl;
}

//初始化构造函数,并初始化父类
SubMenu::SubMenu(string name) : Menu(name)
{
    cout << "SubMenu()有参数构造函数" << endl;
}

SubMenu::~SubMenu()
{
    cout << "~SubMenu()析构函数" << endl;
}

void SubMenu::display()
{
    cout << "SubMenu::display():: " << this->name << endl;
}