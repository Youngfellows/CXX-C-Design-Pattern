#ifndef DRESS_H
#define DRESS_H

#include "./Finery.h"

/**
 * @brief 派生类: 连衣裙装饰器
 * 
 */
class Dress : public Finery
{
    private:
        void dressUp();//装扮

    public:
        Dress() = default;
        Dress(std::shared_ptr<Person> person);
        ~Dress() = default;
        virtual void show() override;//实现show()函数
        
};
#endif