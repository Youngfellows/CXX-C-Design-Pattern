#include "../include/Proxy.h"

Proxy::Proxy(std::shared_ptr<SchoolGirl> mm)
{
    cout << "Proxy()构造函数" << endl;
    this->pursuit = std::make_shared<Pursuit>(mm);
}

Proxy::~Proxy()
{
    cout << "Proxy()析构函数" << endl;
    if(this->pursuit != nullptr)
    {
        this->pursuit = nullptr;
    }
}

void Proxy::giveDolls()
{
    cout << "Proxy::giveDolls()::" << endl;
    this->pursuit->giveDolls();
}

void Proxy::giveFlowers()
{
    cout << "Proxy::giveFlowers()::" << endl;
    this->pursuit->giveFlowers();
}