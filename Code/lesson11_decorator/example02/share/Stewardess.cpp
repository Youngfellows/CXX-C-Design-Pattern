#include "../include/Stewardess.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 姓名
 * @param age 年龄
 * @param post 职位
 */
Stewardess::Stewardess(const string &name,int age,const string &airlines) : Person(name,age)
{
    cout << "Engineer()构造函数1" << endl;
    this->airlines = airlines;
}

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 姓名
 * @param age 年龄
 * @param post 职位
 */
Stewardess::Stewardess(string &&name,int age,string &&airlines) : Person(std::move(name),age)
{
    cout << "Stewardess()构造函数2" << endl;
    this->airlines = airlines;
}

void Stewardess::show()
{   
    //调用父类的方法
    string name =  Person::getName();
    int age = Person::getAge();
    cout << "Stewardess::show():: 工程师:" << name << ",年龄:" << age << ",航空公司:" << this->airlines << endl;
}
