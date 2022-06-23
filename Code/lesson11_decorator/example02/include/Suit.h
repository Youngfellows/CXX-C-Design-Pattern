#ifndef SUIT_H
#define SUIT_H

#include "./Finery.h"

/**
 * @brief 派生类: 西装装饰器
 * 
 */
class Suit : public Finery
{
    private:
        void dressUp();//装扮

    public:
        Suit() = default;
        Suit(std::shared_ptr<Person> person);
        ~Suit() = default;
        virtual void show() override;//实现show()函数
        
};
#endif