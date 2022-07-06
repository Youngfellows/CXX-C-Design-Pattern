#ifndef CURRENT_CONDITIONS_DISPLAY_H
#define CURRENT_CONDITIONS_DISPLAY_H

#include "../DisplayElement.h"
#include "../Observer.h"
#include "../Weather.h"
#include "../subject/WeatherData.h"

/**
 * @brief 派生类: 显示当前天气条件观察者
 *
 */
class CurrentConditionsDisplay : public Observer, public DisplayElement
{
private:
    std::shared_ptr<Weather> weather = nullptr; //天气数据

public:
    using Observer::Observer; //使用父类函数
    CurrentConditionsDisplay();
    ~CurrentConditionsDisplay();
    virtual void display() override; //实现display()函数
    virtual void update() override;  //实现update()函数
};
#endif