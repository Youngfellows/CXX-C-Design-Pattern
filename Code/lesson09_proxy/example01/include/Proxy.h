#ifndef PROXY_H
#define PROXY_H

#include "./Subject.h"
#include "./ConcreteSubject.h"

/**
 * @brief 定义代理类
 * 
 */
class Proxy : public Subject
{
    private:
        std::shared_ptr<Subject> subject = nullptr;//定义一个指向主体的指针

    public:
        Proxy(std::shared_ptr<Subject> subject);
        ~Proxy();

        /**
         * @brief 覆写request()函数
         * 
         */
        virtual void request() override;
};
#endif