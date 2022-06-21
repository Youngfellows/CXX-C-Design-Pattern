#include "../include/Person.h"

Person::Person(string name,int age)
{
    cout << "Person()构造函数" << endl;
    this->name = name;
    this->age = age;
}

Person::~Person()
{
    cout << "~Person()析构函数" << endl;
}
