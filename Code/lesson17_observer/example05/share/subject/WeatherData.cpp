#include "../../include/subject/WeatherData.h"

WeatherData::WeatherData()
{
    cout << "WeatherData()构造函数" << endl;
}

WeatherData::~WeatherData()
{
    cout << "~WeatherData()析构函数" << endl;
}

/**
 * @brief 设置测量到的天气数据
 *
 * @param weather 测量到的天气数据
 */
void WeatherData::setMeasurements(std::shared_ptr<Weather> weather)
{
    this->weather = weather;
    this->measurementChanged();
}

/**
 * @brief 获取测量到的天气数据
 *
 * @return std::shared_ptr<Weather> 返回测量到的天气数据
 */
std::shared_ptr<Weather> WeatherData::getMeasurements()
{
    return this->weather;
}

/**
 * @brief 测量数据变化了,通知各个观察者
 *
 */
void WeatherData::measurementChanged()
{
    cout << "WeatherData::measurementChanged():: 测量到的天气数据变化了 ..." << endl;
    BaseSubject::notifyObservers(); //调用父类的通知观察者方法
}
