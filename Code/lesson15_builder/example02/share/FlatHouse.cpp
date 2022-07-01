#include "../include/FlatHouse.h"

FlatHouse::FlatHouse(std::string name)
{
    this->name = name;
    cout << "FlatHouse()构造函数" << endl;
}

FlatHouse::~FlatHouse()
{
    cout << "~FlatHouse()析构函数" << endl;
}

void FlatHouse::setGround(std::string ground)
{
    this->ground = ground;
    cout << "公寓:" << this->name << ",地板:" << this->ground << endl;
}

void FlatHouse::setWall(std::string wall)
{
    this->wall = wall;
    cout << "公寓:" << this->name << ",墙壁:" << this->wall << endl;
}

void FlatHouse::setWindow(std::string window)
{
    this->window = window;
    cout << "公寓:" << this->name << ",窗户:" << this->window << endl;
}

void FlatHouse::setDoor(std::string door)
{
    this->door = door;
    cout << "公寓:" << this->name << ",门:" << this->door << endl;
}

void FlatHouse::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "公寓:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string FlatHouse::getGround()
{
    return this->ground;
}

std::string FlatHouse::getWall()
{
    return this->wall;
}

std::string FlatHouse::getWindow()
{
    return this->window;
}

std::string FlatHouse::getDoor()
{
    return this->door;
}

std::string FlatHouse::getRoof()
{
    return this->roof;
}

void FlatHouse::showHouse()
{
    cout << "FlatHouse::showHouse():: 公寓:" << this->name << endl;
    cout << "FlatHouse::showHouse():: 地板:" << this->ground << endl;
    cout << "FlatHouse::showHouse():: 墙壁:" << this->wall << endl;
    cout << "FlatHouse::showHouse():: 窗户:" << this->window << endl;
    cout << "FlatHouse::showHouse():: 门:" << this->door << endl;
    cout << "FlatsHouse::showHouse():: 屋顶:" << this->roof << endl;
}
