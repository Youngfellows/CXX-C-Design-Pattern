#include "../include/SchoolGirl.h"

SchoolGirl::SchoolGirl()
{
    cout << "SchoolGirl()无参数构造函数" << endl;
}

SchoolGirl::SchoolGirl(string name)
{
    cout << "SchoolGirl()有参数构造函数" << endl;
    this->name = name;
}

SchoolGirl::~SchoolGirl()
{
    cout << "~SchoolGirl()析构函数" << endl;
}

void SchoolGirl::setName(string name)
{
    this->name = name;
}

 string SchoolGirl::getName()
 {
     return this->name;
 }