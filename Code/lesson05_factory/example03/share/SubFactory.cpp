#include "../include/SubFactory.h"

SubFactory::SubFactory()
{
    cout << "SubFactory()构造函数" << endl;
}

SubFactory::~SubFactory()
{
    cout << "~SubFactory()析构函数" << endl;
}

 /**
  * @brief AddFactory工厂生产SubOperation产品
  * 
  * @return Operation* 运算指针变量
  */
 Operation * SubFactory::create()
 {
    return new SubOperation();
 }