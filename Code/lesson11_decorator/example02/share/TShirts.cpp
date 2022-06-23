#include "../include/TShirts.h"

TShirts::TShirts(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "TShirts()构造函数" << endl;
}

void TShirts::dressUp()
{
    cout << "TShirts::dressUp():: 穿 T恤 ..." << endl;
}

void TShirts::show()
{
    cout << "TShirts::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}