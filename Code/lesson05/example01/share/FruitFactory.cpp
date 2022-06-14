#include "../include/FruitFactory.h"

FruitFactory::FruitFactory()
{
    cout << "FruitFactory()构造函数" << endl;
}

FruitFactory::~FruitFactory()
{
    cout << "~FruitFactory()析构函数" << endl;
}

 /**
  * @brief 根据类型生成水果产品
  * 
  * @param type 类型
  * @return Fruit* 水果指针变量
  */
 Fruit * FruitFactory::create(string type)
 {
    Fruit *fruit = NULL;
    if(APPLE == type)
    {
        fruit = new Apple("红富士苹果",9.5);
    }else if(BANANA == type)
    {
        fruit = new Banana("海南香蕉",4.8);
    }
    return fruit;
 }