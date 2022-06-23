#ifndef T50_H
#define T50_H

#include "./Tank.h"

/**
 * @brief 派生类: T50坦克
 * 
 */
class T50 : public Tank
{
    private:
    public:
        T50() = default;
        ~T50() = default;
        virtual void shot() override;//实现shot()函数
        virtual void run() override;//实现run()函数
        virtual string tankName() override;//实现tankName()函数
};
#endif