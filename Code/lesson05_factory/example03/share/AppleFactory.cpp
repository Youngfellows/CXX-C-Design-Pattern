#include "../include/AppleFactory.h"

AppleFactory::AppleFactory()
{
    cout << "AppleFactory()构造函数" << endl;
}

AppleFactory::~AppleFactory()
{
    cout << "~AppleFactory()析构函数" << endl;
}

 /**
  * @brief 具体工厂 - 生产苹果的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * AppleFactory::create()
 {
    return new Apple("红富士苹果",9.5);
 }