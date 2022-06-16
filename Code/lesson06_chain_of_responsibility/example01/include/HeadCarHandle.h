#ifndef HEAD_CAR_HANDLE_H
#define HEAD_CAR_HANDLE_H

#include "./CarHandle.h"

/**
 * @brief 具体类: 造车头
 * 
 */
class HeadCarHandle : public CarHandle
{
    public:
        HeadCarHandle();
        ~HeadCarHandle();
        virtual void handleCar() override;//覆写handleCar()函数
};
#endif