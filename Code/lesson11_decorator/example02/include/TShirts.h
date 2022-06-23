#ifndef TSHIRTS_H
#define TSHIRTS_H

#include "./Finery.h"

/**
 * @brief 派生类: T恤装饰器
 * 
 */
class TShirts : public Finery
{
    private:
        void dressUp();//装扮

    public:
        TShirts() = default;
        TShirts(std::shared_ptr<Person> person);
        ~TShirts() = default;
        virtual void show() override;//实现show()函数
        
};
#endif