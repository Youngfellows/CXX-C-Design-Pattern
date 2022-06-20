#include "../include/TVManager.h"

TVManager::TVManager(std::shared_ptr<ThirdPartyTVLib> proxy)
{
    cout << "TVManager()构造函数" << endl;
    this->proxy = proxy;
}

TVManager::~TVManager()
{
    cout << "~TVManager()析构函数" << endl;
    // if(this->proxy != nullptr)
    // {
    //     this->proxy = nullptr;
    // }
}

void TVManager::renderListPanel()
{
    //渲染视频缩略图列表, 这里忽略实现
    std::shared_ptr<map<int,string>> videos = this->proxy->listVideos();
    std::map<int,string>::iterator iter;
    for(iter = videos->begin(); iter != videos->end(); iter++)
    {
        int videoId = iter->first;
        string videoName = iter->second;
        cout << "(" << videoId << "," << videoName << ")" << endl;
    } 
    cout << endl;
}

void TVManager::renderVideoPage(int id)
{
    //渲染视频页面, 这里忽略实现
    string videoInfo = this->proxy->getVideoInfo(id);
    cout << "渲染视频页面:" << videoInfo << endl;
}
