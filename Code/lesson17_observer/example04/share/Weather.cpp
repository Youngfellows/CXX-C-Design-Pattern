#include "../include/Weather.h"

Weather::Weather(float t, float h, float p)
{
    cout << "Weather()构造函数" << endl;
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
}

Weather::~Weather()
{
    cout << "~Weather()析构函数" << endl;
}

float Weather::getTemperature()
{
    return this->temperature;
}

float Weather::getHumidity()
{
    return this->humidity;
}

float Weather::getPressure()
{
    return this->pressure;
}