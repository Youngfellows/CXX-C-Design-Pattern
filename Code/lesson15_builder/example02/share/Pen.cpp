#include "../include/Pen.h"

Pen::Pen(std::string brand, double font)
{
    this->brand = brand;
    this->font = font;
}

void Pen::use()
{
    cout << "Pen::use():: 画笔品牌:" << this->brand << ",字体:" << this->font << endl; 
}