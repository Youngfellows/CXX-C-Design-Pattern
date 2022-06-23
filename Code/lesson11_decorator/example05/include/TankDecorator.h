#ifndef TANK_DECORATOR_H
#define TANK_DECORATOR_H

#include "./Tank.h"

/**
 * @brief 抽象类: 坦克装饰器
 * 
 */
class TankDecorator : public Tank
{
    protected:
        std::unique_ptr<Tank> tank = nullptr;//被装饰对象

    public:
        TankDecorator(std::unique_ptr<Tank> tank);
        ~TankDecorator();
        virtual void shot() override;//实现shot()函数
        virtual void run() override;//实现run()函数
        virtual string tankName() override;//实现tankName()函数

};
#endif