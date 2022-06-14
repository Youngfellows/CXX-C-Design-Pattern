#include "../include/BananaFactory.h"

BananaFactory::BananaFactory()
{
    cout << "BananaFactory()构造函数" << endl;
}

BananaFactory::~BananaFactory()
{
    cout << "~BananaFactory()析构函数" << endl;
}

 /**
  * @brief 具体工厂 - 生产香蕉的工厂
  * 
  * @return Fruit* 水果指针变量
  */
 Fruit * BananaFactory::create()
 {
    return new Banana("海南香蕉",4.88);
 }