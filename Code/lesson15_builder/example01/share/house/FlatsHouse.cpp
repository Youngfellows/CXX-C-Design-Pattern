#include "../../include/house/FlatsHouse.h"

FlatsHouse::FlatsHouse(std::string name)
{
    this->name = name;
    cout << "FlatsHouse()构造函数" << endl;
}

FlatsHouse::~FlatsHouse()
{
    cout << "~FlatsHouse()析构函数" << endl;
}

void FlatsHouse::setGround(std::string ground)
{
    this->ground = ground;
    cout << "公寓:" << this->name << ",地板:" << this->ground << endl;
}

void FlatsHouse::setWall(std::string wall)
{
    this->wall = wall;
    cout << "公寓:" << this->name << ",墙壁:" << this->wall << endl;
}

void FlatsHouse::setWindow(std::string window)
{
    this->window = window;
    cout << "公寓:" << this->name << ",窗户:" << this->window << endl;
}

void FlatsHouse::setDoor(std::string door)
{
    this->door = door;
    cout << "公寓:" << this->name << ",门:" << this->door << endl;
}

void FlatsHouse::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "公寓:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string FlatsHouse::getGround()
{
    return this->ground;
}

std::string FlatsHouse::getWall()
{
    return this->wall;
}

std::string FlatsHouse::getWindow()
{
    return this->window;
}

std::string FlatsHouse::getDoor()
{
    return this->door;
}

std::string FlatsHouse::getRoof()
{
    return this->roof;
}

void FlatsHouse::showHouse()
{
    cout << "FlatsHouse::showHouse():: 公寓:" << this->name << endl;
    cout << "FlatsHouse::showHouse():: 地板:" << this->ground << endl;
    cout << "FlatsHouse::showHouse():: 墙壁:" << this->wall << endl;
    cout << "FlatsHouse::showHouse():: 窗户:" << this->window << endl;
    cout << "FlatsHouse::showHouse():: 门:" << this->door << endl;
    cout << "FlatsHouse::showHouse():: 屋顶:" << this->roof << endl;
}
