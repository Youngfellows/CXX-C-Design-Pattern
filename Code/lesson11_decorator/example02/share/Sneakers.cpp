#include "../include/Sneakers.h"

Sneakers::Sneakers(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "Sneakers()构造函数" << endl;
}

void Sneakers::dressUp()
{
    cout << "Sneakers::dressUp():: 穿破球鞋 ..." << endl;
}

void Sneakers::show()
{
    cout << "Sneakers::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}