#include "../include/king.h"

king::king() : Character()
{
    cout << "king()无参数构造函数" << endl; 
}

king::king(std::unique_ptr<WeaponFactory> factory) : Character(std::move(factory))
{
    cout << "king()有参数构造函数" << endl;
}

/**
 * @brief 通过客户端访问产品的方法
 * 
 */
void king::fight()
{   
    cout << "king::fight():: 通过客户端访问产品的方法 ..." << endl;
    std::unique_ptr<WeaponBehavior> weapon = this->factory->create();//通过工厂生产武器
    weapon->useWeapon();//使用武器
}
