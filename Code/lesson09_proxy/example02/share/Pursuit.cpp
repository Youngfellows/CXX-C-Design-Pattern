#include "../include/Pursuit.h"

Pursuit::Pursuit(std::shared_ptr<SchoolGirl> mm)
{
    cout << "Pursuit()构造函数" << endl;
    this->mm = mm;
}

Pursuit::~Pursuit()
{
    cout << "~Pursuit()析构函数" << endl;
    if(this->mm != nullptr)
    {
        this->mm = nullptr;
    }
}

void Pursuit::giveDolls()
{
    cout << this->mm->getName() << "送你娃娃,我好喜欢你 ..." << endl;
}

void Pursuit::giveFlowers()
{
    cout << this->mm->getName() << "送你花花,做我女朋友好不好 ..." << endl;
}