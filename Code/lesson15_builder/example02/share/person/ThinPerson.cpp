#include "../../include/person/ThinPerson.h"

ThinPerson::ThinPerson(std::string name)
{
    cout << "ThinPerson()构造函数" << endl;
    this->name = name;
}

ThinPerson::~ThinPerson()
{
    cout << "~ThinPerson()析构函数" << endl;
}

void ThinPerson::drawHead()
{
    cout << "绘制瘦子:" << this->name << ",的头,瘦瘦的 ..." << endl;
}

void ThinPerson::drawHand()
{
    cout << "绘制瘦子:" << this->name << ",的手,长长的 ..." << endl;
}

void ThinPerson::drawBody()
{
    cout << "绘制瘦子:" << this->name << ",的身体,瘦小的 ..." << endl;
}

void ThinPerson::drawFoot()
{
    cout << "绘制瘦子:" << this->name << ",的脚,短短的 ..." << endl;
}