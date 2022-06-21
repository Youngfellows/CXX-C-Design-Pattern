#ifndef WEBSITE_FACTORY_H
#define WEBSITE_FACTORY_H

#include "./ConcreteWebsite.h"

/**
 * @brief 网站工厂类，用于存放共享的WebSite对象
 * @brief 采用单例模式
 */

class WebSiteFactory
{
    private:
       static WebSiteFactory * mInstance;//单例
       std::shared_ptr<map<string,shared_ptr<WebSite>>> WebSites = nullptr;//map列表集合

    public: 
        ~WebSiteFactory();
        static std::shared_ptr<mutex> mMutex;
        static WebSiteFactory * getInstance();
        std::shared_ptr<WebSite> getWebsiteCategory(string websiteName);//根据网站名称获取网站 

    private:
        WebSiteFactory();
};
#endif