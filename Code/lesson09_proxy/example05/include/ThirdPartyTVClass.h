#ifndef THIRD_PARTY_TV_CLASS_H
#define THIRD_PARTY_TV_CLASS_H

#include "./ThirdPartyTVLib.h"

/**
 * @brief 视频下载类
 * 该类的方法可以向远程视频后端服务请求信息, 请求速度取决于用户和服务器的网络状况
 * 如果同时发送大量请求, 即使所请求的信息一模一样, 程序的速度依然会变慢
 * 
 */
class ThirdPartyTVClass : public ThirdPartyTVLib
{
    private:
        std::shared_ptr<std::map<int,string>> videos = nullptr;//视频列表

    public:
        ThirdPartyTVClass();
        ~ThirdPartyTVClass();
        virtual std::shared_ptr<std::map<int,string>> listVideos() override;//实现listVideos()函数
        virtual std::string getVideoInfo(int id) override;//实现getVideoInfo()函数
};
#endif