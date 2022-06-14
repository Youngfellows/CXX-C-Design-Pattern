#include "../include/AddFactory.h"

AddFactory::AddFactory()
{
    cout << "AddFactory()构造函数" << endl;
}

AddFactory::~AddFactory()
{
    cout << "~AddFactory()析构函数" << endl;
}

 /**
  * @brief AddFactory工厂生产AddOperation产品
  * 
  * @return Operation* 运算指针变量
  */
 Operation * AddFactory::create()
 {
    return new AddOperation();
 }