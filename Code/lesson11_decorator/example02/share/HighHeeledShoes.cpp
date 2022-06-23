#include "../include/HighHeeledShoes.h"

HighHeeledShoes::HighHeeledShoes(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "HighHeeledShoes()构造函数" << endl;
}

void HighHeeledShoes::dressUp()
{
    cout << "HighHeeledShoes::dressUp():: 穿高跟鞋 ..." << endl;
}

void HighHeeledShoes::show()
{
    cout << "HighHeeledShoes::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}