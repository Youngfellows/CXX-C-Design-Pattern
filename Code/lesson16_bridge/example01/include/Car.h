#ifndef CAR_H
#define CAR_H

#include "./Global.h"
#include "./Engine.h"

/**
 * @brief 抽象类: 车抽象类
 *
 */
class Car
{
protected:
    Engine *engine = nullptr; //发动机

public:
    Car(Engine *engine);
    virtual ~Car();

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 安装xx型号发动机
     *
     */
    virtual void installEngine() = 0;
};
#endif