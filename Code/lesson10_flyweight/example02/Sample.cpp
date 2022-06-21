#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式
    WebSiteFactory *factory = WebSiteFactory::getInstance();
    std::shared_ptr<WebSite> website = factory->getWebsiteCategory("www.baidu.com");
    std::shared_ptr<User> user = std::make_shared<User>("张无忌");
    website->use(user);

    std::shared_ptr<WebSite> website1 = factory->getWebsiteCategory("www.baidu.com");
    std::shared_ptr<User> user1 = std::make_shared<User>("周芷若");
    website1->use(user1);

    std::shared_ptr<WebSite> website2 = factory->getWebsiteCategory("www.google.com");
    std::shared_ptr<User> user2 = std::make_shared<User>("周芷若");
    website2->use(user2);

    //使用不共享网站
    std::shared_ptr<WebSite> unShareWebsite = std::make_shared<UnShareWebsite>("www.test.com");
    std::shared_ptr<User> user3 = std::make_shared<User>("欧阳锋");
    unShareWebsite->use(user3);

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}