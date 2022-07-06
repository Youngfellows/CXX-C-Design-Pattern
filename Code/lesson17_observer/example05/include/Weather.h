#ifndef WEATHER_H
#define WEATHER_H

#include "./Global.h"

/**
 * @brief 实体类: 天气信息
 *
 */
class Weather
{
private:
    float temperature = 0.0; //温度
    float humidity = 0.0;    //湿度
    float pressure = 0.0;    //气压

public:
    Weather(float t, float h, float p);
    ~Weather();
    float getTemperature();
    float getHumidity();
    float getPressure();
};
#endif