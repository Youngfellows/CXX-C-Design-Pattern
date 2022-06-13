#include "../include/Cat.h"

Cat::Cat(string name)
{
    cout << "Cat()构造函数" << endl;
    this->name = name;
}

Cat::~Cat()
{
    cout << "~Cat()析构函数" << endl;
    cout << endl;
}

void Cat::setName(string name)
{
    cout << "setName():: ..." << endl;
    this->name = name;    
}

string Cat::getName()
{
    cout << "getName():: ..." << endl;
    return this->name;
}

//克隆对象
IAnimal * Cat::clone()
{
    //深度克隆
    return new Cat(this->name);
}

