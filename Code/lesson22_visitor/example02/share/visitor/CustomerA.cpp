#include "../../include/visitor/CustomerA.h"

CustomerA::CustomerA(std::string name) : AbsCustomer(name)
{
    cout << "CustomerA()构造函数" << endl;
}

CustomerA::~CustomerA()
{
    cout << "~CustomerA()析构函数" << endl;
}

void CustomerA::visit(std::shared_ptr<IElement> element)
{
    cout << "顾客A:" << this->name << ",通过柜员:" << element->getName() << endl;
    element->doSomeThing();
}