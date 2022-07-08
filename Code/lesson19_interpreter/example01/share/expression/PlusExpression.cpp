#include "../../include/expression/PlusExpression.h"

PlusExpression::PlusExpression()
{
    cout << "PlusExpression()构造函数" << endl;
}

PlusExpression::~PlusExpression()
{
    cout << "~PlusExpression()析构函数" << endl;
}

void PlusExpression::interpreter(IContext *context)
{
    cout << "PlusExpression::interpreter():: ..." << endl;
    int number = context->getNumber(); //获取上下文对象中的数据,操作
    cout << "PlusExpression::interpreter():: start,number:" << number << endl;
    number++;
    cout << "PlusExpression::interpreter():: end,number:" << number << endl;
    context->setNumber(number); //设置自己增加后的数据
}
