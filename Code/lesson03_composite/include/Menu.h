#ifndef MENU_H
#define MENU_H

#include "./Global.h"

/**
 * @brief 定义接口类 Menu - 菜单
 * 
 */
class Menu
{
    protected:
        string name;//名称

    public:
        Menu();//构造函数
        Menu(string name);//构造函数
        virtual ~Menu();//析构函数
        virtual void add(Menu *menu);//接口函数 - 添加子节点
        virtual void del(Menu *menu);//接口函数 - 移除子节点
        virtual Menu * getChild(int index);//接口函数 - 获取子节点
        virtual void display() = 0;//接口函数 - 显示子节信息 - 纯虚函数
};
#endif