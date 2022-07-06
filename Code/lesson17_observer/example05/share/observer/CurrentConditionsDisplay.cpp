#include "../../include/observer/CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay()
{
    cout << "CurrentConditionsDisplay()构造函数" << endl;
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
    cout << "~CurrentConditionsDisplay()析构函数" << endl;
}

/**
 * @brief 监听到被观察者数据变化了,更新数据
 *
 */
void CurrentConditionsDisplay::update()
{
    cout << "CurrentConditionsDisplay::update():: ..." << endl;
    //类型转化
    WeatherData *weatherData = dynamic_cast<WeatherData *>(this->subject.get());
    if (weatherData != nullptr)
    {
        this->weather = weatherData->getMeasurements();
        // std::shared_ptr<WeatherData> weatherDataSubject(weatherData);
        // this->weather = weatherDataSubject->getMeasurements();
        this->display();
    }
}

void CurrentConditionsDisplay::display()
{
    cout << "CurrentConditionsDisplay::display():: 温度:" << this->weather->getTemperature() << endl;
    cout << "CurrentConditionsDisplay::display():: 湿度:" << this->weather->getHumidity() << endl;
    cout << "CurrentConditionsDisplay::display():: 气压:" << this->weather->getPressure() << endl;
}