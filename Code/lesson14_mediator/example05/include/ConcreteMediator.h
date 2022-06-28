#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "./Global.h"
#include "./Mediator.h"
#include "./Colleague.h"

/**
 * @brief 派生类,中介的具体实现
 *
 */
class ConcreteMediator : public Mediator
{
    private:
        std::vector<Colleague *> *colleagues; //保存同仁对象的容器

    public:
        ConcreteMediator();
        ~ConcreteMediator();
        virtual void add(Colleague *const colleague) override;                                 //实现add()函数
        virtual void distribute(Colleague *const sender, const std::string &message) override; //实现distribute()函数
};
#endif