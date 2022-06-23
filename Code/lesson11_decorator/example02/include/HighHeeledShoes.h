#ifndef HIGH_HEELED_SHOES_H
#define HIGH_HEELED_SHOES_H

#include "./Finery.h"

/**
 * @brief 派生类: 高跟鞋装饰器
 * 
 */
class HighHeeledShoes : public Finery
{
    private:
        void dressUp();//装扮

    public:
        HighHeeledShoes() = default;
        HighHeeledShoes(std::shared_ptr<Person> person);
        ~HighHeeledShoes() = default;
        virtual void show() override;//实现show()函数
        
};
#endif