#include "../../include/product/DecoyDuck.h"

/**
 * @brief 构造函数,初始化父类构造函数属性
 * @brief 饵鸭: 不能飞,不会叫
 * 
 */
DecoyDuck::DecoyDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) 
{

}

void DecoyDuck::display() {
    std::cout << "我是一只真正的诱饵鸭 ..." << std::endl;
}