#ifndef RUN_CAR_H
#define RUN_CAR_H

#include "./Car.h"

/**
 * @brief 派生类: 跑车
 * 
 */
class RunCar : public Car
{
    public:
        RunCar(const string &name);
        RunCar(string &&name);
        ~RunCar();
        virtual void show() override;//实现show()函数
};
#endif