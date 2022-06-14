#include "../include/OperationFactory.h"

OperationFactory::OperationFactory()
{
    cout << "OperationFactory()构造函数" << endl;
}

OperationFactory::~OperationFactory()
{
    cout << "~OperationFactory()析构函数" << endl;
}

 /**
  * @brief 根据类型生成运算产品
  * 
  * @param type 类型
  * @return Operation* 运算指针变量
  */
 Operation * OperationFactory::create(string type)
 {
    Operation *operation = NULL;
    if(ADD == type)
    {
        operation = new AddOperation();
    }else if(SUB == type)
    {
        operation = new SubOperation();
    }else if(MUL == type)
    {
        operation = new MulOperation();
    }else if(DIV == type)
    {
        operation = new DivOperation();
    }
    return operation;
 }