#ifndef COMPOSIT_MENU_H
#define COMPOSIT_MENU_H

#include "./Menu.h"

/**
 * @brief 组合式菜单
 * 
 */
class CompositMenu : public Menu
{
    private:
      vector<Menu *> menuVec;//保存菜单列表的集合

    public:
        CompositMenu();
        CompositMenu(string name);
        ~CompositMenu();
        void add(Menu *menu) override;//接口函数 - 添加子节点
        void del(Menu *menu) override;//接口函数 - 移除子节点
        Menu * getChild(int index) override;//接口函数 - 获取子节点
        void display() override;//接口函数 - 显示子节信息 - 纯虚函数
};
#endif