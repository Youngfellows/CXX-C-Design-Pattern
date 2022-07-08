#include "../../include/expression/MinusExpression.h"

MinusExpression::MinusExpression()
{
    cout << "MinusExpression()构造函数" << endl;
}

MinusExpression::~MinusExpression()
{
    cout << "~MinusExpression()析构函数" << endl;
}

void MinusExpression::interpreter(IContext *context)
{
    cout << "MinusExpression::interpreter():: ..." << endl;
    int number = context->getNumber(); //获取上下文对象中的数据,操作
    cout << "MinusExpression::interpreter():: start,number:" << number << endl;
    number--;
    cout << "MinusExpression::interpreter():: end,number:" << number << endl;
    context->setNumber(number); //设置自己增加后的数据
}
