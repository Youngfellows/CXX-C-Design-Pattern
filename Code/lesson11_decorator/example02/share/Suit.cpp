#include "../include/Suit.h"

Suit::Suit(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "Suit()构造函数" << endl;
}

void Suit::dressUp()
{
    cout << "Suit::dressUp():: 穿西装 ..." << endl;
}

void Suit::show()
{
    cout << "Suit::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}