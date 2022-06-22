#include "../include/Character.h"

Character::Character(string symbol)
{
    cout << "Character()构造函数" << endl;
    this->symbol = symbol;
    this->weight = 100;
    this->height = 200;
    this->color = "黑色";
}

Character::~Character()
{
    cout << "~Character()析构函数" << endl;
}

void Character::setSize(int w,int h)
{
    this->weight = w;
    this->height = h;
}

void Character::setCharColor(string color)
{
    this->color = color;
}

void Character::display()
{
    cout << this->symbol << ",颜色:" << this->color << ",大小(" << this->weight << "," << this->height << ")" << endl;
}