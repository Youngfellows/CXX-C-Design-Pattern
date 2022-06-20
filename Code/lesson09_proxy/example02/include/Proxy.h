#ifndef PROXY_H
#define PROXY_H

#include "./Pursuit.h"

/**
 * @brief 代理类
 * 
 */
class Proxy : public IGiveGift
{
    private:
        std::shared_ptr<Pursuit> pursuit = nullptr;//追求

    public:
        Proxy(std::shared_ptr<SchoolGirl> mm);
        ~Proxy();
        virtual void giveDolls() override;//覆写giveDolls()函数
        virtual void giveFlowers() override;//覆写giveFlowers()函数
};
#endif
