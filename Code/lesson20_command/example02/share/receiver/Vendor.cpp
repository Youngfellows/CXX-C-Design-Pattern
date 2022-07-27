#include "../../include/receiver/Vendor.h"

Vendor::Vendor(std::string name, std::string sex, int age, std::string store)
{
    cout << "Vendor()构造函数" << endl;
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->store = store;
}

Vendor::~Vendor()
{
    cout << "~Vendor()析构函数" << endl;
}

void Vendor::sailBanana()
{
    cout << "小商贩:" << this->name << "," << this->sex << "," << this->age << "岁,在店铺" << this->store << ",卖香蕉 ..." << endl;
}

void Vendor::sailApple()
{
    cout << "小商贩:" << this->name << "," << this->sex << "," << this->age << "岁,在店铺" << this->store << ",卖苹果 ..." << endl;
}
