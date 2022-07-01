#include "../../include/house/StoneHouse.h"

StoneHouse::StoneHouse(std::string name)
{
    this->name = name;
    cout << "StoneHouse()构造函数" << endl;
}

StoneHouse::~StoneHouse()
{
    cout << "~StoneHouse()析构函数" << endl;
}

void StoneHouse::setGround(std::string ground)
{
    this->ground = ground;
    cout << "石屋:" << this->name << ",地板:" << this->ground << endl;
}

void StoneHouse::setWall(std::string wall)
{
    this->wall = wall;
    cout << "石屋:" << this->name << ",墙壁:" << this->wall << endl;
}

void StoneHouse::setWindow(std::string window)
{
    this->window = window;
    cout << "石屋:" << this->name << ",窗户:" << this->window << endl;
}

void StoneHouse::setDoor(std::string door)
{
    this->door = door;
    cout << "石屋:" << this->name << ",门:" << this->door << endl;
}

void StoneHouse::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "石屋:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string StoneHouse::getGround()
{
    return this->ground;
}

std::string StoneHouse::getWall()
{
    return this->wall;
}

std::string StoneHouse::getWindow()
{
    return this->window;
}

std::string StoneHouse::getDoor()
{
    return this->door;
}

std::string StoneHouse::getRoof()
{
    return this->roof;
}

void StoneHouse::showHouse()
{
    cout << "StoneHouse::showHouse():: 石屋:" << this->name << endl;
    cout << "StoneHouse::showHouse():: 地板:" << this->ground << endl;
    cout << "StoneHouse::showHouse():: 墙壁:" << this->wall << endl;
    cout << "StoneHouse::showHouse():: 窗户:" << this->window << endl;
    cout << "StoneHouse::showHouse():: 门:" << this->door << endl;
    cout << "StoneHouse::showHouse():: 屋顶:" << this->roof << endl;
}
