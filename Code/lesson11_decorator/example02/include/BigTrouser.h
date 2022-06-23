#ifndef BIG_TROUSER_H
#define BIG_TROUSER_H

#include "./Finery.h"

/**
 * @brief 派生类: 垮裤装饰器
 * 
 */
class BigTrouser : public Finery
{
    private:
        void dressUp();//装扮

    public:
        BigTrouser() = default;
        BigTrouser(std::shared_ptr<Person> person);
        ~BigTrouser() = default;
        virtual void show() override;//实现show()函数
        
};
#endif