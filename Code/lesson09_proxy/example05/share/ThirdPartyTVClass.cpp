#include "../include/ThirdPartyTVClass.h"

ThirdPartyTVClass::ThirdPartyTVClass()
{
    cout << "ThirdPartyTVClass()构造函数" << endl;
    this->videos = std::make_shared<std::map<int,string>>();
}

ThirdPartyTVClass::~ThirdPartyTVClass()
{
    cout << "~ThirdPartyTVClass()析构函数" << endl;
}

std::shared_ptr<std::map<int,string>> ThirdPartyTVClass::listVideos()
{
    cout << "ThirdPartyTVClass::listVideos():: ..." << endl;
    // 向远程视频后端服务发送一个API请求获取视频信息, 这里忽略实现
    this->videos->insert(pair<int,string>(1001,"让子弹飞"));
    this->videos->insert(pair<int,string>(1002,"千与千寻"));
    this->videos->insert(pair<int,string>(1003,"长津湖"));
    this->videos->insert(pair<int,string>(1004,"英雄本色"));
    return this->videos;
}

std::string ThirdPartyTVClass::getVideoInfo(int id)
{
    std::map<int,string>::iterator iter = this->videos->find(id);
    if(iter != this->videos->end())
    {
        int key = iter->first;//获取key
        string value = iter->second;//获取value
        cout << "查询到:: " << key << ":" << value << endl;
        return value;
    }else
    {
        cout << "没有查询到id:" << id << "的视频信息" << endl;
        return "";
    }
}