#ifndef LIGHT_H
#define LIGHT_H

#include "./Global.h"

/**
 * @brief 子系统: 灯光
 * 
 */
class Light
{
    public:
        Light();
        ~Light();
        void turnOnLight();//打开灯光
        void turnOffLight();//关闭灯光
};
#endif