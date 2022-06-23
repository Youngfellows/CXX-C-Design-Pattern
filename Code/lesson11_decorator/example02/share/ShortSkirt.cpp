#include "../include/ShortSkirt.h"

ShortSkirt::ShortSkirt(std::shared_ptr<Person> person) : Finery(person)
{
    cout << "ShortSkirt()构造函数" << endl;
}

void ShortSkirt::dressUp()
{
    cout << "ShortSkirt::dressUp():: 穿短裙 ..." << endl;
}

void ShortSkirt::show()
{
    cout << "ShortSkirt::show():: ..." << endl;
    //调用父类的函数
    Finery::show();
    this->dressUp();//调用自己特有方法
}