#include "../include/DivFactory.h"

DivFactory::DivFactory()
{
    cout << "DivFactory()构造函数" << endl;
}

DivFactory::~DivFactory()
{
    cout << "~DivFactory()析构函数" << endl;
}

 /**
  * @brief AddFactory工厂生产DivOperation产品
  * 
  * @return Operation* 运算指针变量
  */
 Operation * DivFactory::create()
 {
    return new DivOperation();
 }