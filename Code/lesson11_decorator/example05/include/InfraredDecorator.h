#ifndef INFRARED_DECORATOR_H
#define INFRARED_DECORATOR_H

#include "./TankDecorator.h"

/**
 * @brief 派生类: 红外坦克装饰器
 * 
 */
class InfraredDecorator : public TankDecorator
{
    private:
        string infrared;//红外线

    public:
        InfraredDecorator(std::unique_ptr<Tank> tank);
        ~InfraredDecorator() = default;
        virtual void shot() override;//实现shot()函数
        virtual void run() override;//实现run()函数
        virtual string tankName() override;//实现tankName()函数

    private:
        void setInfrared(const string &infrared);//设置红外
        string getInfrared();//获取红外
};
#endif