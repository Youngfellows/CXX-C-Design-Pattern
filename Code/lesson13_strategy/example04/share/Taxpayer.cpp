#include "../include/Taxpayer.h"

Taxpayer::Taxpayer(string name,double revenue)
{
    this->name = name;
    this->revenue = revenue;
}

string Taxpayer::getName()
{
    return this->name;
}

double Taxpayer::getRevenue()
{
    return this->revenue;
}