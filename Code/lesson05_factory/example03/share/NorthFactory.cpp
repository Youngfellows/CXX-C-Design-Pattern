#include "../include/NorthFactory.h"

NorthFactory::NorthFactory()
{
    cout << "NorthFactory()构造函数" << endl;
}

NorthFactory::~NorthFactory()
{
    cout << "~NorthFactory()析构函数" << endl;
}

 /**
  * @brief 具体工厂 - 生产北方苹果的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * NorthFactory::createApple()
 {
    return new NorthApple("陕西红富士苹果",9.5);
 }

 
 /**
  * @brief 具体工厂 - 生产北方香蕉的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * NorthFactory::createBanana()
 {
    return new NorthBanana("陕西香蕉",7.7);
 }