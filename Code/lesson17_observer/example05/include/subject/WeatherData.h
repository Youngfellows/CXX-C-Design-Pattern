#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "../BaseSubject.h"
#include "../Weather.h"

/**
 * @brief 派生类: 被观察者的具体实现,天气信息被观察者
 *
 */
class WeatherData : public BaseSubject
{
private:
    std::shared_ptr<Weather> weather = nullptr; //天气数据

public:
    WeatherData();
    ~WeatherData();
    void setMeasurements(std::shared_ptr<Weather> weather); //设置测量到的天气数据
    std::shared_ptr<Weather> getMeasurements();             //获取测量天气数据

private:
    void measurementChanged(); //测量数据变化了
};
#endif