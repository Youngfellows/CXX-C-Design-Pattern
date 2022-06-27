#ifndef MOMO_H
#define MOMO_H

#include "./Mediator.h"
#include "./Person.h"

/**
 * @brief 中介者实现类: 陌陌交友平台
 *
 */
class Momo : public Mediator
{
    private:
        bool manAllow(Person *man,Person *woman);//男生是否满意女生
        bool womanAllow(Person *man,Person *woman);//女生是否满意男生

    public:
        Momo() = default;
        ~Momo() = default;
        virtual bool getParter(Person *man, Person *woman) override; //实现getParter()函数
};
#endif