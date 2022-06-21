#include "../include/WebSiteFactory.h"

//在类外初始化静态属性
WebSiteFactory *  WebSiteFactory::mInstance = nullptr;
std::shared_ptr<mutex> WebSiteFactory::mMutex = std::make_shared<mutex>();

WebSiteFactory::WebSiteFactory()
{
    cout << "WebSiteFactory()私有构造函数" << endl;
    this->WebSites = std::make_shared<map<string,shared_ptr<WebSite>>>();
}

WebSiteFactory * WebSiteFactory::getInstance()
{
    if(mInstance == nullptr)
    {
        mMutex->lock();//获取锁
        if(mInstance == nullptr)
        {
            mInstance = new WebSiteFactory();
        }
        mMutex->unlock(); 
    }
    return mInstance;
}

WebSiteFactory::~WebSiteFactory()
{
    cout << "~WebSiteFactory()析构函数" << endl;
    while(! this->WebSites->empty())
    {
        auto iter = this->WebSites->begin();
        std::shared_ptr<WebSite> WebSite = iter->second;
        this->WebSites->erase(iter);
        WebSite = nullptr;
    }
}

std::shared_ptr<WebSite> WebSiteFactory::getWebsiteCategory(string websiteName)
{
   std::shared_ptr<WebSite> website = nullptr; 
   auto iter = this->WebSites->find(websiteName);
   if(iter == this->WebSites->end())
   {
        website = std::make_shared<ConcreteWebsite>(websiteName);
        this->WebSites->insert(pair<string,std::shared_ptr<WebSite>>(websiteName,website));
   }else
   {
        website = iter->second;
   }
   return website;
}