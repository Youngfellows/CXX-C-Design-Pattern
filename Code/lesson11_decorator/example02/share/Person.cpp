#include "../include/Person.h"

Person::Person(const string &name,int age)
{
    cout << "Person()构造函数1" << endl;
    this->name = name;
    this->age = age;
}

Person::Person(string &&name,int age)
{
    cout << "Person()构造函数2" << endl;
    this->name = std::move(name);
    this->age = age;
}

string Person::getName()
{
    return this->name;
}

int Person::getAge()
{
    return this->age;
}