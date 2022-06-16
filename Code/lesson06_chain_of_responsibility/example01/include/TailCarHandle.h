#ifndef TAIL_CAR_HANDLE_H
#define TAIL_CAR_HANDLE_H

#include "./CarHandle.h"

/**
 * @brief 具体类: 造车尾
 * 
 */
class TailCarHandle : public CarHandle
{
    public:
        TailCarHandle();
        ~TailCarHandle();
        virtual void handleCar() override;//覆写handleCar()函数
};
#endif