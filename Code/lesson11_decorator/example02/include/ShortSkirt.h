#ifndef SHORT_SKIRT_H
#define SHORT_SKIRT_H

#include "./Finery.h"

/**
 * @brief 派生类: 短裙装饰器
 * 
 */
class ShortSkirt : public Finery
{
    private:
        void dressUp();//装扮

    public:
        ShortSkirt() = default;
        ShortSkirt(std::shared_ptr<Person> person);
        ~ShortSkirt() = default;
        virtual void show() override;//实现show()函数
        
};
#endif