#include "../../include/product/RubberDuck.h"

/**
 * @brief 构造函数,初始化父类构造函数属性
 * @brief 大黄鸭: 不能飞,吱吱叫
 * 
 */
RubberDuck::RubberDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) 
{

}

void RubberDuck::display() {
    std::cout << "我是一只真正的大黄鸭 ..." << std::endl;
}
