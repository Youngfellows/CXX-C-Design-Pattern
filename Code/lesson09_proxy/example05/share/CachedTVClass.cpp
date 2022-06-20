#include "../include/CachedTVClass.h"

CachedTVClass::CachedTVClass(std::shared_ptr<ThirdPartyTVLib> service)
{
    cout << "CachedTVClass()构造函数" << endl;
    this->service = service;
    this->needReset = false;
    this->listCache = nullptr;
    this->vodieCache = "";
}

CachedTVClass::~CachedTVClass()
{
    cout << "~CachedTVClass()析构函数" << endl;
    // this->listCache->clear();
    // this->vodieCache = nullptr;

    // if(this->service != nullptr)
    // {
    //     this->service = nullptr;
    // }
    // this->needReset = false;
}

void CachedTVClass::reset()
{
    this->needReset = true;
}

std::shared_ptr<std::map<int,string>> CachedTVClass::listVideos()
{
    if((this->listCache == nullptr) || (this->needReset))
    {
        this->listCache = this->service->listVideos();
    }
    return this->listCache;
}

std::string CachedTVClass::getVideoInfo(int id)
{
    if((this->vodieCache == "") || (this->needReset))
    {
        this->vodieCache = this->service->getVideoInfo(id);
    }
    return this->vodieCache;
}
