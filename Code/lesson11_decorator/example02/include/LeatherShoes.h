#ifndef LEATHER_SHOES_H
#define LEATHER_SHOES_H

#include "./Finery.h"

/**
 * @brief 派生类: 皮鞋装饰器
 * 
 */
class LeatherShoes : public Finery
{
    private:
        void dressUp();//装扮

    public:
        LeatherShoes() = default;
        LeatherShoes(std::shared_ptr<Person> person);
        ~LeatherShoes() = default;
        virtual void show() override;//实现show()函数
        
};
#endif