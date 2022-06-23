#include "../include/Tie.h"

Tie::Tie(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "Tie()构造函数" << endl;
}

void Tie::dressUp()
{
    cout << "Tie::dressUp():: 打领带 ..." << endl;
}

void Tie::show()
{
    cout << "Tie::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}