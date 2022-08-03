#include "../../include/visitor/CustomerB.h"

CustomerB::CustomerB(std::string name) : AbsCustomer(name)
{
    cout << "CustomerB()构造函数" << endl;
}

CustomerB::~CustomerB()
{
    cout << "~CustomerB()析构函数" << endl;
}

void CustomerB::visit(std::shared_ptr<IElement> element)
{
    cout << "顾客B:" << this->name << ",通过柜员:" << element->getName() << endl;
    element->doSomeThing();
}