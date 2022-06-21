#ifndef CONCRETE_WEBSITE_H
#define CONCRETE_WEBSITE_H

#include "./WebSite.h"

/**
 * @brief 具体的共享网站
 * 
 */
class ConcreteWebsite : public WebSite
{
    private:
        string websiteName;//网站名称

    public:
        ConcreteWebsite();
        ConcreteWebsite(string websiteName);
        ~ConcreteWebsite();
        virtual void use(std::shared_ptr<User> user) override;//实现use()函数
};

#endif