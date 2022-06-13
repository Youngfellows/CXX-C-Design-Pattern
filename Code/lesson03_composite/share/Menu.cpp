#include "../include/Menu.h"

Menu::Menu()
{
    cout << "Menu()构造函数" << endl;
}

Menu::Menu(string name)
{
    cout << "Menu()有参数构造函数" << endl;
    this->name = name;
}

Menu::~Menu()
{
    cout << "~Menu()析构函数" << endl;
}

void Menu::add(Menu *menu)//接口函数 - 添加子节点
{
    cout << "Menu::add():: ..." << endl;
}

void Menu::del(Menu *menu)//接口函数 - 移除子节点
{
    cout << "Menu::del():: ..." << endl;
}

Menu * Menu::getChild(int index)//接口函数 - 获取子节点
{
    cout << "Menu::del():: ..." << endl;
    return NULL;
}
