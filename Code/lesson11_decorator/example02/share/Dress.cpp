#include "../include/Dress.h"

Dress::Dress(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "Dress()构造函数" << endl;
}

void Dress::dressUp()
{
    cout << "Dress::dressUp():: 穿连衣裙 ..." << endl;
}

void Dress::show()
{
    cout << "BigTrouser::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}