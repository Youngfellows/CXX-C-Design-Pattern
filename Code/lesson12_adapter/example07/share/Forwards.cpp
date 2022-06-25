#include "../include/Forwards.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 球员姓名
 */
Forwards::Forwards(string name) : Player(name)
{
    cout << "Forwards()构造函数,name:" << name << endl;
}

void Forwards::attack()
{
    cout << "前锋球员:" << this->name << ",进攻 ..." << endl;
}

void Forwards::defence()
{
    cout << "前锋球员:" << this->name << ",防守 ..." << endl;
}