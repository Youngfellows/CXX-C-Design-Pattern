#ifndef BODY_CAR_HANDLE_H
#define BODY_CAR_HANDLE_H

#include "./CarHandle.h"

/**
 * @brief 具体类: 造车身
 * 
 */
class BodyCarHandle : public CarHandle
{
    public:
        BodyCarHandle();
        ~BodyCarHandle();
        virtual void handleCar() override;//覆写handleCar()函数
};
#endif