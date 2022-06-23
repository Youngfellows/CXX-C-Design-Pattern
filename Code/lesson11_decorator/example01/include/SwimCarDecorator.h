#ifndef SWIM_CAR_DECORATOR_H
#define SWIM_CAR_DECORATOR_H

#include "./Car.h"

/**
 * @brief 装饰器: 可以游的车
 * 
 */
class SwimCarDecorator : public Car
{
    private:
        Car *car =  nullptr;//需要被装饰的对象

    public:
        SwimCarDecorator(Car *car);
        ~SwimCarDecorator();
        virtual void show() override;//实现show()函数
        void swim();
};
#endif