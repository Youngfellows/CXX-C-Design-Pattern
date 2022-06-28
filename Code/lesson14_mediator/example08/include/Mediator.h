#ifndef MEDIATOR_H_
#define MEDIATOR_H_

// #include <string>
#include "./Global.h"
#include "./Colleague.h"

class Colleague;

/**
 * @brief 抽象中介者
 * 
 */
class Mediator
{
public:
    virtual ~Mediator() = default;
    // 声明抽象方法
    virtual void registerMethod(Colleague *) = 0;
    // 声明抽象方法
    virtual void operation(Colleague *) = 0;
};

#endif // MEDIATOR_H_