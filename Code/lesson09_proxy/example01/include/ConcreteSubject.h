#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "./Subject.h"

/**
 * @brief 派生类: 定义抽象主体类的派生类，描述一个具体的主体
 * 
 */
class ConcreteSubject : public Subject
{

    public:
        ConcreteSubject();
        ~ConcreteSubject();

        /**
         * @brief 覆写request()抽象函数
         * 
         */
        virtual void request() override;
};
#endif