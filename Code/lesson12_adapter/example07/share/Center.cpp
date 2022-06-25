#include "../include/Center.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 球员姓名
 */
Center::Center(string name) : Player(name)
{
    cout << "Forwards()构造函数,name:" << name << endl;
}

void Center::attack()
{
    cout << "中锋球员:" << this->name << ",进攻 ..." << endl;
}

void Center::defence()
{
    cout << "中锋球员:" << this->name << ",防守 ..." << endl;
}