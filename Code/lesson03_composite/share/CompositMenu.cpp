#include "../include/CompositMenu.h"

CompositMenu::CompositMenu()
{
    cout << "CompositMenu()构造函数" << endl;
}

CompositMenu::CompositMenu(string name) : Menu(name)
{
    cout << "CompositMenu()有参数构造函数" << endl;
}

CompositMenu::~CompositMenu()
{
    cout << "~CompositMenu()析构函数" << endl;
    //清空集合  
    vector<Menu *>::iterator iter;
    for( iter = this->menuVec.begin(); iter != this->menuVec.end(); iter++)
    {
        delete *iter;
    }
    this->menuVec.clear();
}

void CompositMenu::add(Menu *menu)//接口函数 - 添加子节点
{
    cout << "CompositMenu::add():: ..." << endl;
    this->menuVec.push_back(menu);
}

void CompositMenu::del(Menu *menu)//接口函数 - 移除子节点
{
    cout << "CompositMenu::del():: ..." << endl;
    vector<Menu *>::iterator iter;
    for( iter = this->menuVec.begin(); iter != this->menuVec.end(); iter++)
    {
        if( menu == *iter)
        {
            this->menuVec.erase(iter);
            delete menu;
            break;
        }
    }  
}

Menu * CompositMenu::getChild(int index)//接口函数 - 获取子节点
{
    return this->menuVec[index];
}

void CompositMenu::display()//接口函数 - 显示子节信息 - 纯虚函数
{
    cout << "CompositMenu::display():: ..." << endl;
    cout << this->name << endl;
    vector<Menu *>::iterator iter;
    for( iter = this->menuVec.begin(); iter != this->menuVec.end(); iter++)
    {
       cout << "|-";
       (*iter)->display();//调用子节点的display() 
    }  
}
