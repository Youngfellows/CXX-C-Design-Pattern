#ifndef TV_MANAGER_H
#define TV_MANAGER_H

#include "./ThirdPartyTVLib.h"

/**
 * @brief 之前直接与服务对象交互的 GUI 类不需要改变, 前提是它仅通过接口与服务对象交互。
 * @brief 我们可以安全地传递一个代理对象来代替真实服务对象, 因为它们都实现了相同的接口。
 * 
 */
class TVManager
{
    private:
        std::shared_ptr<ThirdPartyTVLib> proxy = nullptr;//远程访问的代理接口

    public:
        TVManager(std::shared_ptr<ThirdPartyTVLib> proxy);
        ~TVManager();
        void renderListPanel();//渲染视频列表
        void renderVideoPage(int id);//渲染视频页面
};
#endif