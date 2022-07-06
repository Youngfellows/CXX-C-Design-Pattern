#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    std::shared_ptr<WeatherData> subject = std::make_shared<WeatherData>();                   //被观察者,观察天气数据变化
    std::shared_ptr<Observer> observer = std::make_shared<CurrentConditionsDisplay>(subject); //观察者,显示观察到的天气数据

    //被观察者数据更新
    std::shared_ptr<Weather> weather = std::make_shared<Weather>(26, 0.76, 1024);
    subject->setMeasurements(weather);

    weather = std::make_shared<Weather>(32, 0.88, 1123);
    subject->setMeasurements(weather);

    weather = std::make_shared<Weather>(29, 0.90, 1308);
    subject->setMeasurements(weather);

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}