#include "../../include/receiver/Barbecuer.h"

Barbecuer::Barbecuer(std::string name, std::string store)
{
    cout << "Barbecuer()构造函数" << endl;
    this->name = name;
    this->store = store;
}

Barbecuer::~Barbecuer()
{
    cout << "~Barbecuer()析构函数" << endl;
}

void Barbecuer::bakeMutton()
{
    cout << this->name << "在" << this->store << ",烤羊肉 ..." << endl;
}

void Barbecuer::bakeChickenWing()
{
    cout << this->name << "在" << this->store << ",烤鸡翅 ..." << endl;
}