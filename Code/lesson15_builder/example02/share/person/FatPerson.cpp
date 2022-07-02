#include "../../include/person/FatPerson.h"

FatPerson::FatPerson(std::string name)
{
    cout << "FatPerson()构造函数" << endl;
    this->name = name;
}

FatPerson::~FatPerson()
{
    cout << "~FatPerson()析构函数" << endl;
}

void FatPerson::drawHead()
{
    cout << "绘制胖子:" << this->name << ",的头,圆圆的 ..." << endl;
}

void FatPerson::drawHand()
{
    cout << "绘制胖子:" << this->name << ",的手,粗粗的 ..." << endl;
}

void FatPerson::drawBody()
{
    cout << "绘制胖子:" << this->name << ",的身体,滚滚的 ..." << endl;
}

void FatPerson::drawFoot()
{
    cout << "绘制胖子:" << this->name << ",的脚,肥肥的 ..." << endl;
}
