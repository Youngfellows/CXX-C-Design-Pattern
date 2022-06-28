#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "./Global.h"
#include "./PersonType.h"
#include "./Mediator.h"

//先声明类,后面定义
class Mediator;



/**
 * @brief  组件基类
 * 
 */
class Colleague
{

public:
    virtual ~Colleague() = default;

    void set_mediator(Mediator *m)
    {
        mediator_ = m;
    }

    Mediator *get_mediator()
    {
        return mediator_;
    }

    void set_personType(PERSON_TYPE pt)
    {
        person_type_ = pt;
    }

    PERSON_TYPE get_person_type()
    {
        return person_type_;
    }

    virtual void ask() = 0;
    virtual void answer() = 0;

private:
    Mediator *mediator_;//中介
    PERSON_TYPE person_type_;
};

#endif