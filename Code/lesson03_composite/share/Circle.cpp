#include "../include/Circle.h"


Circle::Circle(int x,int y,int r)
{
    cout << "Circle()构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = r;
}

Circle::~Circle()
{
    cout << "~Dot()析构函数" << endl;
}


/**
 * @brief 重写move2somewhere()函数
 * 
 * @param x x坐标
 * @param y y坐标
 */
void Circle::move2somewhere(int x,int y)
{
    this->x += x;
    this->y += y;
    cout << "move2somewhere():: (" << this->x << "," << this->y << ")" << endl;
}

/**
 * @brief 绘制图形
 * 
 */
void Circle::draw()
{
   cout << "draw():: 以圆心(" << this->x << "," << this->y << ")绘制半径为" << this->radius << "的圆" << endl;  
}


