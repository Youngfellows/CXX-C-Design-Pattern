#include "../../include/house/Skyscrapers.h"

Skyscrapers::Skyscrapers(std::string name)
{
    this->name = name;
    cout << "Skyscrapers()构造函数" << endl;
}

Skyscrapers::~Skyscrapers()
{
    cout << "~Skyscrapers()析构函数" << endl;
}

void Skyscrapers::setGround(std::string ground)
{
    this->ground = ground;
    cout << "摩天大楼:" << this->name << ",地板:" << this->ground << endl;
}

void Skyscrapers::setWall(std::string wall)
{
    this->wall = wall;
    cout << "摩天大楼:" << this->name << ",墙壁:" << this->wall << endl;
}

void Skyscrapers::setWindow(std::string window)
{
    this->window = window;
    cout << "摩天大楼:" << this->name << ",窗户:" << this->window << endl;
}

void Skyscrapers::setDoor(std::string door)
{
    this->door = door;
    cout << "摩天大楼:" << this->name << ",门:" << this->door << endl;
}

void Skyscrapers::setRoof(std::string roof)
{
    this->roof = roof;
    cout << "摩天大楼:" << this->name << ",屋顶:" << this->roof << endl;
}

std::string Skyscrapers::getGround()
{
    return this->ground;
}

std::string Skyscrapers::getWall()
{
    return this->wall;
}

std::string Skyscrapers::getWindow()
{
    return this->window;
}

std::string Skyscrapers::getDoor()
{
    return this->door;
}

std::string Skyscrapers::getRoof()
{
    return this->roof;
}

void Skyscrapers::showHouse()
{
    cout << "Skyscrapers::showHouse():: 摩天大楼:" << this->name << endl;
    cout << "Skyscrapers::showHouse():: 地板:" << this->ground << endl;
    cout << "Skyscrapers::showHouse():: 墙壁:" << this->wall << endl;
    cout << "Skyscrapers::showHouse():: 窗户:" << this->window << endl;
    cout << "Skyscrapers::showHouse():: 门:" << this->door << endl;
    cout << "Skyscrapers::showHouse():: 屋顶:" << this->roof << endl;
}
