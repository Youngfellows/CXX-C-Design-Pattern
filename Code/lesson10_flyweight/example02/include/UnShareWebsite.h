#ifndef UN_SHARE_WEBSITE_H
#define UN_SHARE_WEBSITE_H

#include "./WebSite.h"


/**
 * @brief 不共享的网站
 * 
 */
class UnShareWebsite : public WebSite
{
    private:
        string websiteName;//网站名称

    public:
        UnShareWebsite();
        UnShareWebsite(string websiteName);
        ~UnShareWebsite();
        virtual void use(std::shared_ptr<User> user) override;//实现use()函数
};

#endif