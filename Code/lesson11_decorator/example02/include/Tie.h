#ifndef TIE_H
#define TIE_H

#include "./Finery.h"

/**
 * @brief 派生类: 领带装饰器
 * 
 */
class Tie : public Finery
{
    private:
        void dressUp();//装扮

    public:
        Tie() = default;
        Tie(std::shared_ptr<Person> person);
        ~Tie() = default;
        virtual void show() override;//实现show()函数
        
};
#endif