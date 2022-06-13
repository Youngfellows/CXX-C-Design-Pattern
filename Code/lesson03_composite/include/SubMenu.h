#ifndef SUB_MENU_H
#define SUB_MENU_H

#include "./Menu.h"

/**
 * @brief 子节点 - 子菜单
 * 
 */
class SubMenu : public Menu
{
    public:
        SubMenu();
        SubMenu(string name);
        ~SubMenu();
        void display() override;//实现display()接口
};

#endif