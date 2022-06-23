#ifndef FLY_CAR_DECORATOR_H
#define FLY_CAR_DECORATOR_H

#include "./Car.h"

/**
 * @brief 装饰器: 可以飞的车
 * 
 */
class FlyCarDecorator : public Car
{
    private:
        Car *car =  nullptr;//需要被装饰的对象

    public:
        FlyCarDecorator(Car *car);
        ~FlyCarDecorator();
        virtual void show() override;//实现show()函数
        void swim();
};
#endif