#include "../include/Backwards.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 球员姓名
 */
Backwards::Backwards(string name) : Player(name)
{
    cout << "Backwards()构造函数,name:" << name << endl;
}

void Backwards::attack()
{
    cout << "后卫球员:" << this->name << ",进攻 ..." << endl;
}

void Backwards::defence()
{
    cout << "后卫球员:" << this->name << ",防守 ..." << endl;
}