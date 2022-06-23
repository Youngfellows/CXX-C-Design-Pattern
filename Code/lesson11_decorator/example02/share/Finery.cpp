#include "../include/Finery.h"

Finery::Finery(std::shared_ptr<Person> person)
{
    cout << "Finery()构造函数" << endl;
    //this->person = person;
    this->person.swap(person);//复制指针变量
}

/**
 * @brief 设置被装饰对象
 * 
 * @param person 
 */
void Finery::decorate(std::shared_ptr<Person> person)
{
    //this->person = person;
    this->person.swap(person);//复制指针变量
}

Finery::~Finery()
{
    cout << "~Finery()析构函数" << endl;
    if(this->person != nullptr)
    {
        this->person = nullptr;
    }
}

void Finery::show()
{
    cout << "Finery::show():: ..." << endl;
    this->person->show();
}