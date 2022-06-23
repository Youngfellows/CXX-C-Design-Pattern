#ifndef SNEAKERS_H
#define SNEAKERS_H

#include "./Finery.h"

/**
 * @brief 派生类: 球鞋装饰器
 * 
 */
class Sneakers : public Finery
{
    private:
        void dressUp();//装扮

    public:
        Sneakers() = default;
        Sneakers(std::shared_ptr<Person> person);
        ~Sneakers() = default;
        virtual void show() override;//实现show()函数
        
};
#endif