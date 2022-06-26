#include "../../include/product/MallardDuck.h"

/**
 * @brief 构造函数,初始化父类构造函数属性
 * @brief 野鸭: 能飞,呱呱叫
 * 
 */
MallardDuck::MallardDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) 
{

}

void MallardDuck::display() {
    std::cout << "我是一只真正的野鸭 ..." << std::endl;
}
