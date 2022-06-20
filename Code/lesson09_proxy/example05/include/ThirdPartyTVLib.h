#ifndef THIRD_PARTY_TV_LIB_H
#define THIRD_PARTY_TV_LIB_H

#include "./Global.h"

/**
 * @brief 抽象类: 远程服务接口
 * 
 */
class ThirdPartyTVLib
{
    public:
        virtual ~ThirdPartyTVLib();

        /**
         * @brief 纯虚函数,抽象类: 获取视频列表
         * 
         * @return std::string 
         */
        virtual std::shared_ptr<std::map<int,string>> listVideos() = 0;

        /**
         * @brief 纯虚函数,抽象类: 获取视频详情
         * 
         * @return std::string 
         */
        virtual std::string getVideoInfo(int id) = 0;
};

#endif