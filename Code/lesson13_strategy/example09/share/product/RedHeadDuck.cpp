#include "../../include/product/RedHeadDuck.h"

/**
 * @brief 构造函数,初始化父类构造函数属性
 * @brief 红头鸭: 能飞,呱呱叫
 * 
 */
RedHeadDuck::RedHeadDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) 
{

}

void RedHeadDuck::display() {
    std::cout << "我是一只真正的红头鸭 ..." << std::endl;
}