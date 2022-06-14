#include "../include/SourthFactory.h"

SourthFactory::SourthFactory()
{
    cout << "SourthFactory()构造函数" << endl;
}

SourthFactory::~SourthFactory()
{
    cout << "~SourthFactory()析构函数" << endl;
}

 /**
  * @brief 具体工厂 - 生产南方香蕉的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * SourthFactory::createBanana()
 {
    return new SourthBanana("海南香蕉",4.55);
 }

  /**
  * @brief 具体工厂 - 生产南方苹果的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * SourthFactory::createApple()
 {
    return new SourthApple("广东苹果",12.6);
 }