#ifndef CACHED_TV_CLASS_H
#define CACHED_TV_CLASS_H

#include "./ThirdPartyTVLib.h"

/**
 * @brief 代理类
 * 为了节省网络带宽, 我们可以将请求缓存下来并保存一段时间
 * 当代理类接受到真实请求后才会将其委派给服务对象
 * 
 */
class CachedTVClass : public ThirdPartyTVLib
{
    private:
        std::shared_ptr<std::map<int,string>> listCache = nullptr;//缓冲列表
        std::string vodieCache;//缓冲视频信息
        bool needReset;//是否需要重新设置缓冲
        std::shared_ptr<ThirdPartyTVLib> service;//远程服务接口
    public:
        CachedTVClass(std::shared_ptr<ThirdPartyTVLib> service);
        ~CachedTVClass();
        void reset();
        virtual std::shared_ptr<std::map<int,string>> listVideos() override;//实现listVideos()函数
        virtual std::string getVideoInfo(int id) override;//实现getVideoInfo()函数
};
#endif