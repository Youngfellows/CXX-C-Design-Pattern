#include "../include/BigTrouser.h"

BigTrouser::BigTrouser(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "BigTrouser()构造函数" << endl;
}

void BigTrouser::dressUp()
{
    cout << "BigTrouser::dressUp():: 穿垮裤 ..." << endl;
}

void BigTrouser::show()
{
    cout << "BigTrouser::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}