#include "../include/Engineer.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 姓名
 * @param age 年龄
 * @param post 职位
 */
Engineer::Engineer(const string &name,int age,const string &post) : Person(name,age)
{
    cout << "Engineer()构造函数1" << endl;
    this->post = post;
}

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 姓名
 * @param age 年龄
 * @param post 职位
 */
Engineer::Engineer(string &&name,int age,string &&post) : Person(std::move(name),age)
{
    cout << "Engineer()构造函数2" << endl;
    this->post = post;
}

void Engineer::show()
{   
    //调用父类的方法
    string name =  Person::getName();
    int age = Person::getAge();
    cout << "Engineer::show():: 工程师:" << name << ",年龄:" << age << ",职位:" << this->post << endl;
}
