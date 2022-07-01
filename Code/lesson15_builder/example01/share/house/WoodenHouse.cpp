#include "../../include/house/WoodenHouse.h"

WoodenHouse::WoodenHouse(std::string name)
{
    this->name = name;
    cout << "WoodenHouse()构造函数" << endl;
}

WoodenHouse::~WoodenHouse()
{
    cout << "~WoodenHouse()析构函数" << endl;
}

void WoodenHouse::setGround(std::string ground)
{
    this->ground = ground;
    cout << "木屋:" << this->name << ",地板:" << this->ground << endl;
}

void WoodenHouse::setWall(std::string wall)
{
    this->wall = wall;
    cout << "木屋:" << this->name << ",墙壁:" << this->wall << endl;
}

void WoodenHouse::setWindow(std::string window)
{
    this->window = window;
    cout << "木屋:" << this->name << ",窗户:" << this->window << endl;
}

void WoodenHouse::setDoor(std::string door)
{
    this->door = door;
    cout << "木屋:" << this->name << ",门:" << this->door << endl;
}

void WoodenHouse::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "木屋:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string WoodenHouse::getGround()
{
    return this->ground;
}

std::string WoodenHouse::getWall()
{
    return this->wall;
}

std::string WoodenHouse::getWindow()
{
    return this->window;
}

std::string WoodenHouse::getDoor()
{
    return this->door;
}

std::string WoodenHouse::getRoof()
{
    return this->roof;
}

void WoodenHouse::showHouse()
{
    cout << "WoodenHouse::showHouse():: 木屋:" << this->name << endl;
    cout << "WoodenHouse::showHouse():: 地板:" << this->ground << endl;
    cout << "WoodenHouse::showHouse():: 墙壁:" << this->wall << endl;
    cout << "WoodenHouse::showHouse():: 窗户:" << this->window << endl;
    cout << "WoodenHouse::showHouse():: 门:" << this->door << endl;
    cout << "WoodenHouse::showHouse():: 屋顶:" << this->roof << endl;
}
