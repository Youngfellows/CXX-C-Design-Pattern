#include "../include/Jeep.h"

Jeep::Jeep()
{
    cout << "Jeep()构造函数" << endl;
}

Jeep::~Jeep()
{
    cout << "~Jeep()析构函数" << endl;
}

void Jeep::makeHead()
{
    cout << "Jeep车,造车头" << endl;
}

void Jeep::makeBody()
{
    cout << "Jeep车,造车身" << endl;
}

void Jeep::makeTail()
{
    cout << "Jeep车,造车尾" << endl;
}