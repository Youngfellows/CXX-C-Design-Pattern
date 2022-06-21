#ifndef WEBSITE_H
#define WEBSITE_H

#include "./User.h"

/**
 * @brief 抽象的网站
 * 
 */
class WebSite
{
    public:
        virtual ~WebSite();
        /**
         * @brief 纯虚函数,接口: 使用网站
         * 
         * @param user 用户User
         */
        virtual void use(std::shared_ptr<User> user) = 0;
};

#endif