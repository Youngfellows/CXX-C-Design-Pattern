#include "../include/MulFactory.h"

MulFactory::MulFactory()
{
    cout << "MulFactory()构造函数" << endl;
}

MulFactory::~MulFactory()
{
    cout << "~MulFactory()析构函数" << endl;
}

 /**
  * @brief AddFactory工厂生产MulOperation产品
  * 
  * @return Operation* 运算指针变量
  */
 Operation * MulFactory::create()
 {
    return new MulOperation();
 }