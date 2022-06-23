#include "../include/LeatherShoes.h"

LeatherShoes::LeatherShoes(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "LeatherShoes()构造函数" << endl;
}

void LeatherShoes::dressUp()
{
    cout << "LeatherShoes::dressUp():: 穿皮鞋 ..." << endl;
}

void LeatherShoes::show()
{
    cout << "LeatherShoes::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}