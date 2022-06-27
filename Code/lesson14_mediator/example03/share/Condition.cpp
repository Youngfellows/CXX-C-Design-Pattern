#include "../include/Condition.h"

Condition::Condition(bool haveHouse, bool haveCar, std::string address, std::string job, double deposit)
{
    this->house = haveHouse;
    this->car = haveCar;
    this->address = address;
    this->job = job;
    this->deposit = deposit;
}

bool Condition::haveHouse()
{
    return this->house;   
}

bool Condition::haveCar()
{
    return this->car;
}

std::string Condition::getAddress()
{
    return this->address;
}

std::string Condition::getJob()
{
    return this->job;
}

double Condition::getDeposit()
{
    return this->deposit;
}
