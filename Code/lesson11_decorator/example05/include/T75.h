#ifndef T75_H
#define T75_H

#include "./Tank.h"

/**
 * @brief 派生类: T75坦克
 * 
 */
class T75 : public Tank
{
    private:
    public:
        T75() = default;
        ~T75() = default;
        virtual void shot() override;//实现shot()函数
        virtual void run() override;//实现run()函数
        virtual string tankName() override;//实现tankName()函数
};
#endif