#ifndef FINERY_H
#define FINERY_H

#include "./Person.h"


/**
 * @brief 抽象类: Person类装饰器
 * 
 */
class Finery : public Person
{
    private:
        std::shared_ptr<Person> person = nullptr;//被装饰对象   

    public:
        Finery() = default;
        Finery(std::shared_ptr<Person> person);
        virtual void decorate(std::shared_ptr<Person> person);
        ~Finery();
        virtual void show() override;//实现show()函数
};
#endif