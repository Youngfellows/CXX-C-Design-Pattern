#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //代理模式,代理对象
    std::shared_ptr<ThirdPartyTVLib> service = std::make_shared<ThirdPartyTVClass>();//被代理对象
    std::shared_ptr<ThirdPartyTVLib> proxy = std::make_shared<CachedTVClass>(service);//代理类
    std::shared_ptr<TVManager> client = std::make_shared<TVManager>(proxy);//客户端

    //通过代理类访问代理对象
    client->renderListPanel();//渲染视频列表
    client->renderVideoPage(1003);//渲染视频页面

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