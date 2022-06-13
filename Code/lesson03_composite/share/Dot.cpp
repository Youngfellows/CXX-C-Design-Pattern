#include "../include/Dot.h"


Dot::Dot(int x,int y)
{
    cout << "Dot()构造函数" << endl;
    this->x = x;
    this->y = y;
}

Dot::~Dot()
{
    cout << "~Dot()析构函数" << endl;
}


/**
 * @brief 重写move2somewhere()函数
 * 
 * @param x x坐标
 * @param y y坐标
 */
void Dot::move2somewhere(int x,int y)
{
    this->x += x;
    this->y += y;
    cout << "move2somewhere():: (" << this->x << "," << this->y << ")" << endl;
}

/**
 * @brief 绘制图形
 * 
 */
void Dot::draw()
{
   cout << "draw():: 在(" << this->x << "," << this->y << ")位置绘制点" << endl;  
}


