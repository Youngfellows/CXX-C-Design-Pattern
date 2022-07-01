#include "../../include/house/VillaHouse.h"

VillaHouse::VillaHouse(std::string name)
{
    this->name = name;
    cout << "VillaHouse()构造函数" << endl;
}

VillaHouse::~VillaHouse()
{
    cout << "~VillaHouse()析构函数" << endl;
}

void VillaHouse::setGround(std::string ground)
{
    this->ground = ground;
    cout << "别墅:" << this->name << ",地板:" << this->ground << endl;
}

void VillaHouse::setWall(std::string wall)
{
    this->wall = wall;
    cout << "别墅:" << this->name << ",墙壁:" << this->wall << endl;
}

void VillaHouse::setWindow(std::string window)
{
    this->window = window;
    cout << "别墅:" << this->name << ",窗户:" << this->window << endl;
}

void VillaHouse::setDoor(std::string door)
{
    this->door = door;
    cout << "别墅:" << this->name << ",门:" << this->door << endl;
}

void VillaHouse::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "别墅:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string VillaHouse::getGround()
{
    return this->ground;
}

std::string VillaHouse::getWall()
{
    return this->wall;
}

std::string VillaHouse::getWindow()
{
    return this->window;
}

std::string VillaHouse::getDoor()
{
    return this->door;
}

std::string VillaHouse::getRoof()
{
    return this->roof;
}

void VillaHouse::showHouse()
{
    cout << "FlatsHouse::showHouse():: 别墅:" << this->name << endl;
    cout << "FlatsHouse::showHouse():: 地板:" << this->ground << endl;
    cout << "FlatsHouse::showHouse():: 墙壁:" << this->wall << endl;
    cout << "FlatsHouse::showHouse():: 窗户:" << this->window << endl;
    cout << "FlatsHouse::showHouse():: 门:" << this->door << endl;
    cout << "FlatsHouse::showHouse():: 屋顶:" << this->roof << endl;
}
