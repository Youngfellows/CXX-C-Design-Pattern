#include "../include/MovingBanner.h"

MovingBanner::MovingBanner() : Banner()
{
    cout << "MovingBanner()无参数构造函数" << endl; 
}

MovingBanner::MovingBanner(string title) : Banner()
{
    cout << "MovingBanner()有参数构造函数" << endl;
    this->title = title;
}

/**
 * @brief 构造函数,并初始化父类属性
 * 
 * @param content 父类属性
 */
MovingBanner::MovingBanner(string title,string c) : Banner(c)
{
    cout << "MovingBanner()构造函数" << endl;
    this->title = title;
    //this->content = c;
}

void MovingBanner::showWithParen()
{
    cout << "MovingBanner::showWithParen():: title:" << this->title << endl;
    cout << "MovingBanner::showWithParen():: <<<" << this->content << ">>>" << endl;
}

void MovingBanner::showWithStar()
{
    cout << "MovingBanner::showWithStar():: title:" << this->title << endl;
    cout << "MovingBanner::showWithStar():: ****-^_^-****" << this->content << "*****-^_^-****" << endl;
}
